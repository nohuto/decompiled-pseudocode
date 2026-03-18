/*
 * XREFs of GreLockDisplayDevice @ 0x1400876F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  return GreAcquireSemaphore<8,PDEVOBJ>(a1);
}
