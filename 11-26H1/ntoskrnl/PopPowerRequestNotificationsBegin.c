/*
 * XREFs of PopPowerRequestNotificationsBegin @ 0x1407C9544
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestAction @ 0x1407DB5D0 (PopUmpoSendPowerRequestAction.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140ADE014 (PopUmpoSendPowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AECCA4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestNotificationsBegin(__int64 a1)
{
  unsigned __int64 QuantumTarget; // rbx
  __int64 v2; // r8
  int v3; // edi
  _BYTE *v4; // rsi

  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  QuantumTarget = stru_140F12D20.QuantumTarget;
  LOBYTE(stru_140F12D20.CurrentRunTime) = 1;
  while ( (unsigned __int64 *)QuantumTarget != &stru_140F12D20.QuantumTarget )
  {
    if ( *(_DWORD *)(QuantumTarget + 104) )
    {
      PopUmpoSendPowerRequestCreate(*(unsigned int *)(QuantumTarget + 36));
      v3 = 0;
      v4 = (_BYTE *)(QuantumTarget + 153);
      do
      {
        if ( *v4 )
        {
          LOBYTE(v2) = 1;
          PopUmpoSendPowerRequestAction(*(unsigned int *)(QuantumTarget + 36), (unsigned int)v3, v2);
        }
        ++v3;
        ++v4;
      }
      while ( v3 < 6 );
    }
    QuantumTarget = *(_QWORD *)QuantumTarget;
  }
  return PopReleaseRwLock(&stru_140F12D20);
}
