/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x140731030
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x140731010 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(struct _KPRCB *a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x14073101FLL);
}
