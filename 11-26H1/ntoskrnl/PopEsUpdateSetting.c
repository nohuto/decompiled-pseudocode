/*
 * XREFs of PopEsUpdateSetting @ 0x1407DFD00
 * Callers:
 *     PopEsWorker @ 0x140B773E0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x140500BF0 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  int v0; // ecx
  int v1; // ecx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  v0 = PopEsModeGp;
  Buffer[2] = BYTE5(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next);
  if ( PopEsReason != 32 )
    v0 = PopEsMode;
  Buffer[1] = PpmIdlePolicyLock.GlobalForegroundListEntry.Flink;
  Buffer[0] = v0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  v1 = PopEsModeGp;
  if ( PopEsReason != 32 )
    v1 = PopEsMode;
  return PopTraceEsSetting(
           v1,
           (int)PpmIdlePolicyLock.GlobalForegroundListEntry.Flink,
           BYTE5(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next));
}
