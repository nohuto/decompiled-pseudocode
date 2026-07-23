/*
 * XREFs of EtwpCovSampCheckForSegments @ 0x140A35E50
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     towlower @ 0x14053A250 (towlower.c)
 */

__int64 __fastcall EtwpCovSampCheckForSegments(wint_t **a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  wint_t **v5; // rdx
  unsigned int i; // edi
  wint_t *v7; // rax
  unsigned __int64 v8; // rcx
  wint_t *v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int16 *v12; // rbx
  wint_t *v13; // r15
  bool v14; // zf
  __int16 v15; // r13
  unsigned __int64 v19; // [rsp+78h] [rbp+20h]

  v4 = a3;
  v5 = a1;
  for ( i = 0; ; ++i )
  {
    if ( i >= v4 )
      return 0LL;
    v7 = v5[1];
    v8 = *(_QWORD *)(a2 + 16LL * i + 8);
    if ( (unsigned __int64)v7 >= v8 )
      break;
LABEL_15:
    v4 = a3;
  }
  v9 = *v5;
  v10 = (unsigned __int64)&(*v5)[(_QWORD)v7 - v8];
  v19 = v10;
  v11 = *(_QWORD *)(a2 + 16LL * i) + 2 * v8;
  while ( 1 )
  {
    if ( (unsigned __int64)v9 > v10 )
    {
      v5 = a1;
      goto LABEL_15;
    }
    v12 = *(__int16 **)(a2 + 16LL * i);
    v13 = v9;
    v14 = v12 == (__int16 *)v11;
    if ( (unsigned __int64)v12 < v11 )
    {
      do
      {
        if ( *v13 != *v12 )
        {
          v15 = *v12;
          if ( towlower(*v13) != v15 )
            break;
        }
        ++v12;
        ++v13;
      }
      while ( (unsigned __int64)v12 < v11 );
      v10 = v19;
      v14 = v12 == (__int16 *)v11;
    }
    if ( v14 )
      return 1LL;
    ++v9;
  }
}
