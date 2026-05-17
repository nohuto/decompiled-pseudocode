/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x180079790
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionAndSpinCount(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v4; // rcx
  __int64 *v5; // rsi
  bool v6; // zf
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rax
  __int64 v11; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  v2 = a2 & 0xFFFFFF;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = v2;
    if ( !v2 )
      v4 = 33556432LL;
  }
  *(_QWORD *)(a1 + 32) = v4;
  v5 = (__int64 *)(a1 + 32);
  v6 = RtlpForceCSDebugInfoCreation == 0;
  *(_QWORD *)a1 = -1LL;
  if ( !v6 )
  {
    RtlpAddDebugInfoToCriticalSection(a1, a1);
    if ( *(_QWORD *)a1 == -1LL )
      *v5 |= 0x1000000uLL;
  }
  v7 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v11 = *v5;
    v13 = 0LL;
    v15 = v11;
    v12[0] = 0;
    v12[1] = 388169728;
    v14 = 0LL;
    v16 = a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v12);
  }
  return 0LL;
}
