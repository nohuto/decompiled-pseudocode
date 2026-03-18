/*
 * XREFs of ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x1802085F4
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x180208644 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void CProcessAttributionReporter::Initialize(void)
{
  CProcessAttributionReporter *v0; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v0 = (CProcessAttributionReporter *)MIDL_user_allocate(0x80uLL);
  if ( !v0 )
  {
    qword_1803DEA58 = 0LL;
LABEL_5:
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  qword_1803DEA58 = CProcessAttributionReporter::CProcessAttributionReporter(v0);
  if ( !qword_1803DEA58 )
    goto LABEL_5;
}
