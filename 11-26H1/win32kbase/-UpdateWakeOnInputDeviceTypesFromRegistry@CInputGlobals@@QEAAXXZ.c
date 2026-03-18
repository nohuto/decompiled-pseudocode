/*
 * XREFs of ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x140179630
 * Callers:
 *     ?InitDimAndWakeSources@CInputGlobals@@AEAAXXZ @ 0x140187664 (-InitDimAndWakeSources@CInputGlobals@@AEAAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400F060C (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(CInputGlobals *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  const WCHAR *v4; // rdx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp+37h] BYREF
  int v14; // [rsp+9Ch] [rbp+3Bh]
  int v15; // [rsp+A0h] [rbp+3Fh]
  int v16; // [rsp+A4h] [rbp+43h]

  W32AcquirePushLockExclusiveEx(this);
  *((_DWORD *)this + 36) = 46;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\INPUT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"WakeOnInputDeviceTypes");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v14 == 4
      && v15 == 4 )
    {
      *((_DWORD *)this + 36) = v16;
    }
    ZwClose(KeyHandle);
  }
  KeyHandle = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(8LL, 0x20019u);
  if ( KeyHandle )
  {
    v2 = (char *)&unk_140264730;
    v3 = 5LL;
    do
    {
      v4 = (const WCHAR *)*((_QWORD *)v2 + 1);
      ResultLength = 0;
      ValueName = 0LL;
      RtlInitUnicodeString(&ValueName, v4);
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v14 == 4
        && v15 == 4 )
      {
        v5 = *(_DWORD *)v2;
        v6 = *((_DWORD *)this + 36);
        if ( v16 )
          v7 = v5 | v6;
        else
          v7 = ~v5 & v6;
        *((_DWORD *)this + 36) = v7;
      }
      v2 += 16;
      --v3;
    }
    while ( v3 );
    ZwClose(KeyHandle);
  }
  W32ReleasePushLockExclusiveEx(this);
}
