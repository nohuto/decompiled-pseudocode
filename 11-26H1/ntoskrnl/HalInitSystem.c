/*
 * XREFs of HalInitSystem @ 0x140BE9970
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpInitSystemPhase1 @ 0x140BE9A78 (HalpInitSystemPhase1.c)
 *     __security_init_cookie @ 0x140C803B0 (__security_init_cookie.c)
 *     HalpInitSystemPhase0 @ 0x140CAD6BC (HalpInitSystemPhase0.c)
 */

__int64 __fastcall HalInitSystem(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
      KeBugCheckEx(0x5Cu, 0x8200uLL, 0xFFFFFFFFC000000DuLL, (unsigned int)BugCheckParameter3, 0LL);
    return HalpInitSystemPhase1(a2);
  }
  else
  {
    _security_init_cookie();
    return HalpInitSystemPhase0(a2);
  }
}
