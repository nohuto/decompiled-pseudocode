/*
 * XREFs of memcpy_0 @ 0x180021CF6
 * Callers:
 *     ?do_narrow@?$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z @ 0x18000AF70 (-do_narrow@-$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z.c)
 *     ?do_widen@?$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z @ 0x18000BA20 (-do_widen@-$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z.c)
 *     _FXp_movx @ 0x18000C9C4 (_FXp_movx.c)
 *     _FXp_mulx @ 0x18000CBF0 (_FXp_mulx.c)
 *     _Xp_movx @ 0x18000D768 (_Xp_movx.c)
 *     _Xp_mulx @ 0x18000D99C (_Xp_mulx.c)
 *     _LXp_mulx @ 0x18000E490 (_LXp_mulx.c)
 *     ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x18000EE30 (--$_Getvals@_W@-$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z.c)
 *     ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180018DF0 (-do_out@-$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18001AED0 (-do_unshift@-$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     _Wcsxfrm @ 0x1800211D0 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021300 (_Strxfrm.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002DC94 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18003D798 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003E0F8 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003E314 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18003E418 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005CF58 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180068064 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006AE90 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18006AF74 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?do_out@?$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x18006B530 (-do_out@-$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18006B7A0 (-do_unshift@-$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z @ 0x1800A50D8 (-SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z.c)
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800B53FC (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 *     ?_Maklocwcs@std@@YAPEA_WPEB_W@Z @ 0x1800B5D8C (-_Maklocwcs@std@@YAPEA_WPEB_W@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
