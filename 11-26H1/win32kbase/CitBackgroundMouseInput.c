/*
 * XREFs of CitBackgroundMouseInput @ 0x1400D58C0
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14009C758 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1400D6678 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitBackgroundMouseInput(struct tagPROCESSINFO *a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rsi
  struct _CIT_PROCESS *v6; // rax
  struct tagPROCESSINFO **v7; // rdi
  unsigned __int64 v8; // rdx
  struct _CIT_INTERACTION_SUMMARY *v9; // rax

  if ( CitIsEnabled() )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3, v2, v4) + 18952) + 32LL);
    if ( *(struct tagPROCESSINFO **)(v5 + 120) != a1 )
    {
      v6 = CitpProcessEnsureContext(a1);
      v7 = (struct tagPROCESSINFO **)v6;
      if ( v6 )
      {
        v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)(v8 - *((_DWORD *)v6 + 22)) > 0x3E8 )
        {
          *((_DWORD *)v6 + 22) = v8;
          PsUpdateComponentPower(*(_QWORD *)a1, 9LL);
          v9 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v5, v7, 8);
          if ( v9 )
            CitpStatIncrement((unsigned __int16 *)v9 + 53, 1u);
        }
      }
    }
  }
}
