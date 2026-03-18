/*
 * XREFs of ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103708
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140102FA0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1401037E4 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  size_t *v3; // rbx
  DirectComposition::CInteractionTrackerMarshaler *v4; // rsi
  int i; // edi
  int InertiaModifierMarshalerFlag; // r14d
  char result; // al
  int v8; // ebp
  unsigned int v9; // ebp
  __int64 v10; // rax
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = (size_t *)((char *)this + 296);
  v4 = this;
  for ( i = 0; i < 4; ++i )
  {
    InertiaModifierMarshalerFlag = DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                     this,
                                     (unsigned int)i);
    if ( (InertiaModifierMarshalerFlag & *((_DWORD *)v4 + 4)) == 0 )
    {
      v8 = *(_DWORD *)v3;
      v11 = 0LL;
      v9 = v8 + 24;
      result = DirectComposition::CBatch::EnsureBatchBuffer(a2, v9, &v11);
      if ( !result )
        return result;
      this = (DirectComposition::CInteractionTrackerMarshaler *)v11;
      *(_DWORD *)v11 = v9;
      *(_OWORD *)((char *)this + 4) = 0LL;
      *((_DWORD *)this + 5) = 0;
      *((_DWORD *)this + 1) = 189;
      *((_DWORD *)this + 2) = *((_DWORD *)v4 + 8);
      *((_DWORD *)this + 3) = i;
      v10 = *(v3 - 8);
      if ( v10 )
        LODWORD(v10) = *(_DWORD *)(v10 + 32);
      *((_DWORD *)this + 4) = v10;
      *((_DWORD *)this + 5) = *(_DWORD *)v3;
      if ( *v3 )
        memmove((char *)this + 24, (const void *)*(v3 - 4), *v3);
      *((_DWORD *)v4 + 4) |= InertiaModifierMarshalerFlag;
    }
    ++v3;
  }
  return 1;
}
