/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x1800738C0
 * Callers:
 *     RtlpHpLfhBucketCleanup @ 0x180073830 (RtlpHpLfhBucketCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x180073998 (RtlpHpLfhSubsegmentFree.c)
 */

__int64 __fastcall RtlpHpLfhOwnerCleanup(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v3; // rax
  __int64 *v4; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = (unsigned __int64)*a2 >> 1;
  v4 = (__int64 *)(a2 + 40);
  v6 = a2 + 24;
  v7 = *(_QWORD *)(a1 + 8 * v3 + 448);
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
    v10 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v10[1] != v6 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v6 = v11;
    *(_QWORD *)(v11 + 8) = v6;
    if ( (*a2 & 1) == 0 && !*((_BYTE *)v10 + 22) )
      --a2[1];
    *((_WORD *)v10 + 16) = *((_WORD *)v10 + 17);
    v12 = *((unsigned __int8 *)v10 + 24);
    *((_BYTE *)v10 + 22) = 3;
    LOWORD(v10[v12]) = 1;
    result = RtlpHpLfhSubsegmentFree(a1, v10, v7);
  }
  return result;
}
