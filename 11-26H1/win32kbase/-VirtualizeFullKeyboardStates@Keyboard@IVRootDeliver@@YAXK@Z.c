/*
 * XREFs of ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1402221FC
 * Callers:
 *     VirtualizeFullKeyboardStates @ 0x14021C5E0 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ProcessInfoFromPID @ 0x14015E684 (ProcessInfoFromPID.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1402215B0 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates(IVRootDeliver::Keyboard *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  int v8; // edx
  int v9; // r8d
  const struct CONTAINER_ID *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v3 = (int)this;
  if ( isRootPartition((int)this, a2, a3) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 12920) + 1272LL), v8, v9) )
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline()
        || (v11 = ProcessInfoFromPID(v3)) == 0 )
      {
        v12 = 0;
      }
      else
      {
        v12 = *(_DWORD *)(v11 + 1072);
      }
      v13 = v12;
      if ( v12 )
        IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v13, v10);
    }
  }
}
