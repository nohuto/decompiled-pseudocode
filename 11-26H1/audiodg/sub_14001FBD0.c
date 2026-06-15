/*
 * XREFs of sub_14001FBD0 @ 0x14001FBD0
 * Callers:
 *     sub_140083B90 @ 0x140083B90 (sub_140083B90.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14001FBD0(__int64 a1)
{
  volatile __int64 *v2; // rcx

  v2 = (volatile __int64 *)(a1 + 288);
  _InterlockedExchange64(v2, *(_QWORD *)(a1 + 296));
  *(_QWORD *)(a1 + 296) = 0LL;
  WakeByAddressAll((PVOID)v2);
}
