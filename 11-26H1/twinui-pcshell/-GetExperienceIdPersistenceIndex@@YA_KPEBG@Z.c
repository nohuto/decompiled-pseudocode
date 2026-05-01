/*
 * XREFs of ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1802BEA10
 * Callers:
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004DBF0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18043ED60 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExperienceIdPersistenceIndex(LPCWCH lpString1)
{
  __int64 v1; // rdi
  unsigned __int64 i; // rbx

  v1 = 1LL;
  for ( i = 1LL; i < 4; ++i )
  {
    if ( CompareStringOrdinal(lpString1, -1, off_1807603B0[i], -1, 1) == 2 )
      return v1;
    ++v1;
  }
  return 0LL;
}
