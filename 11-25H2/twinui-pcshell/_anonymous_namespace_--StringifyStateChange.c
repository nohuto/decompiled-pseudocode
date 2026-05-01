/*
 * XREFs of _anonymous_namespace_::StringifyStateChange @ 0x180218C70
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18045D554 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::StringifyStateChange(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return L"PSC_RESUMED";
  v2 = v1 - 1;
  if ( !v2 )
    return L"PSC_SUSPENDING";
  v3 = v2 - 2;
  if ( !v3 )
    return L"PSC_SUSPENDED";
  if ( v3 == 4 )
    return L"PSC_TERMINATED";
  return L"Unknown PLM_STATE_CHANGE";
}
