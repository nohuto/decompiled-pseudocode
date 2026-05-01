/*
 * XREFs of ??0CAppLayoutOperationItem@@QEAA@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1AEBUCAppLayoutOperationItemConstructorRects@0@HHW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806A194C
 * Callers:
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806A1878 (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperationItem::CAppLayoutOperationItem(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>(a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutOperationItem>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &CAppLayoutOperationItem::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a4 + 32);
  v12 = *(_DWORD **)a5;
  *(_DWORD *)(a1 + 104) = **(_DWORD **)a5;
  *(_DWORD *)(a1 + 108) = v12[1];
  *(_DWORD *)(a1 + 112) = v12[2];
  *(_DWORD *)(a1 + 116) = v12[3];
  v13 = *(_DWORD **)(a5 + 8);
  *(_DWORD *)(a1 + 120) = *v13;
  *(_DWORD *)(a1 + 124) = v13[1];
  *(_DWORD *)(a1 + 128) = v13[2];
  *(_DWORD *)(a1 + 132) = v13[3];
  v14 = *(_DWORD **)(a5 + 16);
  *(_DWORD *)(a1 + 136) = *v14;
  *(_DWORD *)(a1 + 140) = v14[1];
  *(_DWORD *)(a1 + 144) = v14[2];
  *(_DWORD *)(a1 + 148) = v14[3];
  v15 = *(_DWORD **)(a5 + 24);
  *(_DWORD *)(a1 + 152) = *v15;
  *(_DWORD *)(a1 + 156) = v15[1];
  *(_DWORD *)(a1 + 160) = v15[2];
  *(_DWORD *)(a1 + 164) = v15[3];
  *(_DWORD *)(a1 + 168) = a6;
  *(_DWORD *)(a1 + 172) = a7;
  *(_DWORD *)(a1 + 176) = a8;
  return a1;
}
