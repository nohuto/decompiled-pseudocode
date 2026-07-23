/*
 * XREFs of IopIoRingDispatchFlush @ 0x14079AAD0
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     IopIoRingReferenceFileObject @ 0x140B409DC (IopIoRingReferenceFileObject.c)
 */

void __fastcall IopIoRingDispatchFlush(PVOID Object, __int64 a2)
{
  __int64 v2; // r8
  int v5; // eax
  struct _KTHREAD *CurrentThread; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(unsigned int *)(a2 + 16);
  if ( (v2 & 0xFFFFFFFC) != 0 )
  {
    v5 = -1069154303;
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8);
    v9 = (unsigned int)v5;
    IopCompleteIoRingEntry((__int64)Object, v8, &v9, 0);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a2 + 24);
  LOBYTE(v2) = v2 & 1;
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  FileObject = 0LL;
  v10 = 0LL;
  v5 = IopIoRingReferenceFileObject(Object, v7, v2, CurrentThread, 0, 0, &FileObject, &v10, v9, *((_QWORD *)&v9 + 1));
  if ( v5 < 0 )
    goto LABEL_5;
  v5 = IopFlushBuffersFile(FileObject, SHIDWORD(v10), Object, *(_QWORD *)(a2 + 8), 0LL);
  if ( v5 != 259 )
    goto LABEL_5;
}
