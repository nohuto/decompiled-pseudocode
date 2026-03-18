/*
 * XREFs of ??1NodeEffects@CDrawingContext@@QEAA@XZ @ 0x1801600C0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::NodeEffects::~NodeEffects(CDrawingContext::NodeEffects *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  if ( *((_BYTE *)this + 16) )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
    if ( v2 )
      (**v2)(v2, 1LL);
    *((_QWORD *)this + 1) = 0LL;
    *((_BYTE *)this + 16) = 0;
  }
  else
  {
    *((_QWORD *)this + 1) = 0LL;
    *((_BYTE *)this + 16) = 0;
  }
}
