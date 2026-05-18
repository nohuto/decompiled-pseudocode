/*
 * XREFs of sub_18006EFE8 @ 0x18006EFE8
 * Callers:
 *     sub_180061720 @ 0x180061720 (sub_180061720.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     unknown_libname_7 @ 0x18003A064 (unknown_libname_7.c)
 */

void __fastcall sub_18006EFE8(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v4; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *(__int64 **)(a1 + 40);
  v4 = *(__int64 **)(a1 + 48);
  if ( v2 != v4 )
  {
    while ( 1 )
    {
      v6 = v2 + 2;
      if ( *v2 == *a2 )
        break;
      v2 += 2;
      if ( v6 == v4 )
        goto LABEL_8;
    }
    unknown_libname_7(v6, v4, v2);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) - 8LL);
    if ( v7 )
      sub_180010EC8(v7);
    *(_QWORD *)(a1 + 48) -= 16LL;
  }
LABEL_8:
  v8 = a2[1];
  if ( v8 )
    sub_180010EC8(v8);
}
