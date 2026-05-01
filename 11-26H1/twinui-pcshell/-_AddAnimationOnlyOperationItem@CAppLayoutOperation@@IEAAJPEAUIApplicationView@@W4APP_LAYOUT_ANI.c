/*
 * XREFs of ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C39AC
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806C4CE8 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C9D34 (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddAnimationOnlyOperationItem(_QWORD *a1, __int64 a2, int a3)
{
  int v6; // esi
  __int64 v7; // rbx
  void *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v12; // [rsp+60h] [rbp-49h] BYREF
  __int64 v13; // [rsp+68h] [rbp-41h] BYREF
  __int128 v14; // [rsp+70h] [rbp-39h] BYREF
  __int128 v15; // [rsp+80h] [rbp-29h] BYREF
  __int128 v16; // [rsp+90h] [rbp-19h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-9h]
  __m128i v18; // [rsp+A8h] [rbp-1h]
  __int128 v19; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+C8h] [rbp+1Fh]
  __m128i si128; // [rsp+D0h] [rbp+27h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v18 = si128;
  v20 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  v6 = CAppLayoutOperationItem::s_CreateInstance(a2, &v19, &v16, &v15, &v15, &v14, &v14, 0, 0, a3);
  if ( v6 >= 0 )
  {
    v7 = v13;
    v12 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v12);
    v9 = a1[16];
    v6 = 0;
    if ( v9 != a1[18]
      || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)(a1 + 15),
                 v9 + 1,
                 v8),
          v6 >= 0) )
    {
      v10 = (__int64 *)(a1[15] + 8 * a1[16]++);
      if ( v10 )
      {
        *v10 = 0LL;
        if ( v10 != &v12 )
        {
          *v10 = v7;
          v12 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  return (unsigned int)v6;
}
