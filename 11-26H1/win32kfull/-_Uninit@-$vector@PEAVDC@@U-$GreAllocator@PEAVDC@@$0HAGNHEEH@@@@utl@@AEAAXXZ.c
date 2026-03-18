/*
 * XREFs of ?_Uninit@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAAXXZ @ 0x14028F5C8
 * Callers:
 *     ??1PALDCOBJs@@QEAA@XZ @ 0x14028F578 (--1PALDCOBJs@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VPALDCOBJs@@@@SAXPEAX@Z @ 0x140331620 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VPALDCOBJs@@@@SAXPEAX@.c)
 *     ?_SetCapacity@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_N_K@Z @ 0x140331688 (-_SetCapacity@-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall utl::vector<DC *,GreAllocator<DC *,1886221383>>::_Uninit(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)-1LL )
  {
    *(_QWORD *)(a1 + 8) = v2;
    Win32FreePool(v2);
  }
}
