/*
 * XREFs of PspValidateJobAssignmentMemoryPartition @ 0x1407FFB30
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspValidateJobAssignmentMemoryPartition(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax

  if ( a4 == 4 )
  {
    if ( *(_QWORD *)(a1 + 1288) == a1 + 1288
      && !*(_QWORD *)(a1 + 1792)
      && *(_QWORD *)(a3 + 672)
      && *(_QWORD *)(*(_QWORD *)(a3 + 672) + 1792LL)
      && *(_QWORD *)(*(_QWORD *)(a3 + 672) + 1792LL) != -1LL
      && *(_QWORD *)(*(_QWORD *)(a3 + 672) + 1792LL) != *(_QWORD *)(a3 + 1880) )
    {
      return 0;
    }
LABEL_11:
    v4 = *(_QWORD *)(a1 + 1792);
    if ( v4 && v4 != -1 && *(_QWORD *)(a3 + 1880) != v4 && a3 != *(_QWORD *)(v4 + 120) )
      return 0;
    if ( ((a4 - 4) & 0xFFFFFFFC) != 0 )
      return 1;
    goto LABEL_17;
  }
  if ( a4 == 6 )
    return 1;
  if ( a4 != 7 )
    goto LABEL_11;
LABEL_17:
  if ( *(_QWORD *)(a1 + 1792) )
    return *(_QWORD *)(a2 + 1792) == 0LL;
  return 1;
}
