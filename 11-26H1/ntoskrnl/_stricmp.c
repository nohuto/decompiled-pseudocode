/*
 * XREFs of _stricmp @ 0x1405386E0
 * Callers:
 *     HalGetEnvironmentVariable @ 0x14057E860 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14057E900 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140C4A1F8 (ViThunkSnapSharedExportByName.c)
 *     HdlspBugCheckProcessing @ 0x140C521F8 (HdlspBugCheckProcessing.c)
 *     CmpAppendSection @ 0x140CBDD20 (CmpAppendSection.c)
 *     CmpSearchSectionByName @ 0x140CBE8A4 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140CF4808 (CmpSetupConfigurationTree.c)
 * Callees:
 *     __ascii_stricmp @ 0x140538690 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
