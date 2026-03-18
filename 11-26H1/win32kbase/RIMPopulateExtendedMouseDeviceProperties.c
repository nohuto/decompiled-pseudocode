/*
 * XREFs of RIMPopulateExtendedMouseDeviceProperties @ 0x1400EDD70
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 * Callees:
 *     ?PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z @ 0x1400EC6D4 (-PopulateMouseProperties@@YAXPEAURIMDEV@@PEAX1@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1400EDC78 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     RIMRegOpenKey @ 0x1400EDD10 (RIMRegOpenKey.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1400EEFEC (RIMRegOpenDeviceInstanceKey.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall RIMPopulateExtendedMouseDeviceProperties(struct RIMDEV *a1)
{
  void *v2; // rdi
  const WCHAR *v3; // r9
  _WORD *v4; // r10
  void *v5; // rbx
  __int64 v6; // rdx
  __int16 v7; // ax
  __int64 v8; // r8
  int v9; // ecx
  struct _UNICODE_STRING v10; // [rsp+28h] [rbp-300h] BYREF
  _BYTE v11[704]; // [rsp+40h] [rbp-2E8h] BYREF

  if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 332LL);
  v2 = (void *)RIMRegOpenDeviceInstanceKey(a1);
  *(_DWORD *)(&v10.MaximumLength + 1) = 0;
  v3 = L"\\Registry\\Machine\\";
  v10.MaximumLength = 700;
  v4 = v11;
  v5 = 0LL;
  v10.Buffer = (PWSTR)v11;
  v6 = 0x7FFFLL;
  v7 = 0;
  v8 = 350LL;
  v9 = 0;
  while ( v6 )
  {
    if ( *v3 )
    {
      *v4++ = *v3++;
      --v6;
      ++v7;
      if ( --v8 )
        continue;
    }
    if ( !v8 && v6 && *v3 )
      v9 = -2147483643;
    break;
  }
  v10.Length = 2 * v7;
  if ( v9 >= 0 && RtlUnicodeStringCatString(&v10, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows") >= 0 )
    v5 = RIMRegOpenKey(&v10);
  if ( v2 || v5 )
  {
    PopulateMouseProperties(a1, v2, v5);
    if ( v2 )
      ZwClose(v2);
    if ( v5 )
      ZwClose(v5);
  }
}
