/*
 * XREFs of _stricmp @ 0x1404FB930
 * Callers:
 *     HalGetEnvironmentVariable @ 0x14053EC90 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14053ED20 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140B965EC (ViThunkSnapSharedExportByName.c)
 *     HdlspBugCheckProcessing @ 0x140B9D1F8 (HdlspBugCheckProcessing.c)
 *     CmpAppendSection @ 0x140C06F48 (CmpAppendSection.c)
 *     CmpSearchSectionByName @ 0x140C07AD0 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140C39838 (CmpSetupConfigurationTree.c)
 * Callees:
 *     __ascii_stricmp @ 0x1404FB8DC (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
