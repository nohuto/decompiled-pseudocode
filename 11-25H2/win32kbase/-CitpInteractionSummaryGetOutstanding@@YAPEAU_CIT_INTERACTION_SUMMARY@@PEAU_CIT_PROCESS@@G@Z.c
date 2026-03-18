/*
 * XREFs of ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x14023FEB0
 * Callers:
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x14007F3F0 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 * Callees:
 *     ?CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z @ 0x14023FE48 (-CitpGetProgDataFromProcessContext@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_PROCESS@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryGetOutstanding(struct _CIT_PROCESS *a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  struct _CIT_PROG_DATA *ProgDataFromProcessContext; // rax
  struct _CIT_INTERACTION_SUMMARY *result; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912);
  v4 = *(_DWORD *)(v3 + 12);
  if ( (v4 & 1) == 0 )
    return 0LL;
  if ( (v4 & 2) != 0 )
  {
    ProgDataFromProcessContext = CitpGetProgDataFromProcessContext(a1, v3);
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
