/*
 * XREFs of StorQueryMFNDChildPFSettings @ 0x140193BD4
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryChildPFSettings @ 0x1400CBC04 (StorLogMFNDQueryChildPFSettings.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFSettings(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rbx
  size_t v7; // r12
  __int64 v8; // rsi
  unsigned __int16 v9; // r15
  __int16 v10; // ax
  __int64 Pool; // rax
  unsigned __int8 *v12; // rdi
  int v13; // r14d
  int v14; // ecx
  unsigned __int8 v15; // cl
  int v16; // eax
  __int128 v17; // xmm0
  _DWORD v19[15]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+9Ch] [rbp+23h]
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF
  _QWORD *v22; // [rsp+F0h] [rbp+77h]
  int v23; // [rsp+F8h] [rbp+7Fh]

  v22 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v7 = *(unsigned int *)(v3 + 8);
  memset_0(v19, 0, 0x40uLL);
  v8 = 0LL;
  v9 = 0;
  v23 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v21 = -1073741637;
    goto LABEL_34;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6224) + 36LL) != 1 )
  {
    v21 = -1073741436;
    goto LABEL_34;
  }
  if ( *(_DWORD *)(v3 + 16) < 0x18u )
  {
    v21 = -1073741585;
    goto LABEL_34;
  }
  if ( *((_WORD *)v5 + 4) != 1 || v5[3] < 0x10u || (v10 = *((_WORD *)v5 + 8)) == 0 || v10 == -1 )
  {
    v13 = -1073741811;
    goto LABEL_32;
  }
  if ( !v5 || v7 < 0x70 )
  {
    v21 = -1073741789;
    goto LABEL_34;
  }
  Pool = RaidAllocatePool(64LL, 264LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  v12 = (unsigned __int8 *)Pool;
  if ( !Pool )
  {
    v13 = -1073741670;
LABEL_32:
    v21 = v13;
    goto LABEL_33;
  }
  v14 = *((unsigned __int16 *)v5 + 8);
  LOBYTE(v20) = 2;
  v19[0] = v19[0] & 0xFFFFFF00 | 0xD2;
  v19[10] = 66;
  v20 = v20 & 0xFF0000FF | (v14 << 8);
  v21 = StorSendMFNDCommand(a1, Pool, 0, 264, (__int64)v19);
  v13 = v21;
  if ( v21 >= 0 )
  {
    memset_0(v5, 0, v7);
    if ( *(_WORD *)v12 )
    {
      *v5 = 7340033;
      if ( (v12[36] & 1) != 0 )
      {
        *((_WORD *)v5 + 2) |= 1u;
        *((_WORD *)v5 + 3) = *((_WORD *)v12 + 19);
        *((_WORD *)v5 + 4) = *((_WORD *)v12 + 20);
        *((_WORD *)v5 + 5) = v12[42];
        v5[4] = *((_DWORD *)v12 + 12);
        v5[5] = *((_DWORD *)v12 + 14);
        v5[6] = *((_DWORD *)v12 + 16);
        v5[7] = *((_DWORD *)v12 + 18);
      }
      if ( (v12[36] & 2) != 0 )
      {
        *((_WORD *)v5 + 2) |= 2u;
        v5[8] = 3670017;
        v15 = v12[136];
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            v5[9] = 2;
          }
          else
          {
            v16 = 0;
            if ( v15 == 2 )
              v16 = 3;
            v5[9] = v16;
          }
        }
        else
        {
          v5[9] = 1;
        }
        *((_BYTE *)v5 + 40) = v12[137];
        *((_BYTE *)v5 + 41) = v12[138];
        v5[11] = *((_DWORD *)v12 + 35);
        v5[12] = *((_DWORD *)v12 + 36);
        v5[13] = *((_DWORD *)v12 + 37);
        v5[14] = *((_DWORD *)v12 + 38);
        v5[15] = *((_DWORD *)v12 + 39);
        v5[16] = *((_DWORD *)v12 + 40);
        v5[17] = *((_DWORD *)v12 + 41);
        v5[18] = *((_DWORD *)v12 + 42);
      }
      v17 = *(_OWORD *)(v12 + 120);
      *v22 = 112LL;
      *(_OWORD *)(v5 + 22) = v17;
    }
  }
  ExFreePoolWithTag(v12, 0x464D6152u);
  v9 = v23;
LABEL_33:
  if ( v13 >= 0 )
  {
LABEL_35:
    v8 = (__int64)v5;
    goto LABEL_36;
  }
LABEL_34:
  StorMapMFNDErrorToNtStatus(v9, &v21);
  v13 = v21;
  if ( v21 >= 0 )
    goto LABEL_35;
LABEL_36:
  StorLogMFNDQueryChildPFSettings(a1, v8, v9, v13);
  return (unsigned int)v13;
}
