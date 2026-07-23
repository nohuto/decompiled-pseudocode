/*
 * XREFs of RtlTimeToTimeFields @ 0x18009F920
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800A0AB0 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

void __cdecl RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  _LEAP_SECOND_DATA *LeapSecondData; // r9
  unsigned int Count; // r10d
  int v5; // edx
  unsigned int v6; // r11d
  __int64 QuadPart; // rax
  unsigned int v8; // esi
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rcx
  signed __int64 v12; // rcx
  signed __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // r14d
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // r9d
  unsigned int v19; // edi
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // rbx
  __int16 v23; // ax
  __int16 v24; // r9
  __int16 v25; // cx
  _LARGE_INTEGER *Data; // rbx
  __int64 v27; // r9
  signed __int32 v28[8]; // [rsp+0h] [rbp-48h] BYREF
  _TIME_FIELDS v29; // [rsp+20h] [rbp-28h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( LeapSecondData && LeapSecondData->Enabled )
  {
    Count = LeapSecondData->Count;
    _InterlockedOr(v28, 0);
    v5 = 0;
    v6 = 0;
    QuadPart = Time->QuadPart;
    v8 = NtCurrentPeb()->LeapSecondFlags & 1;
    v9 = v8;
    if ( Count )
    {
      Data = LeapSecondData->Data;
      do
      {
        v27 = Data->QuadPart;
        if ( Data->QuadPart < 0 )
        {
          if ( QuadPart < (v27 & 0x7FFFFFFFFFFFFFFFLL) )
            break;
          --v5;
        }
        else if ( QuadPart >= v27 + 20000000 )
        {
          ++v5;
        }
        else if ( QuadPart < v27 + 10000000 )
        {
          if ( QuadPart < v27 )
            break;
          v9 |= 4u;
        }
        else
        {
          v9 |= 2u;
        }
        ++v6;
        ++Data;
        LOBYTE(v8) = v9;
      }
      while ( v6 < Count );
    }
    v10 = QuadPart - 10000000LL * v5;
    v11 = v10 - 10000000;
    if ( (v8 & 2) == 0 )
      v11 = v10;
    if ( v11 < 0 )
      v12 = -(__int64)((unsigned __int64)(((unsigned __int64)-v11 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13);
    else
      v12 = (unsigned __int64)(((unsigned __int64)v11 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
    v13 = -v12;
    if ( v12 > 0 )
      v13 = v12;
    v14 = (unsigned __int64)(((unsigned __int64)v13 * (unsigned __int128)(unsigned __int64)Magic86400000) >> 64) >> 26;
    v15 = v14;
    if ( v12 < 0 )
    {
      v14 = -(__int64)v14;
      v15 = v14;
    }
    v16 = v12 - 86400000 * v14;
    v29.Weekday = ((int)v14 + 1) % 7u;
    v17 = (unsigned int)v14 / 0x23AB1;
    v18 = (unsigned int)v14 % 0x23AB1;
    v19 = (100 * ((v18 - 36524 * ((100 * v18 + 75) / 0x37BB49)) % 0x5B5) + 75) / 0x8EAD
        + 4 * ((v18 - 36524 * ((100 * v18 + 75) / 0x37BB49)) / 0x5B5 + 25 * ((100 * v18 + 75) / 0x37BB49 + 4 * v17));
    v20 = v19 + 1;
    v21 = v19 / 0x64 + v15 + -365 * v19 - v19 / 0x190 - (v19 >> 2);
    if ( v19 + 1 != 400 * ((v19 + 1) / 0x190) && (v20 == 100 * (v20 / 0x64) || (v20 & 3) != 0) )
    {
      v22 = NormalYearDayToMonth[v21];
      v23 = NormalYearDaysPrecedingMonth[v22];
    }
    else
    {
      LOWORD(v22) = LeapYearDayToMonth[v21];
      v23 = LeapYearDaysPrecedingMonth[LeapYearDayToMonth[v21]];
    }
    v29.Month = v22 + 1;
    v29.Day = v19 / 0x64 + v15 + -365 * v19 - v19 / 0x190 - (v19 >> 2) - v23 + 1;
    v29.Year = v19 + 1601;
    v29.Hour = v16 / 0x3E8 / 0x3C / 0x3C;
    v29.Minute = v16 / 0x3E8 / 0x3C % 0x3C;
    v24 = v16 / 0x3E8 % 0x3C;
    v29.Second = v24;
    v25 = v16 % 0x3E8;
    v29.Milliseconds = v25;
    if ( (v9 & 1) != 0 )
    {
      if ( (v8 & 2) != 0 )
        v29.Second = v24 + 1;
    }
    else
    {
      v29.Milliseconds = v25;
      if ( (v8 & 4) != 0 )
      {
        v25 /= 2;
        v29.Milliseconds = v25;
      }
      if ( (v8 & 2) != 0 )
        v29.Milliseconds = v25 / 2 + 500;
    }
    *TimeFields = v29;
  }
  else
  {
    RtlpTimeToTimeFieldsNoLeapSeconds(Time);
  }
}
