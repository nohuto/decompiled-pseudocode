/*
 * XREFs of WheapPropagatePolicyToHal @ 0x140B501A0
 * Callers:
 *     WheaRegChangeNotifyCallback @ 0x140849930 (WheaRegChangeNotifyCallback.c)
 *     WheapLoadPolicy @ 0x140CE85FC (WheapLoadPolicy.c)
 * Callees:
 *     HalWheaUpdateCmciPolicy @ 0x14057A800 (HalWheaUpdateCmciPolicy.c)
 */

void __fastcall WheapPropagatePolicyToHal(unsigned int a1)
{
  if ( a1 < 0x16 && (a1 == 7 || a1 == 8 || a1 == 9 || a1 == 10 || a1 == 11 || a1 == 12 || a1 == 20) )
  {
    _mm_lfence();
    HalWheaUpdateCmciPolicy(a1, *(_DWORD *)*(&off_140E09398 + 4 * a1));
  }
}
