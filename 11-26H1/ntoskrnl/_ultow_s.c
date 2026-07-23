/*
 * XREFs of _ultow_s @ 0x14053DA00
 * Callers:
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x140A6CA38 (LocalGetStringForRelativeAttribute.c)
 *     LocalConvertAclToString @ 0x140A6D784 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE67D8 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     xtow_s @ 0x14053DB64 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
