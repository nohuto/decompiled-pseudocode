/*
 * XREFs of ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x140065200
 * Callers:
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14006504C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E37C0 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E39E4 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1401AA0FC (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     EtwTraceFocusedProcessChange @ 0x1400ECDE0 (EtwTraceFocusedProcessChange.c)
 *     EtwTraceFocusChange @ 0x1400F2860 (EtwTraceFocusChange.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x140120970 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     MarkQueuesForKeyStateUpdate @ 0x140216850 (MarkQueuesForKeyStateUpdate.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x14021E9D0 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     CitModerncoreProcessForegroundChange @ 0x1402408B0 (CitModerncoreProcessForegroundChange.c)
 */

void __fastcall CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker(
        CActivationObjectManager::ForegroundChangeTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // edx
  __int64 UserSessionState; // rax

  if ( *((_DWORD *)this + 8) != *((_DWORD *)this + 2) || *((_DWORD *)this + 9) != *((_DWORD *)this + 3) )
  {
    EtwTraceFocusChange(*((unsigned int *)this + 7), *((unsigned int *)this + 1));
    v2 = *((unsigned int *)this + 6);
    v3 = *(unsigned int *)this;
    if ( (_DWORD)v2 != (_DWORD)v3 )
    {
      EtwTraceFocusedProcessChange();
      if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
        CitModerncoreProcessForegroundChange(*((unsigned int *)this + 6), *(unsigned int *)this);
      IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates((IVRootDeliver::Keyboard *)*(unsigned int *)this, v4);
    }
    UserSessionState = W32GetUserSessionState(v2, v3);
    CCursorClip::ClearClip(*(CCursorClip **)(UserSessionState + 36240));
    MarkQueuesForKeyStateUpdate(0LL, 0LL, 0LL);
  }
}
