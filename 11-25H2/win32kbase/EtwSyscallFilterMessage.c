/*
 * XREFs of EtwSyscallFilterMessage @ 0x1401A2060
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1401481D0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     McTemplateK0szzq_EtwWriteTransfer @ 0x140152F14 (McTemplateK0szzq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwSyscallFilterMessage(const char *a1, const wchar_t *a2, const wchar_t *a3, char a4)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000000LL) != 0 )
    return McTemplateK0szzq_EtwWriteTransfer((__int64)a1, (__int64)a2, (__int64)a3, a1, a2, a3, a4);
  return result;
}
