/*
 * XREFs of CmpInitSecurityCache @ 0x140ABA1A4
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpHiveInitialize @ 0x140ABA0E0 (CmpHiveInitialize.c)
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CmpInitSecurityCache(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  *(_DWORD *)(a1 + 1888) = -1;
  *(_QWORD *)(a1 + 1896) = 0LL;
  v1 = 64LL;
  *(_QWORD *)(a1 + 1880) = 0LL;
  v2 = (_QWORD *)(a1 + 1904);
  result = v2;
  do
  {
    v2[1] = result;
    *v2 = result;
    result += 2;
    v2 += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
