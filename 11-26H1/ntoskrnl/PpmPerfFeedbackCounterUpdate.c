/*
 * XREFs of PpmPerfFeedbackCounterUpdate @ 0x140608FD8
 * Callers:
 *     PpmBeginActiveTimeAccumulation @ 0x1402F9AE4 (PpmBeginActiveTimeAccumulation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterUpdate(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  v9 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v8 = 0;
  if ( !*(_BYTE *)(a1 + 33) )
    return guard_dispatch_icall_no_overrides(v4, &v8);
  guard_dispatch_icall_no_overrides(v4, 0LL);
  result = v9;
  if ( a2 )
  {
    if ( a3 )
    {
      *a2 = v9;
      *a3 = 0LL;
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
