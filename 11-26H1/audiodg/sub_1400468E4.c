/*
 * XREFs of sub_1400468E4 @ 0x1400468E4
 * Callers:
 *     sub_140040350 @ 0x140040350 (sub_140040350.c)
 * Callees:
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_140040E84 @ 0x140040E84 (sub_140040E84.c)
 */

__int64 sub_1400468E4()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = qword_1400E8328;
  v1 = 0LL;
  if ( qword_1400E8328 )
  {
    if ( !*(_QWORD *)(qword_1400E8328 + 8) )
    {
      v2 = *(_QWORD *)qword_1400E8328;
      v6 = 0LL;
      if ( (int)sub_14001E21C(v2, &v6) >= 0 && !*(_QWORD *)(v0 + 8) )
        *(_QWORD *)(v0 + 8) = v6;
    }
    v3 = (*(_QWORD *)(v0 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v0 + 8) != 0LL);
    if ( v3 )
    {
      v4 = sub_140040E84(v3 + 8);
      v1 = v4;
      if ( v4 )
      {
        if ( !*(_QWORD *)(v4 + 8) )
          *(_QWORD *)(v4 + 8) = v3 + 4;
      }
    }
  }
  return v1;
}
