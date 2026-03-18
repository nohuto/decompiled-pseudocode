/*
 * XREFs of ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x180055950
 * Callers:
 *     <none>
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180055A40 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18008C7A8 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::GetOcclusionContext(__int64 a1)
{
  CMILMatrix *v2; // rax
  __int64 v3; // rbx
  bool IsCurrent; // al
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8));
  v3 = 0LL;
  if ( CMILMatrix::Is2DAxisAlignedPreserving(v2) )
  {
    if ( *(_BYTE *)(a1 + 1873) )
    {
      if ( !*(_BYTE *)(a1 + 456) )
        CMergedRectBase<8>::Optimize(a1 + 16);
      gsl::details::extent_type<-1>::extent_type<-1>(v7, *(unsigned int *)(a1 + 16));
      v7[1] = a1 + 20;
      if ( v7[0] == -1LL || a1 == -20 && v7[0] )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      if ( (int)CTargetDirtyBase<8>::CalcOcclusion(a1, v7) >= 0 )
        return a1 + 472;
      return v3;
    }
    else
    {
      IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(a1 + 472));
      return v5 & -(__int64)IsCurrent;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 1873) = 0;
    return 0LL;
  }
}
