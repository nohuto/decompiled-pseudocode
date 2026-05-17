/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x18007BB90
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x1800080C0 (RtlpInitMuiCriticalSection.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 *     LdrpInitParallelLoadingSupport @ 0x1800FBB44 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x18010E544 (LdrpCreateSoftwareEnclave.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     RtlTraceDatabaseCreate @ 0x180149E20 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 )
    return 3221225713LL;
  v4 = a3 & 0x10000000;
  if ( (a3 & 0x1000000) != 0 )
  {
    if ( v4 )
      return 3221225713LL;
  }
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) != 0 )
    return 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    v6 = (__int64 *)(a1 + 32);
    v5 = 0LL;
    v7 = 0LL;
  }
  else
  {
    if ( (a3 & 0x2000000) != 0 || !a2 )
      v5 = 33556432LL;
    else
      v5 = a2 & 0xFFFFFF;
    v6 = (__int64 *)(a1 + 32);
    v7 = v5;
  }
  *v6 = v7;
  *v6 = v5 | a3 & 0x9000000;
  if ( v4 || RtlpForceCSDebugInfoCreation )
  {
    *(_QWORD *)a1 = -1LL;
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *v6 |= 0x1000000uLL;
  }
  else
  {
    *(_QWORD *)a1 = -1LL;
  }
  v8 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v10 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v10 = 2147353474LL;
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v12 = *v6;
    v14 = 0LL;
    v16 = v12;
    v13[0] = 0;
    v13[1] = 388169728;
    v15 = 0LL;
    v17 = a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v8, 66562LL, 16LL, v13);
  }
  return 0LL;
}
