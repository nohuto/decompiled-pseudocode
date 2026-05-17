/*
 * XREFs of RtlWakeAddressSingle @ 0x1800E2BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeAddressSingle(unsigned __int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  return RtlpWakeByAddress(a1, 0, 0LL);
}
