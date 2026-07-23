/*
 * XREFs of PpmParkFreeAllParkNodes @ 0x1407E1AE0
 * Callers:
 *     PpmParkRegisterParking @ 0x1406130BC (PpmParkRegisterParking.c)
 * Callees:
 *     PpmParkFreeParkNodes @ 0x1407E1C00 (PpmParkFreeParkNodes.c)
 */

__int64 __fastcall PpmParkFreeAllParkNodes(char *P, unsigned int a2, _BYTE *a3, __int64 a4, char a5)
{
  _QWORD *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 result; // rax

  if ( P && a3 && a2 )
  {
    v6 = P + 1072;
    v7 = a3 - P;
    v8 = a2;
    do
    {
      if ( *(_QWORD *)((char *)v6 + v7) == *v6 )
        *v6 = 0LL;
      if ( *(_QWORD *)((char *)v6 + v7 + 176) == v6[22] )
        v6[22] = 0LL;
      v9 = *((unsigned __int8 *)v6 + v7 - 1062);
      if ( (unsigned __int8)v9 >= *((_BYTE *)v6 - 1062) )
        v9 = *((unsigned __int8 *)v6 - 1062);
      v10 = 0;
      if ( v9 )
      {
        v11 = 0LL;
        do
        {
          v12 = v6[23];
          if ( *(_QWORD *)(*(_QWORD *)((char *)v6 + v7 + 184) + v11 + 552) == *(_QWORD *)(v12 + v11 + 552) )
            *(_QWORD *)(v12 + v11 + 552) = 0LL;
          ++v10;
          v11 += 624LL;
        }
        while ( v10 < v9 );
      }
      v6 += 158;
      --v8;
    }
    while ( v8 );
  }
  result = PpmParkFreeParkNodes(P);
  if ( !a5 )
    return PpmParkFreeParkNodes(a3);
  return result;
}
