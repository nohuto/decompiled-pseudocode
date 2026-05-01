/*
 * XREFs of ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1802C7A20
 * Callers:
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1801DBB20 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804329C0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
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
    if ( CompareStringOrdinal(lpString1, -1, off_180735950[i], -1, 1) == 2 )
      return v1;
    ++v1;
  }
  return 0LL;
}
