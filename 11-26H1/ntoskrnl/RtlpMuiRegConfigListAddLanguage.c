/*
 * XREFs of RtlpMuiRegConfigListAddLanguage @ 0x1408AE1AC
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x1408AF744 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGrowLanguageConfigList @ 0x1408AF2C4 (RtlpMuiRegGrowLanguageConfigList.c)
 */

__int64 __fastcall RtlpMuiRegConfigListAddLanguage(__int64 *a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  unsigned __int16 v6; // bp
  __int16 v7; // r14
  int v8; // r10d
  int i; // edx
  _WORD *v10; // r11
  unsigned __int16 v11; // r15
  int j; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax

  v2 = 0;
  if ( a1 && (v5 = *a1) != 0 && a2 && (v6 = a2[1], v7 = *a2, v6 >> 14) )
  {
    v8 = *(unsigned __int16 *)(v5 + 4);
    for ( i = 0; i < v8; ++i )
    {
      v10 = (_WORD *)(*(_QWORD *)(v5 + 8) + 12LL * i);
      v11 = v10[1];
      if ( v11 >> 14 == v6 >> 14 && *v10 == v7 )
      {
        if ( i >= 0 )
        {
          for ( j = 0; j < 3; ++j )
          {
            if ( (((unsigned __int16)(v6 ^ v11) >> (2 * j)) & 3) != 0 || v10[j + 3] != a2[j + 3] )
              return 0x40000000;
          }
          return v2;
        }
        break;
      }
    }
    if ( (unsigned __int16)v8 >= *(_WORD *)(v5 + 6) )
    {
      v13 = RtlpMuiRegGrowLanguageConfigList((void *)v5);
      v5 = v13;
      if ( !v13 )
        return (unsigned int)-1073741801;
      *a1 = v13;
    }
    v14 = *(_QWORD *)(v5 + 8);
    v15 = 3LL * *(unsigned __int16 *)(v5 + 4);
    v16 = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v14 + 4 * v15) = *(_QWORD *)a2;
    *(_DWORD *)(v14 + 4 * v15 + 8) = v16;
    ++*(_WORD *)(v5 + 4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
