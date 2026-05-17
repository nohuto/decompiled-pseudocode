/*
 * XREFs of RtlpGetUserOrMachineUILanguage4NLS @ 0x180112ED0
 * Callers:
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     RtlpMatchUILanguage @ 0x180112DD4 (RtlpMatchUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C970 (OpenGlobalizationUserSettingsKey.c)
 *     LdrpQueryValueKey @ 0x1800D9FF0 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x1800DC350 (LdrpOpenKey.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, unsigned __int64 *a3)
{
  int v6; // ebx
  HANDLE v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  HANDLE v13; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+38h] BYREF

  v13 = 0LL;
  Handle = 0LL;
  v11 = 7;
  v15 = 0;
  DestinationString = 0LL;
  v6 = OpenGlobalizationUserSettingsKey(0x2000000LL, (__int64)a2, &v13);
  if ( v6 < 0 )
    goto LABEL_21;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v7 = v13;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    v6 = LdrpOpenKey((__int64)&DestinationString, (__int64)v13, 0x20019u, &Handle);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v6 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v11, 0LL, &v15);
      if ( v6 >= 0 )
        goto LABEL_10;
    }
    if ( v6 == -2147483643 )
      goto LABEL_10;
    NtClose(Handle);
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v7 = 0LL;
  }
  v6 = LdrpOpenKey((__int64)&DestinationString, (__int64)v7, 0x20019u, &Handle);
  if ( v6 < 0 )
    goto LABEL_21;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v6 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v11, 0LL, &v15);
LABEL_10:
  if ( v6 != -1073741772 && v15 )
  {
    if ( v6 != -2147483643 )
    {
LABEL_20:
      v6 = -1073741772;
      goto LABEL_21;
    }
    v8 = v15 + 1;
    v9 = (unsigned int)v8 >> 1;
    if ( !a2 )
    {
      v6 = 0;
LABEL_15:
      *a3 = v9;
      goto LABEL_21;
    }
    if ( *a3 < v8 >> 1 )
    {
      v6 = -1073741789;
      goto LABEL_15;
    }
    v6 = LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v11, a2, &v15);
    if ( v6 >= 0 )
    {
      if ( v11 == 7 )
        goto LABEL_15;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( v13 )
  {
    NtClose(v13);
    v13 = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
