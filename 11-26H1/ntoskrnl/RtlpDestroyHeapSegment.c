/*
 * XREFs of RtlpDestroyHeapSegment @ 0x14077EF4C
 * Callers:
 *     RtlDestroyHeap @ 0x140B3DD90 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpDestroyHeapSegment(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rcx
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    return 0;
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *(struct _KLOCK_ENTRIES **)(v3 + 8);
  v6 = *v4;
  if ( (struct _KLOCK_ENTRIES *)*v4 == v5 && v6 == v2 )
  {
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  else
  {
    RtlpLogHeapFailure(0xDu, 0LL, v2, v5, v6, 0LL);
  }
  BaseAddress = *(PVOID *)(a1 + 48);
  RegionSize = 0LL;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
}
