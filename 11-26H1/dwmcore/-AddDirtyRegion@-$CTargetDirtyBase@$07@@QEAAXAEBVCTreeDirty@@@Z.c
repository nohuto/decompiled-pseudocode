/*
 * XREFs of ?AddDirtyRegion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x18005571C
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800557B0 (-AddDirtyRects@-$CTargetDirtyBase@$07@@QEAAXAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::AddDirtyRegion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( !*(_BYTE *)(a1 + 1872) )
  {
    if ( *(_BYTE *)(a2 + 2324) )
    {
      v5 = 1LL;
      v6 = a2 + 2308;
      if ( a2 == -2308 )
        goto LABEL_7;
    }
    else
    {
      v3 = a2 + 20;
      gsl::details::extent_type<-1>::extent_type<-1>(&v5, *(unsigned int *)(a2 + 16));
      v6 = v3;
      if ( v5 == -1 || !v3 && v5 )
      {
LABEL_7:
        ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(a1, a2);
        __debugbreak();
      }
    }
    return CTargetDirtyBase<8>::AddDirtyRects(a1, &v5);
  }
  return result;
}
