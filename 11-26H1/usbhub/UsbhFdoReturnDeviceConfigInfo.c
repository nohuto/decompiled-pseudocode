/*
 * XREFs of UsbhFdoReturnDeviceConfigInfo @ 0x140040B80
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhCopyPnpString @ 0x14005F57C (UsbhCopyPnpString.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceConfigInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext && LODWORD(SecurityContext->SecurityQos) == 1 )
  {
    if ( HIDWORD(SecurityContext->SecurityQos) == 204 )
    {
      memset((char *)&SecurityContext->AccessState + 4, 0, 0xC0uLL);
      v10 = 0LL;
      LODWORD(SecurityContext->SecurityQos) = 1;
      *(_SECURITY_QUALITY_OF_SERVICE **)((char *)&SecurityContext->SecurityQos + 4) = (_SECURITY_QUALITY_OF_SERVICE *)204;
      if ( (v7[640] & 0x8000) != 0 )
      {
        LODWORD(SecurityContext->AccessState) = 1;
        v10 = 1LL;
      }
      if ( (v7[640] & 0x80u) != 0 )
      {
        v10 = (unsigned int)v10 | 8;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( _bittest(v7 + 640, 0x10u) )
      {
        v10 = (unsigned int)v10 | 4;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( (v7[640] & 0x40) != 0 || (v7[640] & 0x8001) == 32769 )
      {
        v10 = (unsigned int)v10 | 2;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( (v7[640] & 0x80000) != 0 )
      {
        v10 = (unsigned int)v10 | 0x20;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( (v7[640] & 1) != 0 )
      {
        v10 = (unsigned int)v10 | 0x10;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( v7[758] == 100 )
      {
        v10 = (unsigned int)v10 | 0x40;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( _bittest(v6 + 355, 0x10u) )
      {
        HIDWORD(SecurityContext[5].AccessState) |= 1u;
        *(_OWORD *)&SecurityContext[5].DesiredAccess = *(_OWORD *)(v6 + 650);
        *(_OWORD *)&SecurityContext[6].AccessState = *(_OWORD *)(v6 + 654);
        *(_OWORD *)&SecurityContext[7].SecurityQos = *(_OWORD *)(v6 + 658);
        *(_OWORD *)&SecurityContext[7].DesiredAccess = *(_OWORD *)(v6 + 662);
        LODWORD(SecurityContext[8].AccessState) = v6[666];
      }
      v9 = UsbhCopyPnpString((char *)&SecurityContext[1].SecurityQos + 4, v6 + 528, v10);
      if ( v9 >= 0 )
      {
        v9 = UsbhCopyPnpString((char *)&SecurityContext->AccessState + 4, v6 + 524, v11);
        if ( v9 >= 0 )
        {
          v9 = UsbhCopyPnpString(&SecurityContext[1].FullCreateOptions, v6 + 552, v12);
          if ( v9 >= 0 )
            goto LABEL_28;
          UsbhFreeID((__int64)&SecurityContext[1].SecurityQos + 4);
          v13 = (__int64)&SecurityContext->AccessState + 4;
        }
        else
        {
          v13 = (__int64)&SecurityContext[1].SecurityQos + 4;
        }
        UsbhFreeID(v13);
      }
    }
    else
    {
      v9 = -1073741789;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_28:
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)v9;
}
