/*
 * XREFs of sub_18002DC64 @ 0x18002DC64
 * Callers:
 *     sub_180030C38 @ 0x180030C38 (sub_180030C38.c)
 * Callees:
 *     sub_180012F64 @ 0x180012F64 (sub_180012F64.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_1800133B8 @ 0x1800133B8 (sub_1800133B8.c)
 *     sub_18003143C @ 0x18003143C (sub_18003143C.c)
 */

void __fastcall sub_18002DC64(__int64 *a1, unsigned __int64 a2, _QWORD **a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r9
  _QWORD *i; // r8
  __int64 v13; // r8
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v14 = a2;
    v8 = sub_180012F64((__int64)a1, &v14);
    *a1 = v8;
    v10 = (_QWORD *)v8;
    a1[1] = v8;
    a1[2] = v8 + 16 * a2;
    v11 = (_QWORD *)*a4;
    for ( i = *a3; i != v11; i = (_QWORD *)(v13 + 16) )
    {
      sub_1800133B8(v9, v10, i);
      v10 += 2;
    }
    sub_1800130CC((__int64)v10, (__int64)v10);
    a1[1] = (__int64)v10;
    v14 = 0LL;
    sub_18003143C(&v14);
  }
}
