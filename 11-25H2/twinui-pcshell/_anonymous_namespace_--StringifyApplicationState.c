/*
 * XREFs of _anonymous_namespace_::StringifyApplicationState @ 0x18020DDD4
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180097824 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18045D554 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::operator() @ 0x18045DA70 (_lambda_6609ff0ab640c01183d8a2076431907a_--operator().c)
 *     _lambda_a425cb1f9a85c2275f94348d493772b0_::operator() @ 0x18045E814 (_lambda_a425cb1f9a85c2275f94348d493772b0_--operator().c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::StringifyApplicationState(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return L"AppStateUnknown";
  v1 = a1 - 1;
  if ( !v1 )
    return L"AppActive";
  v2 = v1 - 1;
  if ( !v2 )
    return L"AppSuspending";
  v4 = v2 - 1;
  if ( !v4 )
    return L"AppSuspended";
  v5 = v4 - 1;
  if ( !v5 )
    return L"AppTerminatedBySystem";
  if ( v5 == 1 )
    return L"AppTerminatedByUser";
  return L"AppStateInvalid";
}
