/*
 * XREFs of ArbTestAllocation @ 0x1400D0DC0
 * Callers:
 *     IrqArbTestAllocation @ 0x1400C3590 (IrqArbTestAllocation.c)
 * Callees:
 *     RtlFreeRangeList_0 @ 0x140055D1F (RtlFreeRangeList_0.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ArbSortArbitrationList @ 0x1400D0F10 (ArbSortArbitrationList.c)
 *     ArbpBuildAllocationStack @ 0x1400D0F6C (ArbpBuildAllocationStack.c)
 */

__int64 __fastcall ArbTestAllocation(__int64 a1, __int64 ***a2)
{
  __int64 **v2; // r8
  NTSTATUS v5; // eax
  int v6; // ebx
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 *i; // rsi
  unsigned __int64 j; // rbx
  int v11; // eax
  __int64 result; // rax

  v2 = a2[2];
  if ( v2 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **, _QWORD))(a1 + 280))(
           a1,
           *((unsigned int *)a2 + 2),
           v2,
           *(_QWORD *)(a1 + 48));
  else
    v5 = RtlCopyRangeList(*(PRTL_RANGE_LIST *)(a1 + 48), *(PRTL_RANGE_LIST *)(a1 + 40));
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_20;
  v7 = 0;
  v8 = 0LL;
  for ( i = **a2; *a2 != (__int64 **)i; i = (__int64 *)*i )
  {
    ++v7;
    if ( !a2[2] && v8 != i[4] )
    {
      v8 = i[4];
      v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 288))(a1);
      if ( v6 < 0 )
        goto LABEL_20;
    }
    i[6] = 0LL;
    if ( *(_QWORD *)(a1 + 144) )
    {
      for ( j = i[3]; j < i[3] + 32 * (unsigned __int64)*((unsigned int *)i + 4); j += 32LL )
      {
        v11 = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 144))(j);
        if ( v11 < 0 )
        {
          v6 = -1073741438;
          goto LABEL_20;
        }
        i[6] += v11;
      }
    }
  }
  v6 = ArbSortArbitrationList();
  if ( v6 < 0
    || (v6 = ArbpBuildAllocationStack(a1, *a2, v7), v6 < 0)
    || (result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 232))(a1, *(_QWORD *)(a1 + 112)),
        v6 = result,
        (int)result < 0) )
  {
LABEL_20:
    RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
    return (unsigned int)v6;
  }
  return result;
}
