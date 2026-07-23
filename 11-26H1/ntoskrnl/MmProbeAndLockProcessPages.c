/*
 * XREFs of MmProbeAndLockProcessPages @ 0x140A9E250
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14038A7BC (CcAsyncReadPrefetch.c)
 *     DifMmProbeAndLockProcessPagesWrapper @ 0x14066BB20 (DifMmProbeAndLockProcessPagesWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v5; // edi
  NTSTATUS v6; // ebx
  unsigned __int128 v7; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v8[3]; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  memset(v8, 0, sizeof(v8));
  v7 = AccessMode & 1 | (unsigned __int128)(2 * (unsigned __int64)(Operation != IoReadAccess));
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 1;
    KiStackAttachProcess(Process, 0, (__int64)v8);
  }
  v6 = MiProbeAndLockPages((__int64)MemoryDescriptorList, &v7);
  if ( v5 )
    KiUnstackDetachProcess((__int64)v8, 0);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
}
