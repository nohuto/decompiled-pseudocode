/*
 * XREFs of ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18020B854
 * Callers:
 *     ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1801235A0 (-ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180123DDC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180125AD0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18014E468 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1801BD320 (-RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z @ 0x18020B83C (-ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRE.c)
 *     ?NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x180249690 (-NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18025834C (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180125BF0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1801C8EE8 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUIDXGIResource@@V?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801D746C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUIDXGIResource@@V-$com_ptr_t@VIRenderTarget.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::Unregister(CIndirectSwapchainRenderTarget *this)
{
  char *v2; // rsi
  __int64 *v3; // rbx
  __int64 **v4; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+48h] [rbp+10h] BYREF

  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( *((_QWORD *)this + 308) )
  {
    v10 = 0LL;
    v9 = 0;
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v10, &v9);
    (*(void (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 307) + 64LL))(
      *((_QWORD *)this + 307),
      v9,
      v10);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 308) + 16LL))(*((_QWORD *)this + 308));
    *((_QWORD *)this + 308) = 0LL;
  }
  v2 = (char *)this + 2400;
  v3 = (__int64 *)**((_QWORD **)this + 300);
  while ( !*((_BYTE *)v3 + 25) )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3[5] + 80LL))(
      v3[5],
      ((unsigned __int64)this + 2392) & -(__int64)(this != 0LL));
    v4 = (__int64 **)v3[2];
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25) && v3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v3 = i;
      v3 = i;
    }
    else
    {
      v3 = (__int64 *)v3[2];
      for ( j = *v4; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v3 = j;
    }
  }
  v7 = *(_QWORD **)v2;
  std::_Tree_val<std::_Tree_simple_types<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<IDXGIResource * const,wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 2400,
    (__int64)this + 2400,
    *(_QWORD *)(*(_QWORD *)v2 + 8LL));
  v7[1] = v7;
  *v7 = v7;
  v7[2] = v7;
  *((_QWORD *)this + 301) = 0LL;
  v8 = *((_QWORD *)this + 307);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 307) = 0LL;
  }
  *((_DWORD *)this + 612) = 0;
  *((_DWORD *)this + 610) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 2416, 1u);
  CRenderTarget::RemoveFromRenderTargetManager(this);
}
