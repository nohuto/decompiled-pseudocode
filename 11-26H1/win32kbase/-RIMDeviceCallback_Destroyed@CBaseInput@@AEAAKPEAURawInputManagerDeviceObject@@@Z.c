/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140180860
 * Callers:
 *     <none>
 * Callees:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x140221B3C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP **v2; // r9
  IVRootDeliver::PnP *v5; // rbx
  IVRootDeliver::PnP *v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  const struct CONTAINER_ID *v13; // r9
  bool v14; // bl
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = (IVRootDeliver::PnP **)*((_QWORD *)this + 155);
  v5 = (IVRootDeliver::PnP *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL));
  while ( 1 )
  {
    v6 = *v2;
    if ( !*v2 )
      break;
    if ( v6 == v5 )
    {
      *v2 = *(IVRootDeliver::PnP **)((((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)) + 0x38);
      *(_QWORD *)((((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)) + 0x38) = 0LL;
      ObfDereferenceObject(a2);
      if ( isRootPartition(v8, v7, v9) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
      {
        v19 = 0;
        IVRootDeliver::PnP::SendRootPnp(v5, (struct DEVICEINFO *)4, (unsigned int)&v19, v13);
      }
      if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, IVRootDeliver::PnP *))(*(_QWORD *)this + 104LL))(
             this,
             a2,
             v5)
        && (unsigned int)HMMarkObjectDestroy(v5, v10, v11) )
      {
        HMRemoveHandleForObject(v5);
      }
      return 0LL;
    }
    v2 = (IVRootDeliver::PnP **)((char *)v6 + 56);
  }
  v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, (int)a2 + 72);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 69136),
      2,
      2,
      21,
      (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
      (char)a2);
  }
  return 0LL;
}
