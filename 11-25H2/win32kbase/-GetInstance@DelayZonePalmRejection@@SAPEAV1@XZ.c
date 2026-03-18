/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140038BC0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     AddEdgePalmRejectionZone @ 0x14009EA50 (AddEdgePalmRejectionZone.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C3A38 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x140135908 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x14015BD00 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401BD1E0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x140212920 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     AddPalmRejectionDelayZone @ 0x140215710 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x14013BA20 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 */

struct DelayZonePalmRejection *__fastcall DelayZonePalmRejection::GetInstance(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  struct DelayZonePalmRejection *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 17360) )
    return *(struct DelayZonePalmRejection **)(UserSessionState + 17360);
  result = (struct DelayZonePalmRejection *)Win32AllocPoolZInitImpl(0x100uLL, 0x80uLL, 0x7A647355u);
  *(_QWORD *)(UserSessionState + 17360) = result;
  if ( result )
  {
    DelayZonePalmRejection::Initialize(result);
    return *(struct DelayZonePalmRejection **)(UserSessionState + 17360);
  }
  return result;
}
