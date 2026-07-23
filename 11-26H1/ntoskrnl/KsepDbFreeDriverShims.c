/*
 * XREFs of KsepDbFreeDriverShims @ 0x1409D926C
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShims @ 0x1409D8DF4 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409D8FD8 (KsepDbGetDriverShimsInternal.c)
 *     KseDriverUnloadImage @ 0x140A380BC (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140A3865C (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1 + 3;
      v4 = a2;
      v5 = (__int64)(a1 + 2);
      do
      {
        if ( v3[2] )
          KsepStringFree(v5 + 16);
        if ( *v3 )
          KsepStringFree(v5);
        if ( v3[4] )
          KsepStringFree(v5 + 32);
        v5 += 80LL;
        v3 += 10;
        --v4;
      }
      while ( v4 );
    }
    KsepPoolFreePaged(a1);
  }
}
