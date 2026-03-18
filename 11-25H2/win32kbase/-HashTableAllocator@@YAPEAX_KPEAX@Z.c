/*
 * XREFs of ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1400E4408
 * Callers:
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1400E401C (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall HashTableAllocator(unsigned __int64 a1, void *a2)
{
  return Win32AllocPoolZInitImpl(256LL, a1, 0x76744143u);
}
