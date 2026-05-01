/*
 * XREFs of ?BroadcastDVRComponent_EvaluateIfViewIsGame@GameDVRTraceProvider@@SAXPEAX0_N11PEBG11@Z @ 0x1800B358C
 * Callers:
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800B4F1C (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 * Callees:
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x1800B3BD4 (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_EvaluateIfViewIsGame(
        void *a1,
        void *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        bool a5,
        const unsigned __int16 *a6,
        bool a7,
        bool a8)
{
  const WCHAR *v8; // rbx
  int v10; // r15d
  int v11; // r14d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+38h] [rbp-C8h]
  __int64 v18; // [rsp+38h] [rbp-C8h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  bool v22; // [rsp+70h] [rbp-90h] BYREF
  bool v23; // [rsp+71h] [rbp-8Fh] BYREF
  bool v24; // [rsp+72h] [rbp-8Eh] BYREF
  char v25; // [rsp+73h] [rbp-8Dh] BYREF
  char v26; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v27; // [rsp+78h] [rbp-88h]
  void *v28; // [rsp+80h] [rbp-80h] BYREF
  void *v29; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t pszDest[1024]; // [rsp+B0h] [rbp-50h] BYREF
  STRSAFE_LPWSTR v33; // [rsp+8B0h] [rbp+7B0h] BYREF
  size_t cchDest; // [rsp+8B8h] [rbp+7B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+8C0h] [rbp+7C0h] BYREF
  void *v36; // [rsp+8D0h] [rbp+7D0h]
  int v37; // [rsp+8D8h] [rbp+7D8h]
  int v38; // [rsp+8DCh] [rbp+7DCh]
  void **v39; // [rsp+8E0h] [rbp+7E0h]
  __int64 v40; // [rsp+8E8h] [rbp+7E8h]
  void **v41; // [rsp+8F0h] [rbp+7F0h]
  __int64 v42; // [rsp+8F8h] [rbp+7F8h]
  char *v43; // [rsp+900h] [rbp+800h]
  __int64 v44; // [rsp+908h] [rbp+808h]
  char *v45; // [rsp+910h] [rbp+810h]
  __int64 v46; // [rsp+918h] [rbp+818h]
  bool *v47; // [rsp+920h] [rbp+820h]
  __int64 v48; // [rsp+928h] [rbp+828h]
  const WCHAR *v49; // [rsp+930h] [rbp+830h]
  int v50; // [rsp+938h] [rbp+838h]
  int v51; // [rsp+93Ch] [rbp+83Ch]
  bool *v52; // [rsp+940h] [rbp+840h]
  __int64 v53; // [rsp+948h] [rbp+848h]
  bool *v54; // [rsp+950h] [rbp+850h]
  __int64 v55; // [rsp+958h] [rbp+858h]

  v8 = a6;
  v33 = pszDest;
  v10 = a4;
  v11 = a3;
  SystemTime = 0LL;
  cchDest = 1024LL;
  GetLocalTime(&SystemTime);
  StringCchPrintfExW(
    pszDest,
    cchDest,
    &v33,
    &cchDest,
    0,
    L"%02d/%02d %02d:%02d:%02d.%03d [%08p] ",
    SystemTime.wMonth,
    SystemTime.wDay,
    SystemTime.wHour,
    SystemTime.wMinute,
    SystemTime.wSecond,
    SystemTime.wMilliseconds,
    NtCurrentTeb()->ClientId.UniqueThread);
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S: ", "BroadcastDVRComponent_EvaluateIfViewIsGame");
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=0x%I64x ", "hWnd", a1);
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=0x%I64x ", "hWndRoot", a2);
  LODWORD(v17) = v11;
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=%d ", "fIsGame", v17);
  LODWORD(v18) = v10;
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=%d ", "fIsBlocked", v18);
  LODWORD(v19) = a5;
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=%d ", "fIsModern", v19);
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=\"%s\" ", "pwszAppId", a6);
  LODWORD(v20) = a7;
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=%d ", "fIsXboxApp", v20);
  LODWORD(v21) = a8;
  StringCchPrintfExW(v33, cchDest, &v33, &cchDest, 0, L"%S=%d ", "fIsCentennial", v21);
  GameDVR_OutputDebug::OutputString(pszDest);
  v14 = *(_QWORD *)(wil::details::static_lazy<GameDVRTraceProvider>::get(
                      v13,
                      _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v14 > 5u )
  {
    v22 = a8;
    v23 = a7;
    v54 = &v22;
    v52 = &v23;
    v24 = a5;
    v25 = v10;
    v26 = v11;
    v28 = a2;
    v29 = a1;
    v55 = 1LL;
    v53 = 1LL;
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v8 = &LocaleName;
      v16 = 2;
    }
    v50 = v16;
    v48 = 1LL;
    v47 = &v24;
    v45 = &v25;
    v43 = &v26;
    v41 = &v28;
    v39 = &v29;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v14 + 8);
    v46 = 1LL;
    v44 = 1LL;
    v49 = v8;
    v51 = 0;
    v42 = 8LL;
    v40 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v36 = &unk_1807BA9FE;
    v38 = 1;
    UserData.Reserved = 2;
    v37 = 143;
    v27 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v14 + 32), &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
}
