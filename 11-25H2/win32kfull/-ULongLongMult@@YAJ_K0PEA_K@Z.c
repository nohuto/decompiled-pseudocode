/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x14019EDF0
 * Callers:
 *     NtGdiStartDoc @ 0x140329180 (NtGdiStartDoc.c)
 *     ?ReAllocate@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140332554 (-ReAllocate@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?init_probe@?$umptr_r@D@@SA?AV1@PEAD_K1@Z @ 0x140338D2C (-init_probe@-$umptr_r@D@@SA-AV1@PEAD_K1@Z.c)
 *     ?ReAllocate@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140340BB4 (-ReAllocate@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@A.c)
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
