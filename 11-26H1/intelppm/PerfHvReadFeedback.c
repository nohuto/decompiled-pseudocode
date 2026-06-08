/*
 * XREFs of PerfHvReadFeedback @ 0x140002140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfHvReadFeedback(unsigned int *a1, char a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v11[0] = 0LL;
  v12 = 0LL;
  if ( KeGetPcr()->Prcb.Number == a1[1] )
    HvlUpdatePerformanceStateCountersForLp(a1[2]);
  HvlReadPerformanceStateCounters(a1[2], *a1, &v12, v11);
  if ( a2 )
  {
    v9 = v12;
    v10 = v11[0];
    *a3 = v12 - *((_QWORD *)a1 + 3);
    result = v10 - *((_QWORD *)a1 + 2);
    *a4 = result;
    *((_QWORD *)a1 + 3) = v9;
    *((_QWORD *)a1 + 2) = v10;
  }
  else
  {
    *a3 = v12;
    result = v11[0];
    *a4 = v11[0];
  }
  return result;
}
