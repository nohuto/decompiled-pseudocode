/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x140796FF0
 * Callers:
 *     IopCleanupProcessResources @ 0x140A288F0 (IopCleanupProcessResources.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  char *v2; // rsi
  _QWORD *v3; // rbp
  char *i; // rbx
  PMDL *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  v2 = 0LL;
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&IopPerfIoTrackingLock.Spare35[1]);
  v3 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)IopPerfIoTrackingLock.TracingPrivate, Buffer);
  for ( i = (char *)v3[1]; ; i = (char *)*((_QWORD *)i + 5) )
  {
    v5 = (PMDL *)(i + 24);
    if ( !i )
      break;
    if ( *(PMDL *)(a1 + 16) == *v5 )
    {
      --*(_DWORD *)i;
      break;
    }
    v2 = i;
  }
  if ( !*(_DWORD *)i )
  {
    v6 = (void *)*((_QWORD *)i + 4);
    if ( v6 )
      MmUnmapLockedPages(v6, *v5);
    MmUnlockPages(*v5);
    IoFreeMdl(*v5);
    v7 = *((_QWORD *)i + 5);
    if ( v2 )
      *((_QWORD *)v2 + 5) = v7;
    else
      v3[1] = v7;
    ExFreePoolWithTag(i, 0);
    if ( !v3[1] )
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)IopPerfIoTrackingLock.TracingPrivate, Buffer);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&IopPerfIoTrackingLock.Spare35[1]);
}
