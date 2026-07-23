/*
 * XREFs of MiGetWriteWatchFinish @ 0x140A92888
 * Callers:
 *     NtGetWriteWatch @ 0x140A927B0 (NtGetWriteWatch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWriteWatchFinish(__int64 a1, unsigned int a2)
{
  volatile signed __int32 *v4; // rcx
  int v5; // eax
  void *v6; // rcx
  size_t v7; // r8
  void *v8; // rdx
  _QWORD *v9; // rcx
  int v10; // eax
  int *v11; // rcx
  void *v12; // rcx

  v4 = *(volatile signed __int32 **)(a1 + 184);
  if ( v4 )
    MiUnlockAndDereferenceVad(v4);
  v5 = *(_DWORD *)(a1 + 128);
  if ( (v5 & 1) != 0 )
  {
    KiUnstackDetachProcess(a1 + 136, 0);
    *(_DWORD *)(a1 + 128) &= ~1u;
    v5 = *(_DWORD *)(a1 + 128);
  }
  if ( (v5 & 2) != 0 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 104), 0x77576D4Du);
  if ( !a2 )
  {
    v6 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      v7 = 8LL * *(_QWORD *)(a1 + 80);
      v8 = *(void **)(a1 + 192);
      if ( *(_BYTE *)(a1 + 132) )
        RtlCopyToUser(v6, v8, v7);
      else
        RtlCopyVolatileMemory(v6, v8, v7);
      v9 = *(_QWORD **)(a1 + 8);
      if ( *(_BYTE *)(a1 + 132) )
        RtlWriteULong64ToUser(v9, *(_QWORD *)(a1 + 80));
      else
        *v9 = *(_QWORD *)(a1 + 80);
    }
    v10 = *(_DWORD *)(a1 + 112) << 12;
    v11 = *(int **)(a1 + 48);
    if ( *(_BYTE *)(a1 + 132) )
      RtlWriteULongToUser(v11, v10);
    else
      *v11 = v10;
  }
  v12 = *(void **)(a1 + 192);
  if ( v12 && v12 != (void *)(a1 + 200) )
    ExFreePoolWithTag(v12, 0);
  return a2;
}
