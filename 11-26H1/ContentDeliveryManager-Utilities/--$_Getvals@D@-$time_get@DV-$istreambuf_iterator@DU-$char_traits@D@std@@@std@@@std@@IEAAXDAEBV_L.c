/*
 * XREFs of ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x18001B30C
 * Callers:
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18001DD38 (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 * Callees:
 *     _Getcvt @ 0x180005EC8 (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 *     strlen_0 @ 0x180021D0E (strlen_0.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180068064 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 */

_BYTE *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getvals<char>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _Cvtvec *v5; // rax
  char *v6; // rax
  const char **v7; // rdi
  char *v8; // rbx
  const char *v9; // rbx
  size_t v10; // rdi
  _BYTE *v11; // rax
  signed __int64 v12; // rdx
  char *v13; // rax
  const char **v14; // rdi
  char *v15; // rbx
  const char *v16; // rbx
  size_t v17; // rdi
  _BYTE *v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rdi
  const char *v21; // rbx
  _BYTE *result; // rax
  _Cvtvec v23; // [rsp+20h] [rbp-38h] BYREF

  v5 = Getcvt(&v23);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 60) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 76) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = _Getdays();
  v7 = (const char **)(a3 + 8);
  v8 = v6;
  if ( v6 )
  {
    std::_Yarn<char>::operator=(a3 + 8, v6);
    free(v8);
  }
  v9 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if ( *v7 )
    v9 = *v7;
  v10 = strlen_0(v9) + 1;
  v11 = operator new[](v10);
  if ( v10 )
  {
    v12 = v11 - v9;
    do
    {
      v9[v12] = *v9;
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  *(_QWORD *)(a1 + 16) = v11;
  v13 = _Getmonths();
  v14 = (const char **)(a3 + 24);
  v15 = v13;
  if ( v13 )
  {
    std::_Yarn<char>::operator=(a3 + 24, v13);
    free(v15);
  }
  v16 = ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov"
        ":November:Dec:December";
  if ( *v14 )
    v16 = *v14;
  v17 = strlen_0(v16) + 1;
  v18 = operator new[](v17);
  if ( v17 )
  {
    v19 = v18 - v16;
    do
    {
      v16[v19] = *v16;
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  v20 = 13LL;
  *(_QWORD *)(a1 + 24) = v18;
  v21 = ":AM:am:PM:pm";
  result = operator new[](0xDuLL);
  do
  {
    v21[result - ":AM:am:PM:pm"] = *v21;
    ++v21;
    --v20;
  }
  while ( v20 );
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
