/*
 * XREFs of ?ToStringW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z @ 0x18032F8E0
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803322B0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     ?unsubscribe_from_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1803335F0 (-unsubscribe_from_services@GamingPostureController@implementation@Posture@GamingExperiences@Inte.c)
 * Callees:
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180168CDC (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

bool __fastcall TraceLoggingCorrelationVector::ToStringW(TraceLoggingCorrelationVector *this, unsigned __int16 *a2)
{
  int v3; // ebx
  bool result; // al
  char v5; // cl
  char *v6; // rdx
  unsigned __int16 *v7; // r8
  char v8[144]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 0;
  result = TraceLoggingCorrelationVector::ToStringImpl(
             this,
             _InterlockedExchangeAdd64((volatile signed __int64 *)this + 17, 0LL),
             v8);
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
