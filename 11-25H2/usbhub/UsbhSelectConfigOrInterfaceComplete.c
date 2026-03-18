/*
 * XREFs of UsbhSelectConfigOrInterfaceComplete @ 0x1400385D0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x14003A9EC (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhCalculateInterfaceBandwidth @ 0x14003B158 (UsbhCalculateInterfaceBandwidth.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x14003E134 (UsbhSetOutOfBandwidthTimer.c)
 */

__int64 __fastcall UsbhSelectConfigOrInterfaceComplete(PDEVICE_OBJECT DeviceObject, ULONG_PTR Irp, __int64 Context)
{
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _IO_SECURITY_CONTEXT *v8; // rdi
  __int64 PortData; // r14
  unsigned int *v10; // rsi
  unsigned int *i; // rdi

  v5 = PdoExt(Context);
  FdoExt(*((_QWORD *)v5 + 148));
  v6 = *((unsigned __int16 *)v5 + 714);
  v7 = *((_QWORD *)v5 + 148);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v8 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
    PortData = UsbhGetPortData(v7, v6);
    UsbhCancelOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714));
    if ( PortData && HIDWORD(v8->SecurityQos) == -2147481856 )
    {
      UsbhSetOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714), *(unsigned int *)(Irp + 48));
      *(_DWORD *)(PortData + 436) = 0;
      if ( WORD1(v8->SecurityQos) )
      {
        if ( WORD1(v8->SecurityQos) == 1 )
          *(_DWORD *)(PortData + 436) = UsbhCalculateInterfaceBandwidth(
                                          *((_QWORD *)v5 + 148),
                                          Context,
                                          &v8[1].AccessState);
      }
      else
      {
        v10 = (unsigned int *)((char *)v8 + LOWORD(v8->SecurityQos));
        for ( i = &v8[1].DesiredAccess; i < v10; i = (unsigned int *)((char *)i + *(unsigned __int16 *)i) )
          *(_DWORD *)(PortData + 436) += UsbhCalculateInterfaceBandwidth(*((_QWORD *)v5 + 148), Context, i);
      }
    }
  }
  else
  {
    UsbhCancelOutOfBandwidthTimer(v7, v6);
  }
  UsbhDecPdoIoCount(Context, Irp);
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  return 0LL;
}
