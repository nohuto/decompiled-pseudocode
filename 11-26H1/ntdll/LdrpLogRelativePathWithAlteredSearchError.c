/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x18009BBF0
 * Callers:
 *     LdrpGetDllPath @ 0x18009B5E0 (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18010EA00 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall LdrpLogRelativePathWithAlteredSearchError(__int64 a1)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  wchar_t *Buffer; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  _BYTE v7[32]; // [rsp+30h] [rbp-58h] BYREF
  char v8[16]; // [rsp+50h] [rbp-38h] BYREF
  char v9[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = (wchar_t *)&unk_180178474;
  result = (unsigned int)_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !(_DWORD)result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C5A00);
    result = (unsigned int)_InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_1801C5A00 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v8, a1);
    tlgCreate1Sz_wchar_t(v9, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801C5A00,
             byte_18019C869,
             v6,
             (__int64)v7,
             4,
             (__int64)v7);
  }
  return result;
}
