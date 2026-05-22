/*
 * XREFs of ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801B2FAC
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B2240 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B24F0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180182F08 (--1-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-$pa.c)
 *     ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x1801B1C58 (--0GestureState@MagnifierRecognizer@@QEAA@XZ.c)
 *     ??4GestureState@MagnifierRecognizer@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801B2BD8 (--4GestureState@MagnifierRecognizer@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall MagnifierRecognizer::Reset(MagnifierRecognizer *this, const struct MagnifierRecognizer::Thresholds *a2)
{
  MagnifierRecognizer::GestureState *v4; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v4 = MagnifierRecognizer::GestureState::GestureState((MagnifierRecognizer::GestureState *)&v5);
  MagnifierRecognizer::GestureState::operator=((__int64)this, (__int64)v4);
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>((void **)&v6);
  *((_OWORD *)this + 2) = *(_OWORD *)a2;
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 1);
}
