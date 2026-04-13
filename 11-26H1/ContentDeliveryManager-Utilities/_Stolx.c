/*
 * XREFs of _Stolx @ 0x180004B6C
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x18000A340 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A340.c)
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x18001235C (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001C9C4 (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x18005D1E0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18005D1E0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x1800A1650 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800A1650.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800B5B94 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 * Callees:
 *     _Stoulx @ 0x180004C5C (_Stoulx.c)
 */

__int64 __fastcall Stolx(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int8 **v4; // r14
  char *v6; // rdi
  int i; // ecx
  char v10; // bl
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF

  v16 = 0LL;
  v4 = (unsigned __int8 **)&v16;
  v6 = (char *)a1;
  if ( a2 )
    v4 = a2;
  for ( i = *a1; isspace(i); i = (unsigned __int8)*v6 )
    ++v6;
  v10 = *v6;
  if ( *v6 == 45 || v10 == 43 )
    ++v6;
  else
    v10 = 43;
  v11 = Stoulx(v6, v4, a3, a4, v16);
  v12 = v11;
  v13 = 0x7FFFFFFF;
  if ( v6 == (char *)*v4 )
  {
    *v4 = a1;
  }
  else if ( a1 != *v4 )
  {
    goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_18:
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    if ( v10 == 45 )
      return 0x80000000;
    return v13;
  }
LABEL_14:
  if ( v10 == 43 && v11 > 0x7FFFFFFF || v10 == 45 && v11 > 0x80000000 )
    goto LABEL_18;
  v15 = -v11;
  if ( v10 == 45 )
    return v15;
  return v12;
}
