/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VPALDCOBJs@@@@SAXPEAX@Z @ 0x140331620
 * Callers:
 *     <none>
 * Callees:
 *     ?_Uninit@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAAXXZ @ 0x14028F5C8 (-_Uninit@-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<PALDCOBJs>::OnUnexpectedThreadTerminationStatic(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  v1 = a1 + 4;
  v2 = a1[4];
  v3 = a1[5];
  while ( v2 != v3 )
  {
    if ( *(_QWORD *)v2 != a1[7] )
      _InterlockedAdd16((volatile signed __int16 *)(*(_QWORD *)v2 + 12LL), 0xFFFFu);
    v2 += 8LL;
  }
  v4 = *v1;
  a1[5] = *v1;
  if ( v4 != a1[6] )
  {
    utl::vector<DC *,GreAllocator<DC *,1886221383>>::_Uninit((__int64)(a1 + 4));
    *v1 = -1LL;
    v1[1] = -1LL;
    v1[2] = -1LL;
  }
}
