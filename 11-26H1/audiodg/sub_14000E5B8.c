/*
 * XREFs of sub_14000E5B8 @ 0x14000E5B8
 * Callers:
 *     sub_14000E018 @ 0x14000E018 (sub_14000E018.c)
 *     sub_14000E3CC @ 0x14000E3CC (sub_14000E3CC.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14000E5B8(__int64 a1)
{
  signed __int64 result; // rax

  for ( result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 96),
                   a1 + 48 * (*(unsigned __int16 *)(a1 + 112) ^ 1LL),
                   a1 + 48LL * *(unsigned __int16 *)(a1 + 112));
        !result;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 96),
                   a1 + 48 * (*(unsigned __int16 *)(a1 + 112) ^ 1LL),
                   a1 + 48LL * *(unsigned __int16 *)(a1 + 112)) )
  {
    Sleep(1u);
  }
  *(_WORD *)(a1 + 112) ^= 1u;
  return result;
}
