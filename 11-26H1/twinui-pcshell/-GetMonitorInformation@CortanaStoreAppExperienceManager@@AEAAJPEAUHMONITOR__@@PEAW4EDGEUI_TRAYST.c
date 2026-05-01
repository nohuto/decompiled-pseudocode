/*
 * XREFs of ?GetMonitorInformation@CortanaStoreAppExperienceManager@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1801A87F0
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801A8474 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::GetMonitorInformation(
        CortanaStoreAppExperienceManager *this,
        HMONITOR a2,
        enum EDGEUI_TRAYSTUCKPLACE *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  LONG v20; // r10d
  int v21; // r8d
  LONG v22; // r11d
  int v23; // r9d
  __int64 v25; // [rsp+30h] [rbp-69h] BYREF
  int v26[2]; // [rsp+38h] [rbp-61h] BYREF
  struct tagRECT v27; // [rsp+40h] [rbp-59h]
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-49h] BYREF
  __m128i v29; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v25 = 0LL;
  v9 = *((_QWORD *)this + 26);
  v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v11 = v10(v9, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v25);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *(_QWORD *)v26 = 0LL;
    v14 = v25;
    v15 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v25 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
    v16 = v15(v14, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v26);
    v12 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v26 + 80LL))(
              *(_QWORD *)v26,
              a3);
      v12 = v16;
      if ( v16 >= 0 )
      {
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v12 = -2147418113;
          v18 = 2147549183LL;
          v17 = 931LL;
          goto LABEL_10;
        }
        *a4 = mi.rcMonitor;
        *a5 = mi.rcWork;
        v29 = 0LL;
        v16 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)v26 + 112LL))(*(_QWORD *)v26, &v29);
        v12 = v16;
        if ( v16 >= 0 )
        {
          v27 = (struct tagRECT)v29;
          v19 = _mm_srli_si128(v29, 8).m128i_u64[0];
          v20 = _mm_cvtsi128_si32(v29);
          v21 = v19 - v20;
          v22 = _mm_cvtsi128_si32(_mm_srli_si128(v29, 4));
          v23 = _mm_cvtsi128_si32(_mm_srli_si128(v29, 12)) - v22;
          if ( *(_DWORD *)a3 )
          {
            if ( *(_DWORD *)a3 == 1 )
            {
              if ( v22 < mi.rcMonitor.top )
              {
                v27.top = mi.rcMonitor.top;
                v27.bottom = v23 + mi.rcMonitor.top;
              }
            }
            else if ( *(_DWORD *)a3 == 2 )
            {
              if ( (int)v19 > mi.rcMonitor.right )
              {
                v27.right = mi.rcMonitor.right;
                v27.left = mi.rcMonitor.right - v21;
              }
            }
            else if ( *(_DWORD *)a3 == 3 && SHIDWORD(v19) > mi.rcMonitor.bottom )
            {
              v27.bottom = mi.rcMonitor.bottom;
              v27.top = mi.rcMonitor.bottom - v23;
            }
          }
          else if ( v20 < mi.rcMonitor.left )
          {
            v27.left = mi.rcMonitor.left;
            v27.right = v21 + mi.rcMonitor.left;
          }
          *a6 = v27;
          v12 = 0;
          goto LABEL_28;
        }
        v17 = 937LL;
      }
      else
      {
        v17 = 927LL;
      }
    }
    else
    {
      v17 = 924LL;
    }
    v18 = (unsigned int)v16;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)v18);
LABEL_28:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    return v12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39A,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
  v13 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v12;
}
