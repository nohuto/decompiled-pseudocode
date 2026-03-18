/*
 * XREFs of GetDWORDSettingValues @ 0x1400B2C10
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400B2CA8 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400B2D30 (ReadPointerDeviceCfgDWORDSetting.c)
 */

__int64 __fastcall GetDWORDSettingValues(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  void *PointerDeviceConfigurationKey; // rdi
  _DWORD *v8; // r14

  v4 = a3;
  v5 = 0;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(a1, 131097LL);
  if ( PointerDeviceConfigurationKey )
  {
    if ( (_DWORD)v4 )
    {
      v8 = (_DWORD *)(a2 + 12);
      do
      {
        if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
          *v8 = -1;
        a2 += 16LL;
        v8 += 4;
        --v4;
      }
      while ( v4 );
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  LOBYTE(v5) = PointerDeviceConfigurationKey != 0LL;
  return v5;
}
