/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x14083BAF8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x140806884 (RtlCutoverTimeToSystemTime.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140A12544 (RtlpQueryTimeZoneInformationWorker.c)
 *     ExpWriteTimeZoneBias @ 0x140B14690 (ExpWriteTimeZoneBias.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentSystemTime)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  int v4; // edi
  int v5; // r15d
  BOOLEAN v6; // r9
  BOOLEAN v7; // r9
  LONGLONG v8; // r8
  LONGLONG v9; // rcx
  LONGLONG v10; // r9
  LONGLONG v11; // rdx
  LONGLONG QuadPart; // r11
  int v13; // eax
  int v14; // r10d
  int v15; // eax
  LARGE_INTEGER v16; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-D8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v19[17]; // [rsp+40h] [rbp-C0h] BYREF
  _TIME_FIELDS CutoverTime; // [rsp+84h] [rbp-7Ch] BYREF
  int v21; // [rsp+94h] [rbp-6Ch]
  _TIME_FIELDS v22; // [rsp+D8h] [rbp-28h] BYREF
  int v23; // [rsp+E8h] [rbp-18h]

  v16.QuadPart = 0LL;
  SystemTime.QuadPart = 0LL;
  memset_0(v19, 0, 0x1B0uLL);
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  result = RtlpQueryTimeZoneInformationWorker(v19, 0x1B0uLL);
  if ( (int)result >= 0 )
  {
    v4 = v19[0] + v23;
    v5 = v19[0] + v21;
    RtlTimeToTimeFields(CurrentSystemTime, &TimeFields);
    if ( CutoverTime.Month
      && v22.Month
      && RtlCutoverTimeToSystemTime(&CutoverTime, &SystemTime, CurrentSystemTime, v6)
      && RtlCutoverTimeToSystemTime(&v22, &v16, CurrentSystemTime, v7) )
    {
      v8 = v16.QuadPart + 600000000LL * v5;
      v9 = SystemTime.QuadPart + 600000000LL * v4;
      if ( v8 >= v9 )
      {
        v10 = SystemTime.QuadPart + 600000000LL * v4;
        v11 = v16.QuadPart + 600000000LL * v5;
      }
      else
      {
        v10 = v16.QuadPart + 600000000LL * v5;
        v11 = SystemTime.QuadPart + 600000000LL * v4;
      }
      QuadPart = CurrentSystemTime->QuadPart;
      v13 = 0;
      v14 = v5;
      if ( v8 >= v9 )
        v14 = v4;
      LOBYTE(v13) = v8 >= v9;
      v15 = v13 + 1;
      if ( QuadPart < v10 || QuadPart >= v11 )
      {
        v4 = v14;
      }
      else
      {
        if ( v8 >= v9 )
          v4 = v5;
        v15 = (v16.QuadPart + 600000000LL * v5 < v9) + 1;
      }
      LODWORD(Blink[27].Flink) = v15;
      HIDWORD(Blink[27].Flink) = v4;
      Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * v4);
      *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
      ExpWriteTimeZoneBias();
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
