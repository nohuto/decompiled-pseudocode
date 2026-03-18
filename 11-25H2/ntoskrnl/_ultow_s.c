/*
 * XREFs of _ultow_s @ 0x140500AE0
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14096B820 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409E5FCC (LocalGetStringForRelativeAttribute.c)
 *     LocalConvertAclToString @ 0x1409E6840 (LocalConvertAclToString.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A5E0F0 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     xtow_s @ 0x140500C40 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
