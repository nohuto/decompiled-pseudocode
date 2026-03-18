/*
 * XREFs of ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023FF10
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x14007D418 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x14007F3CC (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x14023FE48 (-CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x140240008 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessEnsureProgData(struct _CIT_PROCESS **a1, __int64 a2)
{
  struct _CIT_PROG_DATA *ProgDataFromProcessContext; // rbx
  __int64 v4; // rdx
  struct _CIT_IMPACT_CONTEXT *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct _CIT_PROCESS *v8; // rcx
  struct _CIT_PROCESS *v9; // rax
  struct _CIT_PROCESS *v10; // rdi
  struct _CIT_PROG_DATA *v11; // rax
  int v13; // [rsp+38h] [rbp+10h]

  ProgDataFromProcessContext = 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  v5 = *(struct _CIT_IMPACT_CONTEXT **)(v4 + 32);
  if ( *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v6, v4) + 18912) + 25LL) )
  {
    if ( !CitpProcessInfoIsValid(a1[114])
      || (ProgDataFromProcessContext = CitpGetProgDataFromProcessContext(v8, v7)) == 0LL )
    {
      v9 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a1);
      v10 = v9;
      if ( v9 )
      {
        if ( *((_QWORD *)v9 + 6) )
        {
          v11 = CitpProgDataEnsure(v5, (struct _CIT_PROCESS *)((char *)v9 + 48));
          ProgDataFromProcessContext = v11;
          if ( v11 )
          {
            LOWORD(v13) = -21845 * (((__int64)v11 - *(_QWORD *)v5) >> 5);
            HIWORD(v13) = *((_WORD *)v11 + 16);
            *((_DWORD *)v10 + 10) = v13;
          }
        }
      }
    }
  }
  return ProgDataFromProcessContext;
}
