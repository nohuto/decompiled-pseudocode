/*
 * XREFs of PipGrowDeviceObjectList @ 0x1409B698C
 * Callers:
 *     PipDeviceObjectListAdd @ 0x1409B674C (PipDeviceObjectListAdd.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x1409B4B00 (PiAllocateDeviceObjectList.c)
 *     PipFreeDeviceObjectList @ 0x1409B5B6C (PipFreeDeviceObjectList.c)
 *     PipDeviceObjectListAdd @ 0x1409B674C (PipDeviceObjectListAdd.c)
 *     PipDeviceObjectListElementAt @ 0x140AED638 (PipDeviceObjectListElementAt.c)
 */

__int64 __fastcall PipGrowDeviceObjectList(unsigned int **a1)
{
  unsigned int *v1; // rdi
  unsigned int v2; // ebx
  unsigned int *DeviceObjectList; // rax
  unsigned int i; // esi
  int v7; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+38h] BYREF
  void *v9; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v10; // [rsp+78h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = 0;
  v9 = 0LL;
  v8 = 0;
  v7 = 0;
  DeviceObjectList = PiAllocateDeviceObjectList(v1[3], 2 * v1[1]);
  v10 = DeviceObjectList;
  if ( DeviceObjectList )
  {
    for ( i = 0; i < *v1; ++i )
    {
      PipDeviceObjectListElementAt((_DWORD)v1, i, (unsigned int)&v9, (unsigned int)&v8, (__int64)&v7);
      PipDeviceObjectListAdd(&v10, v9, v8, v7);
    }
    PipFreeDeviceObjectList(v1);
    DeviceObjectList = v10;
  }
  else
  {
    v2 = -1073741670;
  }
  *a1 = DeviceObjectList;
  return v2;
}
