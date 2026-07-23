/*
 * XREFs of RtlpTimeToTimeFields @ 0x1800A06F0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x18009FCD0 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800A0AB0 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2, __int64 *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // r9
  unsigned int Count; // r10d
  int v6; // edx
  unsigned int v7; // esi
  __int64 v8; // r11
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // rcx
  signed __int64 v15; // rdx
  unsigned __int64 v16; // r9
  int v17; // r14d
  unsigned int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // r9d
  unsigned int v21; // edi
  unsigned int v22; // r10d
  __int64 v23; // r11
  __int64 v24; // rbx
  __int16 v25; // ax
  __int16 result; // ax
  __int16 v27; // r9
  __int16 v28; // cx
  _LARGE_INTEGER *Data; // rdi
  __int64 QuadPart; // r9
  __int64 v31; // r9
  signed __int32 v32[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v33; // [rsp+20h] [rbp-28h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return RtlpTimeToTimeFieldsNoLeapSeconds(a1);
  Count = LeapSecondData->Count;
  _InterlockedOr(v32, 0);
  v6 = 0;
  v7 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v8 = *a3;
  else
    v8 = 0LL;
  v9 = *a1;
  v10 = 0;
  v11 = v7;
  if ( Count )
  {
    Data = LeapSecondData->Data;
    do
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        if ( v9 < (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v8 )
          break;
        --v6;
      }
      else
      {
        v31 = QuadPart - v8;
        if ( v9 >= v31 + 20000000 )
        {
          ++v6;
        }
        else if ( v9 < v31 + 10000000 )
        {
          if ( v9 < v31 )
            break;
          v11 |= 4u;
        }
        else
        {
          v11 |= 2u;
        }
      }
      ++v10;
      ++Data;
      LOBYTE(v7) = v11;
    }
    while ( v10 < Count );
  }
  v12 = v9 - 10000000LL * v6;
  v13 = v12 - 10000000;
  if ( (v7 & 2) == 0 )
    v13 = v12;
  if ( v13 < 0 )
    v14 = -(__int64)((unsigned __int64)(((unsigned __int64)-v13 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13);
  else
    v14 = (unsigned __int64)(((unsigned __int64)v13 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  v15 = -v14;
  if ( v14 > 0 )
    v15 = v14;
  v16 = (unsigned __int64)(((unsigned __int64)v15 * (unsigned __int128)(unsigned __int64)Magic86400000) >> 64) >> 26;
  v17 = v16;
  if ( v14 < 0 )
  {
    v16 = -(__int64)v16;
    v17 = v16;
  }
  v18 = v14 - 86400000 * v16;
  HIWORD(v33) = ((int)v16 + 1) % 7u;
  v19 = (unsigned int)v16 / 0x23AB1;
  v20 = (unsigned int)v16 % 0x23AB1;
  v21 = (100 * ((v20 - 36524 * ((100 * v20 + 75) / 0x37BB49)) % 0x5B5) + 75) / 0x8EAD
      + 4 * ((v20 - 36524 * ((100 * v20 + 75) / 0x37BB49)) / 0x5B5 + 25 * ((100 * v20 + 75) / 0x37BB49 + 4 * v19));
  v22 = v21 + 1;
  v23 = v21 / 0x64 + v17 + -365 * v21 - v21 / 0x190 - (v21 >> 2);
  if ( v21 + 1 != 400 * ((v21 + 1) / 0x190) && (v22 == 100 * (v22 / 0x64) || (v22 & 3) != 0) )
  {
    v24 = NormalYearDayToMonth[v23];
    v25 = NormalYearDaysPrecedingMonth[v24];
  }
  else
  {
    LOWORD(v24) = LeapYearDayToMonth[v23];
    v25 = LeapYearDaysPrecedingMonth[LeapYearDayToMonth[v23]];
  }
  WORD1(v33) = v24 + 1;
  WORD2(v33) = v21 / 0x64 + v17 + -365 * v21 - v21 / 0x190 - (v21 >> 2) - v25 + 1;
  LOWORD(v33) = v21 + 1601;
  WORD3(v33) = v18 / 0x3E8 / 0x3C / 0x3C;
  WORD4(v33) = v18 / 0x3E8 / 0x3C % 0x3C;
  result = 1000;
  v27 = v18 / 0x3E8 % 0x3C;
  WORD5(v33) = v27;
  v28 = v18 % 0x3E8;
  WORD6(v33) = v28;
  if ( (v11 & 1) != 0 )
  {
    if ( (v7 & 2) != 0 )
      WORD5(v33) = v27 + 1;
  }
  else
  {
    WORD6(v33) = v28;
    if ( (v7 & 4) != 0 )
    {
      v28 /= 2;
      result = v28;
      WORD6(v33) = v28;
    }
    if ( (v7 & 2) != 0 )
    {
      result = v28 / 2 + 500;
      WORD6(v33) = result;
    }
  }
  *a2 = v33;
  return result;
}
