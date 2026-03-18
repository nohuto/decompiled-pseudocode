/*
 * XREFs of ZwLoadKey2 @ 0x140725610
 * Callers:
 *     DifZwLoadKey2Wrapper @ 0x1406A8E30 (DifZwLoadKey2Wrapper.c)
 *     BiLoadHive @ 0x1409D0564 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
