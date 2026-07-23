/*
 * XREFs of LdrpFindDelayloadedMethodInDescriptor @ 0x18015C27C
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x180114880 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrpFindDelayloadedMethod @ 0x18015C1D8 (LdrpFindDelayloadedMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpFindDelayloadedMethodInDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdx
  unsigned int i; // r9d
  __int64 v9; // rax
  unsigned __int8 *v10; // rax
  __int64 v11; // r11
  int v12; // r8d
  int v13; // ecx

  v4 = a1 + *(unsigned int *)(a2 + 16);
  v5 = a1 + *(unsigned int *)(a2 + 12);
  v7 = 0LL;
  for ( i = 0; *(_QWORD *)(v5 + 8LL * i); ++i )
  {
    v9 = *(_QWORD *)(v4 + 8LL * i);
    if ( v9 >= 0 )
    {
      v10 = (unsigned __int8 *)(a1 + v9 + 2);
      v11 = a3 - (_QWORD)v10;
      do
      {
        v12 = v10[v11];
        v13 = *v10 - v12;
        if ( v13 )
          break;
        ++v10;
      }
      while ( v12 );
      if ( !v13 )
        return v5 + 8LL * i;
    }
  }
  return v7;
}
