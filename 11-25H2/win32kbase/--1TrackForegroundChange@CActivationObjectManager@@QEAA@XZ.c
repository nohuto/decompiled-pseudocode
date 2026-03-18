/*
 * XREFs of ??1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ @ 0x1401A9A50
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A9F04 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401AA270 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     ??0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z @ 0x1401A9968 (--0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z.c)
 */

void __fastcall CActivationObjectManager::TrackForegroundChange::~TrackForegroundChange(
        CActivationObjectManager::TrackForegroundChange *this,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  CActivationObjectManager::ActivationObjectDescriptor *v4; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)this;
  UserSessionState = W32GetUserSessionState(this, a2);
  v4 = CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
         (CActivationObjectManager::ActivationObjectDescriptor *)v5,
         *(PEPROCESS **)(*(_QWORD *)(UserSessionState + 18864) + 32LL));
  *(_OWORD *)v2 = *(_OWORD *)v4;
  *(_QWORD *)(v2 + 16) = *((_QWORD *)v4 + 2);
}
