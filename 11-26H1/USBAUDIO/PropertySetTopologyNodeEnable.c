/*
 * XREFs of PropertySetTopologyNodeEnable @ 0x140033C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003E21C (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14003FECC (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetTopologyNodeEnable(PIRP Irp, __int64 a2, _BYTE *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // rdx
  int v8; // r10d
  _QWORD *Context; // rcx
  __int64 v10; // rbx

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v8;
  Context = FilterFromIrp->Context;
  v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  if ( *(_DWORD *)(Context[2] + 536LL) == 1 )
  {
    Irp->IoStatus.Information = 1LL;
    if ( *(_BYTE *)(v10 + 72) )
    {
      if ( *a3 == *(_BYTE *)(v10 + 73) )
      {
        return 0;
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _BYTE *))(v10 + 144))(Context, v10, 1LL, a3);
        if ( v8 >= 0 )
          *(_BYTE *)(v10 + 73) = *a3;
      }
    }
    return (unsigned int)v8;
  }
  if ( (int)DeviceRequestPowerUp(Context, v7) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
