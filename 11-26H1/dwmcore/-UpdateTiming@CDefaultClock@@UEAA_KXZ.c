/*
 * XREFs of ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180186960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180186B64 (-GetCurrentTime@CClockBase@@IEBA_KXZ.c)
 *     ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z @ 0x180186BE0 (-EnsureForwardTiming@CClockBase@@IEAAX_K@Z.c)
 */

unsigned __int64 __fastcall CDefaultClock::UpdateTiming(CDefaultClock *this)
{
  unsigned __int64 CurrentTime; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx

  CurrentTime = CClockBase::GetCurrentTime(this);
  v3 = *((_QWORD *)this + 3);
  v4 = CurrentTime;
  *((_QWORD *)this + 2) = CurrentTime;
  *((_QWORD *)this + 4) = CurrentTime;
  *((_QWORD *)this + 5) = v3 + CurrentTime;
  *((_QWORD *)this + 6) = CurrentTime + v3 + (v3 >> 1);
  CClockBase::EnsureForwardTiming(this, CurrentTime);
  return v4;
}
