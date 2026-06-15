/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180018508 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019884 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x1800199E4 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z @ 0x180019B84 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001A5FC (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180024E1C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002A350 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerr.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18003BF68 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003C010 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180004A60 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x1800052BC (-RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0CApplication@@QEAA@XZ @ 0x1800164C8 (--0CApplication@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCApplication@@@Z @ 0x180027530 (-AddHead@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        int a4,
        struct CApplication **a5,
        int a6,
        int *a7)
{
  int v9; // esi
  int v10; // r14d
  CApplication *v11; // rdi
  struct _RTL_CRITICAL_SECTION *v12; // r15
  _QWORD *v13; // rbx
  CApplication *v15; // rax
  volatile int *v16; // rdx
  UINT32 v18[2]; // [rsp+38h] [rbp-2F0h] BYREF
  UINT32 v19[2]; // [rsp+40h] [rbp-2E8h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+48h] [rbp-2E0h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+4Ch] [rbp-2DCh] BYREF
  struct CApplication **v22; // [rsp+58h] [rbp-2D0h]
  unsigned __int64 v23; // [rsp+60h] [rbp-2C8h]
  char *v24; // [rsp+68h] [rbp-2C0h]
  int *v25; // [rsp+70h] [rbp-2B8h]
  char *v26; // [rsp+78h] [rbp-2B0h]
  CApplication *v27; // [rsp+80h] [rbp-2A8h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+88h] [rbp-2A0h]
  WCHAR packageFamilyName[2]; // [rsp+A0h] [rbp-288h] BYREF
  __int128 v30; // [rsp+A4h] [rbp-284h]
  __int128 v31; // [rsp+B4h] [rbp-274h]
  __int128 v32; // [rsp+C4h] [rbp-264h]
  __int128 v33; // [rsp+D4h] [rbp-254h]
  __int128 v34; // [rsp+E4h] [rbp-244h]
  __int128 v35; // [rsp+F4h] [rbp-234h]
  __int128 v36; // [rsp+104h] [rbp-224h]
  __int64 v37; // [rsp+114h] [rbp-214h]
  int v38; // [rsp+11Ch] [rbp-20Ch]
  __int16 v39; // [rsp+120h] [rbp-208h]
  WCHAR v40[2]; // [rsp+130h] [rbp-1F8h] BYREF
  __int128 v41; // [rsp+134h] [rbp-1F4h]
  __int128 v42; // [rsp+144h] [rbp-1E4h]
  __int128 v43; // [rsp+154h] [rbp-1D4h]
  __int128 v44; // [rsp+164h] [rbp-1C4h]
  __int128 v45; // [rsp+174h] [rbp-1B4h]
  __int128 v46; // [rsp+184h] [rbp-1A4h]
  __int128 v47; // [rsp+194h] [rbp-194h]
  __int64 v48; // [rsp+1A4h] [rbp-184h]
  int v49; // [rsp+1ACh] [rbp-17Ch]
  __int16 v50; // [rsp+1B0h] [rbp-178h]
  WCHAR v51[2]; // [rsp+1C0h] [rbp-168h] BYREF
  __int128 v52; // [rsp+1C4h] [rbp-164h]
  __int128 v53; // [rsp+1D4h] [rbp-154h]
  __int128 v54; // [rsp+1E4h] [rbp-144h]
  __int128 v55; // [rsp+1F4h] [rbp-134h]
  __int128 v56; // [rsp+204h] [rbp-124h]
  __int128 v57; // [rsp+214h] [rbp-114h]
  __int128 v58; // [rsp+224h] [rbp-104h]
  __int128 v59; // [rsp+234h] [rbp-F4h]
  WCHAR packageRelativeApplicationId[2]; // [rsp+250h] [rbp-D8h] BYREF
  __int128 v61; // [rsp+254h] [rbp-D4h]
  __int128 v62; // [rsp+264h] [rbp-C4h]
  __int128 v63; // [rsp+274h] [rbp-B4h]
  __int128 v64; // [rsp+284h] [rbp-A4h]
  __int128 v65; // [rsp+294h] [rbp-94h]
  __int128 v66; // [rsp+2A4h] [rbp-84h]
  __int128 v67; // [rsp+2B4h] [rbp-74h]
  __int128 v68; // [rsp+2C4h] [rbp-64h]

  v23 = a3;
  v22 = a5;
  v25 = a7;
  v9 = 0;
  v10 = -2147023728;
  v11 = 0LL;
  packageFamilyNameLength[1] = 0;
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v24 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v28 = v12;
  *(_DWORD *)packageFamilyName = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  v39 = 0;
  *(_DWORD *)packageRelativeApplicationId = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  packageFamilyNameLength[0] = 65;
  packageRelativeApplicationIdLength = 66;
  *a5 = 0LL;
  ParseApplicationUserModelId(
    a2,
    packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  v26 = (char *)this + 72;
  v13 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v13 )
  {
    v11 = (CApplication *)v13[2];
    v13 = (_QWORD *)*v13;
    *(_DWORD *)v40 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0;
    v50 = 0;
    *(_DWORD *)v51 = 0;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v18[0] = 65;
    v19[0] = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v11 + 3), v18, v40, v19, v51);
    if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)v11 + 3), a2)
      && *((_DWORD *)v11 + 53) == a4
      && *((_QWORD *)v11 + 87) == v23
      || !(unsigned int)_o__wcsicmp(v40, packageFamilyName)
      && (!(unsigned int)_o__wcsicmp(v51, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *((_DWORD *)v11 + 53) == a4 )
    {
      v10 = 0;
LABEL_13:
      *v22 = v11;
      goto LABEL_14;
    }
  }
  if ( !a6 )
    goto LABEL_13;
  v15 = (CApplication *)operator new[](0x2D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v18 = v15;
  *(_QWORD *)v19 = v15;
  if ( v15 )
  {
    v27 = v15;
    v11 = CApplication::CApplication(v15);
    v27 = v11;
    *(_QWORD *)v18 = 0LL;
    v10 = CApplication::RuntimeClassInitialize(v11, a2, v23, a4);
    if ( v10 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CApplication *)((char *)v11 + 12), v16);
      *(_QWORD *)v19 = v11;
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)v18);
      v10 = 0;
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::AddHead(v26, v19);
      v9 = 1;
      goto LABEL_13;
    }
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>((void **)v18);
  }
  else
  {
    v10 = -2147024882;
  }
LABEL_14:
  if ( a7 )
    *a7 = v9;
  if ( v10 < 0 )
    AudPolicyLogError("CApplicationManager::GetApplication", 1356, v10);
  if ( v12 )
    LeaveCriticalSection(v12);
  return (unsigned int)v10;
}
