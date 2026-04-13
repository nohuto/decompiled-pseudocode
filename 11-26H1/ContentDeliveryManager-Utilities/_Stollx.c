/*
 * XREFs of _Stollx @ 0x1800048A0
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_J@Z @ 0x18000A9D0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A9D0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_J@Z @ 0x18005D7E0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18005D7E0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_J@Z @ 0x1800A1C50 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800A1C50.c)
 * Callees:
 *     _Stoullx @ 0x1800057BC (_Stoullx.c)
 */

unsigned __int64 __fastcall Stollx(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int8 **v4; // r14
  char *v6; // rdi
  int i; // ecx
  char v10; // bl
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF

  v14 = 0LL;
  v4 = (unsigned __int8 **)&v14;
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
  v11 = Stoullx(v6, v4, a3, a4, v14);
  v12 = v11;
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
    return 0x8000000000000000uLL - (v10 != 45);
  }
LABEL_14:
  if ( v10 == 43 && v11 > 0x7FFFFFFFFFFFFFFFLL || v10 == 45 && v11 > 0x8000000000000000uLL )
    goto LABEL_18;
  if ( v10 == 45 )
    return -(__int64)v11;
  return v12;
}
