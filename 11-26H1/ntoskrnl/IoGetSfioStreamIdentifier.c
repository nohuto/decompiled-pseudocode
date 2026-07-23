/*
 * XREFs of IoGetSfioStreamIdentifier @ 0x1404AD680
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

PVOID __stdcall IoGetSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  void *v2; // rbx
  _QWORD *FileObjectExtension; // rdi
  _QWORD *v5; // rdi
  KSPIN_LOCK *p_IrpListLock; // rbp
  KIRQL v7; // al
  _QWORD *v8; // rcx

  v2 = 0LL;
  if ( !FileObject || !Signature )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    v5 = (_QWORD *)FileObjectExtension[5];
    if ( v5 )
    {
      p_IrpListLock = &FileObject->IrpListLock;
      v7 = KeAcquireSpinLockRaiseToDpc(&FileObject->IrpListLock);
      v8 = (_QWORD *)*v5;
      if ( !*v5 )
      {
        v5[1] = v5;
        v8 = v5;
        *v5 = v5;
      }
      while ( v8 != v5 )
      {
        if ( (PVOID)v8[3] == Signature )
        {
          v2 = (void *)v8[2];
          break;
        }
        v8 = (_QWORD *)*v8;
      }
      KeReleaseSpinLock(p_IrpListLock, v7);
    }
  }
  return v2;
}
