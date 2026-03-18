/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x1800DF600
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1800E08D0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroup(CVisual *this)
{
  char v1; // bl
  CVisual *v2; // r10
  _QWORD *ProjectedShadowReceivers; // rax

  v1 = 0;
  v2 = this;
  if ( (**((_DWORD **)this + 28) & 0x80000) == 0
    || (ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(this),
        *ProjectedShadowReceivers == ProjectedShadowReceivers[1]) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v2 + 360LL))(v2) )
      return 1;
  }
  return v1;
}
