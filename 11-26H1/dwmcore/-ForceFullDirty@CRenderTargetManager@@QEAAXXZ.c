/*
 * XREFs of ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x1801C52B8
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ?OnForceRender@CChannelContext@@QEAAXXZ @ 0x1801C5278 (-OnForceRender@CChannelContext@@QEAAXXZ.c)
 *     ?OnReevaluateMPOCapabilities@CChannelContext@@QEAAXXZ @ 0x1801C5298 (-OnReevaluateMPOCapabilities@CChannelContext@@QEAAXXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1801CDF48 (-Partition_SwitchRemotingMode@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x18022A958 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18022B478 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 *     ?OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ @ 0x18022F5CC (-OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::ForceFullDirty(CRenderTargetManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi

  *((_BYTE *)this + 744) = 1;
  v2 = *((_QWORD *)this + 3);
  v3 = *((_QWORD *)this + 4);
  while ( v2 != v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v2 + 8LL) + 48LL))(*(_QWORD *)v2 + 8LL);
    v2 += 8LL;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 10);
  v5 = (_QWORD *)*((_QWORD *)this + 11);
  while ( v4 != v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 48LL))(*v4);
    ++v4;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
}
