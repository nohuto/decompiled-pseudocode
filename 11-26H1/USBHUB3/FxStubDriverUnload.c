/*
 * XREFs of FxStubDriverUnload @ 0x140042FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140042CE0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void FxStubDriverUnload()
{
  if ( qword_140070CD8 && qword_140070CD8 != FxStubDriverUnload )
    qword_140070CD8();
  FxStubDriverUnloadCommon();
}
