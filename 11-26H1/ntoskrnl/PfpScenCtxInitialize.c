/*
 * XREFs of PfpScenCtxInitialize @ 0x1407C602C
 * Callers:
 *     PfInitializeSuperfetch @ 0x140CCE038 (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
