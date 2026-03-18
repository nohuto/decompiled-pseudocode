/*
 * XREFs of UserRtlFreeMem @ 0x14015BD80
 * Callers:
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1400E401C (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall UserRtlFreeMem(char *a1)
{
  GreDeleteFastMutex(a1);
}
