/*
 * XREFs of FxStubDriverUnload @ 0x1400050E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140004EE8 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_140015548 && qword_140015548 != FxStubDriverUnload )
    qword_140015548();
  FxStubDriverUnloadCommon(a1);
}
