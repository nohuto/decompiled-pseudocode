/*
 * XREFs of ?EstimatedNextFrameTargetTime@CClockBase@@UEBA_K_K@Z @ 0x18018CE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CClockBase::EstimatedNextFrameTargetTime(CClockBase *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = *((_QWORD *)this + 3);
  v3 = v2 + *((_QWORD *)this + 5);
  if ( v3 <= a2 )
    return a2 + v2 - (a2 - v3) % v2;
  else
    return v3;
}
