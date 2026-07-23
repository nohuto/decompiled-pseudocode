/*
 * XREFs of RtlInitFunctionOverrideCapabilities @ 0x14080F954
 * Callers:
 *     MiInitializeFunctionOverrides @ 0x140CF989C (MiInitializeFunctionOverrides.c)
 * Callees:
 *     RtlpInitFunctionOverrideCapabilities @ 0x140814DEC (RtlpInitFunctionOverrideCapabilities.c)
 */

char __fastcall RtlInitFunctionOverrideCapabilities(_BYTE *a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rbx
  char result; // al
  __int64 v6; // rdi
  __int64 v7; // rcx

  v4 = a1;
  result = RtlpInitFunctionOverrideCapabilities(a1, a3);
  if ( a2 )
  {
    v6 = a2 - (_QWORD)v4;
    v7 = 90LL;
    do
    {
      result = v4[v6];
      *v4++ &= result;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
