/*
 * XREFs of ObpTraceAllocateMemory @ 0x140531C58
 * Callers:
 *     ObpPushRefDerefInfoNoLock @ 0x1407732BC (ObpPushRefDerefInfoNoLock.c)
 *     ObpGetPoolTags @ 0x14077ED58 (ObpGetPoolTags.c)
 *     ObSetRefTraceInformationEx @ 0x1407C7628 (ObSetRefTraceInformationEx.c)
 *     ObpGetObjectRefInfo @ 0x1407C7B64 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 *     ObpInitializeObjectRefInfo @ 0x1407C7D08 (ObpInitializeObjectRefInfo.c)
 *     ObpInitializeObjectRefsByStack @ 0x1407C7DF8 (ObpInitializeObjectRefsByStack.c)
 *     ObpSetPoolTags @ 0x1407C8138 (ObpSetPoolTags.c)
 *     ObpStackDbAllocRoutine @ 0x1407C8210 (ObpStackDbAllocRoutine.c)
 *     ObpStartRuntimeStackTrace @ 0x1407C8248 (ObpStartRuntimeStackTrace.c)
 *     ObpObjectRefsByStackAddTrace @ 0x140AB76B0 (ObpObjectRefsByStackAddTrace.c)
 *     ObpInitStackTrace @ 0x140CD3FDC (ObpInitStackTrace.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ExpSizeHeapPool @ 0x1404FDF40 (ExpSizeHeapPool.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall ObpTraceAllocateMemory(__int64 a1)
{
  unsigned __int64 Pool2; // rax
  unsigned __int64 v3; // rbx

  if ( stru_140E66D40.WaitBlock[0].SparePtr
    && ((__int64)stru_140E66D40.WaitBlock[0].Thread + a1 > (__int64)stru_140E66D40.WaitBlock[0].SparePtr
     || (__int64)stru_140E66D40.WaitBlock[0].Thread + a1 < (__int64)stru_140E66D40.WaitBlock[0].Thread) )
  {
    DbgPrintEx(0, 1u, "ObpTraceAllocateMemory - OB Trace OOM!\n");
LABEL_5:
    _InterlockedIncrement64((volatile signed __int64 *)&stru_140E66D40.WaitBlock[0].Object);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    goto LABEL_5;
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E66D40.WaitBlock[0].Thread, ExpSizeHeapPool(Pool2));
  return v3;
}
