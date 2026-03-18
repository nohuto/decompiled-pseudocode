/*
 * XREFs of ZwCreateProfileEx @ 0x140724C50
 * Callers:
 *     DifZwCreateProfileExWrapper @ 0x1406A1280 (DifZwCreateProfileExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateProfileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
