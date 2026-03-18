/*
 * XREFs of ?GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x140281C70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_IsValidVersion2@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z @ 0x14009EFDC (-DisplayID_IsValidVersion2@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetParseResult(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 24;
  if ( *(_BYTE *)(v1 + 16) )
    return 2 - (unsigned int)((unsigned int)DisplayID_IsValidVersion2(v1) != 0);
  else
    return 0LL;
}
