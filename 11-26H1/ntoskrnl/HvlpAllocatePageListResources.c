/*
 * XREFs of HvlpAllocatePageListResources @ 0x140B51288
 * Callers:
 *     HvlAllocateHibernateResources @ 0x140775C6C (HvlAllocateHibernateResources.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HvlpAllocatePageListResources(__int64 a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx

  v2 = a2 + 2;
  v3 = -1073741670;
  VslpReservedTransferLock.Affinity = (_KAFFINITY_EX *)ExAllocatePool2(0x40uLL);
  if ( VslpReservedTransferLock.Affinity )
  {
    *(_DWORD *)&VslpReservedTransferLock.AffinityPrimaryGroup = v2;
    return 0;
  }
  return v3;
}
