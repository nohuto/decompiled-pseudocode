/*
 * XREFs of RtlpMuiRegConfigListAddLanguage @ 0x1800E8D28
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180058A90 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180001008 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegConfigListAddLanguage(_QWORD *a1, __int16 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v6; // r10
  __int16 v7; // di
  __int16 v8; // r9
  unsigned int v9; // r8d
  int i; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  _WORD *v15; // r11
  int j; // edx
  unsigned int v17; // edi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  int v20; // [rsp+20h] [rbp-38h]
  int v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v22 = a3;
  v3 = 0;
  if ( a1 && (v6 = (_QWORD *)*a1) != 0LL && a2 && (v7 = *a2, v8 = (unsigned __int16)a2[1] >> 14, (_BYTE)v8) )
  {
    v9 = *((unsigned __int16 *)v6 + 2);
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v9 )
        goto LABEL_7;
      v15 = (_WORD *)(v6[1] + 12LL * i);
      if ( v15[1] >> 14 == (_BYTE)v8 && *v15 == v7 )
        break;
    }
    if ( i < 0 )
    {
LABEL_7:
      if ( (unsigned __int16)v9 >= *((_WORD *)v6 + 3) )
      {
        v17 = v9 + 1;
        v18 = (_QWORD *)*a1;
        if ( v9 + 1 >= *((unsigned __int16 *)v6 + 3) )
        {
          LODWORD(v22) = 0;
          v18 = 0LL;
          if ( v17 >= v9 )
          {
            v19 = SafeReallocBlob(v6, 0x10u, v17, 0xCu, v20, v21, (unsigned int *)&v22);
            v18 = v19;
            if ( v19 )
            {
              *(_DWORD *)v19 = v22;
              v19[1] = v19 + 2;
              *((_WORD *)v19 + 3) = v17;
            }
          }
          if ( !v18 )
            return (unsigned int)-1073741801;
        }
        v6 = v18;
        *a1 = v18;
      }
      v11 = v6[1];
      v12 = 3LL * *((unsigned __int16 *)v6 + 2);
      v13 = *((_DWORD *)a2 + 2);
      *(_QWORD *)(v11 + 4 * v12) = *(_QWORD *)a2;
      *(_DWORD *)(v11 + 4 * v12 + 8) = v13;
      ++*((_WORD *)v6 + 2);
      return v3;
    }
    for ( j = 0; j < 3; ++j )
    {
      if ( (((unsigned __int16)(v15[1] ^ a2[1]) >> (2 * j)) & 3) != 0 || v15[j + 3] != a2[j + 3] )
        return 0x40000000;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
