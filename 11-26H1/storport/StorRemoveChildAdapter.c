/*
 * XREFs of StorRemoveChildAdapter @ 0x14012F6CC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     StorGetCommonAdapterMiniport @ 0x140078958 (StorGetCommonAdapterMiniport.c)
 */

__int64 __fastcall StorRemoveChildAdapter(_DWORD *a1)
{
  unsigned int v1; // ebx
  _DWORD *CommonAdapterMiniport; // rax

  v1 = 0;
  CommonAdapterMiniport = StorGetCommonAdapterMiniport(a1);
  if ( CommonAdapterMiniport && (CommonAdapterMiniport[62] & 0x280) == 0x80 )
  {
    CommonAdapterMiniport[62] &= ~0x100u;
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)CommonAdapterMiniport + 32LL), BusRelations);
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v1;
}
