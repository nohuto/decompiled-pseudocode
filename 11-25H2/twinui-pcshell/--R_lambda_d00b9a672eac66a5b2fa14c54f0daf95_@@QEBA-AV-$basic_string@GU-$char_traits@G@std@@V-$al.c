/*
 * XREFs of ??R_lambda_d00b9a672eac66a5b2fa14c54f0daf95_@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CloudPCState@Shell@Internal@Windows@winrt@@@Z @ 0x18064BABC
 * Callers:
 *     ?FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@Shell@Internal@Windows@3@30@Z @ 0x18064BD60 (-FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

char **__fastcall _lambda_d00b9a672eac66a5b2fa14c54f0daf95_::operator()(__int64 a1, char **a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  char **v8; // rcx
  wchar_t *v9; // rdx

  if ( !a3 )
  {
    v9 = L"Connecting";
    goto LABEL_14;
  }
  v4 = a3 - 1;
  if ( !v4 )
  {
    v9 = L"Connected";
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = L"UserInputNeeded";
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = L"Disconnected";
    goto LABEL_14;
  }
  v7 = v6 - 95;
  if ( !v7 )
  {
    v9 = L"PhysicalDeviceAccess";
LABEL_14:
    v8 = a2;
    goto LABEL_15;
  }
  v8 = a2;
  if ( v7 == 1 )
    v9 = L"Recovering";
  else
    v9 = (wchar_t *)L"Unknown";
LABEL_15:
  std::wstring::wstring(v8, v9);
  return a2;
}
