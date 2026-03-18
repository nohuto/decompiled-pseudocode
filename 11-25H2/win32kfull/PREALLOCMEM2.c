/*
 * XREFs of PREALLOCMEM2 @ 0x14020E9A0
 * Callers:
 *     ??$AllocAndCopyRegistryEntries@UFONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAUFONTSUB@@0PEBU0@@Z @ 0x1401F4594 (--$AllocAndCopyRegistryEntries@UFONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAUFONTSUB@@0PEBU0@@Z.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1403206B8 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 *     vInitFontSubTable @ 0x1403EDAEC (vInitFontSubTable.c)
 *     vInitFontMapperFamilyFallbackTable @ 0x1403EE018 (vInitFontMapperFamilyFallbackTable.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char *__fastcall PREALLOCMEM2(void *Src, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  char *v7; // rax
  char *v8; // rdi

  v4 = a2;
  v7 = (char *)PALLOCNOZ(a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v4 >= a3 )
      v4 = a3;
    memmove(v7, Src, (unsigned int)v4);
    Win32FreePool(Src);
    memset_0(&v8[v4], 0, a3 - (unsigned int)v4);
  }
  return v8;
}
