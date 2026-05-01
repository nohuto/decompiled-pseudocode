/*
 * XREFs of ??0CAppLayoutItemEnum@@QEAA@PEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x18069DC44
 * Callers:
 *     ??$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutItemEnum@@@12@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x18069DB9C (--$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutItemEnum::CAppLayoutItemEnum(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int *v9; // rdi
  int v10; // eax
  int v11; // eax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>(a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutItemEnum>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &CAppLayoutItemEnum::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  v9 = (int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = a5;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 144LL))(a2, a3, a1 + 32);
  }
  else if ( a4 == -1 )
  {
    *v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16)) - 1;
  }
  if ( (*(_BYTE *)(a1 + 28) & 1) != 0 )
  {
    v10 = *v9;
    if ( a4 == -1 )
      v11 = v10 - 1;
    else
      v11 = v10 + 1;
    *v9 = v11;
  }
  return a1;
}
