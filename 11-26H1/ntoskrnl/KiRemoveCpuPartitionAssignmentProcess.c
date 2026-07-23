/*
 * XREFs of KiRemoveCpuPartitionAssignmentProcess @ 0x14045CA64
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14045C928 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F5FA0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiRemoveCpuPartitionAssignmentProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r11
  __int64 v9; // r11
  _QWORD *v10; // r9
  _QWORD *v11; // r9

  v2 = (_QWORD *)(a1 + 432);
  result = *(_QWORD **)(a1 + 432);
  while ( result )
  {
    v5 = result;
    if ( result == v2 )
      break;
    result = (_QWORD *)*result;
    v6 = v5 - 2;
    v7 = *(v5 - 2);
    if ( *(_QWORD **)(v7 + 8) != v5 - 2 )
      goto LABEL_10;
    v8 = (_QWORD *)*(v5 - 1);
    if ( (_QWORD *)*v8 != v6
      || (*v8 = v7, *(_QWORD *)(v7 + 8) = v8, v9 = *v5, *(_QWORD **)(*v5 + 8LL) != v5)
      || (v10 = (_QWORD *)v5[1], (_QWORD *)*v10 != v5)
      || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = *(_QWORD **)(a2 + 8), *v11 != a2) )
    {
LABEL_10:
      __fastfail(3u);
    }
    *v6 = a2;
    *(v5 - 1) = v11;
    *v11 = v6;
    *(_QWORD *)(a2 + 8) = v6;
  }
  return result;
}
