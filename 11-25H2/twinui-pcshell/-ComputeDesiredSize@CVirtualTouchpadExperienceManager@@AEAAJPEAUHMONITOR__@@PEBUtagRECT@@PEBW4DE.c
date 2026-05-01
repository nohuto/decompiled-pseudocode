/*
 * XREFs of ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x18038F724
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x18038F350 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18038F990 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z @ 0x18038FF40 (-GetRelativeSizeForMonitor@CVirtualTouchpadExperienceManager@@CAIPEAUHMONITOR__@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeDesiredSize(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR a2,
        const struct tagRECT *a3,
        const enum DEVICE_SCALE_FACTOR *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int ScaleFactorForWindow; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // edi
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int RelativeSizeForMonitor; // eax
  int v19; // ecx
  int nNumerator; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+24h] [rbp-2Ch]
  int v23; // [rsp+2Ch] [rbp-24h] BYREF
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v24 = 0LL;
  v8 = *((_QWORD *)this + 43);
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  ScaleFactorForWindow = v9(v8, &v24);
  v11 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    v25 = 0LL;
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 120LL))(v24, &v25);
    v11 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v12 = 369LL;
      goto LABEL_5;
    }
    v23 = 0;
    ScaleFactorForWindow = GetScaleFactorForWindow(*((_QWORD *)this + 44), &v23);
    v11 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow < 0 )
    {
      v12 = 371LL;
      goto LABEL_5;
    }
    v13 = (int)(float)((float)((float)SDWORD1(v25) * 100.0) / (float)v23);
    nNumerator = 0;
    if ( SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Touchpad\\",
           L"FixedDimension",
           (unsigned int *)&nNumerator) < 0 )
    {
      if ( SHRegGetDWORD(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Touchpad\\",
             L"PercentOfScreenDimension",
             (unsigned int *)&nNumerator) < 0 )
      {
        LODWORD(v22) = *((_DWORD *)this + 71);
        v15 = *((_DWORD *)this + 72);
        goto LABEL_20;
      }
      v16 = a3->right - a3->left;
      if ( v16 >= a3->bottom - a3->top )
        v16 = a3->bottom - a3->top;
      v17 = MulDiv(v16, nNumerator, 100);
      RelativeSizeForMonitor = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, *((_DWORD *)this + 70));
      if ( v17 > RelativeSizeForMonitor )
        RelativeSizeForMonitor = v17;
      v15 = (int)(float)((float)((float)RelativeSizeForMonitor * 100.0) / (float)*(int *)a4);
    }
    else
    {
      v14 = *((_DWORD *)this + 70);
      if ( nNumerator > v14 )
        v14 = nNumerator;
      nNumerator = CVirtualTouchpadExperienceManager::GetRelativeSizeForMonitor(a2, v14);
      v15 = MulDiv(nNumerator, 100, *a4);
      nNumerator = v15;
    }
    LODWORD(v22) = v15;
LABEL_20:
    HIDWORD(v22) = v15 - v13;
    *(_QWORD *)((char *)this + 308) = v22;
    v19 = *a4;
    LODWORD(v22) = (int)(float)((float)(*((_DWORD *)this + 77) * *a4) / 100.0);
    HIDWORD(v22) = (int)(float)((float)(*((_DWORD *)this + 78) * v19) / 100.0);
    *(_QWORD *)((char *)this + 300) = v22;
    v11 = 0;
    goto LABEL_21;
  }
  v12 = 367LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  return v11;
}
