/*
 * XREFs of ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180261068
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18021A20C (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1800E08D0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  const __m128i **ProjectedShadowReceivers; // rdi
  unsigned __int64 v4; // r10
  __m128i *trivial_8; // rax
  __int64 v6; // rdx

  if ( (**((_DWORD **)this + 28) & 0x80000) != 0 )
  {
    ProjectedShadowReceivers = (const __m128i **)CVisual::GetProjectedShadowReceivers((__int64)this);
    trivial_8 = (__m128i *)_std_find_trivial_8(*ProjectedShadowReceivers, ProjectedShadowReceivers[1], v4);
    v6 = (__int64)ProjectedShadowReceivers[1];
    if ( trivial_8 != (__m128i *)v6 )
    {
      std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
        &trivial_8->m128i_u64[1],
        v6,
        trivial_8);
      ProjectedShadowReceivers[1] = (const __m128i *)((char *)ProjectedShadowReceivers[1] - 8);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 272LL))(this) )
      CVisual::PropagateFlags((__int64)this, 5u);
  }
}
