/*
 * XREFs of ?IncrementW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z @ 0x18032C6B4
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 * Callees:
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x180168894 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

bool __fastcall TraceLoggingCorrelationVector::IncrementW(TraceLoggingCorrelationVector *this, unsigned __int16 *a2)
{
  int v3; // ebx
  bool result; // al
  char v5; // cl
  char *v6; // rdx
  unsigned __int16 *v7; // r8
  char v8[144]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 0;
  result = TraceLoggingCorrelationVector::Increment(this, v8);
  v5 = v8[0];
  if ( v8[0] )
  {
    v6 = v8;
    v7 = a2;
    do
    {
      ++v6;
      *v7 = v5;
      ++v3;
      ++v7;
      v5 = *v6;
    }
    while ( *v6 );
  }
  a2[v3] = 0;
  return result;
}
