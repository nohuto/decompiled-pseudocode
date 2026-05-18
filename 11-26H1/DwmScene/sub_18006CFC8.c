/*
 * XREFs of sub_18006CFC8 @ 0x18006CFC8
 * Callers:
 *     sub_18006CBE0 @ 0x18006CBE0 (sub_18006CBE0.c)
 *     sub_18006D0E4 @ 0x18006D0E4 (sub_18006D0E4.c)
 * Callees:
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_18006CFC8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // r12
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 i; // rbx
  __int64 v13; // rbx

  v5 = a3 - 1;
  v8 = (a3 - 1) >> 1;
  v9 = a2;
  for ( i = a2; i < v8; v9 = i )
  {
    i = 2LL - (a5(a1 + 16 * (2 * i + 2), a1 + 16 * (2 * i + 2) - 16) != 0) + 2 * i;
    sub_180011F5C((_QWORD *)(a1 + 16 * v9), (__int64 *)(a1 + 16 * i));
  }
  if ( i == v8 && (a3 & 1) == 0 )
  {
    sub_180011F5C((_QWORD *)(a1 + 16 * v9), (__int64 *)(16 * a3 + a1 - 16));
    v9 = v5;
  }
  if ( a2 < v9 )
  {
    do
    {
      v13 = (v9 - 1) >> 1;
      if ( !a5(a1 + 16 * v13, (__int64)a4) )
        break;
      sub_180011F5C((_QWORD *)(a1 + 16 * v9), (__int64 *)(a1 + 16 * ((v9 - 1) >> 1)));
      v9 = (v9 - 1) >> 1;
    }
    while ( a2 < v13 );
  }
  return sub_180011F5C((_QWORD *)(a1 + 16 * v9), a4);
}
