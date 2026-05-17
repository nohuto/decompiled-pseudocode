/*
 * XREFs of RtlTimeToTimeFields @ 0x1800A07F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800A1980 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlTimeToTimeFields(__int64 *a1, _OWORD *a2)
{
  _LEAP_SECOND_DATA *LeapSecondData; // r9
  unsigned int Count; // r10d
  int v5; // edx
  unsigned int v6; // r11d
  __int64 v7; // rax
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
  __int16 result; // ax
  __int16 v25; // r9
  __int16 v26; // cx
  _LARGE_INTEGER *Data; // rbx
  __int64 QuadPart; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v30; // [rsp+20h] [rbp-28h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return RtlpTimeToTimeFieldsNoLeapSeconds();
  Count = LeapSecondData->Count;
  _InterlockedOr(v29, 0);
  v5 = 0;
  v6 = 0;
  v7 = *a1;
  v8 = NtCurrentPeb()->LeapSecondFlags & 1;
  v9 = v8;
  if ( Count )
  {
    Data = LeapSecondData->Data;
    do
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        if ( v7 < (QuadPart & 0x7FFFFFFFFFFFFFFFLL) )
          break;
        --v5;
      }
      else if ( v7 >= QuadPart + 20000000 )
      {
        ++v5;
      }
      else if ( v7 < QuadPart + 10000000 )
      {
        if ( v7 < QuadPart )
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
  v10 = v7 - 10000000LL * v5;
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
  HIWORD(v30) = ((int)v14 + 1) % 7u;
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
  WORD1(v30) = v22 + 1;
  WORD2(v30) = v19 / 0x64 + v15 + -365 * v19 - v19 / 0x190 - (v19 >> 2) - v23 + 1;
  LOWORD(v30) = v19 + 1601;
  WORD3(v30) = v16 / 0x3E8 / 0x3C / 0x3C;
  WORD4(v30) = v16 / 0x3E8 / 0x3C % 0x3C;
  result = 1000;
  v25 = v16 / 0x3E8 % 0x3C;
  WORD5(v30) = v25;
  v26 = v16 % 0x3E8;
  WORD6(v30) = v26;
  if ( (v9 & 1) != 0 )
  {
    if ( (v8 & 2) != 0 )
      WORD5(v30) = v25 + 1;
  }
  else
  {
    WORD6(v30) = v26;
    if ( (v8 & 4) != 0 )
    {
      v26 /= 2;
      result = v26;
      WORD6(v30) = v26;
    }
    if ( (v8 & 2) != 0 )
    {
      result = v26 / 2 + 500;
      WORD6(v30) = result;
    }
  }
  *a2 = v30;
  return result;
}
