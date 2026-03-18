/*
 * XREFs of ?bInitializeEUDCInternal@@YAHXZ @ 0x140146E08
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1401462E0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1401470EC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 */

__int64 bInitializeEUDCInternal(void)
{
  int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  USHORT AnsiCodePage; // [rsp+70h] [rbp+30h] BYREF
  USHORT OemCodePage; // [rsp+78h] [rbp+38h] BYREF
  int v10; // [rsp+80h] [rbp+40h] BYREF
  int v11; // [rsp+88h] [rbp+48h] BYREF

  v0 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  String.Length = 0;
  v4 = *(_QWORD *)(W32GetSessionState(v2, v1, v3) + 96);
  String.MaximumLength = 20;
  String.Buffer = (PWSTR)(v4 + 14152);
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  *(_DWORD *)(v4 + 14184) = 292;
  *(_QWORD *)(v4 + 14176) = 0LL;
  v5 = (_DWORD *)(v4 + 13516);
  *(_QWORD *)(v4 + 14192) = L"FontLinkControl";
  *(_QWORD *)(v4 + 14200) = v4 + 13516;
  *(_DWORD *)(v4 + 14208) = 67108868;
  *(_QWORD *)(v4 + 14216) = 0LL;
  *(_DWORD *)(v4 + 14224) = 0;
  *(_QWORD *)(v4 + 14232) = 0LL;
  *(_DWORD *)(v4 + 14240) = 0;
  *(_QWORD *)(v4 + 14248) = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v4 + 14176), 0LL, 0LL) < 0 )
    *v5 = 0;
  v10 = 0;
  *(_QWORD *)(v4 + 14192) = L"FontLinkDefaultChar";
  *(_QWORD *)(v4 + 14200) = &v10;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v4 + 14176), 0LL, 0LL) >= 0 )
    *(_WORD *)(v4 + 13472) = v10;
  else
    *(_WORD *)(v4 + 13472) = 12539;
  v11 = 0;
  *(_QWORD *)(v4 + 14192) = L"AllowSCPUAFontFallback";
  *(_QWORD *)(v4 + 14200) = &v11;
  if ( RtlQueryRegistryValues(3u, L"FontLink", (PRTL_QUERY_REGISTRY_TABLE)(v4 + 14176), 0LL, 0LL) >= 0 )
  {
    LOBYTE(v0) = v11 != 0;
    *(_DWORD *)(v4 + 14172) = v0;
  }
  *(_QWORD *)(v4 + 14128) = v4 + 14120;
  *(_QWORD *)(v4 + 14120) = v4 + 14120;
  if ( (*v5 & 1) == 0 )
  {
    *(_DWORD *)(v4 + 13520) = 3;
    bAddAllFlEntry(0LL);
    *(_DWORD *)(v4 + 13520) = 12;
    vInitializeFontAssocStatus();
  }
  return 1LL;
}
