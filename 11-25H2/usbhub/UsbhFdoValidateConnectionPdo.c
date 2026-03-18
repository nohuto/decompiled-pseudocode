/*
 * XREFs of UsbhFdoValidateConnectionPdo @ 0x14001C3D0
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x140008670 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

__int64 __fastcall UsbhFdoValidateConnectionPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // r13
  _DWORD *v7; // rbx
  __int64 PortData; // rbp
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  unsigned int PortState; // ebx
  int v14; // eax
  int v16[14]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v16[0] = 0;
  LODWORD(v17) = 0;
  v6 = (PDEVICE_OBJECT *)FdoExt(a1);
  v7 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v7 + 714));
  v9 = *((unsigned __int16 *)v7 + 714);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_DWORD *)v11 = 1262709603;
        *(_QWORD *)(v11 + 16) = PortData;
        *(_QWORD *)(v11 + 24) = v9;
      }
    }
  }
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *((_DWORD *)v6 + 340) != 5 )
  {
    PortState = -1073741810;
    v14 = -1073713152;
LABEL_7:
    HIDWORD(SecurityContext->SecurityQos) = v14;
    a3->IoStatus.Status = PortState;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973937, PortData, (int)PortState);
    return PortState;
  }
  if ( !PortData )
  {
    PortState = -1073741811;
    v14 = -2147482880;
    goto LABEL_7;
  }
  PortState = UsbhQueryPortState(a1, *(_WORD *)(PortData + 4), (__int64)&v17, v16);
  if ( (PortState & 0xC0000000) == 0xC0000000 )
  {
    v14 = v16[0];
    goto LABEL_7;
  }
  if ( (v17 & 1) != 0 && (v17 & 3) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    PortState = IofCallDriver(v6[152], a3);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    HIDWORD(SecurityContext->SecurityQos) = -1073713152;
    PortState = -1073741810;
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973938, PortData, -1073741810LL);
  }
  return PortState;
}
