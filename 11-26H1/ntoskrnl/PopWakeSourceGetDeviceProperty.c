/*
 * XREFs of PopWakeSourceGetDeviceProperty @ 0x140B3FB28
 * Callers:
 *     PopProcessWakeSourceWork @ 0x140C0F390 (PopProcessWakeSourceWork.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopWakeSourceGetDeviceProperty(__int64 a1, DEVICE_REGISTRY_PROPERTY a2, struct _DEVICE_OBJECT *a3)
{
  _WORD *Pool2; // rbx
  __int64 v7; // rax
  ULONG BufferLength; // [rsp+68h] [rbp+20h] BYREF

  BufferLength = 0;
  if ( IoGetDeviceProperty(a3, a2, 0, 0LL, &BufferLength) == -1073741789 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( IoGetDeviceProperty(a3, a2, BufferLength, Pool2, &BufferLength) >= 0 )
      {
        *(_WORD *)(a1 + 2) = BufferLength;
        v7 = -1LL;
        do
          ++v7;
        while ( Pool2[v7] );
        *(_QWORD *)(a1 + 8) = Pool2;
        *(_WORD *)a1 = 2 * v7;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0x206D654Du);
      }
    }
  }
}
