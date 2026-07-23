/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x1405CD780
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  PVOID FileObjectExtension; // rax
  NTSTATUS v4; // ebx
  PVOID **v5; // rdi
  KSPIN_LOCK *p_IrpListLock; // rbp
  KIRQL v7; // al
  PVOID *v8; // rcx
  KIRQL v9; // r14
  PVOID **v10; // rax
  PVOID **v11; // rdx

  FileObjectExtension = FileObject->FileObjectExtension;
  v4 = -1073741275;
  if ( FileObjectExtension )
  {
    v5 = (PVOID **)*((_QWORD *)FileObjectExtension + 5);
    if ( v5 )
    {
      p_IrpListLock = &FileObject->IrpListLock;
      v7 = KeAcquireSpinLockRaiseToDpc(&FileObject->IrpListLock);
      v8 = *v5;
      v9 = v7;
      while ( 1 )
      {
        v4 = -1073741275;
        if ( v8 == (PVOID *)v5 )
          break;
        v10 = (PVOID **)*v8;
        if ( v8[3] == Signature )
        {
          if ( v10[1] != v8 || (v11 = (PVOID **)v8[1], *v11 != v8) )
            __fastfail(3u);
          *v11 = (PVOID *)v10;
          v10[1] = (PVOID *)v11;
          ExFreePoolWithTag(v8, 0);
          v4 = 0;
          break;
        }
        v8 = (PVOID *)*v8;
      }
      KeReleaseSpinLock(p_IrpListLock, v9);
    }
  }
  return v4;
}
