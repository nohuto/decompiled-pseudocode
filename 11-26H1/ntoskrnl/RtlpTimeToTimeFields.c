/*
 * XREFs of RtlpTimeToTimeFields @ 0x140449E70
 * Callers:
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 *     HalpSetVirtualRtc @ 0x140449C88 (HalpSetVirtualRtc.c)
 *     WheapGetTimestamp @ 0x140449DC0 (WheapGetTimestamp.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     HalpQueryVirtualRtc @ 0x140587850 (HalpQueryVirtualRtc.c)
 *     HalEfiSetTime @ 0x1405890C8 (HalEfiSetTime.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140596EB4 (HalpCheckWakeupTimeAndAdjust.c)
 *     GetBootSystemTime @ 0x140CB05C4 (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x14044A1C0 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2)
{
  _KWAIT_BLOCK *WaitBlockList; // rax
  unsigned int Flink_high; // edx
  __int64 v5; // r8
  int v6; // ecx
  unsigned int v7; // r10d
  char v8; // r14
  int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // rcx
  signed __int64 v12; // rcx
  signed __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  int v15; // r15d
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // esi
  unsigned int v19; // esi
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // rbx
  __int16 v23; // ax
  __int16 result; // ax
  __int16 v25; // r8
  __int16 v26; // cx
  __int64 *p_Blink; // rbx
  __int64 v28; // r11
  signed __int32 v29[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v30; // [rsp+20h] [rbp-28h]

  WaitBlockList = ExpSysDbgLock.WaitBlockList;
  if ( !ExpSysDbgLock.WaitBlockList || !ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink )
    return RtlpTimeToTimeFieldsNoLeapSeconds();
  Flink_high = HIDWORD(ExpSysDbgLock.WaitBlockList->WaitListEntry.Flink);
  _InterlockedOr(v29, 0);
  v5 = *a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( Flink_high )
  {
    p_Blink = (__int64 *)&WaitBlockList->WaitListEntry.Blink;
    do
    {
      v28 = *p_Blink;
      if ( *p_Blink < 0 )
      {
        if ( v5 < (v28 & 0x7FFFFFFFFFFFFFFFLL) )
          break;
        --v6;
      }
      else if ( v5 < v28 + 20000000 )
      {
        if ( v5 < v28 + 10000000 )
        {
          if ( v5 < v28 )
            break;
          v9 |= 4u;
        }
        else
        {
          v9 |= 2u;
        }
      }
      else
      {
        ++v6;
      }
      ++v7;
      ++p_Blink;
      v8 = v9;
    }
    while ( v7 < Flink_high );
  }
  v10 = -10000000LL * v6 + v5;
  if ( (v8 & 2) != 0 )
    v10 -= 10000000LL;
  v11 = -v10;
  if ( v10 > 0 )
    v11 = v10;
  v12 = (unsigned __int64)(((unsigned __int64)v11 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v10 < 0 )
    v12 = -v12;
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
    v22 = *((unsigned __int8 *)NormalYearDayToMonth + v21);
    v23 = NormalYearDaysPrecedingMonth[v22];
  }
  else
  {
    LOWORD(v22) = *((unsigned __int8 *)LeapYearDayToMonth + v21);
    v23 = LeapYearDaysPrecedingMonth[*((unsigned __int8 *)LeapYearDayToMonth + v21)];
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
