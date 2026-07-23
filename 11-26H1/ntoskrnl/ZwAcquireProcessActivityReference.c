/*
 * XREFs of ZwAcquireProcessActivityReference @ 0x140728CC0
 * Callers:
 *     DifZwAcquireProcessActivityReferenceWrapper @ 0x14069BFB0 (DifZwAcquireProcessActivityReferenceWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireProcessActivityReference(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
