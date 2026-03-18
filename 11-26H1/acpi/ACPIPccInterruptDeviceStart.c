/*
 * XREFs of ACPIPccInterruptDeviceStart @ 0x1400B2AB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIPccInterruptDeviceStart(struct _DEVICE_OBJECT *BugCheckParameter3, PIRP Irp)
{
  NTSTATUS v4; // esi
  int v5; // edi
  unsigned __int64 v6; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  _UNICODE_STRING *FileName; // rax
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF

  memset(&Parameters, 0, 0x4CuLL);
  v4 = -1073741823;
  v5 = 0;
  v6 = *(_QWORD *)(ACPIInternalGetDeviceExtension((ULONG_PTR)BugCheckParameter3) + 184);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext
    && (FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName) != 0LL
    && LODWORD(SecurityContext->SecurityQos) == 1
    && *(_DWORD *)&FileName->Length == 1
    && LOBYTE(SecurityContext->FullCreateOptions) == 2
    && HIDWORD(SecurityContext[1].SecurityQos) == *(_DWORD *)(v6 + 16) )
  {
    memset(&Parameters, 0, sizeof(Parameters));
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v6 + 72);
    Parameters.FullySpecified.PhysicalDeviceObject = BugCheckParameter3;
    AcpiGetDriverProxyWrappedEndpoint(
      &Parameters.FullySpecified.ServiceRoutine,
      (__int64)ACPIPccInterruptServiceRoutine);
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = v6;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v4 = IoConnectInterruptEx(&Parameters);
    LOBYTE(v5) = v4 < 0;
    *(_DWORD *)(v6 + 64) = v5 + 1;
  }
  else
  {
    *(_DWORD *)(v6 + 64) = 2;
  }
  KeSetEvent((PRKEVENT)(v6 + 40), 0, 0);
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
