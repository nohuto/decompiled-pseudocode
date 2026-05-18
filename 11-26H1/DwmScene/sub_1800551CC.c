/*
 * XREFs of sub_1800551CC @ 0x1800551CC
 * Callers:
 *     sub_180054CD4 @ 0x180054CD4 (sub_180054CD4.c)
 *     sub_180055ABC @ 0x180055ABC (sub_180055ABC.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 */

char __fastcall sub_1800551CC(__int64 a1, _Mtx_t *a2)
{
  struct _Cnd_internal_imp_t *v4; // rsi
  __int64 v5; // rbx
  char result; // al
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 425) = 0;
  *(_BYTE *)(a1 + 424) = 0;
  Cnd_signal((_Cnd_t)(a1 + 208));
  Cnd_signal((_Cnd_t)(a1 + 280));
  v4 = (struct _Cnd_internal_imp_t *)(a1 + 352);
  v5 = *sub_18000D954(&v7, a1);
  while ( 1 )
  {
    result = sub_180041DBC(v5 + 426);
    if ( result )
      break;
    Cnd_wait(v4, *a2);
  }
  return result;
}
