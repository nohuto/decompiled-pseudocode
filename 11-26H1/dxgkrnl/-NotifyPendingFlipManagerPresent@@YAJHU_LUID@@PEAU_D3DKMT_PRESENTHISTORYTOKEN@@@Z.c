/*
 * XREFs of ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140045760
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x14001F9F0 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?ResolveHandle@FlipManagerTokenObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400458B4 (-ResolveHandle@FlipManagerTokenObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x140045948 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z @ 0x1400A2D50 (-GetSyncId@FlipManagerTokenObject@@QEAAJPEA_K_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NotifyPendingFlipManagerPresent(int a1, struct _LUID a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  void *FenceValue; // rsi
  int v4; // edi
  unsigned __int64 v5; // rbp
  __int64 Win32kImportTable; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  UINT_PTR *p_dxgContext; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  char v15; // r8
  int v16; // eax
  bool v17; // r8
  FlipManagerTokenObject *v18; // rsi
  __int64 v20; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  Object = (PVOID)a2;
  FenceValue = (void *)a3->Token.Flip.FenceValue;
  v4 = 0;
  v5 = 0LL;
  Object = 0LL;
  v22 = 0LL;
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (**)(void))(Win32kImportTable + 520))();
  v9 = DxgkGetWin32kImportTable();
  v10 = (*(__int64 (**)(void))(v9 + 552))();
  if ( a1
    && !v10
    && (unsigned int)IsTokenManagerReady()
    && (v11 = DxgkGetWin32kImportTable(), (*(unsigned int (**)(void))(v11 + 536))()) )
  {
    p_dxgContext = &a3->Token.Flip.dxgContext;
    if ( (a3->Token.Gdi.ScrollRect.left & 4) != 0 )
      v4 = -1073741811;
  }
  else
  {
    v4 = -1071775730;
    p_dxgContext = &a3->Token.Flip.dxgContext;
  }
  v13 = DxgkGetWin32kImportTable();
  (*(void (**)(void))(v13 + 568))();
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1071775730 )
    goto LABEL_21;
  v16 = FlipManagerTokenObject::ResolveHandle(FenceValue, v14, v15, (struct FlipManagerTokenObject **)&Object);
  if ( v16 < 0 )
  {
    if ( v4 < 0 )
      return (unsigned int)v4;
    v4 = v16;
    goto LABEL_21;
  }
  v18 = (FlipManagerTokenObject *)Object;
  if ( v4 < 0 || (v4 = FlipManagerTokenObject::MarkPending((FlipManagerTokenObject *)Object), v4 < 0) )
  {
    FlipManagerTokenObject::GetSyncId(v18, &v22, v17);
    v5 = v22;
  }
  else
  {
    *(_DWORD *)p_dxgContext |= 4u;
    a3->Token.Flip.FenceValue = (UINT64)v18;
  }
  if ( (*(_DWORD *)p_dxgContext & 4) == 0 )
    ObfDereferenceObject(v18);
  if ( v4 < 0 )
  {
LABEL_21:
    if ( v5 )
    {
      v20 = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(unsigned __int64))(v20 + 64))(v5);
    }
  }
  return (unsigned int)v4;
}
