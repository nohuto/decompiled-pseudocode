/*
 * XREFs of ?s_HitTestRequest@CGlobalMit@@SAHPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180191E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CGlobalMit::s_HitTestRequest(struct _InputHitTestRequest *a1, struct _InputHitTestResult *a2)
{
  return (*(int (__fastcall **)(struct ISystemInputHost *, struct _InputHitTestRequest *, struct _InputHitTestResult *))(*(_QWORD *)CMit::s_pSystemInputHost + 24LL))(
           CMit::s_pSystemInputHost,
           a1,
           a2) >= 0;
}
