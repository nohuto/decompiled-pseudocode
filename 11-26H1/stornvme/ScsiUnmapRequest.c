/*
 * XREFs of ScsiUnmapRequest @ 0x140003A80
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // si
  __int64 v13; // r14
  __int64 v15; // rcx
  _BYTE *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  __int64 v20; // r10
  __int64 v21; // rdi
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // r14
  unsigned __int8 v25; // cl
  int v26; // ecx
  __int64 PhysicalAddress; // rax
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int16 v31; // [rsp+B8h] [rbp+20h]

  v30 = a2;
  v3 = a2;
  v4 = a1;
  v5 = *(_BYTE *)(a2 + 2);
  v6 = 104LL;
  if ( v5 != 40 )
    v6 = 56LL;
  v7 = *(_QWORD *)(v6 + a2);
  v28 = v7;
  if ( (v7 & 0xFFF) != 0 )
  {
    v7 = v7 - (v7 & 0xFFF) + 4096;
    v28 = v7;
  }
  if ( v5 == 40 )
  {
    v8 = 60LL;
    v9 = 64LL;
  }
  else
  {
    v8 = 16LL;
    v9 = 24LL;
  }
  v10 = *(_QWORD *)(v3 + v9);
  if ( (*(_DWORD *)(v4 + 56) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(v4 + 1560) + 520LL) & 4) == 0 && !*(_BYTE *)(v4 + 4075)
    || (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    NVMeSetSenseData(v3, 6, 5, 0x24u);
    return 3238002694LL;
  }
  else if ( *(_DWORD *)(v3 + v8) < 0x18u )
  {
    NVMeSetSenseData(v3, 21, 5, 0x24u);
    return 3238002692LL;
  }
  else
  {
    HIBYTE(v31) = *(_BYTE *)(v10 + 2);
    LOBYTE(v31) = *(_BYTE *)(v10 + 3);
    v11 = *(unsigned __int8 *)(v4 + 4075);
    v12 = v31 >> 4;
    v13 = v10 + 8;
    v31 >>= 4;
    if ( (_BYTE)v11 )
    {
      if ( v12 > v11 )
      {
LABEL_13:
        NVMeSetSenseData(v3, 21, 5, 0x24u);
        return 3238002694LL;
      }
    }
    else if ( v12 > 0x100u )
    {
      goto LABEL_13;
    }
    memset((void *)v7, 0, 0x1000uLL);
    if ( v12 )
    {
      v15 = v7 - v13;
      v16 = (_BYTE *)(v13 + 1);
      v17 = v7 - v13 + 14;
      v18 = v7 - v13 + 13;
      v19 = v7 - v13 + 5;
      v20 = v7 - v13 + 12;
      v21 = v7 - v13 + 4;
      v22 = v7 - v13 + 11;
      v23 = v12;
      v24 = v7 - v13 + 10;
      do
      {
        v16[v17] = *(v16 - 1);
        v16[v18] = *v16;
        v16[v20] = v16[1];
        v16[v22] = v16[2];
        v16[v24] = v16[3];
        v16[v15 + 9] = v16[4];
        v16[v15 + 8] = v16[5];
        v16[v15 + 7] = v16[6];
        v16[v15 + 6] = v16[7];
        v16[v19] = v16[8];
        v16[v21] = v16[9];
        v16[v15 + 3] = v16[10];
        v16 += 16;
        --v23;
      }
      while ( v23 );
      v7 = v28;
      v3 = v30;
      LOBYTE(v12) = v31;
      v4 = a1;
    }
    *(_BYTE *)(v7 + 4225) = *(_BYTE *)(v7 + 4225) & 0xFC | 2;
    SrbAssignQueueId(v4, v3);
    if ( *(_BYTE *)(v3 + 2) == 40 )
      v25 = *(_BYTE *)(*(unsigned int *)(v3 + 52) + v3 + 10);
    else
      v25 = *(_BYTE *)(v3 + 7);
    if ( (unsigned int)v25 < *(_DWORD *)(v4 + 224) && *(_QWORD *)(v4 + 8LL * v25 + 1672) )
    {
      _mm_lfence();
      v26 = *(_DWORD *)(*(_QWORD *)(v4 + 8LL * v25 + 1672) + 16LL);
    }
    else
    {
      v26 = 0;
    }
    *(_DWORD *)(v7 + 4140) |= 4u;
    *(_DWORD *)(v7 + 4100) = v26;
    *(_BYTE *)(v7 + 4136) = v12 - 1;
    *(_BYTE *)(v7 + 4096) = 9;
    LODWORD(v30) = 0;
    PhysicalAddress = StorPortGetPhysicalAddress(v4, v3, v7, &v30);
    *(_BYTE *)(v7 + 4225) |= 4u;
    *(_QWORD *)(v7 + 4120) = PhysicalAddress;
    return 0LL;
  }
}
