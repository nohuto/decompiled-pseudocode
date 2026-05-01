/*
 * XREFs of ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x18051015C
 * Callers:
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x18050CD88 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180510480 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModeDragPattern::GenerateAppResizeDropEffect(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // r12d
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  int v13; // ebx
  int v14; // r14d
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, GUID *, int *); // rdi
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, GUID *, __int64 *); // rdi
  __int64 *v22; // rax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, __int64, __int64, GUID *, int *); // rdi
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, GUID *, __int64 *); // rdi
  __int64 *v28; // rax
  int StringWithMap; // eax
  int v31[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  int v33[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v37; // [rsp+B8h] [rbp+48h]
  __int64 v39; // [rsp+C8h] [rbp+58h] BYREF

  v6 = 0;
  *a4 = 0LL;
  v34 = 0LL;
  v35[0] = 0LL;
  if ( !a2 || (v7 = a2 - 1) == 0 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 )
  {
    v10 = 2;
    v14 = 2004;
    v39 = 0LL;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
    v16 = v15(a1, &v39);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v16);
LABEL_14:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
      goto LABEL_31;
    }
    v37 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 80LL))(v39, 1LL);
    *(_QWORD *)v31 = 0LL;
    v17 = v39;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v39 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
    v13 = v18(v17, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v31);
    if ( v13 < 0 )
    {
      v19 = 239LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v13);
LABEL_18:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
      goto LABEL_14;
    }
    v20 = *(_QWORD *)v31;
    v21 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v31 + 48LL);
    v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v34);
    v13 = v21(v20, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v22);
    if ( v13 < 0 )
    {
      v19 = 240LL;
      goto LABEL_17;
    }
    if ( v37 == 2 )
    {
      *(_QWORD *)v33 = 0LL;
      v23 = v39;
      v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v39 + 104LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
      v13 = v24(v23, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v33);
      if ( v13 < 0 )
      {
        v25 = 244LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
        goto LABEL_18;
      }
      v26 = *(_QWORD *)v33;
      v27 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v33 + 48LL);
      v28 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(v35);
      v13 = v27(v26, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v28);
      if ( v13 < 0 )
      {
        v25 = 245LL;
        goto LABEL_24;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v33);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v31);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
    goto LABEL_29;
  }
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
    v10 = 1;
    v32 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 112LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    v12 = v11(a1, &v32);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
LABEL_31:
      v6 = v13;
      goto LABEL_32;
    }
    if ( v32 )
    {
      v14 = 2003;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v34, &v32);
    }
    else
    {
      v14 = 2002;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
LABEL_29:
    StringWithMap = TabletModeDragPattern::GenerateStringWithMap(v10, v34, v35[0], a3, v14, 0, a4);
    v13 = StringWithMap;
    if ( StringWithMap < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFD,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)StringWithMap);
    goto LABEL_31;
  }
LABEL_32:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
  return v6;
}
