/*
 * XREFs of ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180214EC4
 * Callers:
 *     _lambda_3cfa92d190bc4310595425b1883be1f6_::operator() @ 0x180538E8C (_lambda_3cfa92d190bc4310595425b1883be1f6_--operator().c)
 *     _lambda_f2ca46843af7fe20e5ddf713755dabab_::operator() @ 0x180539620 (_lambda_f2ca46843af7fe20e5ddf713755dabab_--operator().c)
 * Callees:
 *     <none>
 */

HGDIOBJ *__fastcall wil::SelectObject(HGDIOBJ *a1, HDC a2, void *a3)
{
  HGDIOBJ *result; // rax

  *a1 = SelectObject(a2, a3);
  result = a1;
  a1[1] = a2;
  return result;
}
