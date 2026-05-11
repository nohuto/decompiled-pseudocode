/*
 * XREFs of PropertySetMixerLevels @ 0x140033A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003E21C (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14003FECC (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetMixerLevels(PIRP Irp, __int64 a2)
{
  unsigned int v4; // edi
  PKSFILTER FilterFromIrp; // rcx
  ULONG Length; // r8d
  const GUID *Type; // rbp
  __int64 v8; // rdx

  v4 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( !FilterFromIrp )
    return v4;
  Type = FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24) + 5].Type;
  v8 = (unsigned int)(16 * *(_DWORD *)&Type->Data4[4] * *(_DWORD *)Type->Data4);
  if ( *(_DWORD *)(*((_QWORD *)FilterFromIrp->Context + 2) + 536LL) == 1 )
  {
    Irp->IoStatus.Information = (unsigned int)v8;
    if ( Length != (_DWORD)v8 )
      return (unsigned int)-1073741789;
    return v4;
  }
  if ( (int)DeviceRequestPowerUp(FilterFromIrp->Context, v8) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
