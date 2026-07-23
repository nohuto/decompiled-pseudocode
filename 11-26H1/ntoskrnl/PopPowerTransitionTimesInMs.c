/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x1404E513C
 * Callers:
 *     PopCalculateWakeTimeAdjustment @ 0x1407D27A0 (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTracePowerTransitionTime @ 0x140B2D930 (PopDiagTracePowerTransitionTime.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x140C0CF00 (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r11
  _DWORD *v12; // r10

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_140F109E8, &qword_140F109F0);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140F10A08, &qword_140F10A10);
    *a2 = result;
  }
  if ( a5 )
  {
    a5 = 0LL;
    result = PopQpcTimeInMs(&a5, &qword_140F10A28);
    *v12 = result;
    if ( dword_140F10C38 )
    {
      result = (unsigned int)(qword_140F10AB0 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140F10A70 / v11;
    *a3 = qword_140F10A70 / v11;
  }
  if ( a4 )
  {
    result = (qword_140F10BB0 + qword_140F10AE8) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140F10A50 / v11;
    *a6 = qword_140F10A50 / v11;
  }
  return result;
}
