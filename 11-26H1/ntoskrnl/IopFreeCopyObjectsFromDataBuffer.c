/*
 * XREFs of IopFreeCopyObjectsFromDataBuffer @ 0x1404BC654
 * Callers:
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeCopyObjectsFromDataBuffer(__int64 a1, char a2)
{
  __int64 v2; // rbx
  void *v3; // rcx
  IRP *v4; // rsi
  ULONG_PTR v5; // rdi

  v2 = a1 - 80;
  if ( a2 )
  {
    v4 = *(IRP **)(v2 + 32);
    v5 = *(_QWORD *)(v2 + 48);
    if ( v4 )
    {
      IopFreeIrpExtension(*(_QWORD *)(v2 + 32), 9, 1);
      IopExceptionCleanupEx(v5, v4, v4->UserEvent, 0LL, 0);
      return;
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v2 + 48), 0x746C6644u);
  }
  v3 = *(void **)(v2 + 56);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ExFreePoolWithTag((PVOID)v2, 0);
}
