/*
 * XREFs of _stricmp @ 0x140536260
 * Callers:
 *     HalGetEnvironmentVariable @ 0x14057C330 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x14057C3D0 (HalSetEnvironmentVariable.c)
 *     ViThunkSnapSharedExportByName @ 0x140C441E8 (ViThunkSnapSharedExportByName.c)
 *     HdlspBugCheckProcessing @ 0x140C4C1F8 (HdlspBugCheckProcessing.c)
 *     CmpAppendSection @ 0x140CB7CDC (CmpAppendSection.c)
 *     CmpSearchSectionByName @ 0x140CB8860 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140CEE48C (CmpSetupConfigurationTree.c)
 * Callees:
 *     __ascii_stricmp @ 0x140536210 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
