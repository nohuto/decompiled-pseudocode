/*
 * XREFs of ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x140249BB0
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1401BE150 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x140249C1C (-CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z.c)
 * Callees:
 *     <none>
 */

struct _CIT_PROG_DATA *__fastcall CitpGetProgDataFromProcessContext(struct _CIT_PROCESS *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int16 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = *((_WORD *)a1 + 21);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 18952) + 32LL);
    v8 = *((unsigned __int16 *)a1 + 20);
    if ( (unsigned int)v8 < *(_DWORD *)(v7 + 56) )
    {
      v9 = 96 * v8 + *(_QWORD *)v7;
      if ( *(_WORD *)(v9 + 32) == v5 )
      {
        if ( *(_QWORD *)(v9 + 56) != *((_QWORD *)a1 + 8) )
          return 0LL;
        return (struct _CIT_PROG_DATA *)v9;
      }
    }
  }
  return (struct _CIT_PROG_DATA *)v6;
}
