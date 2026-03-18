/*
 * XREFs of ObpTraceAllocateMemory @ 0x14052F738
 * Callers:
 *     ObpPushRefDerefInfoNoLock @ 0x1407702BC (ObpPushRefDerefInfoNoLock.c)
 *     ObpGetPoolTags @ 0x14077C264 (ObpGetPoolTags.c)
 *     ObSetRefTraceInformationEx @ 0x1407C45C8 (ObSetRefTraceInformationEx.c)
 *     ObpGetObjectRefInfo @ 0x1407C4B04 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 *     ObpInitializeObjectRefInfo @ 0x1407C4CA8 (ObpInitializeObjectRefInfo.c)
 *     ObpInitializeObjectRefsByStack @ 0x1407C4D98 (ObpInitializeObjectRefsByStack.c)
 *     ObpSetPoolTags @ 0x1407C50D8 (ObpSetPoolTags.c)
 *     ObpStackDbAllocRoutine @ 0x1407C51B0 (ObpStackDbAllocRoutine.c)
 *     ObpStartRuntimeStackTrace @ 0x1407C51E8 (ObpStartRuntimeStackTrace.c)
 *     ObpObjectRefsByStackAddTrace @ 0x140AB6310 (ObpObjectRefsByStackAddTrace.c)
 *     ObpInitStackTrace @ 0x140CCDE7C (ObpInitStackTrace.c)
 * Callees:
 *     ExpSizeHeapPool @ 0x14025ECFC (ExpSizeHeapPool.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpTraceAllocateMemory(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx

  if ( *(_QWORD *)&stru_140E66B30.WaitBlockFill11[16]
    && ((__int64)stru_140E66B30.WaitBlock[0].Thread + a1 > *(__int64 *)&stru_140E66B30.WaitBlockFill11[16]
     || (__int64)stru_140E66B30.WaitBlock[0].Thread + a1 < (__int64)stru_140E66B30.WaitBlock[0].Thread) )
  {
    DbgPrintEx(0, 1u, "ObpTraceAllocateMemory - OB Trace OOM!\n");
LABEL_5:
    _InterlockedIncrement64((volatile signed __int64 *)&stru_140E66B30.WaitBlock[0].WaitListEntry.Blink);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    goto LABEL_5;
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E66B30.WaitBlock[0].Thread, ExpSizeHeapPool(Pool2));
  return v3;
}
