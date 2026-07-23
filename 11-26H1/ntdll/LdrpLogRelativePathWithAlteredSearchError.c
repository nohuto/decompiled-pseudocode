/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x18009AD20
 * Callers:
 *     LdrpGetDllPath @ 0x18009A710 (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18010E550 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016E69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

ULONG __fastcall LdrpLogRelativePathWithAlteredSearchError(__int64 a1)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  ULONG result; // eax
  __int64 v6; // r8
  _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &word_1801762D4;
  result = _InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C4A00);
    result = _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_1801C4A00 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v8, a1);
    tlgCreate1Sz_wchar_t(v9, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801C4A00,
             (unsigned __int8 *)dword_18019B881,
             v6,
             (__int64)v7,
             4u,
             v7);
  }
  return result;
}
