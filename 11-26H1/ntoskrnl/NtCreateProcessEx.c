/*
 * XREFs of NtCreateProcessEx @ 0x140B67C40
 * Callers:
 *     DifNtCreateProcessExWrapper @ 0x140672930 (DifNtCreateProcessExWrapper.c)
 *     NtCreateProcess @ 0x1407EFBF0 (NtCreateProcess.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 */

NTSTATUS __fastcall NtCreateProcessEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        unsigned int a5,
        void *a6,
        void *a7,
        __int64 a8)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 ULong64FromUser; // rax

  if ( !a4 )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  return PspCreateProcess(a1, a2, a3, a4, PreviousMode, a5, a6, a7, a8);
}
