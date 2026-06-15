/*
 * XREFs of sub_140006AFC @ 0x140006AFC
 * Callers:
 *     sub_140006AD0 @ 0x140006AD0 (sub_140006AD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140006AFC(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  return sub_140003238((__int64 *)(a1 + 40));
}
