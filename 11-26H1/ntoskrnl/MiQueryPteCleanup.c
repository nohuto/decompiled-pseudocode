/*
 * XREFs of MiQueryPteCleanup @ 0x1404101DC
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryPteCleanup(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // rcx
  void *v11; // r14
  void *v12; // rcx
  void *v13; // rdx
  size_t v14; // r8

  v8 = *(_QWORD *)(a2 + 112);
  if ( v8 )
  {
    MiUnlockProtoPoolPage(v8, 0x11u);
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_QWORD *)(a2 + 104) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)a2, v9);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  LOBYTE(v9) = *(_BYTE *)(a2 + 48);
  if ( (_BYTE)v9 != 17 )
  {
    MiUnlockWorkingSetShared(*(_QWORD *)a2, v9);
    *(_BYTE *)(a2 + 48) = 17;
  }
  v10 = *(_QWORD *)(a2 + 32);
  if ( v10 )
  {
    MiUnlockAndDereferenceVadShared(v10);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  if ( *(_BYTE *)(a2 + 51) )
    KiUnstackDetachProcess(a2 + 56, 0);
  v11 = *(void **)(a2 + 24);
  if ( v11 )
  {
    MmUnlockPages(*(PMDL *)(a2 + 24));
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v12 = *(void **)(a1 + 8);
    v13 = (void *)(a2 + 120);
    v14 = (a3 - a2 - 120) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( *(_BYTE *)(a1 + 32) )
      RtlCopyToUser(v12, v13, v14);
    else
      RtlCopyVolatileMemory(v12, v13, v14);
  }
  return a4;
}
