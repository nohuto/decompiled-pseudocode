/*
 * XREFs of ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C1220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z @ 0x1804C0B8C (-_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z.c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1804C0C54 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSwitchItemElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // r10d
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+40h] [rbp-9h] BYREF
  int v16; // [rsp+48h] [rbp-1h]
  int v17; // [rsp+4Ch] [rbp+3h]
  __int128 v18; // [rsp+50h] [rbp+7h] BYREF
  __int128 v19; // [rsp+60h] [rbp+17h] BYREF
  __int128 v20; // [rsp+70h] [rbp+27h] BYREF

  v15 = *(_QWORD *)(a1 + 568);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v14, &v15, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v6 = *(__int64 **)(a1 + 88);
  v7 = *v6;
  v8 = *(_DWORD *)(a1 + 60);
  LODWORD(v15) = *(_DWORD *)(a1 + 56);
  HIDWORD(v15) = v8;
  v16 = v15 + 1;
  v17 = v8 + 1;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, __int64))(v7 + 24))(v6, &v15, a2, a3);
  v9 = *(__int64 **)(a1 + 624);
  v10 = *v9;
  v15 = 0LL;
  v16 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v17 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v10 + 24))(v9, &v15, 0LL, 0LL);
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  CSwitchItemElement::_GetLayoutRects(
    (CSwitchItemElement *)a1,
    (struct Geometry::CRect *)&v19,
    (struct Geometry::CRect *)&v18,
    (struct Geometry::CRect *)&v20);
  v11 = *(_QWORD *)(a1 + 600);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 104LL))(v11, &v19);
  if ( *(_QWORD *)(a1 + 632) != __PAIR64__(HIDWORD(v18) - DWORD1(v18), DWORD2(v18) - (int)v18) )
  {
    LODWORD(v15) = DWORD2(v18) - v18;
    HIDWORD(v15) = HIDWORD(v18) - DWORD1(v18);
    CSwitchItemElement::_CreateLabel((CSwitchItemElement *)a1, (const struct Geometry::CSize *)&v15);
  }
  v12 = *(_QWORD *)(a1 + 616);
  if ( v12 )
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, &v18, 0LL, 0LL);
  v13 = *(_QWORD *)(a1 + 608);
  if ( v13 )
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 104LL))(v13, &v20);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v14);
}
