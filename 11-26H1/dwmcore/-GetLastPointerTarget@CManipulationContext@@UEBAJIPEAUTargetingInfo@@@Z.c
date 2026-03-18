/*
 * XREFs of ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x1800AC3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CManipulationContext::GetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  int v4; // ebx
  __int64 i; // r9
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = 0;
  *(_DWORD *)a3 = 0;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)a3 + 1);
  for ( i = 0LL; i < *((int *)this + 24); ++i )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 10) + 4 * i) == a2 )
    {
      if ( v4 != -1 )
      {
        v8 = *((_QWORD *)this + 11);
        v9 = 16LL * v4;
        *(_DWORD *)a3 = *(_DWORD *)(v9 + v8);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)a3 + 1, (_QWORD *)(v9 + v8 + 8));
      }
      return 0LL;
    }
    ++v4;
  }
  return 0LL;
}
