/*
 * XREFs of ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1400D7BAC
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D6ED0 (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D6FD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyUMPDHeap(struct _UMPDHEAP *a1)
{
  void *v2; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    v2 = (void *)*((_QWORD *)a1 + 1);
    if ( v2 )
      GrepUnsecureVirtualMemory(v2);
    if ( *(_QWORD *)a1 )
    {
      BaseAddress = *(PVOID *)a1;
      RegionSize = 0x400000LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool(a1);
  }
}
