/*
 * XREFs of ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x18069CFD0
 * Callers:
 *     ?GetCount@CAppLayoutOperation@@UEAAJPEAI@Z @ 0x18069B590 (-GetCount@CAppLayoutOperation@@UEAAJPEAI@Z.c)
 *     ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x18069B840 (-GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1804D32E0 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$FindEx@VCAppLayoutOperationItemFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByView@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18069B388 (--$FindEx@VCAppLayoutOperationItemFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutOpera.c)
 *     ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18069BB3C (-_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANI.c)
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x18069BD4C (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_GenerateOperationItemList(CAppLayoutOperation *this)
{
  __int64 *v1; // r12
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, struct IUnknown **); // rbx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD); // rbx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct IUnknown **); // rbx
  int v10; // eax
  struct IUnknown *v11; // r8
  int v12; // edi
  unsigned __int64 v13; // r15
  unsigned __int64 i; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, struct IAppLayoutItem **); // rbx
  struct IUnknown *v18; // r8
  int v19; // edi
  __int64 v20; // rcx
  int v21; // eax
  struct IAppLayoutItem *v23; // [rsp+30h] [rbp-39h] BYREF
  struct IUnknown *v24; // [rsp+38h] [rbp-31h] BYREF
  __int64 v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  struct IAppLayoutItem *v27[2]; // [rsp+50h] [rbp-19h] BYREF
  struct IApplicationView *v28; // [rsp+60h] [rbp-9h]

  v1 = (__int64 *)((char *)this + 120);
  CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::RemoveAll((__int64)this + 120);
  v3 = *((_QWORD *)this + 4);
  if ( v3 && *((_QWORD *)this + 5) )
  {
    memset_0(v27, 0, 0x40uLL);
    v24 = 0LL;
    v4 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v3 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
    v5 = v4(v3, &v24);
    while ( v5 >= 0 )
    {
      if ( ((int (__fastcall *)(struct IUnknown *, __int64, struct IAppLayoutItem **))v24->lpVtbl[1].QueryInterface)(
             v24,
             1LL,
             v27) < 0 )
        break;
      v6 = *((_QWORD *)this + 5);
      v23 = 0LL;
      v7 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v6 + 152LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      v5 = v7(v6, v28, &v23, 0LL);
      if ( ((v5 + 0x80000000) & 0x80000000) != 0 || v5 == -2147319765 )
        v5 = CAppLayoutOperation::_AddOperationItem(this, (struct IUnknown *)v28, v27[0], v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
    if ( v5 >= 0 )
    {
      memset_0(v27, 0, 0x40uLL);
      v8 = *((_QWORD *)this + 5);
      v24 = 0LL;
      v9 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v8 + 128LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
      v10 = v9(v8, &v24);
LABEL_17:
      v5 = v10;
      if ( v10 >= 0 )
      {
        while ( ((int (__fastcall *)(struct IUnknown *, __int64, struct IAppLayoutItem **))v24->lpVtbl[1].QueryInterface)(
                  v24,
                  1LL,
                  v27) >= 0 )
        {
          v25 = 0LL;
          v26 = 0LL;
          v23 = v28;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
          v12 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
                  v1,
                  (struct IUnknown **)&v23,
                  v11,
                  (unsigned __int64 *)&v25);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v26);
          if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -2147319765 )
          {
            v5 = v12;
            break;
          }
          if ( v5 < 0 )
            break;
          if ( v12 == -2147319765 )
          {
            v10 = CAppLayoutOperation::_AddOperationItem(this, (struct IUnknown *)v28, 0LL, v27[0]);
            goto LABEL_17;
          }
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
      if ( v5 >= 0 )
      {
        v13 = *((_QWORD *)this + 12);
        for ( i = 0LL; i < v13; ++i )
        {
          if ( v5 < 0 )
            break;
          v15 = *((_QWORD *)this + 11);
          v23 = 0LL;
          v16 = *(_QWORD *)(v15 + 8 * i);
          v17 = *(__int64 (__fastcall **)(__int64, struct IAppLayoutItem **))(*(_QWORD *)v16 + 24LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
          v5 = v17(v16, &v23);
          if ( v5 >= 0 )
          {
            v26 = 0LL;
            v25 = 0LL;
            v24 = (struct IUnknown *)v23;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
            v19 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
                    v1,
                    &v24,
                    v18,
                    (unsigned __int64 *)&v26);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v25);
            if ( v19 < 0 )
            {
              if ( v19 == -2147319765 )
              {
                v20 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
                v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
                v5 = CAppLayoutOperation::_AddAnimationOnlyOperationItem(this, (__int64)v23, v21);
              }
              else
              {
                v5 = v19;
              }
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147319767;
  }
  return (unsigned int)v5;
}
