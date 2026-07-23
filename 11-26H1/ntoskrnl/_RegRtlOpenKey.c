/*
 * XREFs of _RegRtlOpenKey @ 0x140B6D1FC
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlOpenKey(char *a1, const WCHAR *a2, ULONG a3, ACCESS_MASK a4, HANDLE *a5)
{
  return RegRtlOpenKeyTransacted(a1, a2, a3, a4, a5, 0LL);
}
