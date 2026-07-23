/*
 * XREFs of IopRemoveRelationFromList @ 0x1407B5784
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1409B5A28 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1409B293C (PipDeviceObjectListIndexOf.c)
 *     PipDeviceObjectListRemove @ 0x140B5B5EC (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveRelationFromList(unsigned int **a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD *v3; // r11
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PipDeviceObjectListIndexOf(*a1, a2, **a1, &v5);
  if ( v2 == -1 )
    return 3221225486LL;
  else
    return PipDeviceObjectListRemove(*v3, v2);
}
