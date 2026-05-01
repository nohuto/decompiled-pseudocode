/*
 * XREFs of ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180490C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180020748 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?s_GetMTVHostType@CMultitaskingViewManager@@CA?AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingViewHost@@@Z @ 0x18002084C (-s_GetMTVHostType@CMultitaskingViewManager@@CA-AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingView.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x180232818 (-_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PE.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x18049124C (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ViewDismissed(
        CMultitaskingViewManager *this,
        struct IMultitaskingViewHost *a2)
{
  CMultitaskingViewManager *v4; // rdi
  int MTVHostType; // ebx
  int MatchingMTVHost; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown *v14; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+30h] BYREF

  v4 = (CMultitaskingViewManager *)((char *)this - 16);
  v11 = ((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewManager *)16);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  MTVHostType = CMultitaskingViewManager::s_GetMTVHostType((__int64 *)a2);
  v14 = 0LL;
  v15 = 0LL;
  if ( MTVHostType == 4 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    MatchingMTVHost = CMultitaskingViewManager::_FindMatchingMTVHost(
                        (__int64)v4,
                        4,
                        (struct IUnknown *)a2,
                        (__int64 *)&v14,
                        &v15);
    v7 = MatchingMTVHost;
    if ( MatchingMTVHost < 0 )
    {
      v8 = 556LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)MatchingMTVHost);
      goto LABEL_12;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    MatchingMTVHost = CMultitaskingViewManager::_FindMTVHost((__int64)v4, MTVHostType, 0, &v14, &v15);
    v7 = MatchingMTVHost;
    if ( MatchingMTVHost < 0 )
    {
      v8 = 560LL;
      goto LABEL_6;
    }
  }
  if ( SHIsSameObject(v14, (struct IUnknown *)a2) )
    CMultitaskingViewManager::_DestroyMTVHost(v4, v15);
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *((unsigned int *)this + 80));
  v7 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v7;
}
