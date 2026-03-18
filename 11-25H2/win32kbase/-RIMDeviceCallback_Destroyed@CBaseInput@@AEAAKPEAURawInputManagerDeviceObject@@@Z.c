/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3E8 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP **v2; // r9
  IVRootDeliver::PnP *v5; // rbx
  IVRootDeliver::PnP *v6; // rax
  bool v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct CONTAINER_ID *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // si
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = (IVRootDeliver::PnP **)*((_QWORD *)this + 155);
  v5 = (IVRootDeliver::PnP *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL));
  while ( 1 )
  {
    v6 = *v2;
    if ( !*v2 )
    {
      v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v7;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          2,
          21,
          (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids,
          (char)a2);
      }
      return 0LL;
    }
    if ( v6 == v5 )
      break;
    v2 = (IVRootDeliver::PnP **)((char *)v6 + 56);
  }
  *v2 = *(IVRootDeliver::PnP **)((((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)) + 0x38);
  *(_QWORD *)((((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)) + 0x38) = 0LL;
  ObfDereferenceObject(a2);
  if ( isRootPartition(v9, v8) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v18 = 0;
    IVRootDeliver::PnP::SendRootPnp(v5, (struct DEVICEINFO *)4, (unsigned int)&v18, v10);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, IVRootDeliver::PnP *))(*(_QWORD *)this + 104LL))(
         this,
         a2,
         v5)
    && (unsigned int)HMMarkObjectDestroy(v5, v11) )
  {
    HMRemoveHandleForObject((int *)v5, v12);
  }
  return 0LL;
}
