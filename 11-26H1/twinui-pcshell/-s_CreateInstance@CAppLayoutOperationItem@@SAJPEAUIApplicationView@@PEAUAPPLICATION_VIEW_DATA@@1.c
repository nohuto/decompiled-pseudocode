/*
 * XREFs of ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C9D34
 * Callers:
 *     ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C39AC (-_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANI.c)
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x1806C3B28 (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 * Callees:
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C97C8 (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperationItem::s_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        _QWORD *a12)
{
  _QWORD *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // edi
  _QWORD v16[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+28h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = a3;
  v18 = a2;
  v17 = a1;
  v12 = a12;
  v16[1] = a5;
  v16[2] = a6;
  v16[3] = a7;
  v16[0] = a4;
  *a12 = 0LL;
  Microsoft::WRL::Details::Make<CAppLayoutOperationItem,IApplicationView * &,APPLICATION_VIEW_DATA * &,APPLICATION_VIEW_DATA * &,CAppLayoutOperationItem::CAppLayoutOperationItemConstructorRects &,int &,int &,enum APP_LAYOUT_ANIMATION_TYPE &>(
    (__int64 *)&a12,
    &v17,
    &v18,
    &v19,
    (__int64)v16,
    &a8,
    &a9,
    &a10);
  v13 = (__int64)a12;
  if ( a12 )
    v14 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a12)(
            a12,
            &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
            v12);
  else
    v14 = -2147024882;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v14;
}
