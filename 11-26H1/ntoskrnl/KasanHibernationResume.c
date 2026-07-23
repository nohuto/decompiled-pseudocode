/*
 * XREFs of KasanHibernationResume @ 0x1405E0060
 * Callers:
 *     HalpResumePoint @ 0x140727CC0 (HalpResumePoint.c)
 *     PopSaveHiberContextWrapper @ 0x140735650 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_BYTE *__fastcall KasanHibernationResume(ULONG_PTR BugCheckParameter3, _BYTE *BugCheckParameter4)
{
  _BYTE *result; // rax
  ULONG_PTR v3; // rdx

  result = BugCheckParameter4;
  if ( byte_140FC8BD8 )
  {
    v3 = (ULONG_PTR)&BugCheckParameter4[-BugCheckParameter3];
    if ( (v3 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 6uLL, 2uLL, BugCheckParameter3, (ULONG_PTR)result);
    return KasanMarkAddressValidNoInline(BugCheckParameter3, v3);
  }
  return result;
}
