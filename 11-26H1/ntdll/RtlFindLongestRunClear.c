/*
 * XREFs of RtlFindLongestRunClear @ 0x1800D7920
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearRuns @ 0x1800D7970 (RtlFindClearRuns.c)
 */

__int64 __fastcall RtlFindLongestRunClear(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+44h] [rbp+1Ch]

  LOBYTE(a4) = 1;
  if ( (unsigned int)RtlFindClearRuns(a1, &v6, 1LL, a4) == 1 )
  {
    *a2 = v6;
    return v7;
  }
  else
  {
    *a2 = 0;
    return 0LL;
  }
}
