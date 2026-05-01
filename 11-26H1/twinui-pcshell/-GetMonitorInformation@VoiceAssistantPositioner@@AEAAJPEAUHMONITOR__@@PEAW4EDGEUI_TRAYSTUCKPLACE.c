/*
 * XREFs of ?GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x180507E9C
 * Callers:
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805072EC (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x180507CC0 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetMonitorInformation(
        VoiceAssistantPositioner *this,
        HMONITOR a2,
        enum EDGEUI_TRAYSTUCKPLACE *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, HMONITOR, SID *, GUID *, int *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  LONG v16; // r10d
  int v17; // r8d
  LONG v18; // r11d
  int v19; // r9d
  int v21[2]; // [rsp+30h] [rbp-69h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-59h]
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-49h] BYREF
  __m128i v24; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  *(_QWORD *)v21 = 0LL;
  v9 = *((_QWORD *)this + 23);
  v10 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v9 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
  v11 = v10(v9, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 790LL;
LABEL_5:
    v14 = (unsigned int)v11;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)v14);
    goto LABEL_24;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v21 + 80LL))(*(_QWORD *)v21, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 793LL;
    goto LABEL_5;
  }
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(a2, &mi) )
  {
    v12 = -2147418113;
    v14 = 2147549183LL;
    v13 = 796LL;
    goto LABEL_6;
  }
  *a4 = mi.rcMonitor;
  *a5 = mi.rcWork;
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)v21 + 112LL))(*(_QWORD *)v21, &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 802LL;
    goto LABEL_5;
  }
  v22 = (struct tagRECT)v24;
  v15 = _mm_srli_si128(v24, 8).m128i_u64[0];
  v16 = _mm_cvtsi128_si32(v24);
  v17 = v15 - v16;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 4));
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 12)) - v18;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      if ( v18 < mi.rcMonitor.top )
      {
        v22.top = mi.rcMonitor.top;
        v22.bottom = v19 + mi.rcMonitor.top;
      }
    }
    else if ( *(_DWORD *)a3 == 2 )
    {
      if ( (int)v15 > mi.rcMonitor.right )
      {
        v22.right = mi.rcMonitor.right;
        v22.left = mi.rcMonitor.right - v17;
      }
    }
    else if ( *(_DWORD *)a3 == 3 && SHIDWORD(v15) > mi.rcMonitor.bottom )
    {
      v22.bottom = mi.rcMonitor.bottom;
      v22.top = mi.rcMonitor.bottom - v19;
    }
  }
  else if ( v16 < mi.rcMonitor.left )
  {
    v22.left = mi.rcMonitor.left;
    v22.right = v17 + mi.rcMonitor.left;
  }
  *a6 = v22;
  v12 = 0;
LABEL_24:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
  return v12;
}
