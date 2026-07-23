/*
 * XREFs of IopDequeueIrpFromThread @ 0x1403311D0
 * Callers:
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     IopCopyCompleteReadRequest @ 0x14040F450 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x140410B08 (IopIoRingCompleteIrp.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[19];
  CurrentIrql = 0;
  v5 = (volatile signed __int32 *)(v2 + 1560);
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v5, 0LL) )
        KxWaitForSpinLockAndAcquire(v2 + 1560);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v2 + 1560);
    }
  }
  v6 = a1[4];
  result = a1 + 4;
  if ( *(_QWORD **)(v6 + 8) != a1 + 4 || (v8 = (_QWORD *)a1[5], (_QWORD *)*v8 != result) )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v6 + 8) = v8;
  a1[5] = a1 + 4;
  *result = result;
  if ( v2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v2 + 1560), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
