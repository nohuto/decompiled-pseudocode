/*
 * XREFs of EtwpCheckNotificationAccess @ 0x14097A0C0
 * Callers:
 *     EtwpUpdatePeriodicCaptureState @ 0x140833450 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpValidateEnableNotification @ 0x140979F2C (EtwpValidateEnableNotification.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1408FC30C (EtwpCheckGuidAccess.c)
 *     EtwCheckSecurityLoggerAccess @ 0x140A8599C (EtwCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpCheckNotificationAccess(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rdx

  result = EtwpCheckGuidAccess((__int64)a1, 0x80u);
  if ( (int)result >= 0 )
  {
    result = EtwpCheckGuidAccess(a2, 0x80u);
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
