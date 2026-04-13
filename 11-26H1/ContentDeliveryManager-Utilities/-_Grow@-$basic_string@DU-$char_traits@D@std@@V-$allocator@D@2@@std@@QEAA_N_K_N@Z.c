/*
 * XREFs of ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18003DC80
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003E314 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18003E418 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005C934 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005CB68 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006AE90 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18006AF74 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?reserve@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x18006BA88 (-reserve@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047D4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18003D798 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003E0F8 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 */

bool __fastcall std::string::_Grow(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  bool v5; // zf
  _BYTE *v6; // rax

  v3 = a2;
  if ( a2 == -1LL )
    std::_Xlength_error("string too long");
  if ( *(_QWORD *)(a1 + 24) < a2 )
  {
    std::string::_Copy((const void **)a1, a2, *(_QWORD *)(a1 + 16));
LABEL_15:
    v5 = v3 == 0;
    return !v5;
  }
  if ( a3 && a2 < 0x10 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    LOBYTE(a2) = 1;
    if ( v3 < v4 )
      v4 = v3;
    std::string::_Tidy(a1, a2, v4);
    goto LABEL_15;
  }
  v5 = a2 == 0;
  if ( !a2 )
  {
    if ( *(_QWORD *)(a1 + 24) < 0x10uLL )
      v6 = (_BYTE *)a1;
    else
      v6 = *(_BYTE **)a1;
    *(_QWORD *)(a1 + 16) = 0LL;
    *v6 = 0;
    goto LABEL_15;
  }
  return !v5;
}
