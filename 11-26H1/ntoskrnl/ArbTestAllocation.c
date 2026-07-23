/*
 * XREFs of ArbTestAllocation @ 0x14078C610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ArbpBuildAllocationStack @ 0x14078C794 (ArbpBuildAllocationStack.c)
 *     RtlCopyRangeList @ 0x140AE2A90 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140AE2C50 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbTestAllocation(_QWORD *a1, __int64 ***a2)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ebx
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 *i; // rsi
  __int64 **v10; // r8
  unsigned __int64 j; // rbx
  int v12; // eax
  __int64 *v13; // rdx
  char v14; // cl
  __int64 *v15; // r9
  __int64 **v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax

  if ( a2[2] )
    v4 = guard_dispatch_icall_no_overrides((__int64)a1, *((unsigned int *)a2 + 2));
  else
    v4 = RtlCopyRangeList(a1[6], a1[5]);
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_25;
  v7 = 0;
  v8 = 0LL;
  for ( i = **a2; ; i = (__int64 *)*i )
  {
    v10 = *a2;
    if ( *a2 == (__int64 **)i )
      break;
    ++v7;
    if ( !a2[2] )
    {
      v5 = i[4];
      if ( v8 != v5 )
      {
        v8 = i[4];
        v6 = guard_dispatch_icall_no_overrides((__int64)a1, v5);
        if ( v6 < 0 )
          goto LABEL_25;
      }
    }
    i[6] = 0LL;
    if ( a1[18] )
    {
      for ( j = i[3]; j < i[3] + 32 * (unsigned __int64)*((unsigned int *)i + 4); j += 32LL )
      {
        v12 = guard_dispatch_icall_no_overrides(j, v5);
        if ( v12 < 0 )
        {
          v6 = -1073741438;
          goto LABEL_25;
        }
        i[6] += v12;
      }
    }
  }
  do
  {
    v13 = *v10;
    v14 = 1;
    if ( *v10 == (__int64 *)v10 )
      break;
    do
    {
      v15 = (__int64 *)*v13;
      if ( (__int64 **)*v13 == v10 )
        break;
      if ( v13[6] > v15[6] )
      {
        v16 = (__int64 **)v13[1];
        v17 = *v15;
        *v16 = v15;
        *(_QWORD *)(v17 + 8) = v13;
        *v13 = v17;
        v13[1] = (__int64)v15;
        v15[1] = (__int64)v16;
        v14 = 0;
        *v15 = (__int64)v13;
      }
      v13 = (__int64 *)*v13;
    }
    while ( v13 != (__int64 *)v10 );
  }
  while ( !v14 );
  v6 = ArbpBuildAllocationStack(a1, *a2, v7);
  if ( v6 < 0 || (result = guard_dispatch_icall_no_overrides((__int64)a1, a1[14]), v6 = result, (int)result < 0) )
  {
LABEL_25:
    RtlFreeRangeList(a1[6]);
    return (unsigned int)v6;
  }
  return result;
}
