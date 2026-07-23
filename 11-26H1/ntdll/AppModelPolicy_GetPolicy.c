/*
 * XREFs of AppModelPolicy_GetPolicy @ 0x180105824
 * Callers:
 *     LdrpInitializePolicy @ 0x1800EB844 (LdrpInitializePolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x180105860 (AppModelPolicy_GetPolicy_Internal.c)
 */

int __fastcall AppModelPolicy_GetPolicy(int a1, int a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  return AppModelPolicy_GetPolicy_Internal(a1, a2, a3, (unsigned int)&v5, (__int64)&v4) | 0x10000000;
}
