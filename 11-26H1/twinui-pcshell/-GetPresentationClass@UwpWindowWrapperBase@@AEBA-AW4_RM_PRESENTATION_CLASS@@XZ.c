/*
 * XREFs of ?GetPresentationClass@UwpWindowWrapperBase@@AEBA?AW4_RM_PRESENTATION_CLASS@@XZ @ 0x18004DEB8
 * Callers:
 *     _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x18004CAFC (_lambda_fe0fa93ea00b211fee91aac62f93999b_--operator().c)
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004DBF0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowWrapperBase::GetPresentationClass(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  bool v3; // zf

  v1 = *(_DWORD *)(a1 + 464);
  if ( v1 == 5 )
    return 4LL;
  v3 = v1 == 4;
  result = 2LL;
  if ( v3 )
    return 4LL;
  return result;
}
