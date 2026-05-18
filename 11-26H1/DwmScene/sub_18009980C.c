/*
 * XREFs of sub_18009980C @ 0x18009980C
 * Callers:
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_180099624 @ 0x180099624 (sub_180099624.c)
 *     sub_1800996C0 @ 0x1800996C0 (sub_1800996C0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009980C(__int128 *a1)
{
  __int128 *v2; // r8
  __int64 v3; // rcx
  __int128 v4; // rcx

  v2 = a1 + 1;
  if ( *((_QWORD *)a1 + 2) )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( v3 && sub_1800128EC(v3) )
      v4 = *a1;
    else
      v4 = 0LL;
    if ( (_QWORD)v4 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v4 + 8LL))(v4, v2);
    if ( *((_QWORD *)&v4 + 1) )
      sub_180010EC8(*((__int64 *)&v4 + 1));
  }
}
