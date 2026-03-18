/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x14072C460
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x14072C440 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x140335700 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(struct _KPRCB *a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x14072C44FLL);
}
