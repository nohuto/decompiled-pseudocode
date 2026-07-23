/*
 * XREFs of MiCloneVadTree @ 0x140A075D8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 */

__int64 __fastcall MiCloneVadTree(const __m128i *a1)
{
  int v1; // esi
  _QWORD *v3; // rbx
  _QWORD *i; // rdx
  _QWORD **v5; // rcx
  __int64 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *j; // rcx
  __int64 v9; // r8

  v1 = 0;
  v3 = 0LL;
  for ( i = *(_QWORD **)(a1->m128i_i64[1] + 1368); i; i = (_QWORD *)*i )
    v3 = i;
  while ( v3 )
  {
    v5 = (_QWORD **)v3[1];
    v6 = (__int64)v3;
    v7 = v3;
    if ( v5 )
    {
      v3 = (_QWORD *)v3[1];
      for ( j = *v5; j; j = (_QWORD *)*j )
        v3 = j;
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == v7 )
          break;
        v7 = v3;
      }
    }
    MiLocateAddress((*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12);
    if ( (*(unsigned int *)(v6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32)) < 0x7FFFFFFFDLL
      && !MiIsVadLargePrivate(v6) )
    {
      a1[16].m128i_i64[1] = v9;
      a1[17].m128i_i64[0] = v6;
      v1 = MiCloneVad(a1);
      if ( v1 < 0 )
        break;
    }
  }
  return (unsigned int)v1;
}
