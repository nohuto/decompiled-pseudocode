/*
 * XREFs of ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x1803165A0
 * Callers:
 *     ?UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z @ 0x1800A45F0 (-UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18007FE20 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800C79C8 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreForStoreApp(
        int a1,
        const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+30h] [rbp-D0h]
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v10; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp+750h] BYREF
  size_t cchDest; // [rsp+858h] [rbp+758h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "IsGameManager_UpdateGameConfigStoreForStoreApp");
  v8 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"hr=0x%08X ", v8);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "AUMID", a2);
  GameDVR_OutputDebug::OutputString(OutputString);
  v5 = GameDVRTraceProvider::Provider(v4);
  if ( *(_DWORD *)v5 > 5u )
  {
    v10 = a2;
    v9 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v5,
      byte_1807E8A58,
      v6,
      v7,
      (__int64)&v9,
      &v10);
  }
}
