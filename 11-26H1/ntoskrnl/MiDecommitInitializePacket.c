/*
 * XREFs of MiDecommitInitializePacket @ 0x140363928
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x140317278 (MiDeleteEmptyPageTables.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 *     MiDecommitComputeCheckPte @ 0x140413520 (MiDecommitComputeCheckPte.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDecommitInitializePacket(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned __int64 *a8,
        __int64 a9)
{
  __int64 v9; // r11
  unsigned int v12; // ebx
  int v13; // r10d
  __int64 v14; // r9
  __int64 v15; // r15
  unsigned __int16 *v16; // r8
  int v17; // edx
  int v18; // ecx
  __int64 result; // rax
  unsigned __int16 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // eax
  unsigned __int64 DemandZeroPte; // rax
  _QWORD v26[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-50h] BYREF

  v9 = a3;
  if ( a5 && (a7 & 0x20) == 0 )
    MiIsStoreProcess(KeGetCurrentThread()->ApcState.Process);
  if ( a6 )
  {
    *(_QWORD *)a1 = a6;
    v12 = *(_DWORD *)(a6 + 48);
    *(_QWORD *)(a1 + 136) = 8
                          * ((*(unsigned int *)(a6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 33) << 32)) & 0xFFFFFFFFFLL)
                          - 0x98000000000LL;
  }
  else
  {
    v12 = 0;
  }
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 24) = a9;
  v13 = a7 & 0x20;
  v14 = a2 << 25 >> 16;
  v15 = 16LL;
  *(_QWORD *)(a1 + 72) = a2 + 8 * (v9 - 1);
  if ( a5 )
  {
    v16 = (unsigned __int16 *)(a5 + 1024);
    *(_QWORD *)(a1 + 32) = a5 + 1024;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a5 + 1198));
    if ( (a7 & 0x20) == 0 )
      *(_QWORD *)(a1 + 120) = MiMakeDemandZeroPte(16);
  }
  else
  {
    v20 = (unsigned __int16 *)MiVaToFlushVm(a2 << 25 >> 16);
    *(_QWORD *)(a1 + 32) = v20;
    v16 = v20;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * v20[87]);
  }
  v17 = *((_DWORD *)v16 + 46) & 0xF;
  *(_DWORD *)(a1 + 100) ^= ((unsigned __int8)*(_DWORD *)(a1 + 100) ^ (unsigned __int8)(16 * *((_DWORD *)v16 + 46))) & 0xF0;
  if ( v17 != 2 )
  {
    if ( v17 == 3 )
    {
      if ( !v13 )
        *(_QWORD *)(a1 + 120) = MiMakeDemandZeroPte(16);
    }
    else if ( v17 != 4 )
    {
      goto LABEL_12;
    }
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v26[2] = (unsigned int)v9;
    v26[1] = v14;
    if ( (unsigned int)(v17 - 3) <= 1 )
      v21 = 6LL;
    else
      v21 = 4LL;
    v26[0] = v21;
    v27[1] = 24LL;
    v27[0] = v26;
    EtwTraceKernelEvent((int)v27, 1, 0x20000001u, 633, 290462468);
  }
LABEL_12:
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a1 + 120);
  if ( !a5 )
    goto LABEL_23;
  if ( a8 )
  {
    DemandZeroPte = *a8;
    goto LABEL_44;
  }
  if ( !a6 )
    goto LABEL_23;
  if ( (*(unsigned int *)(a6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 32)) == 0x7FFFFFFFELL )
  {
    if ( (a7 & 0x20) != 0 )
      goto LABEL_23;
    DemandZeroPte = MiMakeDemandZeroPte((v12 >> 5) & 0x1F);
LABEL_44:
    *(_QWORD *)(a1 + 120) = DemandZeroPte;
    *(_QWORD *)(a1 + 128) = DemandZeroPte;
    goto LABEL_23;
  }
  if ( (v12 & 0x80000) != 0 && (v12 & 0x400000) == 0 )
  {
    if ( (v12 & 0x880000) != 0x880000 )
      *(_QWORD *)(a1 + 128) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( MiVadPureReserve(a6) )
      *(_DWORD *)(a1 + 100) |= 4u;
  }
LABEL_23:
  v18 = *(_DWORD *)(a1 + 100) | 0x30000;
  *(_QWORD *)(a1 + 144) = 1LL;
  *(_DWORD *)(a1 + 100) = v18;
  if ( a6 && (v12 & 0x80000) != 0 && (v12 & 0x200000) != 0 )
  {
    v22 = (v12 >> 17) & 3;
    v23 = MiVadPageSizes[v22] == 16;
    v24 = MiVadPageIndices[v22];
    if ( !v23 )
      v15 = 1LL;
    *(_QWORD *)(a1 + 144) = v15;
    v18 ^= (v18 ^ (v24 << 16)) & 0x30000;
    *(_DWORD *)(a1 + 100) = v18;
  }
  *(_DWORD *)(a1 + 112) = a7;
  if ( a6 && (v12 & 0x8080000) == 0x8080000 )
    *(_DWORD *)(a1 + 100) = v18 | 8;
  result = MiDecommitComputeCheckPte(a1, a2);
  *(_BYTE *)(a1 + 101) = 17;
  return result;
}
