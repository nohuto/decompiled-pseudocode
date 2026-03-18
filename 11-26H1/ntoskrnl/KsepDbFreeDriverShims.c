/*
 * XREFs of KsepDbFreeDriverShims @ 0x1409E3D40
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShims @ 0x1409E45DC (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 *     KseDriverUnloadImage @ 0x140A2501C (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140A255BC (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1409E5588 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rdi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1 + 3;
      v4 = a2;
      v5 = (char *)(a1 + 2);
      do
      {
        if ( v3[2] )
          KsepStringFree(v5 + 16);
        if ( *v3 )
          KsepStringFree(v5);
        if ( v3[4] )
          KsepStringFree(v5 + 32);
        v5 += 80;
        v3 += 10;
        --v4;
      }
      while ( v4 );
    }
    KsepPoolFreePaged(a1);
  }
}
