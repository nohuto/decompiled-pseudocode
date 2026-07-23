/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x18006A3B0
 * Callers:
 *     LdrpInitMuiCrits @ 0x18001D184 (LdrpInitMuiCrits.c)
 *     RtlpInitMuiCriticalSection @ 0x1800537F0 (RtlpInitMuiCriticalSection.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     EtwpInitLoggerContext @ 0x180065D70 (EtwpInitLoggerContext.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 *     LdrpInitParallelLoadingSupport @ 0x1800FB294 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x18010E094 (LdrpCreateSoftwareEnclave.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     RtlTraceDatabaseCreate @ 0x180149CD0 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  ULONG v4; // ecx
  __int64 v5; // rdx
  unsigned __int64 *p_SpinCount; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  unsigned __int64 v12; // rax
  _DWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  unsigned __int64 v16; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v17; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xE0000000) != 0 )
    return -1073741583;
  v4 = Flags & 0x10000000;
  if ( (Flags & 0x1000000) != 0 )
  {
    if ( v4 )
      return -1073741583;
  }
  if ( (SpinCount & 0xFF000000) != 0 )
    return -1073741584;
  if ( (Flags & 0x4000000) != 0 )
    return 0;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  CriticalSection->LockCount = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    p_SpinCount = &CriticalSection->SpinCount;
    v5 = 0LL;
    v7 = 0LL;
  }
  else
  {
    if ( (Flags & 0x2000000) != 0 || !SpinCount )
      v5 = 33556432LL;
    else
      v5 = SpinCount & 0xFFFFFF;
    p_SpinCount = &CriticalSection->SpinCount;
    v7 = v5;
  }
  *p_SpinCount = v7;
  *p_SpinCount = v5 | Flags & 0x9000000;
  if ( v4 || RtlpForceCSDebugInfoCreation )
  {
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      *p_SpinCount |= 0x1000000uLL;
  }
  else
  {
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  }
  v8 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v10 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v10 = 2147353474LL;
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v12 = *p_SpinCount;
    v14 = 0LL;
    v16 = v12;
    Fields[0] = 0;
    Fields[1] = 388169728;
    v15 = 0LL;
    v17 = CriticalSection;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
