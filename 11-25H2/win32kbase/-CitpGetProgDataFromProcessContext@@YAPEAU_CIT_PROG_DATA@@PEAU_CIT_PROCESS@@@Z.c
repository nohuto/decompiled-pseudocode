/*
 * XREFs of ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x14023FE48
 * Callers:
 *     ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x14023FEB0 (-CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023FF10 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct _CIT_PROG_DATA *__fastcall CitpGetProgDataFromProcessContext(struct _CIT_PROCESS *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int16 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *((_WORD *)a1 + 21);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 18912) + 32LL);
    v7 = *((unsigned __int16 *)a1 + 20);
    if ( (unsigned int)v7 < *(_DWORD *)(v6 + 56) )
    {
      v8 = *(_QWORD *)v6 + 96 * v7;
      if ( *(_WORD *)(v8 + 32) == v4 )
      {
        if ( *(_QWORD *)(v8 + 56) != *((_QWORD *)a1 + 8) )
          return 0LL;
        return (struct _CIT_PROG_DATA *)v8;
      }
    }
  }
  return (struct _CIT_PROG_DATA *)v5;
}
