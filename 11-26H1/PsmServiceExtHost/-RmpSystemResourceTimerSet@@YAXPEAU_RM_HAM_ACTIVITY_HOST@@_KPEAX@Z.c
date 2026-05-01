/*
 * XREFs of ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180062F94
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     ?ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z @ 0x180065A98 (-ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpSystemResourceTimerSet(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 a2, void *a3)
{
  __int64 v4; // r9
  ModernResourceEnforcer *v6; // rsi

  v4 = 48LL;
  if ( a1 )
    v4 = (__int64)a1 - 8;
  v6 = *(ModernResourceEnforcer **)(*(_QWORD *)v4 + 40LL);
  if ( (*((int (__fastcall **)(void *, unsigned __int64, _QWORD))v6 + 23))(a3, a2, 0LL) < 0 )
    ModernResourceEnforcer::ResourceTimerSet(v6, a3, a2, 1u);
}
