/*
 * XREFs of ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A80D4
 * Callers:
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1800D92F0 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x1806C5C80 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1806C83D0 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?Attach@?$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z @ 0x1802295D0 (-Attach@-$ComPtr@VCAppLayoutItem@@@WRL@Microsoft@@QEAAXPEAVCAppLayoutItem@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x1802A22EC (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Buffer(const struct _GUID *a1, void **a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v10[2]; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  v10[0] = 0LL;
  v5 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CAppLayoutItem::CAppLayoutItem((__int64)v5, 4, v10, v10);
    Microsoft::WRL::ComPtr<CAppLayoutItem>::Attach(&v9, v6);
    v4 = v9;
  }
  if ( v4 )
    v7 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v4)(v4, a1, a2);
  else
    v7 = -2147024882;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
