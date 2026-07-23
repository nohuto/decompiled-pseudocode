/*
 * XREFs of HalpDmaAllocateChildAdapterV2 @ 0x140786890
 * Callers:
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     KeInitializeDeviceQueue @ 0x1404E6C40 (KeInitializeDeviceQueue.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

__int64 __fastcall HalpDmaAllocateChildAdapterV2(
        unsigned int a1,
        char a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        _DWORD *a8)
{
  char v11; // si
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 result; // rax
  int LocalScatterPool; // eax
  int v16; // ecx
  HANDLE Handle; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v19; // [rsp+88h] [rbp+7h]

  Handle = 0LL;
  v18[0] = 48LL;
  v18[3] = 528LL;
  v11 = 1;
  v18[1] = 0LL;
  if ( !a3 )
    v11 = a2;
  v18[2] = 0LL;
  v19 = 0LL;
  if ( (int)ObCreateObjectEx(0, (_DWORD)HalpDmaAdapterObjectType, (unsigned int)v18, 0) < 0 )
    return 0LL;
  memset_0(0LL, 0, 0x290uLL);
  if ( ObReferenceObjectByPointer(0LL, 0x20000u, HalpDmaAdapterObjectType, 0) < 0
    || (int)ObInsertObjectEx(0LL, 0LL, 0x20000LL, 0LL, 0, 0LL, &Handle) < 0 )
  {
    return 0LL;
  }
  ZwClose(Handle);
  MEMORY[0] = 42991617;
  MEMORY[8] = &HalpDmaOperationsV2;
  MEMORY[0x99] = a6;
  MEMORY[0x80] = 0LL;
  MEMORY[0x88] = 0LL;
  MEMORY[0x10] = 1634550856;
  MEMORY[0x98] = 0;
  MEMORY[0x140] = 0LL;
  MEMORY[0x15A] = 0;
  KeInitializeDeviceQueue((PKDEVICE_QUEUE)0xB8);
  MEMORY[0xE8] = a1;
  MEMORY[0x1BA] = a4;
  MEMORY[0x1C0] = v11;
  MEMORY[0x1C1] = a3;
  MEMORY[0x1BD] = a7;
  MEMORY[0x17C] = -1;
  MEMORY[0x180] = -1;
  MEMORY[0x9C] = 2;
  MEMORY[0x1B9] = a5 != 0;
  if ( a1 )
    v12 = (1LL << (v11 != 0 ? 32 : 24)) - 1;
  else
    v12 = -1LL;
  MEMORY[0x90] = v12;
  v13 = &MasterAdapter24V2;
  if ( v11 )
    v13 = &MasterAdapterV2;
  MEMORY[0xA0] = v13;
  if ( MEMORY[0x90] < v13[18] )
  {
LABEL_12:
    ObfDereferenceObject(0LL);
    return 0LL;
  }
  if ( a1 )
  {
    if ( a4 )
      LocalScatterPool = HalpDmaAllocateLocalScatterPool(0LL, a1);
    else
      LocalScatterPool = HalpDmaAllocateLocalContiguousPool(0LL, a1);
    if ( LocalScatterPool < 0 )
      goto LABEL_12;
    v16 = MEMORY[0xE8];
    MEMORY[0x159] = 0;
  }
  else
  {
    MEMORY[0xE8] = 0;
    v16 = 0;
    MEMORY[0x159] = 1;
  }
  *a8 = v16;
  result = 0LL;
  MEMORY[0x200] = 0LL;
  return result;
}
