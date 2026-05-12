/*
 * XREFs of StorQueryMFNDChildPFList @ 0x140192C54
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x14005CB18 (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x14006F2A0 (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryChildPFList @ 0x1400CB828 (StorLogMFNDQueryChildPFList.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFList(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // rdi
  size_t v6; // r12
  __int64 v7; // r14
  unsigned __int16 v8; // bx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // r15d
  __int64 Pool; // rax
  _WORD *v13; // rsi
  int v14; // r15d
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  _DWORD *v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  char v23; // dl
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v28; // [rsp+60h] [rbp-29h]
  _DWORD v29[15]; // [rsp+70h] [rbp-19h] BYREF
  int v30; // [rsp+ACh] [rbp+23h]
  int v31; // [rsp+F8h] [rbp+6Fh] BYREF
  _QWORD *v32; // [rsp+100h] [rbp+77h]
  int v33; // [rsp+108h] [rbp+7Fh]

  v32 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(v29, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  *a3 = 0LL;
  v33 = 0;
  if ( !StorIsMFNDSupported((__int64)a1) )
  {
    v31 = -1073741637;
    goto LABEL_49;
  }
  if ( !v4 || (unsigned int)v6 < 8 )
  {
    v14 = -1073741811;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(a1[778] + 36) != 1 )
  {
    v31 = -1073741436;
    goto LABEL_49;
  }
  v9 = a1[777];
  if ( v9 )
    v10 = *(unsigned __int16 *)(v9 + 8) - 1;
  else
    v10 = 255;
  v11 = (v10 << 8) + 8;
  Pool = RaidAllocatePool(64LL, v11, 1179476306LL, a1[1]);
  v13 = (_WORD *)Pool;
  if ( !Pool )
  {
    v14 = -1073741670;
LABEL_47:
    v31 = v14;
    goto LABEL_48;
  }
  LOBYTE(v30) = 2;
  v30 |= 0xFFFF00u;
  v29[0] = v29[0] & 0xFFFFFF00 | 0xD2;
  v29[10] = v11 >> 2;
  v31 = StorSendMFNDCommand((_DWORD)a1, Pool, 0, v11, (__int64)v29);
  v14 = v31;
  if ( v31 >= 0 )
  {
    v28 = 200 * (unsigned __int16)*v13 + 16;
    memset_0(v4, 0, v6);
    *(_WORD *)v4 = 1;
    if ( v6 >= v28 )
    {
      LOWORD(v15) = *v13;
      v16 = 0;
      if ( *v13 )
      {
        do
        {
          v17 = 50LL * v16;
          v18 = (unsigned __int64)v16 << 8;
          LOWORD(v4[v17 + 4]) = 1;
          v19 = &v4[v17];
          v4[v17 + 5] = 200;
          LOWORD(v4[v17 + 6]) = *(_WORD *)((char *)v13 + v18 + 8);
          *(_OWORD *)((char *)&v4[v17 + 6] + 2) = *(_OWORD *)((char *)v13 + v18 + 10);
          *(_QWORD *)((char *)&v4[v17 + 10] + 2) = *(_QWORD *)((char *)v13 + v18 + 26);
          HIWORD(v4[v17 + 12]) = *(_WORD *)((char *)v13 + v18 + 34);
          if ( (*((_BYTE *)v13 + v18 + 36) & 1) != 0 )
            v19[13] |= 1u;
          if ( (*((_BYTE *)v13 + v18 + 36) & 2) != 0 )
            v19[13] |= 2u;
          if ( (*((_BYTE *)v13 + v18 + 119) & 1) != 0 )
            v4[v17 + 14] |= 1u;
          if ( (*((_BYTE *)v13 + v18 + 119) & 2) != 0 )
            v4[50 * v16 + 14] |= 2u;
          if ( (*((_BYTE *)v13 + v18 + 119) & 4) != 0 )
            v4[50 * v16 + 14] |= 4u;
          if ( (v13[128 * (unsigned __int64)v16 + 59] & 0x800) != 0 )
            v4[50 * v16 + 14] |= 8u;
          v4[50 * v16 + 15] = LOBYTE(v13[128 * (unsigned __int64)v16 + 21]);
          v4[50 * v16 + 17] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 22];
          v4[50 * v16 + 18] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 24];
          v4[50 * v16 + 19] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 26];
          v4[50 * v16 + 20] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 28];
          v4[50 * v16 + 21] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 30];
          v4[50 * v16 + 22] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 32];
          v4[50 * v16 + 23] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 34];
          v4[50 * v16 + 24] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 36];
          v20 = 50LL * v16;
          v21 = (unsigned __int64)v16 << 8;
          if ( *((_BYTE *)v13 + v21 + 43) )
          {
            if ( *((_BYTE *)v13 + v21 + 43) == 1 )
            {
              LOBYTE(v4[v20 + 16]) = 2;
            }
            else if ( *((_BYTE *)v13 + v21 + 43) == 2 )
            {
              LOBYTE(v4[v20 + 16]) = 3;
            }
            else
            {
              LOBYTE(v4[v20 + 16]) = 0;
            }
          }
          else
          {
            LOBYTE(v4[v20 + 16]) = 1;
          }
          v22 = (unsigned __int64)v16 << 8;
          v4[50 * v16 + 25] = *(unsigned __int16 *)((char *)v13 + v22 + 38);
          v4[50 * v16 + 26] = *(unsigned __int16 *)((char *)v13 + v22 + 40);
          if ( (v4[50 * v16 + 13] & 2) != 0 )
          {
            LOWORD(v4[50 * v16 + 27]) = 1;
            HIWORD(v4[50 * v16 + 27]) = 56;
            v23 = v13[128 * (unsigned __int64)v16 + 68];
            v24 = 50LL * v16;
            if ( v23 )
            {
              if ( v23 == 1 )
                v4[v24 + 28] = 2;
              else
                v4[v24 + 28] = (LOBYTE(v13[128 * (unsigned __int64)v16 + 68]) != 2) + 3;
            }
            else
            {
              v4[v24 + 28] = 1;
            }
            LOBYTE(v4[50 * v16 + 29]) = HIBYTE(v13[128 * (unsigned __int64)v16 + 68]);
            BYTE1(v4[50 * v16 + 29]) = v13[128 * (unsigned __int64)v16 + 69];
            v4[50 * v16 + 30] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 70];
            v4[50 * v16 + 31] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 72];
            v4[50 * v16 + 32] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 74];
            v4[50 * v16 + 33] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 76];
            v4[50 * v16 + 34] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 78];
            v4[50 * v16 + 35] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 80];
            v4[50 * v16 + 36] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 82];
            v4[50 * v16 + 37] = *(_DWORD *)&v13[128 * (unsigned __int64)v16 + 84];
          }
          *(_OWORD *)&v4[50 * v16 + 41] = *(_OWORD *)&v13[128 * (unsigned __int64)v16 + 60];
          *(_QWORD *)&v4[50 * v16 + 46] = *(_QWORD *)&v13[128 * (unsigned __int64)v16 + 40];
          *(_QWORD *)&v4[50 * v16 + 48] = *(_QWORD *)&v13[128 * (unsigned __int64)v16 + 44];
          v25 = (unsigned __int64)v16 << 8;
          *(_QWORD *)&v4[50 * v16 + 50] = *(_QWORD *)((char *)v13 + v25 + 96);
          v26 = v16++;
          *(_QWORD *)&v4[50 * v26 + 52] = *(_QWORD *)((char *)v13 + v25 + 104);
          v15 = (unsigned __int16)*v13;
        }
        while ( v16 < v15 );
      }
      v4[2] = (unsigned __int16)v15;
      *v32 = v28;
    }
    else
    {
      v14 = -2147483643;
      v31 = -2147483643;
      *v32 = 8LL;
    }
    v4[1] = v28;
  }
  ExFreePoolWithTag(v13, 0x464D6152u);
  v8 = v33;
LABEL_48:
  if ( v14 >= 0 )
  {
LABEL_50:
    v7 = (__int64)v4;
    goto LABEL_51;
  }
LABEL_49:
  StorMapMFNDErrorToNtStatus(v8, &v31);
  v14 = v31;
  if ( v31 >= 0 )
    goto LABEL_50;
LABEL_51:
  StorLogMFNDQueryChildPFList((__int64)a1, v7, v8, v14);
  return (unsigned int)v14;
}
