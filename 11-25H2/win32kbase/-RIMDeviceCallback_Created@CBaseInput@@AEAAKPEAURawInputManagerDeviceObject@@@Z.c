/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A790
 * Callers:
 *     _lambda_e9d9692466b90d39df94103fce77647b_::operator() @ 0x14020ED0C (_lambda_e9d9692466b90d39df94103fce77647b_--operator().c)
 * Callees:
 *     HMCreateHandleForObject @ 0x14003B950 (HMCreateHandleForObject.c)
 *     HMMarkObjectDestroy @ 0x14003E6E0 (HMMarkObjectDestroy.c)
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021E50C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v2; // rax
  unsigned __int64 v3; // r8
  struct RawInputManagerDeviceObject *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct CONTAINER_ID *v12; // r8
  __int64 v13; // rdx
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (unsigned __int64)a2 + 72;
  v5 = a2;
  v6 = 0;
  LOBYTE(a2) = 19;
  v7 = HMCreateHandleForObject((_QWORD *)(v3 & -(__int64)(v2 != 0LL)), (__int64)a2);
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
      if ( isRootPartition(v11, v10) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)v5 + 49) + 40LL) )
        {
          v15 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(v5, (struct RawInputManagerDeviceObject *)&v15, v12);
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
      HMMarkObjectDestroy((struct _HEAD *)v8, v9);
      HMRemoveHandleForObject((int *)v8, v13);
    }
  }
  return v6;
}
