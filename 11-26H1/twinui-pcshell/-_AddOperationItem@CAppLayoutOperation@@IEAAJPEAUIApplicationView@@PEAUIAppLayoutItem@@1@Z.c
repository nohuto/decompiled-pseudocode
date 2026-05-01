/*
 * XREFs of ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x1806C3B28
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806C4CE8 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C5024 (-_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYP.c)
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C9D34 (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddOperationItem(
        CAppLayoutOperation *this,
        struct IApplicationView *a2,
        struct IAppLayoutItem *a3,
        struct IAppLayoutItem *a4)
{
  int v4; // r12d
  int v5; // r15d
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rbx
  void *v13; // r8
  __int64 v14; // rdx
  __int64 *v15; // rdx
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT rcDst; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v21; // [rsp+88h] [rbp-78h] BYREF
  __int128 v22; // [rsp+98h] [rbp-68h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-38h]
  __m128i v26; // [rsp+D0h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __m128i si128; // [rsp+F8h] [rbp-8h]
  RECT rcSrc; // [rsp+108h] [rbp+8h] BYREF
  __int128 v31; // [rsp+118h] [rbp+18h]
  __int64 v32; // [rsp+128h] [rbp+28h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v4 = 0;
  v5 = 0;
  v28 = 0LL;
  v25 = 0LL;
  v26 = si128;
  v22 = 0LL;
  v21 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  rcDst = 0LL;
  if ( a3 )
  {
    v4 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a3 + 64LL))(a3, &v27);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 0LL, &v23);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 1LL, &v22);
  }
  if ( a4 )
  {
    v5 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a4 + 64LL))(a4, &v24);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 0LL, &rcDst);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 1LL, &v21);
  }
  else
  {
    v10 = *((_QWORD *)this + 5);
    v32 = 0LL;
    rcSrc = 0LL;
    v31 = 0LL;
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v10 + 24LL))(v10, &rcSrc);
    CopyRect(&rcDst, &rcSrc);
    CopyRect(&v21, &rcDst);
    DWORD2(v24) = 3;
  }
  v17 = 0;
  CAppLayoutOperation::_GetAnimationData(this, a2, (enum APP_LAYOUT_ANIMATION_TYPE *)&v17);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v19);
  v11 = CAppLayoutOperationItem::s_CreateInstance(a2, &v27, &v24, &v23, &v22, &rcDst, &v21, v4, v5, v17);
  if ( v11 >= 0 )
  {
    v12 = v19;
    v18 = v19;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v18);
    v14 = *((_QWORD *)this + 16);
    v11 = 0;
    if ( v14 != *((_QWORD *)this + 18)
      || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 120,
                  v14 + 1,
                  v13),
          v11 >= 0) )
    {
      v15 = (__int64 *)(*((_QWORD *)this + 15) + 8 * (*((_QWORD *)this + 16))++);
      if ( v15 )
      {
        *v15 = 0LL;
        if ( v15 != &v18 )
        {
          *v15 = v12;
          v18 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v19);
  return (unsigned int)v11;
}
