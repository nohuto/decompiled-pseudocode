/*
 * XREFs of AnFwpProgressAnimationManual @ 0x140C51650
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x1404AD084 (BgpTxtDisplayCharacter.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F84EC (BgpFwQueryPerformanceCounter.c)
 *     LogFwStat @ 0x140C54040 (LogFwStat.c)
 */

LONGLONG AnFwpProgressAnimationManual()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  unsigned __int16 v4; // cx
  __int16 v5; // r8
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v8; // rbx
  LARGE_INTEGER v9; // [rsp+50h] [rbp+8h] BYREF

  v9.QuadPart = 0LL;
  v0 = BgpFwQueryPerformanceCounter(&v9);
  v1 = v9.QuadPart / 33;
  v2 = 10 * (v9.QuadPart / 33) / 100;
  result = *(_QWORD *)&WheapPfaLock.SavedApcStateFill[40];
  if ( v2 + v0.QuadPart >= v9.QuadPart / 33 + *(_QWORD *)&WheapPfaLock.SavedApcStateFill[40] )
  {
    v4 = word_140E0F008;
    v5 = word_140E0F010;
    if ( word_140E0F008 != word_140E0F010
      && (*(_QWORD *)&WheapPfaLock.SavedApcStateFill[40] - v0.QuadPart - v2) / v1 >= 2 )
    {
      v4 = ++word_140E0F008;
    }
    v6 = word_140E0F014;
    if ( v4 >= (unsigned __int16)word_140E0F014 )
    {
      if ( v4 > (unsigned __int16)word_140E0F010 )
        goto LABEL_10;
      LogFwStat(1LL, 1LL);
      BgpTxtDisplayCharacter(gLoadedDiffHivesLock.NpxState, (unsigned __int16)word_140E0F008, 0, 0LL, 0LL);
      LogFwStat(0LL, 1LL);
      v4 = word_140E0F008;
      v5 = word_140E0F010;
      v6 = word_140E0F014;
    }
    if ( v4 == v5 )
    {
      v7 = v6 - word_140E0F00C;
      goto LABEL_11;
    }
LABEL_10:
    v7 = v4 + 1;
LABEL_11:
    word_140E0F008 = v7;
    *(LARGE_INTEGER *)&WheapPfaLock.SavedApcStateFill[40] = v0;
    v8 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v8 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v8;
      *(_QWORD *)&WheapPfaLock.SavedApcStateFill[40] = result;
    }
  }
  return result;
}
