/*
 * XREFs of ?GetCurrentState@CNaturalAnimationScalarForceAdapter@@UEBA?BUIntegrationState@@XZ @ 0x18028ED40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ @ 0x18028EE88 (-GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x18028EEC8 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapter::GetCurrentState(
        CNaturalAnimationScalarForceAdapter *a1,
        __int64 a2)
{
  CNaturalAnimation *Owner; // rbx
  int v5; // ecx
  __int128 v6; // xmm0
  int v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CVector3Force *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  Owner = CNaturalAnimationScalarForceAdapter::GetOwner(a1);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v10);
  CNaturalAnimation::GetVector3Force(Owner, &v10);
  v5 = *((_DWORD *)a1 + 4);
  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v5 )
  {
    if ( v5 != 1 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v6 = *((_OWORD *)v10 + 6);
    v7 = *((_DWORD *)v10 + 28);
  }
  else
  {
    v6 = *(_OWORD *)((char *)v10 + 28);
    v7 = *((_DWORD *)v10 + 11);
  }
  *(_OWORD *)a2 = v6;
  *(_DWORD *)(a2 + 16) = v7;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v10);
  return a2;
}
