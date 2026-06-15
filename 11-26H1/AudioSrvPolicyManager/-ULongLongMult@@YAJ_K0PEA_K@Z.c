/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180026C50
 * Callers:
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18002DF94 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
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
