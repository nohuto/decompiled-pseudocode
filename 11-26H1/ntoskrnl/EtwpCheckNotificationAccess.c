/*
 * XREFs of EtwpCheckNotificationAccess @ 0x1409205D4
 * Callers:
 *     EtwpUpdatePeriodicCaptureState @ 0x14082D210 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpValidateEnableNotification @ 0x14091F4CC (EtwpValidateEnableNotification.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1409207F8 (EtwpCheckGuidAccess.c)
 *     EtwCheckSecurityLoggerAccess @ 0x140A7FB2C (EtwCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpCheckNotificationAccess(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rdx

  result = EtwpCheckGuidAccess(a1, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = EtwpCheckGuidAccess(a2, 128LL, 0LL);
    v5 = result;
    if ( (int)result >= 0 )
    {
      v6 = *a1 - s_ProviderThreatInt;
      if ( *a1 == s_ProviderThreatInt )
        v6 = a1[1] - 0x44D38D4D0F04D8F1LL;
      if ( !v6 )
      {
        CurrentThread = KeGetCurrentThread();
        LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
        return (unsigned int)EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, CurrentThread);
      }
      return v5;
    }
  }
  return result;
}
