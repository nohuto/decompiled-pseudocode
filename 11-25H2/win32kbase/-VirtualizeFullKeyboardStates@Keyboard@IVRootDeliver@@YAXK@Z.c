/*
 * XREFs of ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x14021E9D0
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x140065200 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     VirtualizeFullKeyboardStates @ 0x1402170C0 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     ProcessInfoFromPID @ 0x140123230 (ProcessInfoFromPID.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x14021DE3C (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates(IVRootDeliver::Keyboard *this, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  const struct CONTAINER_ID *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (int)this;
  if ( isRootPartition((__int64)this, a2) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 12928) + 1272LL)) )
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline()
        || (v7 = ProcessInfoFromPID(v2)) == 0 )
      {
        v8 = 0;
      }
      else
      {
        v8 = *(_DWORD *)(v7 + 1072);
      }
      v9 = v8;
      if ( v8 )
        IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v9, v6);
    }
  }
}
