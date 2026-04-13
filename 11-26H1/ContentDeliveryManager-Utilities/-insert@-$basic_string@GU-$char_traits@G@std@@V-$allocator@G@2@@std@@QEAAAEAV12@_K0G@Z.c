/*
 * XREFs of ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001AF78
 * Callers:
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800109F0 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x180010E9C (-_Fput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x180014174 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x180014544 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x180016374 (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x180016C00 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 * Callees:
 *     memmove_0 @ 0x180021D02 (memmove_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18003E160 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x18003E178 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x18005A4C8 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 */

__int64 *__fastcall std::wstring::insert(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // r15
  __int64 *v12; // rax
  __int64 *v13; // rcx
  _WORD *v14; // rax
  __int64 *v15; // rax
  _WORD *v16; // rdi
  unsigned __int64 i; // rcx
  __int64 *v18; // rax

  v6 = a1[2];
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    goto LABEL_33;
  if ( !a3 )
    return a1;
  v9 = v6 + a3;
  if ( v6 + a3 > 0x7FFFFFFFFFFFFFFELL )
LABEL_33:
    std::wstring::_Xlen();
  if ( a1[3] >= v9 )
  {
    if ( !v9 )
    {
      if ( (unsigned __int64)a1[3] < 8 )
        v14 = a1;
      else
        v14 = (_WORD *)*a1;
      a1[2] = 0LL;
      *v14 = 0;
      return a1;
    }
  }
  else
  {
    std::wstring::_Copy(a1, v6 + a3);
    if ( !v9 )
      return a1;
  }
  v10 = a1[2] - a2;
  v11 = 2 * a2;
  if ( (unsigned __int64)a1[3] < 8 )
  {
    v12 = a1;
    v13 = a1;
  }
  else
  {
    v12 = (__int64 *)*a1;
    v13 = (__int64 *)*a1;
  }
  if ( v10 )
    memmove_0((char *)v13 + 2 * a2 + 2 * a3, (char *)v12 + 2 * a2, 2 * v10);
  if ( a3 == 1 )
  {
    if ( (unsigned __int64)a1[3] < 8 )
      v15 = a1;
    else
      v15 = (__int64 *)*a1;
    *((_WORD *)v15 + a2) = a4;
  }
  else
  {
    if ( (unsigned __int64)a1[3] < 8 )
      v16 = (_WORD *)((char *)a1 + v11);
    else
      v16 = (_WORD *)(v11 + *a1);
    for ( i = a3; i; --i )
      *v16++ = a4;
  }
  if ( (unsigned __int64)a1[3] < 8 )
    v18 = a1;
  else
    v18 = (__int64 *)*a1;
  a1[2] = v9;
  *((_WORD *)v18 + v9) = 0;
  return a1;
}
