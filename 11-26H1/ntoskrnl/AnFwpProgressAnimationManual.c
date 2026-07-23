/*
 * XREFs of AnFwpProgressAnimationManual @ 0x140C57650
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F1AFC (BgpFwQueryPerformanceCounter.c)
 *     LogFwStat @ 0x140C5A040 (LogFwStat.c)
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
  result = *(_QWORD *)&WheapPfaLock.SuspendEvent.Header.Lock;
  if ( v2 + v0.QuadPart >= v9.QuadPart / 33 + *(_QWORD *)&WheapPfaLock.SuspendEvent.Header.Lock )
  {
    v4 = word_140E0EFF0;
    v5 = word_140E0EFF4;
    if ( word_140E0EFF0 != word_140E0EFF4
      && (*(_QWORD *)&WheapPfaLock.SuspendEvent.Header.Lock - v0.QuadPart - v2) / v1 >= 2 )
    {
      v4 = ++word_140E0EFF0;
    }
    v6 = word_140E0EFF8;
    if ( v4 >= (unsigned __int16)word_140E0EFF8 )
    {
      if ( v4 > (unsigned __int16)word_140E0EFF4 )
        goto LABEL_10;
      LogFwStat(1LL, 1LL);
      BgpTxtDisplayCharacter(gLoadedDiffHivesLock.NpxState, (unsigned __int16)word_140E0EFF0, 0, 0LL, 0LL);
      LogFwStat(0LL, 1LL);
      v4 = word_140E0EFF0;
      v5 = word_140E0EFF4;
      v6 = word_140E0EFF8;
    }
    if ( v4 == v5 )
    {
      v7 = v6 - word_140E0EFEC;
      goto LABEL_11;
    }
LABEL_10:
    v7 = v4 + 1;
LABEL_11:
    word_140E0EFF0 = v7;
    *(LARGE_INTEGER *)&WheapPfaLock.SuspendEvent.Header.Lock = v0;
    v8 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v8 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v8;
      *(_QWORD *)&WheapPfaLock.SuspendEvent.Header.Lock = result;
    }
  }
  return result;
}
