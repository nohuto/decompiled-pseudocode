/*
 * XREFs of ?ContextMenuInvoked@CGridTelemetryController@@UEAAXPEAUISwitchItem@@I@Z @ 0x1804C4AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SwitchItemClosed@AEA_K@MultitaskingViewTelemetry@@SAXAEA_K@Z @ 0x1804C4944 (--$SwitchItemClosed@AEA_K@MultitaskingViewTelemetry@@SAXAEA_K@Z.c)
 *     ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x1804C4E30 (-_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGridTelemetryController::ContextMenuInvoked(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        unsigned int a3)
{
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v6 = 0LL;
    if ( a3 == 13027 && CGridTelemetryController::_GetIndexOfItem(this, a2, &v6) >= 0 )
      MultitaskingViewTelemetry::SwitchItemClosed<unsigned __int64 &>((int *)&v6);
    (*(void (__fastcall **)(_QWORD, struct ISwitchItem *, _QWORD))(**((_QWORD **)this + 2) + 88LL))(
      *((_QWORD *)this + 2),
      a2,
      a3);
  }
}
