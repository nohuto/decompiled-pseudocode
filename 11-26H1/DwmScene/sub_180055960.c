/*
 * XREFs of sub_180055960 @ 0x180055960
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180055960(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rsi
  char v3; // r14
  __int64 v4; // rbx
  _Mtx_t v6[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  do
  {
    sub_180012AC4((__int64)v2);
    v3 = sub_180041DBC(a1 + 425);
    if ( sub_180041DBC(a1 + 120) )
    {
      *(_BYTE *)(a1 + 120) = 0;
      sub_1800553F4(a1);
      Mtx_unlock(v2);
    }
    else
    {
      Mtx_unlock(v2);
      sub_18002AEFC((__int64)v6, (__int64)v2);
      v4 = *sub_18000D954(&v7, a1);
      while ( !sub_180041DBC(v4 + 120) && sub_180041DBC(v4 + 425) )
        Cnd_wait((_Cnd_t)(a1 + 208), v6[0]);
      sub_18002B3C4((__int64)v6);
    }
  }
  while ( v3 );
  *(_BYTE *)(a1 + 426) = 1;
  return Cnd_signal((_Cnd_t)(a1 + 352));
}
