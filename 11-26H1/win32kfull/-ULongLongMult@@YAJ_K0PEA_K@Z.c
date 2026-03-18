/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1401D0450
 * Callers:
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1400CFC88 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     NtGdiStartDoc @ 0x14027D880 (NtGdiStartDoc.c)
 *     ?init_probe@?$umptr_r@D@@SA?AV1@PEAD_K1@Z @ 0x14032A050 (-init_probe@-$umptr_r@D@@SA-AV1@PEAD_K1@Z.c)
 *     ?ReAllocate@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140349D44 (-ReAllocate@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?ReAllocate@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@AEAA_N_K@Z @ 0x14034E16C (-ReAllocate@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rax

  v3 = 0;
  v4 = a1 * a2;
  if ( !is_mul_ok(a1, a2) )
  {
    v3 = -2147024362;
    v4 = -1LL;
  }
  *a3 = v4;
  return v3;
}
