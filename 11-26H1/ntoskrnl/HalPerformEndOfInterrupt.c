/*
 * XREFs of HalPerformEndOfInterrupt @ 0x14032FAB0
 * Callers:
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072EC20 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072F010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072F400 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140731050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140732A70 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140733B40 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalPerformEndOfInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  ULONG_PTR *v6; // r10
  unsigned int v7; // edi
  unsigned int v8; // esi
  ULONG_PTR *v9; // r9
  _QWORD **v10; // r9
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  int v15; // r8d
  ULONG_PTR *v16; // rax
  _DWORD *v17; // r14
  ULONG_PTR v18; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *v20; // rbx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && *(_BYTE *)(a1 + 101) )
  {
    v5 = *(_QWORD *)(a1 + 160);
    v6 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v21 = 0LL;
    v7 = *(_DWORD *)(v5 + 64);
    v8 = v7 + 1;
    while ( v6 != &HalpRegisteredInterruptControllers )
    {
      v9 = v6;
      v6 = (ULONG_PTR *)*v6;
      v10 = (_QWORD **)(v9 + 33);
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        v13 = *((_DWORD *)v12 + 7);
        if ( v13 != -1 )
        {
          if ( v13 >= v7 && v13 < v8 )
            goto LABEL_15;
          v14 = v13 + *((_DWORD *)v12 + 6) + ~*((_DWORD *)v12 + 5);
          if ( v14 < v8 && v14 >= v7 )
            goto LABEL_15;
          if ( v14 >= v8 && v13 < v7 )
            goto LABEL_15;
        }
      }
    }
    v12 = 0LL;
LABEL_15:
    v15 = *((_DWORD *)v12 + 4);
    LODWORD(v21) = v15;
    HIDWORD(v21) = v7 + *((_DWORD *)v12 + 5) - *((_DWORD *)v12 + 7);
    v16 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v17 = (_DWORD *)(v12[5] + 56LL * (v7 - *((_DWORD *)v12 + 7)));
    while ( v16 != &HalpRegisteredInterruptControllers )
    {
      v18 = (ULONG_PTR)v16;
      v16 = (ULONG_PTR *)*v16;
      if ( *(_DWORD *)(v18 + 256) == v15 )
        goto LABEL_18;
    }
    v18 = 0LL;
LABEL_18:
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
    }
    KxAcquireSpinLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
    if ( *v17 == 1 )
    {
      *v17 = 2;
    }
    else if ( *v17 == 2 )
    {
      *v17 = 1;
    }
    if ( (int)HalpInterruptSetLineStateInternal(v18, &v21, v17) < 0 )
      KeBugCheckEx(0x5Cu, 0x205uLL, *(int *)(v18 + 240), v18, SHIDWORD(v21));
    HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, CurrentIrql);
  }
  result = guard_dispatch_icall_no_overrides(a1, a2, a3);
  if ( HalpInterruptDirectedEoiModeEnabled )
  {
    if ( a1 )
    {
      if ( !*(_DWORD *)(a1 + 108) )
      {
        v20 = *(_DWORD **)(a1 + 160);
        if ( v20 )
        {
          if ( !v20[2] )
          {
            result = HalpInterruptFindLinesForGsiRange((unsigned int)v20[16], (unsigned int)(v20[16] + 1));
            if ( result )
            {
              result = HalpInterruptLookupController(*(unsigned int *)(result + 16));
              if ( (*(_DWORD *)(result + 244) & 0x400) != 0 )
                return guard_dispatch_icall_no_overrides(
                         *(_QWORD *)(result + 16),
                         (unsigned int)v20[3],
                         v20[12] & 0x3FFFFFFF);
            }
          }
        }
      }
    }
  }
  return result;
}
