/*
 * XREFs of MiSharePageAttach @ 0x1402EA178
 * Callers:
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     KeForceAttachProcess @ 0x140456CE0 (KeForceAttachProcess.c)
 */

__int64 __fastcall MiSharePageAttach(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  ULONG_PTR v4; // rbx
  volatile LONG *v5; // rbp
  KIRQL v6; // dl
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax

  v1 = *a1;
  v3 = a1[1];
  MiInitializePageColorBase(*(_QWORD *)(v3 + 32), 3LL, (unsigned int)(*((_DWORD *)a1 + 4) + 1), *a1 + 320);
  v4 = *(_QWORD *)(v3 + 40);
  if ( v4 && (_KPROCESS *)v4 != KeGetCurrentThread()->ApcState.Process )
  {
    v5 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v4 + 1198)) + 21384LL);
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( (*(_DWORD *)(v4 + 500) & 0xC00u) < 0xC00
      || *(_QWORD *)(*(_QWORD *)(v4 + 1040) + 72LL)
      || *(_QWORD *)(v4 + 1176) <= 1uLL )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      ++*(_DWORD *)(*(_QWORD *)(v4 + 1040) + 56LL);
    }
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockExclusive(v5, v6);
    if ( !v7 )
      return 3221225473LL;
    *((_DWORD *)a1 + 5) |= 1u;
    KeForceAttachProcess(v4);
  }
  *((_DWORD *)a1 + 32) = 128;
  *(_QWORD *)(v1 + 312) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)a1 + 5) |= 2u;
  --CurrentThread->KernelApcDisable;
  return 0LL;
}
