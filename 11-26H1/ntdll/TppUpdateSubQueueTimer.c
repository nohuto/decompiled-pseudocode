/*
 * XREFs of TppUpdateSubQueueTimer @ 0x180088FF0
 * Callers:
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     TppSingleTimerExpiration @ 0x180089240 (TppSingleTimerExpiration.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x180089890 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppETWTimerCancelNtTimer @ 0x180115AC0 (TppETWTimerCancelNtTimer.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     ZwCancelTimer2 @ 0x1801600F0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x180162650 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2)
{
  __int64 v3; // rcx
  LARGE_INTEGER v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *SharedData; // r9
  __int64 v10; // r9
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  LARGE_INTEGER DueTime; // [rsp+20h] [rbp-68h] BYREF
  _DWORD Fields[2]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+60h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  DueTime.QuadPart = 0LL;
  *(_QWORD *)&Parameters.Version = 0LL;
  if ( v3 )
  {
    v5 = *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = (*(_QWORD *)(v3 + 32) - v5.QuadPart) / 10000;
    if ( *(_QWORD *)a1 != v5.QuadPart || *(_DWORD *)(a1 + 112) != (_DWORD)v6 )
    {
      *(LARGE_INTEGER *)a1 = v5;
      Parameters.NoWakeTolerance = 10000LL * (unsigned int)v6;
      *(_DWORD *)(a1 + 112) = v6;
      if ( !a2 )
      {
        v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
        if ( v7 > v5.QuadPart )
          v5.QuadPart = 0LL;
        else
          v5.QuadPart = v7 - v5.QuadPart;
      }
      DueTime = v5;
      v8 = 2147353478LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v10 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v10 = 2147353478LL;
      if ( *(_BYTE *)v10 )
      {
        Fields[0] = 0;
        v15 = 0LL;
        Fields[1] = 472645632;
        v16 = 0LL;
        v18 = a1;
        v17 = v5;
        v19 = v6;
        v11 = NtCurrentPeb()->SharedData;
        if ( v11 )
        {
          if ( *v11 )
            v8 = (__int64)NtCurrentPeb()->SharedData + 556;
        }
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x402u, 0x14u, Fields);
      }
      ZwSetTimer2(*(HANDLE *)(a1 + 24), &DueTime, 0LL, &Parameters);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(HANDLE *)(a1 + 24), 0LL);
  }
}
