/*
 * XREFs of ?ClearBorderMode@CVisual@@QEAAXXZ @ 0x180074F78
 * Callers:
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180011894 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearBorderMode(CVisual *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 34) != -1 )
  {
    v1 = *(_QWORD *)this;
    *((_DWORD *)this + 34) = -1;
    (*(void (__fastcall **)(CVisual *, __int64))(v1 + 24))(this, 128LL);
  }
}
