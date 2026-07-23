/*
 * XREFs of IopIoRingDispatchCancel @ 0x14079AA08
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopCancelIoFile @ 0x14094A544 (IopCancelIoFile.c)
 *     IopIoRingReferenceFileObject @ 0x140B409DC (IopIoRingReferenceFileObject.c)
 */

void __fastcall IopIoRingDispatchCancel(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r9
  char v6; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned int *)(a2 + 16);
  Object = 0LL;
  v7 = 0LL;
  if ( (v2 & 0xFFFFFFFE) != 0 )
  {
    LODWORD(v7) = -1069154303;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v2) = v2 & 1;
    LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
    v6 = 0;
    LODWORD(v7) = IopIoRingReferenceFileObject(
                    a1,
                    *(_QWORD *)(a2 + 24),
                    v2,
                    CurrentThread,
                    v6,
                    0,
                    &Object,
                    0LL,
                    v7,
                    *((_QWORD *)&v7 + 1));
    if ( (int)v7 >= 0 )
      LODWORD(v7) = IopCancelIoFile(Object, *(_QWORD *)(a2 + 32));
    if ( Object )
      ObfDereferenceObject(Object);
  }
  IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v7, 0);
}
