/*
 * XREFs of AccessPTPEnabledStatus @ 0x1400F0360
 * Callers:
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C (RIMApiSetSetUserPTPEnabledPreference.c)
 *     EnablePTPDevices @ 0x1401D7790 (EnablePTPDevices.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400F060C (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_BOOL8 __fastcall AccessPTPEnabledStatus(int a1, int a2, _DWORD *a3)
{
  BOOL v3; // ebx
  void *PointerDeviceConfigurationKey; // rdi
  int Data; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  v3 = 0;
  Data = a1;
  ResultLength = 0;
  DestinationString = 0LL;
  if ( a3 )
    *a3 = 1;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(1LL, a2 != 0 ? 131097 : 131078);
  if ( PointerDeviceConfigurationKey )
  {
    RtlInitUnicodeString(&DestinationString, L"Enabled");
    if ( a2 )
    {
      if ( ZwQueryValueKey(
             PointerDeviceConfigurationKey,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && v12 == 4
        && v13 == 4 )
      {
        if ( !v14 )
          *a3 = 0;
        v3 = 1;
      }
    }
    else
    {
      v3 = ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, &Data, 4u) >= 0;
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  return v3;
}
