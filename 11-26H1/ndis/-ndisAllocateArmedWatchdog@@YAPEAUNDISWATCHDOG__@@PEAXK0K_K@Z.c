/*
 * XREFs of ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x1401557E0
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140182D00 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140186160 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401560A0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x140156270 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 */

struct NDISWATCHDOG__ *__fastcall ndisAllocateArmedWatchdog(
        void *a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  struct NDISWATCHDOG__ *Watchdog; // r14

  Watchdog = ndisAllocateWatchdog();
  ndisArmWatchdog(Watchdog, a1, a2, a3, a4, a5);
  return Watchdog;
}
