/*
 * XREFs of AslLogCallPrintf @ 0x1802C3E28
 * Callers:
 *     AslEnvBuildBasic @ 0x18015A770 (AslEnvBuildBasic.c)
 *     AslRegistryOpenKey @ 0x18015BC88 (AslRegistryOpenKey.c)
 *     AslRegistryGetString @ 0x18015C054 (AslRegistryGetString.c)
 *     AslRegistryOpenSubKey @ 0x18015C254 (AslRegistryOpenSubKey.c)
 *     AslRegistryGetStringExpand @ 0x18015C344 (AslRegistryGetStringExpand.c)
 *     AslStringDuplicate @ 0x18015C594 (AslStringDuplicate.c)
 *     AslEnvExpandStrings2 @ 0x18015CA50 (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x18015CC60 (AslEnvGetProcessWowInfo.c)
 *     AslEnvExpandStrings @ 0x18018EAF4 (AslEnvExpandStrings.c)
 *     AslpEnvResolveVars @ 0x1801EEE4C (AslpEnvResolveVars.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *AslLogCallPrintf(__int64 a1, _QWORD a2, _QWORD a3, const char *a4, ...))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = g_AslLogPfnVPrintf;
  if ( g_AslLogPfnVPrintf )
    return (__int64 (__fastcall *)(_QWORD))g_AslLogPfnVPrintf(a1);
  return result;
}
