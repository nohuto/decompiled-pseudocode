/*
 * XREFs of ?bInitializeEUDCInternal@@YAHXZ @ 0x1400CB818
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CBA10 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 */

__int64 bInitializeEUDCInternal(void)
{
  int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  USHORT AnsiCodePage; // [rsp+70h] [rbp+30h] BYREF
  USHORT OemCodePage; // [rsp+78h] [rbp+38h] BYREF
  int v13; // [rsp+80h] [rbp+40h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF

  v0 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  String.Length = 0;
  v4 = *(_QWORD *)(W32GetSessionState(v2, v1, v3) + 96);
  String.MaximumLength = 20;
  String.Buffer = (PWSTR)(v4 + 14144);
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  *(_DWORD *)(v4 + 14176) = 292;
  *(_QWORD *)(v4 + 14168) = 0LL;
  v5 = (_DWORD *)(v4 + 13508);
  *(_QWORD *)(v4 + 14184) = L"FontLinkControl";
  *(_QWORD *)(v4 + 14192) = v4 + 13508;
  *(_DWORD *)(v4 + 14200) = 67108868;
  *(_QWORD *)(v4 + 14208) = 0LL;
  *(_DWORD *)(v4 + 14216) = 0;
  *(_QWORD *)(v4 + 14224) = 0LL;
  *(_DWORD *)(v4 + 14232) = 0;
  *(_QWORD *)(v4 + 14240) = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v4 + 14168), 0LL, 0LL) < 0 )
    *v5 = 0;
  v13 = 0;
  *(_QWORD *)(v4 + 14184) = L"FontLinkDefaultChar";
  *(_QWORD *)(v4 + 14192) = &v13;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v4 + 14168), 0LL, 0LL) < 0 )
    *(_WORD *)(v4 + 13464) = 12539;
  else
    *(_WORD *)(v4 + 13464) = v13;
  v14 = 0;
  *(_QWORD *)(v4 + 14184) = L"AllowSCPUAFontFallback";
  *(_QWORD *)(v4 + 14192) = &v14;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v4 + 14168), 0LL, 0LL) >= 0 )
  {
    LOBYTE(v0) = v14 != 0;
    *(_DWORD *)(v4 + 14164) = v0;
  }
  *(_QWORD *)(v4 + 14120) = v4 + 14112;
  *(_QWORD *)(v4 + 14112) = v4 + 14112;
  if ( (*v5 & 1) == 0 )
  {
    *(_DWORD *)(v4 + 13512) = 3;
    bAddAllFlEntry(0);
    *(_DWORD *)(v4 + 13512) = 12;
    vInitializeFontAssocStatus(v7, v6, v8);
  }
  return 1LL;
}
