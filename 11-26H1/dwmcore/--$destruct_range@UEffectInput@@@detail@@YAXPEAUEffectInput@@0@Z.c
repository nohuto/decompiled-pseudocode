/*
 * XREFs of ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x18001A27C
 * Callers:
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x18001A0DC (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1801A3618 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 *     ??1_Reallocation_guard@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA@XZ @ 0x18028839C (--1_Reallocation_guard@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<EffectInput>(CDrawListBitmap *this, CDrawListBitmap *a2)
{
  CDrawListBitmap *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CDrawListBitmap::~CDrawListBitmap(v3);
      v3 = (CDrawListBitmap *)((char *)v3 + 112);
    }
    while ( v3 != a2 );
  }
}
