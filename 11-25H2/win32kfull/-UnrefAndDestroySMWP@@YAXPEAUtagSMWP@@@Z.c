/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1400C9BF0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     DestroySMWP @ 0x1400C8060 (DestroySMWP.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = HMUnlockObject(a1);
  if ( v1 )
    DestroySMWP(v1, v2);
}
