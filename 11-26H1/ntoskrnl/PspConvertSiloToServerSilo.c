/*
 * XREFs of PspConvertSiloToServerSilo @ 0x1407EEB8C
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1407EEE3C (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x1407EF2D8 (PspQueueDeferredWorkAndWait.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1408277F8 (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 *     PsGetParentSilo @ 0x140978D70 (PsGetParentSilo.c)
 *     PspJobHasChildren @ 0x140B09D20 (PspJobHasChildren.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, __int64 a2, ULONG_PTR a3, int a4)
{
  unsigned int v7; // ebx
  char *Pool2; // rax
  char *v10; // rdi
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // rcx

  v7 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  Pool2 = (char *)ExAllocatePool2(0x48uLL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *((_DWORD *)Pool2 + 318) = 0;
  *((_DWORD *)Pool2 + 319) = 259;
  *((_DWORD *)Pool2 + 334) = a4;
  if ( a3
    && (SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(a3, 0x65446953u, (__int64)(Pool2 + 1280), 0LL, 0LL),
        SiloRootDirectoryPath < 0)
    || (SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v10 + 1248), SiloRootDirectoryPath < 0)
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo()
       ? (!(unsigned __int8)PspJobHasChildren(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1504) = v10, SiloRootDirectoryPath = 0)
         : (SiloRootDirectoryPath = -1073741811))
        : (SiloRootDirectoryPath = -1073740529))
       : (SiloRootDirectoryPath = -1073741791))
      : (SiloRootDirectoryPath = -1073740536),
        PspUnlockJobExclusive(a1, CurrentThread),
        SiloRootDirectoryPath < 0) )
  {
    PspDeleteServerSiloGlobals(v10);
    return (unsigned int)SiloRootDirectoryPath;
  }
  else
  {
    EtwTraceJobServerSiloStateChange(a1);
    if ( (int)PspQueueDeferredWorkAndWait(v13, a1) < 0 )
      return (unsigned int)-1073740955;
    return v7;
  }
}
