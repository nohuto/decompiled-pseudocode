/*
 * XREFs of GreLockPointer @ 0x1401341F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140134208 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreLockPointer(__int64 a1)
{
  return GreAcquireSemaphore<4,PDEVOBJ>(a1);
}
