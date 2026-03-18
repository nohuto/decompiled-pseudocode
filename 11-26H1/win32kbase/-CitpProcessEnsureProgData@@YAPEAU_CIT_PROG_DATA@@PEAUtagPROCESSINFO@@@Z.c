/*
 * XREFs of ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1401BE150
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400D5DD4 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x140249BB0 (-CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x140249CA4 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessEnsureProgData(struct _CIT_PROCESS **a1, int a2, int a3)
{
  struct _CIT_PROG_DATA *ProgDataFromProcessContext; // rbx
  __int64 v5; // rdx
  struct _CIT_IMPACT_CONTEXT *v6; // rsi
  int v7; // ecx
  int v8; // r8d
  struct _CIT_PROCESS *v9; // rcx
  struct _CIT_PROCESS *v10; // rax
  struct _CIT_PROCESS *v11; // rdi
  int v13; // [rsp+38h] [rbp+10h]

  ProgDataFromProcessContext = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18952);
  v6 = *(struct _CIT_IMPACT_CONTEXT **)(v5 + 32);
  if ( *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v7, v5, v8) + 18952) + 25LL) )
  {
    if ( !CitpProcessInfoIsValid(a1[114]) || (ProgDataFromProcessContext = CitpGetProgDataFromProcessContext(v9)) == 0LL )
    {
      v10 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a1);
      v11 = v10;
      if ( v10 )
      {
        if ( *((_QWORD *)v10 + 6) )
          ProgDataFromProcessContext = CitpProgDataEnsure(v6, (struct _CIT_PROCESS *)((char *)v10 + 48));
        if ( ProgDataFromProcessContext )
        {
          LOWORD(v13) = -21845 * (((__int64)ProgDataFromProcessContext - *(_QWORD *)v6) >> 5);
          HIWORD(v13) = *((_WORD *)ProgDataFromProcessContext + 16);
          *((_DWORD *)v11 + 10) = v13;
        }
      }
    }
  }
  return ProgDataFromProcessContext;
}
