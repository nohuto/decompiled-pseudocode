/*
 * XREFs of ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18012AA60
 * Callers:
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180093F74 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18010B84C (-DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x180129018 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 *     ?IsCompositionThread@@YA_NXZ @ 0x18012AA34 (-IsCompositionThread@@YA_NXZ.c)
 *     ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18014D7E4 (-IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::IsCompositionThread(CComposition *this)
{
  return GetCurrentThreadId() == CComposition::s_compositionThreadId;
}
