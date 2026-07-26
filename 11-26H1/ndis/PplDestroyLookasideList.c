/*
 * XREFs of PplDestroyLookasideList @ 0x140096C04
 * Callers:
 *     ndisDereferenceDmaAdapterForMiniport @ 0x140022580 (ndisDereferenceDmaAdapterForMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall PplDestroyLookasideList(char *P)
{
  int v2; // eax
  __int64 v3; // rbx
  struct _LOOKASIDE_LIST_EX *v4; // rsi

  if ( P )
  {
    v2 = *(_DWORD *)P - 1;
    v3 = v2;
    if ( v2 >= 0 )
    {
      v4 = (struct _LOOKASIDE_LIST_EX *)&P[128 * (__int64)v2 + 64];
      do
      {
        if ( LOBYTE(v4[1].L.Depth) )
          ExDeleteLookasideListEx(v4);
        v4 = (struct _LOOKASIDE_LIST_EX *)((char *)v4 - 128);
        --v3;
      }
      while ( v3 >= 0 );
    }
    ExFreePoolWithTag(P, 0x6264444Eu);
  }
}
