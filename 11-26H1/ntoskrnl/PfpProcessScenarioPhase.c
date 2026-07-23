/*
 * XREFs of PfpProcessScenarioPhase @ 0x140B1F0C8
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140ACC2CC (PfSnSetPrefetcherInformation.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 *     RtlGetActiveConsoleId @ 0x140449060 (RtlGetActiveConsoleId.c)
 *     PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x140602D74 (PfpPartitionIterateAndCheckCanAnyDoAccessLogging.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsGetNextSession @ 0x140A837F0 (PsGetNextSession.c)
 *     PfpScenCtxPrefetchWait @ 0x140BFEAD8 (PfpScenCtxPrefetchWait.c)
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 *     PfpScenCtxScenarioSet @ 0x140C10118 (PfpScenCtxScenarioSet.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(_DWORD *a1, char a2)
{
  unsigned int v2; // edi
  int v3; // r9d
  __int64 v4; // rdx
  int v6; // ecx
  ULONG ActiveConsoleId; // ebx
  int v8; // ecx
  ULONG v9; // ebx
  int v10; // r14d
  _QWORD *NextSession; // rax
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-10h]

  v2 = 0;
  v13 = 0;
  v12 = 0LL;
  if ( *a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = a1[1];
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  if ( v3 == 1 || v3 == 2 )
    goto LABEL_8;
  if ( v3 != 3 )
  {
    if ( v3 != 4 )
    {
      if ( v3 == 5 )
      {
LABEL_8:
        if ( a2 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          v4 = ((a1[4] & 1) != 0) | 4u;
          if ( v3 != 5 )
            v4 = (a1[4] & 1) != 0;
          PfPowerActionNotify((unsigned int)a1[2], v4);
        }
        return v2;
      }
      return (unsigned int)-1073741811;
    }
    v6 = a1[2];
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
        {
          PfpScenCtxScenarioSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
          HIDWORD(v12) = HIDWORD(stru_140E66D40.TracingPrivate[0]);
          LODWORD(v12) = 5;
          *(_QWORD *)((char *)&v12 + 4) = 0x300000002LL;
          v13 = 1;
          PfpPartitionIterate((__int64)PfpLogScenarioEventCallback, 1LL, (__int64)&v12);
        }
      }
      return v2;
    }
LABEL_31:
    PfpScenCtxScenarioSet((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
    return v2;
  }
  v8 = a1[2];
  if ( v8 )
  {
    if ( v8 != 1 || LODWORD(stru_140E66D40.TracingPrivate[0]) != 3 )
      return v2;
    PfpScenCtxPrefetchWait((struct _KTHREAD *)&stru_140E66D40.OtherOperationCount);
    HIDWORD(v12) = HIDWORD(stru_140E66D40.TracingPrivate[0]);
    *(_QWORD *)&v12 = 3LL;
    DWORD2(v12) = 0;
    v13 = 0;
    PfpPartitionIterate((__int64)PfpLogScenarioEventCallback, 0LL, (__int64)&v12);
    goto LABEL_31;
  }
  v9 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v9
    && (unsigned int)PfpPartitionIterateAndCheckCanAnyDoAccessLogging() )
  {
    v10 = 0;
    NextSession = 0LL;
    while ( 1 )
    {
      NextSession = PsGetNextSession(NextSession);
      if ( !NextSession )
        break;
      if ( (unsigned int)++v10 >= 3 )
      {
        ObfDereferenceObjectWithTag(NextSession, 0x79517350u);
        goto LABEL_31;
      }
    }
  }
  return v2;
}
