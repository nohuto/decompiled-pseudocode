/*
 * XREFs of CitBackgroundMouseInput @ 0x14007D320
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1400B988C (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x14007D418 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x14007D830 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitBackgroundMouseInput(struct tagPROCESSINFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  struct _CIT_PROCESS *v5; // rdi
  unsigned __int64 v6; // rax
  struct _CIT_INTERACTION_SUMMARY *v7; // rax

  if ( CitIsEnabled() )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 18912) + 32LL);
    if ( *(struct tagPROCESSINFO **)(v4 + 120) != a1 )
    {
      v5 = CitpProcessEnsureContext(a1);
      if ( v5 )
      {
        v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)(v6 - *((_DWORD *)v5 + 22)) > 0x3E8 )
        {
          *((_DWORD *)v5 + 22) = v6;
          PsUpdateComponentPower(*(_QWORD *)a1, 9LL);
          v7 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v4, (struct tagPROCESSINFO **)v5, 8);
          if ( v7 )
            CitpStatIncrement((unsigned __int16 *)v7 + 53, 1u);
        }
      }
    }
  }
}
