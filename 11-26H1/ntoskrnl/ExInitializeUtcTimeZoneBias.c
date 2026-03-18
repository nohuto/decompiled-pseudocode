/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1408358B8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x140451D20 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x140800DE4 (RtlCutoverTimeToSystemTime.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140A13354 (RtlpQueryTimeZoneInformationWorker.c)
 *     ExpWriteTimeZoneBias @ 0x140B12910 (ExpWriteTimeZoneBias.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  int v4; // edi
  int v5; // r15d
  LONGLONG v6; // r8
  LONGLONG v7; // rcx
  LONGLONG v8; // r9
  LONGLONG v9; // rdx
  LONGLONG QuadPart; // r11
  int v11; // eax
  int v12; // r10d
  int v13; // eax
  LARGE_INTEGER v14; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER Time; // [rsp+28h] [rbp-D8h] BYREF
  TIME_FIELDS TimeFields; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[17]; // [rsp+40h] [rbp-C0h] BYREF
  TIME_FIELDS v18; // [rsp+84h] [rbp-7Ch] BYREF
  int v19; // [rsp+94h] [rbp-6Ch]
  TIME_FIELDS v20; // [rsp+D8h] [rbp-28h] BYREF
  int v21; // [rsp+E8h] [rbp-18h]

  v14.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  memset_0(v17, 0, 0x1B0uLL);
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  result = RtlpQueryTimeZoneInformationWorker(v17, 0x1B0uLL);
  if ( (int)result >= 0 )
  {
    v4 = v17[0] + v21;
    v5 = v17[0] + v19;
    RtlTimeToTimeFields(a1, &TimeFields);
    if ( v18.Month
      && v20.Month
      && RtlCutoverTimeToSystemTime(&v18, &Time, a1)
      && RtlCutoverTimeToSystemTime(&v20, &v14, a1) )
    {
      v6 = v14.QuadPart + 600000000LL * v5;
      v7 = Time.QuadPart + 600000000LL * v4;
      if ( v6 >= v7 )
      {
        v8 = Time.QuadPart + 600000000LL * v4;
        v9 = v14.QuadPart + 600000000LL * v5;
      }
      else
      {
        v8 = v14.QuadPart + 600000000LL * v5;
        v9 = Time.QuadPart + 600000000LL * v4;
      }
      QuadPart = a1->QuadPart;
      v11 = 0;
      v12 = v5;
      if ( v6 >= v7 )
        v12 = v4;
      LOBYTE(v11) = v6 >= v7;
      v13 = v11 + 1;
      if ( QuadPart < v8 || QuadPart >= v9 )
      {
        v4 = v12;
      }
      else
      {
        if ( v6 >= v7 )
          v4 = v5;
        v13 = (v14.QuadPart + 600000000LL * v5 < v7) + 1;
      }
      LODWORD(Blink[27].Flink) = v13;
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
