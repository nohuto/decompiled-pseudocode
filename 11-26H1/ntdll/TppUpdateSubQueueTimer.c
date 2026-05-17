/*
 * XREFs of TppUpdateSubQueueTimer @ 0x180068BA0
 * Callers:
 *     TppWaitCompletion @ 0x18002BB30 (TppWaitCompletion.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     TppSingleTimerExpiration @ 0x180068DF0 (TppSingleTimerExpiration.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x180069440 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppETWTimerCancelNtTimer @ 0x1801162E0 (TppETWTimerCancelNtTimer.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     ZwCancelTimer2 @ 0x1801601F0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x180162750 (ZwSetTimer2.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *SharedData; // r9
  __int64 v10; // r9
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v14[2]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  _QWORD v20[2]; // [rsp+60h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v20[0] = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = (*(_QWORD *)(v3 + 32) - v5) / 10000;
    if ( *(_QWORD *)a1 != v5 || *(_DWORD *)(a1 + 112) != (_DWORD)v6 )
    {
      *(_QWORD *)a1 = v5;
      v20[1] = 10000LL * (unsigned int)v6;
      *(_DWORD *)(a1 + 112) = v6;
      if ( !a2 )
      {
        v7 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0];
        if ( v7 > v5 )
          v5 = 0LL;
        else
          v5 = v7 - v5;
      }
      v13 = v5;
      v8 = 2147353478LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v10 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v10 = 2147353478LL;
      if ( *(_BYTE *)v10 )
      {
        v14[0] = 0;
        v15 = 0LL;
        v14[1] = 472645632;
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
        NtTraceEvent(*(unsigned __int8 *)v8, 1026LL, 20LL, v14);
      }
      ZwSetTimer2(*(_QWORD *)(a1 + 24), &v13, 0LL, v20);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
