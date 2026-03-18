/*
 * XREFs of WriteSettingValues @ 0x1401DFD70
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1401BA808 (_SetPrecisionTouchPadConfiguration.c)
 *     WritePointerDeviceSettings @ 0x1401DF9A0 (WritePointerDeviceSettings.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400F060C (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 */

_BOOL8 __fastcall WriteSettingValues(__int64 a1, const WCHAR **a2, unsigned int a3)
{
  NTSTATUS v5; // ebx
  void *PointerDeviceConfigurationKey; // rbp
  unsigned int v7; // edi
  const WCHAR **v8; // rsi
  const WCHAR *v9; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(a1, 0x20006u);
  if ( PointerDeviceConfigurationKey )
  {
    v7 = 0;
    if ( a3 )
    {
      v8 = a2;
      do
      {
        v9 = *v8;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v9);
        v5 = ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, (char *)&a2[2 * v7 + 1] + 4, 4u);
        if ( v5 < 0 )
          break;
        ++v7;
        v8 += 2;
      }
      while ( v7 < a3 );
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    v5 = -1073741811;
  }
  return v5 >= 0;
}
