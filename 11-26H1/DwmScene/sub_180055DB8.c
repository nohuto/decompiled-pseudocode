/*
 * XREFs of sub_180055DB8 @ 0x180055DB8
 * Callers:
 *     sub_180058C70 @ 0x180058C70 (sub_180058C70.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180055DB8(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  _QWORD *v5; // rdi
  char v6; // si

  v2 = a1[1];
  v3 = *a1;
  if ( v2 - *a1 != a2[1] - *a2 )
    return 0;
  v5 = (_QWORD *)(*a2 + 16LL);
  v6 = 0;
  while ( v3 != v2 )
  {
    if ( *(_QWORD *)(v3 + 8) != *(v5 - 1)
      || *(_QWORD *)(v3 + 16) != *v5
      || *(_QWORD *)(v3 + 24) != v5[1]
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 32) + 16LL))(
            *(_QWORD *)(v3 + 32),
            v5[2]) )
    {
      return v6;
    }
    v3 += 48LL;
    v5 += 6;
  }
  return 1;
}
