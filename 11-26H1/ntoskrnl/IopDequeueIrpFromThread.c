/*
 * XREFs of IopDequeueIrpFromThread @ 0x14032F1A0
 * Callers:
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     IopCopyCompleteReadRequest @ 0x14040FD30 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x1404113E8 (IopIoRingCompleteIrp.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
