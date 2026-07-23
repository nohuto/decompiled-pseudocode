/*
 * XREFs of PpmPerfFeedbackCounterRead @ 0x1404648C0
 * Callers:
 *     PpmInstallFeedbackCounters @ 0x140605540 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterRead(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v6; // rcx
  char v9; // si
  __int64 v10; // rdx
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 40);
  v9 = a2;
  if ( *(_BYTE *)(a1 + 33) )
  {
    guard_dispatch_icall_no_overrides(v6, a2);
    if ( a4 )
    {
      if ( a5 )
      {
        *a4 = 0LL;
        *a5 = 0LL;
      }
    }
    if ( !v9 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( !v10 )
      {
LABEL_9:
        result = *(unsigned int *)(a1 + 24);
        *a3 = result;
        return result;
      }
      *(_DWORD *)(a1 + 24) = -*(_QWORD *)(a1 + 8) * (unsigned __int64)*(unsigned int *)(a1 + 36) / -v10;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_9;
  }
  return guard_dispatch_icall_no_overrides(v6, a3);
}
