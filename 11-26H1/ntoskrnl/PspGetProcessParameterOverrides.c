/*
 * XREFs of PspGetProcessParameterOverrides @ 0x140AE5F9C
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     PspDestroyProcessParameterOverrides @ 0x140ABE194 (PspDestroyProcessParameterOverrides.c)
 */

_DWORD *__fastcall PspGetProcessParameterOverrides(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v5; // [rsp+50h] [rbp+8h] BYREF

  v4[2] = a2;
  v4[1] = a1 + 240;
  v4[0] = 1LL;
  v5 = 0LL;
  PsGetProcessParameterOverrides(v4, &v5);
  result = v5;
  if ( v5 && *v5 != 2 )
  {
    PspDestroyProcessParameterOverrides((__int64)v5);
    result = 0LL;
  }
  *(_QWORD *)(a1 + 472) = result;
  return result;
}
