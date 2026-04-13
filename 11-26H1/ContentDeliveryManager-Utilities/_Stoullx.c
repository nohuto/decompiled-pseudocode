/*
 * XREFs of _Stoullx @ 0x1800057BC
 * Callers:
 *     _Stollx @ 0x1800048A0 (_Stollx.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18000A8A0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A8A0.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x18000AB00 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000AB00.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18005D6F0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18005D6F0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x18005D8E0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18005D8E0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x1800A1B60 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800A1B60.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x1800A1D50 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800A1D50.c)
 * Callees:
 *     memchr_0 @ 0x180021D1A (memchr_0.c)
 */

unsigned __int64 __fastcall Stoullx(char *a1, char **a2, unsigned int a3, _DWORD *a4)
{
  size_t v4; // rdi
  char **v6; // rsi
  char *v7; // r15
  int v8; // ecx
  char *v9; // rbx
  char v10; // r14
  char *v11; // r13
  unsigned __int64 v12; // rbp
  int v13; // eax
  void *v14; // rax
  int v15; // eax
  unsigned __int64 result; // rax
  __int64 v17; // rcx
  char *v18; // [rsp+20h] [rbp-58h]
  char v21; // [rsp+90h] [rbp+18h]
  unsigned __int64 v22; // [rsp+98h] [rbp+20h]

  v4 = a3;
  v6 = a2;
  v7 = a1;
  if ( a4 )
    *a4 = 0;
  v8 = (unsigned __int8)*a1;
  v9 = v7;
  while ( isspace(v8) )
    v8 = (unsigned __int8)*++v9;
  v10 = *v9;
  if ( *v9 == 45 || v10 == 43 )
    ++v9;
  else
    v10 = 43;
  if ( (_DWORD)v4 )
  {
    if ( (unsigned int)(v4 - 2) > 0x22 )
    {
LABEL_29:
      if ( v6 )
        *v6 = v7;
      return 0LL;
    }
    if ( (int)v4 > 0 )
    {
      if ( (_DWORD)v4 != 16 || *v9 != 48 || ((v9[1] - 88) & 0xDF) != 0 )
      {
LABEL_23:
        v11 = v9;
        if ( *v9 != 48 )
          goto LABEL_25;
        goto LABEL_24;
      }
LABEL_22:
      v9 += 2;
      goto LABEL_23;
    }
  }
  if ( *v9 != 48 )
  {
    v4 = 10LL;
    v11 = v9;
    goto LABEL_25;
  }
  if ( ((v9[1] - 88) & 0xDF) == 0 )
  {
    v4 = 16LL;
    goto LABEL_22;
  }
  v4 = 8LL;
  v11 = v9;
  do
LABEL_24:
    ++v9;
  while ( *v9 == 48 );
LABEL_25:
  v12 = 0LL;
  v22 = 0LL;
  v21 = 0;
  v18 = v9;
  v13 = tolower(*v9);
  v14 = memchr_0("0123456789abcdefghijklmnopqrstuvwxyz", v13, v4);
  if ( v14 )
  {
    do
    {
      v22 = v12;
      ++v9;
      v12 = v12 * v4 + (char)((_BYTE)v14 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz");
      v21 = (_BYTE)v14 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz";
      v15 = tolower(*v9);
      v14 = memchr_0("0123456789abcdefghijklmnopqrstuvwxyz", v15, v4);
    }
    while ( v14 );
    v6 = a2;
    v7 = a1;
  }
  if ( v11 == v9 )
    goto LABEL_29;
  v17 = &v9[-byte_1800E3240[v4]] - v18;
  if ( v17 >= 0 && (v17 > 0 || v12 < v21 || (v12 - v21) / v4 != v22) )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    v12 = -1LL;
    v10 = 43;
  }
  result = -(__int64)v12;
  if ( v10 != 45 )
    result = v12;
  if ( v6 )
    *v6 = v9;
  return result;
}
