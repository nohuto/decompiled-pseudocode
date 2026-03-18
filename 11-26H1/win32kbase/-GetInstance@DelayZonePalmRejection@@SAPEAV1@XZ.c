/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140049048
 * Callers:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140048F20 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x140061F18 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14016B654 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     AddEdgePalmRejectionZone @ 0x14016E450 (AddEdgePalmRejectionZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x14019BEA0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401E3860 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x140219600 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     AddPalmRejectionDelayZone @ 0x14021AD2C (AddPalmRejectionDelayZone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1400EBFFC (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 */

struct DelayZonePalmRejection *__fastcall DelayZonePalmRejection::GetInstance(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  struct DelayZonePalmRejection *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(UserSessionState + 17352) )
    return *(struct DelayZonePalmRejection **)(UserSessionState + 17352);
  result = (struct DelayZonePalmRejection *)Win32AllocPoolZInitImpl(256LL, 0x80uLL, 0x7A647355u);
  *(_QWORD *)(UserSessionState + 17352) = result;
  if ( result )
  {
    DelayZonePalmRejection::Initialize(result);
    return *(struct DelayZonePalmRejection **)(UserSessionState + 17352);
  }
  return result;
}
