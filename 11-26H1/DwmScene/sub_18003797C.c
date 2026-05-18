/*
 * XREFs of sub_18003797C @ 0x18003797C
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 */

void __fastcall sub_18003797C(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  __int64 v3; // rsi
  struct _Mtx_internal_imp_t *v4; // rbp
  __int64 v5; // rsi
  struct _Cnd_internal_imp_t *v6; // rbp
  __int64 v7; // rsi
  _Mtx_t v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v3 = i[2];
    v4 = (struct _Mtx_internal_imp_t *)(v3 + 128);
    sub_180012AC4(v3 + 128);
    LODWORD(v3) = *(_DWORD *)(v3 + 36);
    Mtx_unlock(v4);
    if ( (_DWORD)v3 == 1 )
    {
      v5 = i[2];
      sub_18002AEFC((__int64)v8, v5 + 128);
      v6 = (struct _Cnd_internal_imp_t *)(v5 + 280);
      v7 = *sub_18000D954(&v9, v5);
      while ( (unsigned __int8)sub_180041DBC(v7 + 424) )
        Cnd_wait(v6, v8[0]);
      sub_18002B3C4((__int64)v8);
    }
  }
}
