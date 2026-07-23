/*
 * XREFs of MxEmptyDepletedList @ 0x140CFCAFC
 * Callers:
 *     MxCreatePfnsForPfns @ 0x140CFC488 (MxCreatePfnsForPfns.c)
 * Callees:
 *     MxCreatePfnsForDescriptor @ 0x140CFC444 (MxCreatePfnsForDescriptor.c)
 */

__int64 __fastcall MxEmptyDepletedList(unsigned int a1)
{
  __int64 v1; // rcx
  __int64 *v2; // rsi
  __int64 *i; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 **v7; // rax

  v1 = 250LL * a1;
  v2 = &MxBootState[v1 + 12];
  for ( i = &MxBootState[v1 + 14]; ; i[1] = (__int64)v4 )
  {
    v4 = (__int64 *)*v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( !(unsigned int)MxCreatePfnsForDescriptor(*v2) )
      return 0LL;
    v5 = *v4;
    if ( *(__int64 **)(*v4 + 8) != v4
      || (v6 = (__int64 **)v4[1], *v6 != v4)
      || (*v6 = (__int64 *)v5, *(_QWORD *)(v5 + 8) = v6, v7 = (__int64 **)i[1], *v7 != i) )
    {
      __fastfail(3u);
    }
    *v4 = (__int64)i;
    v4[1] = (__int64)v7;
    *v7 = v4;
  }
  return 1LL;
}
