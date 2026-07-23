/*
 * XREFs of IopDestroyDeviceNode @ 0x1409B0BD8
 * Callers:
 *     IopRemoveLegacyDeviceNode @ 0x1407A89B4 (IopRemoveLegacyDeviceNode.c)
 *     IopDeleteDevice @ 0x1409B0B00 (IopDeleteDevice.c)
 *     IopFindLegacyDeviceNode @ 0x1409B8598 (IopFindLegacyDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopUncacheInterfaceInformation @ 0x1409B21E4 (IopUncacheInterfaceInformation.c)
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     PnpFreeDeviceInstancePath @ 0x1409DB0F4 (PnpFreeDeviceInstancePath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDestroyDeviceNode(char *P)
{
  __int64 v2; // r8
  void *v3; // rcx
  void *v4; // rcx
  void **v5; // rsi
  void *v6; // rdi
  void *v7; // rcx
  void **v8; // rax
  unsigned __int16 *v9; // rsi
  unsigned __int16 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  if ( P )
  {
    if ( *((_QWORD *)P + 90) )
    {
      v10 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((ULONG)P, (PVOID)0x388);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v10 + 1), (PVOID)*v10);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), (PVOID)*((unsigned __int16 *)P + 28));
      }
      v11 = *((_QWORD *)P + 2);
      if ( v11 && *(_WORD *)(v11 + 56) )
      {
        IoAddTriageDumpDataBlock(v11 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*((_QWORD *)P + 2) + 64LL),
          (PVOID)*(unsigned __int16 *)(*((_QWORD *)P + 2) + 56LL));
      }
      KeBugCheckEx(0xCAu, 5uLL, *((_QWORD *)P + 4), *((_QWORD *)P + 90), 0x11uLL);
    }
    v2 = *((_QWORD *)P + 4);
    if ( (*(_DWORD *)(v2 + 48) & 0x1000) != 0 && *((_QWORD *)P + 2) )
    {
      v9 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((ULONG)P, (PVOID)0x388);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), (PVOID)*v9);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), (PVOID)*((unsigned __int16 *)P + 28));
      }
      v12 = *((_QWORD *)P + 2);
      if ( v12 && *(_WORD *)(v12 + 56) )
      {
        IoAddTriageDumpDataBlock(v12 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*((_QWORD *)P + 2) + 64LL),
          (PVOID)*(unsigned __int16 *)(*((_QWORD *)P + 2) + 56LL));
      }
      KeBugCheckEx(0xCAu, 5uLL, *((_QWORD *)P + 4), 0LL, 0LL);
    }
    if ( (*((_DWORD *)P + 99) & 0x20000) != 0 )
    {
      IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, v2, 0, 0LL);
    }
    else
    {
      v3 = (void *)*((_QWORD *)P + 54);
      if ( v3 )
        ObfDereferenceObject(v3);
      if ( *((_WORD *)P + 28) )
        ExFreePoolWithTag(*((PVOID *)P + 8), 0);
      PnpFreeDeviceInstancePath(P);
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = (void *)*((_QWORD *)P + 55);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      KeReleaseGuardedMutex(&PiResourceListLock);
      IopUncacheInterfaceInformation(*((_QWORD *)P + 4), 0LL);
      v5 = (void **)(P + 608);
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( *((void ***)v6 + 1) != v5 || (v8 = *(void ***)v6, *(void **)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v8;
        v8[1] = v5;
        ExFreePoolWithTag(*((PVOID *)v6 + 3), 0);
        ExFreePoolWithTag(v6, 0);
      }
      v7 = (void *)*((_QWORD *)P + 89);
      if ( v7 )
        ExFreePoolWithTag(v7, 0x62655250u);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 312LL) + 40LL) = 0LL;
      ExFreePoolWithTag(P, 0);
      _InterlockedDecrement(&IopNumberDeviceNodes);
    }
  }
}
