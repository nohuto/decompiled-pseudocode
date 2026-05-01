/*
 * XREFs of ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031A2D4
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1800EDA28 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x18012F4C0 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B356C (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800B5600 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800FCC90 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError(int a1)
{
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp-848h]
  _DWORD v6[4]; // [rsp+40h] [rbp-838h] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp-28h] BYREF
  size_t cchDest; // [rsp+858h] [rbp-20h] BYREF

  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError");
  v5 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"hr=0x%08X ", v5);
  GameDVR_OutputDebug::OutputString(OutputString);
  v3 = GameDVRTraceProvider::Provider(v2);
  if ( *(_DWORD *)v3 > 5u )
  {
    v6[0] = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_1807BB82F,
      0LL,
      v4,
      (__int64)v6);
  }
}
