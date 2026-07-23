/*
 * XREFs of RtlInitializeCriticalSection @ 0x180068130
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  _DWORD *SharedData; // rcx
  __int64 v5; // rcx
  unsigned __int64 SpinCount; // rax
  _DWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  unsigned __int64 v11; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v12; // [rsp+48h] [rbp-20h]

  CriticalSection->LockCount = -1;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  v2 = 33556432LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    v2 = 0LL;
  CriticalSection->SpinCount = v2;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( RtlpForceCSDebugInfoCreation )
  {
    RtlpAddDebugInfoToCriticalSection(CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v3 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v5 = 2147353474LL;
  if ( *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    SpinCount = CriticalSection->SpinCount;
    v9 = 0LL;
    v11 = SpinCount;
    Fields[0] = 0;
    Fields[1] = 388169728;
    v10 = 0LL;
    v12 = CriticalSection;
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
