/*
 * XREFs of ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18022B3C0
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1801D1120 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18022B038 (-IsPowerSaverEnabled@CComposition@@QEBA_NXZ.c)
 */

void __fastcall CComposition::UpdateBatterySaverState(CComposition *this)
{
  __int64 v1; // rcx
  bool v2; // zf
  char v3; // dl
  char IsPowerSaverEnabled; // al
  __int64 v5; // rcx
  char v6; // r8

  CComposition::IsPowerSaverEnabled(g_pComposition);
  v2 = *(_DWORD *)(v1 + 6484) == 0;
  *(_BYTE *)(v1 + 6463) = v3;
  if ( !v2 )
  {
    IsPowerSaverEnabled = CComposition::IsPowerSaverEnabled((CComposition *)v1);
    if ( v6 != IsPowerSaverEnabled )
    {
      *(_BYTE *)(*(_QWORD *)(v5 + 616) + 749LL) = 1;
      CComposition::ScheduleCompositionPass(v5, 0, 0x40000u);
    }
  }
}
