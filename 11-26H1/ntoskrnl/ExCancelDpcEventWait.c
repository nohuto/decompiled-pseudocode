/*
 * XREFs of ExCancelDpcEventWait @ 0x1406D3AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403B46B8 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 */

char __fastcall ExCancelDpcEventWait(struct _KWAIT_BLOCK *a1, __int64 a2, __int64 a3)
{
  return KiDeregisterObjectWaitBlock((volatile signed __int32 *)a1[1].WaitListEntry.Blink, a1, a3);
}
