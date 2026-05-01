/*
 * XREFs of ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1801CB4D8
 * Callers:
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x1804ABA80 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800781E4 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801CB814 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktopHelpers::ConvertDesktopFilter(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  void *v5; // r8
  void *v6; // rcx
  __int64 i; // rsi
  _QWORD *v8; // r12
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // r14d
  _QWORD *v12; // rdx
  int v13; // eax
  void *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // esi
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  void *v21; // rcx
  __int64 v22; // rcx
  LPVOID pv; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-38h]
  unsigned int v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v29; // [rsp+50h] [rbp-20h]
  unsigned int v30; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v32; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v34; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+48h] BYREF

  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v25,
    a1);
  v27 = 0;
  v28 = 0LL;
  v29 = &v25;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
  v30 = v26;
  v31 = 0LL;
  v32 = &v25;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v30);
  while ( 1 )
  {
    if ( v27 == v30 && v29 == v32 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      return 0LL;
    }
    v3 = v28;
    v24 = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    v35 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v24, &v35) < 0 )
      break;
    LODWORD(v34) = 0;
    pv = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *, LPVOID *))(*(_QWORD *)v35 + 32LL))(v35, &v34, &pv);
    if ( v4 >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < (unsigned int)v34; i = (unsigned int)(i + 1) )
      {
        v8 = pv;
        v9 = a2[1];
        if ( v9 == a2[3] )
        {
          v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)a2,
                  v9 + 1,
                  v5);
          v11 = v10;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14,
              (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
              (const char *)(unsigned int)v10);
            v21 = pv;
            pv = 0LL;
            CoTaskMemFree(v21);
            v22 = v35;
            if ( v35 )
            {
              v35 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            }
            if ( v3 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
            return v11;
          }
        }
        v12 = (_QWORD *)(*a2 + 8 * a2[1]++);
        if ( v12 )
          *v12 = v8[i];
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
        (const char *)(unsigned int)v4);
    }
    v6 = pv;
    pv = 0LL;
    CoTaskMemFree(v6);
LABEL_23:
    v19 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    ++v27;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
  }
  v34 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 72LL))(v3, &v34);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B,
      (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
      (const char *)(unsigned int)v13);
    goto LABEL_23;
  }
  v15 = a2[1];
  if ( v15 != a2[3]
    || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)a2,
                v15 + 1,
                v14),
        v17 = v16,
        v16 >= 0) )
  {
    v18 = (_QWORD *)(*a2 + 8 * a2[1]++);
    if ( v18 )
      *v18 = v34;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (int)"desktop\\internal\\shell\\inc\\private\\VirtualDesktopHelpers.h",
    (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  return v17;
}
