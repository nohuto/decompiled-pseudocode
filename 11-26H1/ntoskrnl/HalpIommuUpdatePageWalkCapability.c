/*
 * XREFs of HalpIommuUpdatePageWalkCapability @ 0x140589CB4
 * Callers:
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 * Callees:
 *     <none>
 */

char HalpIommuUpdatePageWalkCapability()
{
  ULONG_PTR v0; // rdx
  ULONG_PTR *v1; // rax

  v0 = HalpIommuList;
  HalpDeviceBlockUnblockPushLock.ApcState.InProgressFlags = 1;
  while ( 1 )
  {
    v1 = &HalpIommuList;
    if ( (ULONG_PTR *)v0 == &HalpIommuList )
      break;
    LOBYTE(v1) = (*(_DWORD *)(v0 + 464) & 0x800) != 0;
    if ( !((unsigned __int8)v1 | ((*(_DWORD *)(v0 + 464) & 0x180) == 0)) )
    {
      HalpDeviceBlockUnblockPushLock.ApcState.InProgressFlags = 0;
      return (char)v1;
    }
    v0 = *(_QWORD *)v0;
  }
  return (char)v1;
}
