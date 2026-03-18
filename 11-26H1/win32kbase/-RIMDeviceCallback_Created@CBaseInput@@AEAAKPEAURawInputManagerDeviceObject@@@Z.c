/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140095000
 * Callers:
 *     _lambda_65e0d2d98340653a56fe7d74fa289e35_::operator() @ 0x14021823C (_lambda_65e0d2d98340653a56fe7d74fa289e35_--operator().c)
 * Callees:
 *     HMMarkObjectDestroy @ 0x140048740 (HMMarkObjectDestroy.c)
 *     HMCreateHandleForObject @ 0x140095100 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x140221C60 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v2; // rax
  unsigned __int64 v3; // r8
  struct RawInputManagerDeviceObject *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  int v10; // edx
  int v11; // r8d
  const struct CONTAINER_ID *v12; // r8
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (unsigned __int64)a2 + 72;
  v5 = a2;
  v6 = 0;
  LOBYTE(a2) = 19;
  v7 = HMCreateHandleForObject(v3 & -(__int64)(v2 != 0LL), a2);
  v8 = v7;
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           v5,
           v7) )
    {
      *(_QWORD *)(v8 + 56) = **((_QWORD **)this + 155);
      **((_QWORD **)this + 155) = v8;
      RawInputManagerDeviceObjectReference(v5);
      if ( (unsigned __int8)isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)v5 + 49) + 40LL) )
        {
          v13 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(v5, (struct RawInputManagerDeviceObject *)&v13, v12);
        }
        else
        {
          *((_DWORD *)v5 + 60) |= 0x80000000;
        }
      }
      return 1;
    }
    else
    {
      HMMarkObjectDestroy((struct _HEAD *)v8, v10, v11);
      HMRemoveHandleForObject(v8);
    }
  }
  return v6;
}
