/*
 * XREFs of _strnicmp @ 0x140536310
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x14085F688 (CmpPreserveSystemHiveData.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140CB5F44 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpAppendSection @ 0x140CB7CDC (CmpAppendSection.c)
 *     CmpProcessForSimpleStringSub @ 0x140CB8790 (CmpProcessForSimpleStringSub.c)
 *     IopStoreArcInformation @ 0x140CBDF98 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1405362AC (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
