/*
 * XREFs of ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x1801D5DDC
 * Callers:
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x18068153C (_lambda_b77313e954014d84b78f3886c1783ac6_--_lambda_b77313e954014d84b78f3886c1783ac6_.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall ExperienceManagerUtils::CopyableHString::CopyableHString(
        HSTRING *newString,
        const struct ExperienceManagerUtils::CopyableHString *a2)
{
  int v3; // eax
  HSTRING v4; // rbx

  *newString = 0LL;
  v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)newString + 2) = v3;
  if ( v3 >= 0 )
  {
    v4 = *(HSTRING *)a2;
    WindowsDeleteString(0LL);
    *newString = 0LL;
    *((_DWORD *)newString + 2) = WindowsDuplicateString(v4, newString);
  }
  return newString;
}
