/*
 * XREFs of PspValidateJobAssignmentCpuPartition @ 0x140B11C14
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspValidateJobAssignmentCpuPartition(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a4 == 6 )
    return 1;
  if ( a4 == 7 )
  {
LABEL_6:
    v7 = *(_QWORD *)(a1 + 1832);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a2 + 1832);
      if ( v8 )
        return v7 == v8;
    }
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 1832);
  if ( !v5 || (v9 = *(_QWORD *)(a3 + 2056)) == 0 || v9 == v5 )
  {
    if ( ((a4 - 4) & 0xFFFFFFFC) != 0 )
      return 1;
    goto LABEL_6;
  }
  return 0;
}
