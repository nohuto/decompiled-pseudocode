/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1400FFF00
 * Callers:
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1401D3DF0 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
  }
  else
  {
    *a3 = -1LL;
    return (unsigned int)-2147024362;
  }
  return v3;
}
