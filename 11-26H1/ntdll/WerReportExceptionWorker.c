/*
 * XREFs of WerReportExceptionWorker @ 0x18013AB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x18015F880 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18015F8A0 (NtTerminateThread.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  void *v1; // rbx
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  RegionSize = 0LL;
  BaseAddress = (PVOID)a1;
  RtlReportExceptionEx(
    (PEXCEPTION_RECORD)(a1 + 16),
    (PCONTEXT)2,
    *(_DWORD *)(a1 + 8) & 0x1F,
    (PLARGE_INTEGER)0xFFFFFFFFFFFFFFFFLL);
  v1 = *(void **)BaseAddress;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  NtSetInformationThread(v1, ThreadDbgkWerReportActive, &unk_180188E40, 4u);
  ZwResumeThread(v1, 0LL);
  LODWORD(v1) = NtClose(v1);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, 0);
  return (unsigned int)v1;
}
