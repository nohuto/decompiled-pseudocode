/*
 * XREFs of UsbhFdoGetMsDescriptorPdo @ 0x1400357EC
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x1400187E0 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     memmove @ 0x140061CC0 (memmove.c)
 */

__int64 __fastcall UsbhFdoGetMsDescriptorPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  unsigned int v9; // edi
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v12; // rcx
  int v13; // eax
  unsigned __int16 *v14; // rdx
  unsigned int AccessState_high; // eax
  unsigned int v16; // ebx

  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  v6 = PdoExt(a2);
  v7 = v6;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( WORD2(SecurityContext[5].AccessState) == 7 )
  {
    if ( (v6[706] & 2) != 0 )
    {
      SecurityQos = SecurityContext[2].SecurityQos;
      v9 = 0;
      if ( SecurityQos )
      {
        if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
          v12 = *(PVOID *)&SecurityQos[2].Length;
        else
          v12 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, 0x40000010u);
      }
      else
      {
        v12 = *(PVOID *)&SecurityContext[1].DesiredAccess;
      }
      if ( v12 )
      {
        v14 = (unsigned __int16 *)*((_QWORD *)v7 + 355);
        AccessState_high = v14[4];
        if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        v16 = AccessState_high;
        memmove(v12, v14, AccessState_high);
        v13 = 0;
        HIDWORD(SecurityContext[1].AccessState) = v16;
      }
      else
      {
        v9 = -1073741811;
        v13 = -2147482880;
      }
      HIDWORD(SecurityContext->SecurityQos) = v13;
      goto LABEL_4;
    }
  }
  else if ( (v6[358] & 0x400) != 0 )
  {
    BYTE1(SecurityContext[5].AccessState) = *((_BYTE *)v6 + 1432);
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v9 = IofCallDriver(v5[152], a3);
    goto LABEL_5;
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073738240;
  v9 = -1073741637;
LABEL_4:
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
LABEL_5:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v9;
}
