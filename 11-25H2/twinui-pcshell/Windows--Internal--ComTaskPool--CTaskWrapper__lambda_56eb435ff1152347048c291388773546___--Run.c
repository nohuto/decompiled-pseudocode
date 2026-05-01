/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_56eb435ff1152347048c291388773546___::Run @ 0x18047CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18002D49C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_56eb435ff1152347048c291388773546___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v0 = ActivateApplicationForExperienceWithPropertySet(
         (const unsigned __int16 *)qword_18089C768,
         &LocaleName,
         (__int64)L"AccessibilityExperienceId",
         0LL,
         1,
         0LL);
  if ( v0 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FC,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v0);
}
