/*
 * XREFs of PopEsUpdateSetting @ 0x1407DBAE4
 * Callers:
 *     PopEsWorker @ 0x140B72400 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x140507220 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsUpdateSetting()
{
  int v0; // ecx
  int v1; // ecx
  _DWORD v3[4]; // [rsp+40h] [rbp-28h] BYREF

  v0 = PopEsModeGp;
  v3[2] = (unsigned __int8)byte_140F10715;
  if ( PopEsReason != 32 )
    v0 = PopEsMode;
  v3[1] = dword_140F10710;
  v3[0] = v0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v3);
  v1 = PopEsModeGp;
  if ( PopEsReason != 32 )
    v1 = PopEsMode;
  return PopTraceEsSetting(v1, dword_140F10710, byte_140F10715);
}
