/*
 * XREFs of _strnicmp @ 0x1404FB9E0
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407D28C8 (CmpPreserveSystemHiveData.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140C052A4 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpAppendSection @ 0x140C06F48 (CmpAppendSection.c)
 *     CmpProcessForSimpleStringSub @ 0x140C07A00 (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140C0BFC4 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1404FB97C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
