/*
 * XREFs of sub_180040B30 @ 0x180040B30
 * Callers:
 *     sub_180040B30 @ 0x180040B30 (sub_180040B30.c)
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 * Callees:
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_180040B30 @ 0x180040B30 (sub_180040B30.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180040B30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 j; // rbx

  v3 = *a3;
  if ( *a3 )
  {
    sub_18003D758(*a3);
    v7 = *(_QWORD **)(v3 + 384);
    for ( i = *(_QWORD **)(v3 + 376); i != v7; i += 2 )
    {
      if ( *(_BYTE *)(*i + 72LL) )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 48LL))(*i, a2);
    }
    v9 = *a3;
    sub_18003D718(*a3);
    v10 = *(_QWORD *)(v9 + 40);
    for ( j = *(_QWORD *)(v9 + 32); j != v10; j += 16LL )
      sub_180040B30(a1, a2, j);
  }
}
