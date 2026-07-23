/*
 * XREFs of ViFreeMapRegisterFile @ 0x140B78BBC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140B76000 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B764B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B76560 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140B76800 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B779A0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140B77B70 (ViAdapterCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1404BBAB0 (VfUtilFreePoolCheckIRQL.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x140B78494 (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x140B78E08 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, _SLIST_ENTRY *a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  __int64 v6; // r9
  _SLIST_ENTRY *Next; // r8
  __int64 v8; // rdi
  unsigned int v9; // esi
  char *i; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r9d
  ULONG_PTR v13; // r8
  __int64 v14; // rdx
  _SLIST_ENTRY *v15; // rcx

  if ( !a2 || LODWORD(a2->Next) != -1393569779 )
    return 0LL;
  v4 = (KSPIN_LOCK *)(a1 + 152);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 152));
  v6 = *((_QWORD *)&a2->Next + 1);
  if ( *(_SLIST_ENTRY **)(v6 + 8) != (_SLIST_ENTRY *)(&a2->Next + 1)
    || (Next = a2[1].Next, Next->Next != (_SLIST_ENTRY *)(&a2->Next + 1)) )
  {
    __fastfail(3u);
  }
  Next->Next = (_SLIST_ENTRY *)v6;
  *(_QWORD *)(v6 + 8) = Next;
  KeReleaseSpinLock(v4, v5);
  LODWORD(a2->Next) = 0;
  v8 = *((_QWORD *)&a2[2].Next + 1);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v8 + 24), *((PMDL *)&a2[2].Next + 1));
    IoFreeMdl((PMDL)v8);
  }
  MmUnmapLockedPages(a2[4].Next, *((PMDL *)&a2[3].Next + 1));
  v9 = 0;
  for ( i = (char *)(&a2[5].Next + 1); v9 < *((_DWORD *)&a2[1].Next + 3); i += 32 )
  {
    v11 = *((_QWORD *)i + 2);
    if ( *(_QWORD *)i )
    {
      v12 = *((_DWORD *)i + 2);
      v13 = v11 + (*(_DWORD *)i & 0xFFF) + 4096LL;
    }
    else
    {
      v13 = 0LL;
      v12 = 0;
    }
    ViCheckPadding(v11, 0x3000u, v13, v12);
    v14 = *((_QWORD *)i + 2);
    *((_DWORD *)i + 3) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v14, v9) )
      ExFreePoolWithTag(*((PVOID *)i + 2), 0);
    ++v9;
  }
  IoFreeMdl(*((PMDL *)&a2[3].Next + 1));
  v15 = (_SLIST_ENTRY *)*((_QWORD *)&a2[4].Next + 1);
  if ( v15 )
    VfUtilFreePoolCheckIRQL(v15);
  memset_0(a2, 0, 0x78uLL);
  VfUtilFreePoolCheckIRQL(a2);
  return 1LL;
}
