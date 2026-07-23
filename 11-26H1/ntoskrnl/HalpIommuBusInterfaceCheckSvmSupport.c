/*
 * XREFs of HalpIommuBusInterfaceCheckSvmSupport @ 0x14058E32C
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuBusInterfaceCheckSvmSupport(__int64 a1)
{
  bool result; // al

  if ( **(_DWORD **)a1 == 2 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 304) )
  {
    if ( *(_QWORD *)(a1 + 312) )
      return *(_QWORD *)(a1 + 320) != 0LL;
  }
  return result;
}
