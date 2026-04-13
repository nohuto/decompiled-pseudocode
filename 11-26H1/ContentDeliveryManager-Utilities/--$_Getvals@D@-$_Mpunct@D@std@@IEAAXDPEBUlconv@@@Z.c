/*
 * XREFs of ??$_Getvals@D@?$_Mpunct@D@std@@IEAAXDPEBUlconv@@@Z @ 0x18001B1F4
 * Callers:
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18001DB8C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 *     strlen_0 @ 0x180021D0E (strlen_0.c)
 */

_BYTE *__fastcall std::_Mpunct<char>::_Getvals<char>(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // r14
  size_t v6; // rbx
  _BYTE *v7; // rax
  _BYTE *i; // rdx
  char v9; // cl
  const char *v10; // rbx
  size_t v11; // rbp
  _BYTE *v12; // rax
  signed __int64 v13; // rdx
  const char *v14; // rbx
  size_t v15; // rbp
  _BYTE *v16; // rax
  signed __int64 v17; // rdx
  _BYTE *result; // rax

  v5 = *(const char **)((-(__int64)(*(_BYTE *)(a1 + 68) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + a3 + 32);
  v6 = strlen_0(v5) + 1;
  v7 = operator new[](v6);
  for ( i = v7; v6; --v6 )
  {
    v9 = *v5++;
    *i++ = v9;
  }
  *(_QWORD *)(a1 + 32) = v7;
  v10 = (const char *)&Str;
  if ( *(_BYTE *)(a3 + 86) <= 4u )
    v10 = *(const char **)(a3 + 64);
  v11 = strlen_0(v10) + 1;
  v12 = operator new[](v11);
  if ( v11 )
  {
    v13 = v12 - v10;
    do
    {
      v10[v13] = *v10;
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  *(_QWORD *)(a1 + 40) = v12;
  v14 = "-";
  if ( *(_BYTE *)(a3 + 87) <= 4u )
    v14 = *(const char **)(a3 + 72);
  v15 = strlen_0(v14) + 1;
  v16 = operator new[](v15);
  if ( v15 )
  {
    v17 = v16 - v14;
    do
    {
      v14[v17] = *v14;
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  *(_QWORD *)(a1 + 48) = v16;
  *(_BYTE *)(a1 + 24) = **(_BYTE **)(a3 + 40);
  result = *(_BYTE **)(a3 + 48);
  *(_BYTE *)(a1 + 25) = *result;
  return result;
}
