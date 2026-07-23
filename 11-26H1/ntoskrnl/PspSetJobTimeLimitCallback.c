/*
 * XREFs of PspSetJobTimeLimitCallback @ 0x1407FF550
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryRuntimeProcess @ 0x140A69970 (PsQueryRuntimeProcess.c)
 */

__int64 __fastcall PspSetJobTimeLimitCallback(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 496);
  v5 = 0LL;
  if ( (v2 & 2) == 0 )
  {
    PsQueryRuntimeProcess(a1, &v5);
    *a2 += v5 * KeMaximumIncrement;
  }
  return 0LL;
}
