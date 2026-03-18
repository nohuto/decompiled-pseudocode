/*
 * XREFs of ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x140249C1C
 * Callers:
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400D7A74 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 * Callees:
 *     ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x140249BB0 (-CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryGetOutstanding(
        struct _CIT_PROCESS *a1,
        int a2,
        int a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // eax
  struct _CIT_PROG_DATA *ProgDataFromProcessContext; // rax
  struct _CIT_INTERACTION_SUMMARY *result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18952);
  v6 = *(_DWORD *)(v4 + 12);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (v6 & 2) != 0 )
  {
    ProgDataFromProcessContext = CitpGetProgDataFromProcessContext(a1, v4, v5);
    if ( !ProgDataFromProcessContext )
      return 0LL;
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)ProgDataFromProcessContext + 11);
  }
  else
  {
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)a1 + 4);
  }
  if ( result && *(struct _CIT_INTERACTION_SUMMARY **)result != result )
  {
    *((_WORD *)result + 57) |= 0x10u;
    return result;
  }
  return 0LL;
}
