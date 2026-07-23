/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x14063CA5C
 * Callers:
 *     RtlpHpLfhBucketCleanup @ 0x14063C62C (RtlpHpLfhBucketCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x14034B3E0 (RtlpHpLfhSubsegmentFree.c)
 */

__int64 __fastcall RtlpHpLfhOwnerCleanup(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (unsigned __int64)*a2 >> 1;
  v4 = (__int64 *)(a2 + 40);
  v6 = (__int64 *)(a2 + 24);
  v7 = a1[v3 + 56];
  result = *v4;
  if ( (__int64 *)*v4 != v4 )
  {
    v9 = (__int64 *)*((_QWORD *)a2 + 4);
    *v9 = result;
    *((_QWORD *)a2 + 4) = v4[1];
    *(_QWORD *)v4[1] = v6;
    result = *v4;
    *(_QWORD *)(*v4 + 8) = v9;
  }
  while ( 1 )
  {
    v10 = *v6;
    if ( (__int64 *)*v6 == v6 )
      break;
    if ( *(__int64 **)(v10 + 8) != v6 || (v11 = *(_QWORD *)v10, *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10) )
      __fastfail(3u);
    *v6 = v11;
    *(_QWORD *)(v11 + 8) = v6;
    if ( (*a2 & 1) == 0 && !*(_BYTE *)(v10 + 22) )
      --a2[1];
    *(_WORD *)(v10 + 32) = *(_WORD *)(v10 + 34);
    v12 = *(unsigned __int8 *)(v10 + 24);
    *(_BYTE *)(v10 + 22) = 3;
    *(_WORD *)(v10 + 8 * v12) = 1;
    result = RtlpHpLfhSubsegmentFree(a1, v10, v7);
  }
  return result;
}
