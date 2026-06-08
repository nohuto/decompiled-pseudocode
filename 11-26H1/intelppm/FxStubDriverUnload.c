/*
 * XREFs of FxStubDriverUnload @ 0x1400080B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140007EB4 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_140019118 && qword_140019118 != FxStubDriverUnload )
    qword_140019118();
  FxStubDriverUnloadCommon(a1);
}
