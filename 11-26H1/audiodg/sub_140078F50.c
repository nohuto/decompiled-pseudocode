/*
 * XREFs of sub_140078F50 @ 0x140078F50
 * Callers:
 *     sub_14007A790 @ 0x14007A790 (sub_14007A790.c)
 *     sub_14007A820 @ 0x14007A820 (sub_14007A820.c)
 *     sub_14007BEF0 @ 0x14007BEF0 (sub_14007BEF0.c)
 *     sub_14007BFE0 @ 0x14007BFE0 (sub_14007BFE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140078F50(__int64 a1)
{
  signed __int32 v1; // ecx
  signed __int32 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 56);
  v3 = -2;
  _InterlockedCompareExchange(&v3, v1, -2);
  if ( v3 != 4 )
    return 0LL;
  RoOriginateError(2147483662LL, 0LL);
  return 2147483662LL;
}
