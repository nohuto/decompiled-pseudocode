/*
 * XREFs of ??0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z @ 0x1401A99D4
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A9F04 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401AA270 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     ??0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z @ 0x1401A9968 (--0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z.c)
 */

CActivationObjectManager::TrackForegroundChange *__fastcall CActivationObjectManager::TrackForegroundChange::TrackForegroundChange(
        CActivationObjectManager::TrackForegroundChange *this,
        struct CActivationObjectManager::ForegroundChangeTracker *a2)
{
  __int64 UserSessionState; // rax
  CActivationObjectManager::ActivationObjectDescriptor *v5; // rax
  __int64 v6; // xmm1_8
  CActivationObjectManager::TrackForegroundChange *result; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = a2;
  UserSessionState = W32GetUserSessionState(this, a2);
  v5 = CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
         (CActivationObjectManager::ActivationObjectDescriptor *)v8,
         *(PEPROCESS **)(*(_QWORD *)(UserSessionState + 18864) + 32LL));
  *(_OWORD *)((char *)a2 + 24) = *(_OWORD *)v5;
  v6 = *((_QWORD *)v5 + 2);
  result = this;
  *((_QWORD *)a2 + 5) = v6;
  return result;
}
