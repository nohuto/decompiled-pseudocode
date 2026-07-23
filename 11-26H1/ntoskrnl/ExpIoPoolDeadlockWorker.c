/*
 * XREFs of ExpIoPoolDeadlockWorker @ 0x140845B30
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpIoPoolDeadlockWorker(__int64 a1)
{
  return DbgkWerCaptureLiveKernelDump(
           (unsigned int)L"IoThreadpool",
           453,
           *(_DWORD *)a1,
           *(_QWORD *)(a1 + 8),
           0LL,
           0LL,
           0LL,
           0LL,
           0);
}
