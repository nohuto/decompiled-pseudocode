/*
 * XREFs of MiQueryPteCleanup @ 0x14040F8FC
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryPteCleanup(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // rcx
  void *v11; // r14
  void *v12; // rcx
  void *v13; // rdx
  size_t v14; // r8

  v6 = a2;
  v8 = *(_QWORD *)(a2 + 112);
  if ( v8 )
  {
    LOBYTE(a2) = 17;
    MiUnlockProtoPoolPage(v8, a2, a3);
    *(_QWORD *)(v6 + 112) = 0LL;
    *(_QWORD *)(v6 + 104) = 0LL;
  }
  v9 = *(_QWORD *)(v6 + 40);
  if ( v9 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)v6, v9);
    *(_QWORD *)(v6 + 40) = 0LL;
  }
  LOBYTE(v9) = *(_BYTE *)(v6 + 48);
  if ( (_BYTE)v9 != 17 )
  {
    MiUnlockWorkingSetShared(*(_QWORD *)v6, v9);
    *(_BYTE *)(v6 + 48) = 17;
  }
  v10 = *(_QWORD *)(v6 + 32);
  if ( v10 )
  {
    MiUnlockAndDereferenceVadShared(v10);
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  if ( *(_BYTE *)(v6 + 51) )
    KiUnstackDetachProcess(v6 + 56, 0);
  v11 = *(void **)(v6 + 24);
  if ( v11 )
  {
    MmUnlockPages(*(PMDL *)(v6 + 24));
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v12 = *(void **)(a1 + 8);
    v13 = (void *)(v6 + 120);
    v14 = (a3 - v6 - 120) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( *(_BYTE *)(a1 + 32) )
      RtlCopyToUser(v12, v13, v14);
    else
      RtlCopyVolatileMemory(v12, v13, v14);
  }
  return a4;
}
