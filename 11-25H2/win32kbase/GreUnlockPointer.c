/*
 * XREFs of GreUnlockPointer @ 0x14012DE20
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012DECC (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 GreUnlockPointer()
{
  return GreReleaseSemaphoreExclusive<4,PDEVOBJ>();
}
