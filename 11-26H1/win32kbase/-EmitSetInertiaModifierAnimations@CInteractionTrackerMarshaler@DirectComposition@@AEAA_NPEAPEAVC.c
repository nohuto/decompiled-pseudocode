/*
 * XREFs of ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140146BAC
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140145F30 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x140146C84 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  size_t *v3; // rbx
  DirectComposition::CInteractionTrackerMarshaler *v4; // rsi
  int i; // edi
  int InertiaModifierMarshalerFlag; // ebp
  char result; // al
  unsigned int v8; // r14d
  __int64 v9; // rax
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = (size_t *)((char *)this + 312);
  v4 = this;
  for ( i = 0; i < 4; ++i )
  {
    InertiaModifierMarshalerFlag = DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                     this,
                                     (unsigned int)i);
    if ( (InertiaModifierMarshalerFlag & *((_DWORD *)v4 + 4)) == 0 )
    {
      v8 = *(_DWORD *)v3 + 20;
      v10 = 0LL;
      result = DirectComposition::CBatch::EnsureBatchBuffer(a2, v8, &v10);
      if ( !result )
        return result;
      this = (DirectComposition::CInteractionTrackerMarshaler *)v10;
      *(_DWORD *)v10 = v8;
      *(_OWORD *)((char *)this + 4) = 0LL;
      *((_DWORD *)this + 1) = 126;
      *((_DWORD *)this + 2) = *((_DWORD *)v4 + 8);
      *((_DWORD *)this + 3) = i;
      v9 = *(v3 - 8);
      if ( v9 )
        LODWORD(v9) = *(_DWORD *)(v9 + 32);
      *((_DWORD *)this + 4) = v9;
      if ( *v3 )
        memmove((char *)this + 20, (const void *)*(v3 - 4), *v3);
      *((_DWORD *)v4 + 4) |= InertiaModifierMarshalerFlag;
    }
    ++v3;
  }
  return 1;
}
