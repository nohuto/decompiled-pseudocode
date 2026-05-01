/*
 * XREFs of ShellPositionerManager::DoWorkForEachMonitor__lambda_22f50d1dc6182761ed223d168c43812e___ @ 0x1804E9E60
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804EB5E8 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800CDD58 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     wil::ResultFromException__lambda_6a8919acfe736782812ed367c6267a46___ @ 0x1804EA298 (wil--ResultFromException__lambda_6a8919acfe736782812ed367c6267a46___.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1804EA7D0 (--1-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$allo.c)
 *     _lambda_22f50d1dc6182761ed223d168c43812e_::operator() @ 0x1804EA970 (_lambda_22f50d1dc6182761ed223d168c43812e_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellPositionerManager::DoWorkForEachMonitor__lambda_22f50d1dc6182761ed223d168c43812e___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 size_of; // rax
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // esi
  int (__fastcall *v14)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v15; // rax
  int v16; // ebx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdi
  wil::details::in1diag3 *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rbx
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v25; // r14
  int (__fastcall *v26)(__int64, _QWORD, __int64 *); // rsi
  __int64 v27; // rdx
  __int64 **v28; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  int (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  __int128 v35; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v36[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v38; // [rsp+A8h] [rbp+38h] BYREF

  v35 = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v10 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)&v35 = v10;
  v38 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v38);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x415,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_34;
  }
  v13 = 0;
  if ( v38 )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v14 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v34);
      if ( v14(a2, v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v15) >= 0 )
        break;
LABEL_15:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
      if ( ++v13 >= v38 )
        goto LABEL_16;
    }
    v16 = 0;
    v33 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v33, a4);
    }
    else
    {
      v17 = v34;
      v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 80LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      v16 = v18(v17, &v33);
    }
    v19 = retaddr;
    if ( v16 >= 0 )
    {
      LODWORD(v32) = 0;
      if ( (*(int (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v33 + 24LL))(
             v33,
             &v32) < 0 )
        goto LABEL_14;
      v36[0] = &v35;
      v36[1] = &v32;
      v36[2] = &v34;
      v22 = wil::ResultFromException__lambda_6a8919acfe736782812ed367c6267a46___(v36);
      v19 = retaddr;
      if ( v22 >= 0 )
        goto LABEL_14;
      v20 = (unsigned int)v22;
      v21 = 1081LL;
    }
    else
    {
      v20 = (unsigned int)v16;
      v21 = 1062LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v19,
      (void *)v21,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v20);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_15;
  }
LABEL_16:
  v23 = *(__int64 **)v35;
  while ( v23 != (__int64 *)v35 )
  {
    v24 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v23[5];
    v32 = v24;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    v33 = 0LL;
    v25 = *(_QWORD *)(a1 + 152);
    v26 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    if ( v26(v25, *((unsigned int *)v23 + 8), &v33) >= 0 )
    {
      v34 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      if ( (**v24)(v24, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v34) >= 0 )
      {
        v27 = a3;
        if ( !a3 )
          v27 = v33;
        lambda_22f50d1dc6182761ed223d168c43812e_::operator()(a5, v27, v33, v34);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    v28 = (__int64 **)v23[2];
    if ( *((_BYTE *)v28 + 25) )
    {
      for ( i = (__int64 *)v23[1]; !*((_BYTE *)i + 25) && v23 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v23 = i;
      v23 = i;
    }
    else
    {
      v23 = (__int64 *)v23[2];
      for ( j = *v28; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v23 = j;
    }
  }
  v12 = 0;
LABEL_34:
  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>(&v35);
  return v12;
}
