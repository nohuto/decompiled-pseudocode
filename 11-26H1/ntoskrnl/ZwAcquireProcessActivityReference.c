/*
 * XREFs of ZwAcquireProcessActivityReference @ 0x1407240F0
 * Callers:
 *     DifZwAcquireProcessActivityReferenceWrapper @ 0x1406983D0 (DifZwAcquireProcessActivityReferenceWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireProcessActivityReference(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
