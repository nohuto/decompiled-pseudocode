/*
 * XREFs of IopRemoveCurrentRelationFromList @ 0x140B5D354
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x140AED638 (PipDeviceObjectListElementAt.c)
 *     PipDeviceObjectListRemove @ 0x140B5B5EC (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveCurrentRelationFromList(unsigned int **a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v7; // edi
  unsigned int **v8; // r11
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = *a3;
  v9 = 0LL;
  if ( v3 >= 2 )
    return 3221225659LL;
  v7 = a3[1] - 1;
  PipDeviceObjectListElementAt(*a1, v7, &v9, 0LL, 0LL);
  if ( v9 != a2 )
    return 3221225486LL;
  result = PipDeviceObjectListRemove(*v8, v7);
  if ( *a3 > 1 )
    return 3221225659LL;
  a3[1] = v7;
  return result;
}
