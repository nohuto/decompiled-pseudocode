/*
 * XREFs of PortPassThroughBuildIrpEx @ 0x14003AE60
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x140055654 (RaUnitAtaPassThroughIoctl.c)
 *     PortPassThroughExSendAsync @ 0x1401B3488 (PortPassThroughExSendAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

PIRP __fastcall PortPassThroughBuildIrpEx(
        __int64 a1,
        void *a2,
        ULONG a3,
        char a4,
        KPROCESSOR_MODE AccessMode,
        PIRP a6,
        char a7,
        void *a8,
        ULONG a9,
        struct _MDL **a10)
{
  char v10; // si
  struct _KPROCESS *RequestorProcess; // r14
  bool v12; // di
  PIRP Irp; // rbx
  PMDL Mdl; // rax
  struct _MDL *v16; // rdi
  struct _MDL *MdlAddress; // rcx
  _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v10 = 0;
  RequestorProcess = 0LL;
  if ( a7 && (!a8 || !a10 || !a9) )
    return 0LL;
  if ( a10 )
    *a10 = 0LL;
  v12 = AccessMode == 1 && a6;
  Irp = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  if ( !Irp )
    return 0LL;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 271;
  if ( !a2 )
    goto LABEL_16;
  Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
  Irp->MdlAddress = Mdl;
  if ( Mdl )
  {
    if ( v12 )
    {
      RequestorProcess = IoGetRequestorProcess(a6);
      if ( RequestorProcess )
      {
        if ( RequestorProcess != IoGetCurrentProcess() )
        {
          KeStackAttachProcess(RequestorProcess, &ApcState);
          v10 = 1;
        }
      }
    }
    MmProbeAndLockPages(Irp->MdlAddress, AccessMode, (LOCK_OPERATION)(a4 != 0));
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
LABEL_16:
    if ( !a7 )
      return Irp;
    v16 = IoAllocateMdl(a8, a9, 0, 0, 0LL);
    if ( v16 )
    {
      if ( v10 )
        KeStackAttachProcess(RequestorProcess, &ApcState);
      else
        v10 = 0;
      MmProbeAndLockPages(v16, AccessMode, IoWriteAccess);
      if ( v10 )
        KeUnstackDetachProcess(&ApcState);
      *a10 = v16;
      return Irp;
    }
    MdlAddress = Irp->MdlAddress;
    if ( MdlAddress )
    {
      MmUnlockPages(MdlAddress);
      IoFreeMdl(Irp->MdlAddress);
    }
  }
  IoFreeIrp(Irp);
  return 0LL;
}
