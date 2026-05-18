/*
 * XREFs of sub_180027200 @ 0x180027200
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800266A4 @ 0x1800266A4 (sub_1800266A4.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180027200(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]
  _BYTE v10[32]; // [rsp+40h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    result = sub_1800266A4(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      sub_180026650(a1, &v8, i);
      v7 = v8;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 368LL))(v8);
      if ( result == a2 )
      {
        sub_180029C10(v7 + 8, v10);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        result = sub_180011E54((__int64)v10);
      }
      if ( v9 )
        result = sub_180010EC8(v9);
    }
  }
  return result;
}
