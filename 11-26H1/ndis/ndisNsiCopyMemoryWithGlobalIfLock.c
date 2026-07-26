/*
 * XREFs of ndisNsiCopyMemoryWithGlobalIfLock @ 0x140001144
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016F0D0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x14016F790 (ndisNsiGetInterfaceRodInformation.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisNsiCopyMemoryWithGlobalIfLock(void *a1, void *Src, size_t Size)
{
  unsigned int v4; // edi
  KIRQL v6; // bl

  v4 = Size;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  memmove(a1, Src, v4);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v6);
}
