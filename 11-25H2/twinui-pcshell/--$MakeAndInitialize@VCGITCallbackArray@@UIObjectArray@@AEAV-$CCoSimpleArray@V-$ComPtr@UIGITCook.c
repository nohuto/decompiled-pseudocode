/*
 * XREFs of ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x18008BFBC
 * Callers:
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x18008B5A8 (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18008BF68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Microsoft@@QEAA@XZ @ 0x18008C108 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Micros.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C594 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ??$_Add@AEBV?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@PEA_K@Z @ 0x18008C928 (--$_Add@AEBV-$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIGITCookieOb.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGITCallbackArray,IObjectArray,CCoSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>> &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>(v4);
    v13 = 0LL;
    *v5 = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
    v5[4] = &CGITCallbackArray::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectArray>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IObjectArray>>'};
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[8] = 0LL;
    v5[9] = 0LL;
    if ( a2[1] )
    {
      v6 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(v5 + 6);
      v7 = v6;
      if ( v6 < 0 )
      {
        v11 = 95LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"shell\\lib\\gitreglist.cpp",
          (const char *)(unsigned int)v6);
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v13);
        return v7;
      }
      v8 = *a2;
      v9 = *a2 + 8 * a2[1];
      while ( v8 != v9 )
      {
        v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::_Add<Microsoft::WRL::ComPtr<IGITCookieObject> const &>(
               v5 + 6,
               v8);
        v7 = v6;
        if ( v6 < 0 )
        {
          v11 = 99LL;
          goto LABEL_11;
        }
        v8 += 8LL;
      }
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v5)(v5, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, a1);
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    return v7;
  }
  return 2147942414LL;
}
