/*
 * XREFs of _wcsnicmp_0 @ 0x14006E492
 * Callers:
 *     SepSddlGetSidForString @ 0x1402363A0 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x14023646C (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027D970 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 *     SepSddlGetAclForString @ 0x1403DF2B8 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
