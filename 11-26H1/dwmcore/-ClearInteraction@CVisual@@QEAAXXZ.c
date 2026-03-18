/*
 * XREFs of ?ClearInteraction@CVisual@@QEAAXXZ @ 0x180026B40
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E4D30 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearInteraction(CVisual *this)
{
  struct CInteraction *InteractionInternal; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rcx

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)InteractionInternal + 16LL))(InteractionInternal);
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v3 & 0x2000000) != 0 )
  {
    v4 = 0LL;
    *v3 &= ~0x2000000u;
    if ( v3[1] )
    {
      while ( *((_BYTE *)v3 + v4 + 8) != 7 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v3[1] )
          return;
      }
      *((_BYTE *)v3 + v4 + 8) = 0;
    }
  }
}
