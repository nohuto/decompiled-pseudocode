/*
 * XREFs of ?ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400785E0
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016CFD0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisQueryBusInterface(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_OBJECT *NextDeviceObject; // rsi
  PIRP Irp; // rax
  _IRP *v4; // rdi
  int v5; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int (__fastcall *v7)(void *, unsigned int); // rax
  int (__fastcall *v8)(void *, unsigned int *); // rax
  unsigned int v9; // eax
  _QWORD v11[6]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h]
  _OWORD v13[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v14; // [rsp+98h] [rbp-70h]
  __int128 v15; // [rsp+A8h] [rbp-60h]
  __int128 v16; // [rsp+B8h] [rbp-50h]
  _OWORD v17[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v18; // [rsp+E8h] [rbp-20h]
  __int128 v19; // [rsp+F8h] [rbp-10h]
  __int64 v20; // [rsp+108h] [rbp+0h]
  _OWORD v21[3]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v22; // [rsp+148h] [rbp+40h]

  v20 = 0LL;
  v12 = 0LL;
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v19 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)a1);
  NextDeviceObject = a1->NextDeviceObject;
  Irp = IoAllocateIrp(NextDeviceObject->StackSize + 1, 0);
  v4 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = NextDeviceObject;
    Irp->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_BUS_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v21;
    CurrentStackLocation[-1].Parameters.Create.Options = 65600;
    v5 = IoSynchronousCallDriver(NextDeviceObject, Irp);
    if ( v5 >= 0 )
    {
      v5 = 0;
      *(_OWORD *)&a1->SetBusData = v22;
      a1->BusDataContext = (void *)*((_QWORD *)&v21[0] + 1);
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = NextDeviceObject;
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_MSIX_TABLE_CONFIG_INTERFACE;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v17;
    CurrentStackLocation[-1].Parameters.Create.Options = 65608;
    if ( (int)IoSynchronousCallDriver(NextDeviceObject, v4) < 0 )
    {
      v7 = 0LL;
      a1->MSIXConfigContext = 0LL;
      a1->SetMSIXTableEntry = 0LL;
      a1->MaskMSIXTableEntry = 0LL;
    }
    else
    {
      a1->MSIXConfigContext = (void *)*((_QWORD *)&v17[0] + 1);
      *(_OWORD *)&a1->SetMSIXTableEntry = v18;
      v7 = (int (__fastcall *)(void *, unsigned int))v19;
    }
    a1->UnmaskMSIXTableEntry = v7;
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = NextDeviceObject;
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_PCI_VIRTUALIZATION_INTERFACE;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v13;
    CurrentStackLocation[-1].Parameters.Create.Options = 65616;
    if ( (int)IoSynchronousCallDriver(NextDeviceObject, v4) < 0 )
    {
      v8 = 0LL;
      a1->VirtInterfaceContext = 0LL;
      a1->SetVirtualFunctionData = 0LL;
      a1->GetVirtualFunctionData = 0LL;
      a1->EnableVirtualization = 0LL;
      a1->GetVirtualDeviceLocation = 0LL;
    }
    else
    {
      a1->VirtInterfaceContext = (void *)*((_QWORD *)&v13[0] + 1);
      *(_OWORD *)&a1->SetVirtualFunctionData = v14;
      a1->EnableVirtualization = (int (__fastcall *)(void *, unsigned __int16, unsigned __int8, unsigned __int8, unsigned __int8))v16;
      a1->GetVirtualDeviceLocation = (int (__fastcall *)(void *, unsigned __int16, unsigned __int16 *, unsigned __int8 *, unsigned __int8 *))v15;
      v8 = (int (__fastcall *)(void *, unsigned int *))*((_QWORD *)&v16 + 1);
    }
    a1->GetVirtualFunctionProbedBars = v8;
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].DeviceObject = NextDeviceObject;
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_VPCI_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v11;
    CurrentStackLocation[-1].Parameters.Create.Options = 65592;
    if ( (int)IoSynchronousCallDriver(NextDeviceObject, v4) < 0 )
    {
      v9 = 0;
      a1->VpciInterfaceContext = 0LL;
      a1->VpciInterfaceDereference = 0LL;
      a1->WriteVfConfigBlock = 0LL;
      a1->ReadVfConfigBlock = 0LL;
    }
    else
    {
      a1->VpciInterfaceContext = (void *)v11[1];
      *(_OWORD *)&a1->VpciInterfaceDereference = *(_OWORD *)&v11[3];
      a1->ReadVfConfigBlock = (int (__fastcall *)(void *, unsigned int, void *, unsigned int))v11[5];
      v9 = v12;
    }
    a1->VfSerialNumber = v9;
    IoFreeIrp(v4);
  }
  else
  {
    v5 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      11,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)a1);
  return (unsigned int)v5;
}
