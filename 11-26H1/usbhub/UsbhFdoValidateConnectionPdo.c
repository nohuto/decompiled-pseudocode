/*
 * XREFs of UsbhFdoValidateConnectionPdo @ 0x140007C8C
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x1400187E0 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 */

__int64 __fastcall UsbhFdoValidateConnectionPdo(__int64 a1, ULONG_PTR a2, IRP *a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 PortData; // rbp
  __int64 v10; // r8
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  unsigned int v17; // ebx
  int v18; // eax
  _DWORD v20[14]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(v21) = 0;
  v20[0] = 0;
  v7 = FdoExt(a1, a2, a3, a4);
  v8 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *(unsigned __int16 *)(v8 + 1428));
  v10 = *(unsigned __int16 *)(v8 + 1428);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
        v13 = *(_DWORD *)(v11 + 884);
        v14 = *(_QWORD *)(v11 + 888);
        v15 = 32LL * ((v12 - 1) & v13);
        *(_DWORD *)(v15 + v14) = 1262709603;
        *(_QWORD *)(v15 + v14 + 8) = 0LL;
        *(_QWORD *)(v15 + v14 + 16) = PortData;
        *(_QWORD *)(v15 + v14 + 24) = v10;
      }
    }
  }
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *(_DWORD *)(v7 + 1360) != 5 )
  {
    v17 = -1073741810;
    v18 = -1073713152;
LABEL_7:
    HIDWORD(SecurityContext->SecurityQos) = v18;
    a3->IoStatus.Status = v17;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973937, PortData, (int)v17);
    return v17;
  }
  if ( !PortData )
  {
    v17 = -1073741811;
    v18 = -2147482880;
    goto LABEL_7;
  }
  v17 = UsbhQueryPortState(a1, *(unsigned __int16 *)(PortData + 4), v20, &v21);
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    v18 = v21;
    goto LABEL_7;
  }
  if ( (v20[0] & 1) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v17 = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 1216), a3);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    HIDWORD(SecurityContext->SecurityQos) = -1073713152;
    v17 = -1073741810;
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973938, PortData, -1073741810LL);
  }
  return v17;
}
