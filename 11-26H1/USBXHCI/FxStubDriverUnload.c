/*
 * XREFs of FxStubDriverUnload @ 0x1400568C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1400566BC (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_14006BBD8 && qword_14006BBD8 != FxStubDriverUnload )
    qword_14006BBD8();
  FxStubDriverUnloadCommon(a1);
}
