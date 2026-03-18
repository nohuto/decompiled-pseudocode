/*
 * XREFs of ZwTerminateThread @ 0x140723E50
 * Callers:
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
