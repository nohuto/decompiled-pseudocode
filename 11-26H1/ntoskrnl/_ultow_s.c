/*
 * XREFs of _ultow_s @ 0x14053B580
 * Callers:
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1409D4B80 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x140A5FA78 (LocalGetStringForRelativeAttribute.c)
 *     LocalConvertAclToString @ 0x140A607C4 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE8928 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     xtow_s @ 0x14053B6E4 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
