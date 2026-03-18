/*
 * XREFs of ScsiSanitizeRequest @ 0x140001880
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rbp
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // r15
  unsigned __int8 v16; // r12
  char v17; // al
  int v18; // r14d
  int v19; // ecx
  __int16 v20; // dx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax

  SrbExtension = GetSrbExtension(a2);
  v7 = *(_QWORD *)(a1 + 1560);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v3 = *(unsigned int *)(v6 + 52);
    v8 = *(unsigned __int8 *)(v3 + v6 + 10);
  }
  else
  {
    v8 = *(unsigned __int8 *)(v6 + 7);
  }
  v9 = *(unsigned __int8 *)(v5 + 1);
  v10 = (unsigned __int8)v8;
  if ( (v9 & 0x80u) == 0 )
  {
    v3 = (unsigned __int8)v9;
    LOBYTE(v3) = v9 & 0x1F;
    if ( (v9 & 0x1F) == 3 || (_BYTE)v3 == 2 )
    {
      v11 = *(_DWORD *)(v7 + 328);
      if ( (v11 & 2) != 0 && (_BYTE)v3 == 2 )
      {
        v12 = 2;
LABEL_14:
        *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
        SrbAssignQueueId(a1, v6);
        v13 = *(_DWORD *)(SrbExtension + 4136) & 0xFFFFFFF8;
        *(_BYTE *)(SrbExtension + 4096) = -124;
        *(_DWORD *)(SrbExtension + 4136) = ((v12 | v13) & 0xFFFFFFF7 ^ (v9 >> 2) & 8) & 0xFFFFFC0F;
        v14 = 0;
        *(_DWORD *)(SrbExtension + 4140) = 0;
        *(_QWORD *)(SrbExtension + 4192) = NVMeSanitizeCommandCompletion;
        return v14;
      }
      if ( (v11 & 1) != 0 && (_BYTE)v3 == 3 && (*(_DWORD *)(a1 + 56) & 0x80000) == 0 )
      {
        v12 = 4;
        goto LABEL_14;
      }
      if ( (*(_BYTE *)(v7 + 256) & 2) == 0 )
      {
        LOBYTE(v8) = 36;
        LOBYTE(v5) = 5;
        LOBYTE(v3) = 6;
        NVMeSetSenseData(v6, v3, v5, v8);
        return (unsigned int)-1056964602;
      }
      if ( (_BYTE)v3 != 31
        && (*(_DWORD *)(a1 + 212) <= 1u || (*(_BYTE *)(v7 + 524) & 2) == 0)
        && ((_BYTE)v3 != 3 || (*(_BYTE *)(v7 + 524) & 4) != 0) )
      {
        v15 = a1 + 8LL * (unsigned __int8)v8;
        v16 = *(_BYTE *)(*(_QWORD *)(v15 + 1672) + 64LL);
        v17 = v9 & 0x1F;
        v14 = 0;
        if ( v17 == 3 )
          v18 = 2;
        else
          v18 = (*(_BYTE *)(v5 + 1) & 0x1F) == 2;
        *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
        SrbAssignQueueId(a1, v6);
        if ( v10 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(v15 + 1672) )
        {
          _mm_lfence();
          v19 = *(_DWORD *)(*(_QWORD *)(v15 + 1672) + 16LL);
        }
        else
        {
          v19 = 0;
        }
        v20 = *(_WORD *)(*(_QWORD *)(v15 + 1672) + 48LL);
        v21 = *(_QWORD *)(a1 + 1560);
        *(_BYTE *)(SrbExtension + 4096) = 0x80;
        if ( (*(_BYTE *)(v21 + 524) & 2) != 0 )
          v19 = -1;
        *(_DWORD *)(SrbExtension + 4100) = v19;
        v22 = *(_DWORD *)(SrbExtension + 4136) ^ ((unsigned __int8)*(_DWORD *)(SrbExtension + 4136) ^ v16) & 0xF;
        v23 = v22 & 0xFFFFFFEF;
        v24 = v22 | 0x10;
        if ( !v20 )
          v23 = v24;
        *(_DWORD *)(SrbExtension + 4136) = (v18 << 9) | v23 & 0xFFFFF01F;
        return v14;
      }
    }
  }
  LOBYTE(v8) = 36;
  LOBYTE(v5) = 5;
  LOBYTE(v3) = 6;
  NVMeSetSenseData(v6, v3, v5, v8);
  return 3238002694LL;
}
