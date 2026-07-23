/*
 * XREFs of MiInPageSingleKernelStack @ 0x14029F764
 * Callers:
 *     MmInPageKernelStack @ 0x140230C40 (MmInPageKernelStack.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029E62C (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x14029FC10 (MiSetPfnKernelStack.c)
 *     MiKernelStackVaToStackNode @ 0x1402A1574 (MiKernelStackVaToStackNode.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiLogKernelStackEvent @ 0x1405000AC (MiLogKernelStackEvent.c)
 *     MiDeleteKernelStackNode @ 0x14052F540 (MiDeleteKernelStackNode.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall MiInPageSingleKernelStack(ULONG_PTR BugCheckParameter3, __int64 *a2)
{
  ULONG_PTR v3; // r12
  int v4; // edi
  __int64 v5; // rdx
  ULONG_PTR v6; // r15
  unsigned __int64 v7; // rbx
  void *v8; // r13
  unsigned __int64 DemandZeroPte; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r9
  unsigned __int64 v15; // r10
  __int64 *v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rdx
  ULONG_PTR v19; // r14
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // al
  unsigned __int64 v22; // r12
  ULONG_PTR v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rbx
  void *result; // rax
  __int64 v27; // [rsp+30h] [rbp-D0h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  _BOOL8 BugCheckParameter1; // [rsp+48h] [rbp-B8h]
  ULONG *v31; // [rsp+58h] [rbp-A8h]
  __int16 v33; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR *v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  ULONG_PTR v39; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v40; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v41; // [rsp+F8h] [rbp-8h] BYREF

  v3 = BugCheckParameter3;
  memset_0(&v33, 0, 0x78uLL);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v3 + 588)] + 192) + 138LL) + 1;
  v5 = *a2;
  v27 = (((unsigned __int64)a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((unsigned __int64)(*a2 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0LL;
  v31 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v3 + 544) + 1198LL));
  if ( v31 == &MiSystemPartition )
  {
    v8 = 0LL;
  }
  else
  {
    result = (void *)MiKernelStackVaToStackNode(v5 - 1, 0LL);
    v8 = result;
    if ( !result )
      return result;
  }
  DemandZeroPte = MiMakeDemandZeroPte(4);
  BugCheckParameter1 = 0LL;
  if ( v10 != DemandZeroPte )
    BugCheckParameter1 = (v10 & 0x800) == 0;
  MiMakeDemandZeroPte(24);
  v11 = MiMakeDemandZeroPte(31);
  v15 = (unsigned __int64)v14;
  if ( (unsigned __int64)v14 <= v6 )
  {
    v16 = &v41;
    do
    {
      v17 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 != v11 && v17 != v13 && v17 != v12 && (v17 & 0x800) == 0 )
      {
        ++v7;
        *v16 = 4096LL;
        *(v16 - 1) = (__int64)(v15 << 25) >> 16;
        v16 += 2;
        if ( v7 == 36 )
          break;
      }
      v15 += 8LL;
    }
    while ( v15 <= v6 );
    if ( v7 > 1 )
      MiPrefetchVirtualMemory(v7, &v40, 1LL);
    v14 = (_QWORD *)v27;
  }
  v18 = 0LL;
  v28 = 0LL;
  v41 = 4096LL;
  v19 = (__int64)(v6 << 25) >> 16;
LABEL_13:
  while ( v6 >= (unsigned __int64)v14 )
  {
    if ( (*(_QWORD *)v6 & 0x3E0LL) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v6, v3, 0LL);
    v40 = v19;
    v33 = 4;
    v34 = &v40;
    v35 = 1LL;
    v36 = 0LL;
    v37 = 0LL;
    v39 = v3;
    v38 = v4;
    MmAccessFault(2uLL, v19);
    while ( 1 )
    {
      v20 = *(_QWORD *)v6;
      v18 = v28;
      v3 = BugCheckParameter3;
      v14 = (_QWORD *)v27;
      if ( (*(_QWORD *)v6 & 1) == 0 )
        break;
      v21 = MiSafeLockPage((v20 >> 12) & 0xFFFFFFFFFFLL);
      v22 = v21;
      if ( v21 != 17 )
      {
        v23 = 48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( v20 == *(_QWORD *)v6 )
        {
          MiSetPfnKernelStack(v23, BugCheckParameter3);
          MiSetPfnIdentity(v24, 2LL);
          if ( (*(_QWORD *)(v23 + 40) & 0x20000000000000LL) == 0 )
            *(_DWORD *)(v23 + 32) = *(_DWORD *)(v23 + 32) & 0xF8FFFFFF | 0x5000000;
          v25 = MiReleaseWsSwapReservationPfn(v23);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int8)v22 < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
            __writecr8(v22);
          }
          if ( v25 )
            MiReleasePageFileInfo(v31, v25, 0LL);
          v6 -= 8LL;
          v3 = BugCheckParameter3;
          v19 -= 4096LL;
          v18 = v28 + 1;
          v14 = (_QWORD *)v27;
          ++v28;
          goto LABEL_13;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v21 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
          __writecr8(v22);
        }
      }
    }
  }
  if ( v8 )
  {
    MiDeleteKernelStackNode(v8);
    v18 = v28;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v19 + 4096, v18, 1LL);
  result = (void *)a2[2];
  if ( *((_QWORD *)result - 1) != v3 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(a2[2] - 8), 0LL, a2[2]);
  }
  return result;
}
