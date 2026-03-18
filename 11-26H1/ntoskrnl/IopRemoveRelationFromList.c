/*
 * XREFs of IopRemoveRelationFromList @ 0x1407B2724
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x140913948 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessRelation @ 0x140913D04 (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14091085C (PipDeviceObjectListIndexOf.c)
 *     PipDeviceObjectListRemove @ 0x140B587CC (PipDeviceObjectListRemove.c)
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
