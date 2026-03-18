/*
 * XREFs of RtlDestroyHeap @ 0x140B3BB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x1403528A8 (RtlpCallInterceptRoutine.c)
 *     RtlpHpFixedHeapDestroy @ 0x140354010 (RtlpHpFixedHeapDestroy.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     RtlpHeapHandleError @ 0x140526988 (RtlpHeapHandleError.c)
 *     ZwFreeVirtualMemory @ 0x1407237B0 (ZwFreeVirtualMemory.c)
 *     RtlpDestroyHeapSegment @ 0x14077C458 (RtlpDestroyHeapSegment.c)
 */

PVOID __stdcall RtlDestroyHeap(PVOID HeapHandle)
{
  int v3; // ecx
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // eax
  PVOID v7; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  RegionSize = 0LL;
  BaseAddress = 0LL;
  if ( HeapHandle )
  {
    if ( *((_DWORD *)HeapHandle + 4) == -857879331 )
    {
      RtlpHpFixedHeapDestroy((__int64)HeapHandle);
    }
    else
    {
      v3 = *((_DWORD *)HeapHandle + 36);
      if ( v3 )
        RtlpCallInterceptRoutine(v3, (__int64)HeapHandle, 0LL, 8u, 0LL);
      v4 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v4 )
      {
        v5 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
        RegionSize = 0LL;
        BaseAddress = (PVOID)(v5 & 0xFFFFFFFFFFFF0000uLL);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      }
      v6 = *((_DWORD *)HeapHandle + 28);
      if ( (v6 & 1) == 0 )
      {
        if ( v6 >= 0 )
          ExDeleteResourceLite(*((PERESOURCE *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v7 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment((__int64)v7);
      }
      while ( v7 != HeapHandle );
    }
  }
  else if ( (int)RtlpBootStatHandleLock.CurrentRunTime >= 2 )
  {
    DbgPrint("(HeapHandle != NULL)");
    RtlpHeapHandleError();
  }
  return 0LL;
}
