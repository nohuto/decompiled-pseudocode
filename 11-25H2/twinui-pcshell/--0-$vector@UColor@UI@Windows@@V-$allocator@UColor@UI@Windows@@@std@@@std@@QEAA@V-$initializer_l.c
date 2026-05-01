/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x1801557C8
 * Callers:
 *     _dynamic_initializer_for__BlockListening__ @ 0x1801556A0 (_dynamic_initializer_for__BlockListening__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180164F40 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801261BC (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

void **__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(void **a1, __int64 a2)
{
  const void *v2; // r14
  signed __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  char *v6; // rbx

  v2 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = v4 >> 2;
  a1[2] = 0LL;
  if ( v4 >> 2 )
  {
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<int>::_Buy_raw(a1, v4 >> 2);
    v6 = (char *)*a1;
    memmove_0(*a1, v2, v4);
    a1[1] = &v6[4 * v5];
  }
  return a1;
}
