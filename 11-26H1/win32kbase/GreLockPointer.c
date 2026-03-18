/*
 * XREFs of GreLockPointer @ 0x1401927A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C7918 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

__int64 __fastcall GreLockPointer(__int64 P4, int a2, int a3)
{
  if ( !P4 )
    EngBugCheckEx(0x164u, 0x4CuLL, 0LL, 0LL, 0LL);
  return GreAcquireSemaphore<4,PDEVOBJ>(P4, a2, a3);
}
