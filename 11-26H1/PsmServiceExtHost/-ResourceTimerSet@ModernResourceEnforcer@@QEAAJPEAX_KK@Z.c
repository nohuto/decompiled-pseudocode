/*
 * XREFs of ?ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z @ 0x180065A98
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800272D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180062F94 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceEnforcer::ResourceTimerSet(
        ModernResourceEnforcer *this,
        void *a2,
        __int64 a3,
        unsigned int a4)
{
  return (*((__int64 (__fastcall **)(void *, __int64, _QWORD))this + 23))(a2, a3, a4);
}
