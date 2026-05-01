/*
 * XREFs of ?GetPresentationClass@WindowWrapperBase@@AEBA?AW4_RM_PRESENTATION_CLASS@@XZ @ 0x18043C404
 * Callers:
 *     _lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator() @ 0x180439300 (_lambda_1c691449c5167e3292e0cc06d01cfa4b_--operator().c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18043ED60 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowWrapperBase::GetPresentationClass(__int64 a1)
{
  int v1; // eax
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 464);
  if ( v1 == 5 )
    return 4LL;
  v2 = v1 == 4;
  result = 2LL;
  if ( v2 )
    return 4LL;
  return result;
}
