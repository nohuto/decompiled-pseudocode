/*
 * XREFs of ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C80DC
 * Callers:
 *     ?GetAdjacentItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C6380 (-GetAdjacentItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TY.c)
 *     ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1806C7998 (-_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x1806C6220 (-FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_GetAdjacentItem(
        __int64 a1,
        struct IAppLayoutItem *a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  int LayoutItemInternal; // edi
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // eax

  v6 = a6;
  LODWORD(a6) = 0;
  *v6 = 0LL;
  LayoutItemInternal = CAppLayout::FindLayoutItemInternal((CAppLayout *)(a1 + 32), a2, (unsigned int *)&a6);
  if ( LayoutItemInternal >= 0 )
  {
    LayoutItemInternal = -2147319765;
    if ( a3 == -1 )
      v11 = (unsigned int)((_DWORD)a6 - 1);
    else
      v11 = (unsigned int)((_DWORD)a6 + 1);
    while ( (unsigned int)v11 <= *(_DWORD *)(a1 + 112) - 1 )
    {
      a6 = *(_QWORD **)(*(_QWORD *)(a1 + 104) + 8 * v11);
      v12 = (__int64)a6;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&a6);
      if ( ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) & a4) != 0 )
      {
        LayoutItemInternal = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v12)(v12, a5, v6);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a6);
        return (unsigned int)LayoutItemInternal;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a6);
      v13 = v11 + 1;
      v11 = (unsigned int)(v11 - 1);
      if ( a3 != -1 )
        v11 = v13;
    }
  }
  return (unsigned int)LayoutItemInternal;
}
