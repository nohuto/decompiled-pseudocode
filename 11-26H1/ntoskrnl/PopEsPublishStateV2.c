/*
 * XREFs of PopEsPublishStateV2 @ 0x1407DFBA0
 * Callers:
 *     PopEsUpdateState @ 0x140517FA0 (PopEsUpdateState.c)
 *     PopEsWorker @ 0x140B773E0 (PopEsWorker.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopEsPublishStateV2(char a1)
{
  int v2; // ecx
  int v4; // [rsp+60h] [rbp+20h] BYREF
  int v5; // [rsp+68h] [rbp+28h] BYREF
  BOOL v6; // [rsp+70h] [rbp+30h] BYREF
  unsigned int Buffer; // [rsp+78h] [rbp+38h] BYREF
  int v8; // [rsp+7Ch] [rbp+3Ch]

  Buffer = ((unsigned __int8)dword_140E67A2C << 14) | 1;
  v4 = 0;
  v8 = -1;
  ZwUpdateWnfStateData(&WNF_SEB_ENERGY_SAVER_STATE_V2, &Buffer, 8u, 0LL, 0LL, 0, 0);
  v5 = dword_140E67A2C;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE_V2, &v5, 4u, 0LL, 0LL, 0, 0);
  if ( a1 )
  {
    v2 = 0;
    if ( dword_140E67A2C == 240 )
      v2 = 2;
    Buffer = v2 | Buffer & 0xFFC03FFD;
    ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  v6 = dword_140E67A2C == 240;
  PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4LL, &v6);
  if ( dword_140E67A2C )
  {
    if ( dword_140E67A2C == 128 )
    {
      v4 = 1;
    }
    else if ( dword_140E67A2C == 240 )
    {
      v4 = 2;
    }
  }
  return PopSetPowerSettingValueAcDc(&GUID_ENERGY_SAVER_STATUS, 4LL, &v4);
}
