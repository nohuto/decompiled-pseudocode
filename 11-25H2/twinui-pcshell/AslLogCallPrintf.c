/*
 * XREFs of AslLogCallPrintf @ 0x1802CED80
 * Callers:
 *     AslEnvBuildBasic @ 0x18013AABC (AslEnvBuildBasic.c)
 *     AslRegistryGetStringExpand @ 0x18013C080 (AslRegistryGetStringExpand.c)
 *     AslRegistryGetString @ 0x18013CB10 (AslRegistryGetString.c)
 *     AslRegistryOpenSubKey @ 0x18013CD0C (AslRegistryOpenSubKey.c)
 *     AslStringDuplicate @ 0x18013CDFC (AslStringDuplicate.c)
 *     AslRegistryOpenKey @ 0x18013D084 (AslRegistryOpenKey.c)
 *     AslEnvExpandStrings2 @ 0x18013D480 (AslEnvExpandStrings2.c)
 *     AslpEnvResolveVars @ 0x18013D6D0 (AslpEnvResolveVars.c)
 *     AslEnvExpandStrings @ 0x18013D9B4 (AslEnvExpandStrings.c)
 *     AslEnvGetProcessWowInfo @ 0x18013DD78 (AslEnvGetProcessWowInfo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall AslLogCallPrintf(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = g_AslLogPfnVPrintf;
  if ( g_AslLogPfnVPrintf )
    return (__int64 (__fastcall *)(_QWORD))g_AslLogPfnVPrintf(a1);
  return result;
}
