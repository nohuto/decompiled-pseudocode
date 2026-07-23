/*
 * XREFs of RtlpVerGetConditionMask @ 0x1800842E0
 * Callers:
 *     RtlVerifyVersionInfo @ 0x180082BA0 (RtlVerifyVersionInfo.c)
 *     RtlSwitchedVVI @ 0x180082F60 (RtlSwitchedVVI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpVerGetConditionMask(unsigned __int64 a1, unsigned int a2)
{
  int v2; // eax
  char v3; // r8

  v2 = 0;
  do
  {
    v3 = v2++;
    a2 >>= 1;
  }
  while ( a2 );
  return (a1 >> (3 * v3)) & 7;
}
