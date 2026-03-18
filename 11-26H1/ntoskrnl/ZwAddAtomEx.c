/*
 * XREFs of ZwAddAtomEx @ 0x140724110
 * Callers:
 *     DifZwAddAtomExWrapper @ 0x140698550 (DifZwAddAtomExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddAtomEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
