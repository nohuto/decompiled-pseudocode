/*
 * XREFs of ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806A0154
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1801B09E8 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?FindBufferItem@CAppLayout@@UEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x18069E2E0 (-FindBufferItem@CAppLayout@@UEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1806A04F8 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayout::_FindBufferItem(CAppLayout *this, struct IAppLayoutItem **a2, unsigned int *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 i; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IAppLayoutItem **); // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0;
  v12 = 0LL;
  v6 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 14); ++i )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * i);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) == 4 )
    {
      v6 = i;
      v9 = 0;
      goto LABEL_11;
    }
  }
  v9 = -2147319765;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  if ( v9 >= 0 )
  {
    if ( !a2
      || (v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IAppLayoutItem **))(*((_QWORD *)this + 13) + 8 * v6),
          v9 = (**v10)(v10, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, a2),
          v9 >= 0) )
    {
      if ( a3 )
        *a3 = v6;
    }
  }
  return (unsigned int)v9;
}
