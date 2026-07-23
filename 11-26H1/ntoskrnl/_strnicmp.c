/*
 * XREFs of _strnicmp @ 0x140538790
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140865978 (CmpPreserveSystemHiveData.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140CBBF84 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpAppendSection @ 0x140CBDD20 (CmpAppendSection.c)
 *     CmpProcessForSimpleStringSub @ 0x140CBE7D4 (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140CC4068 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x14053872C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
