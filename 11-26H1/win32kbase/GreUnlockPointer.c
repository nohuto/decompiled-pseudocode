/*
 * XREFs of GreUnlockPointer @ 0x140199DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77A8 (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

void __fastcall GreUnlockPointer(__int64 P4, __int64 a2, int a3)
{
  if ( !P4 )
    EngBugCheckEx(0x164u, 0x4CuLL, 0LL, 0LL, 0LL);
  GreReleaseSemaphoreExclusive<4,PDEVOBJ>(P4, a2, a3);
}
