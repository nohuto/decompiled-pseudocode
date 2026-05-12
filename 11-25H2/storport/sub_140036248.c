/*
 * XREFs of sub_140036248 @ 0x140036248
 * Callers:
 *     sub_14004E0E8 @ 0x14004E0E8 (sub_14004E0E8.c)
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

PIRP __fastcall sub_140036248(
        __int64 a1,
        void *a2,
        ULONG a3,
        char a4,
        KPROCESSOR_MODE AccessMode,
        PIRP Irp,
        char a7,
        void *a8,
        ULONG a9,
        struct _MDL **a10)
{
  char v10; // si
  struct _KPROCESS *RequestorProcess; // r14
  bool v12; // di
  PIRP v13; // rbx
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
  v12 = AccessMode == 1 && Irp;
  v13 = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  if ( !v13 )
    return 0LL;
  v13->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&v13->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 271;
  if ( !a2 )
    goto LABEL_16;
  Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
  v13->MdlAddress = Mdl;
  if ( Mdl )
  {
    if ( v12 )
    {
      RequestorProcess = IoGetRequestorProcess(Irp);
      if ( RequestorProcess )
      {
        if ( RequestorProcess != IoGetCurrentProcess() )
        {
          KeStackAttachProcess(RequestorProcess, &ApcState);
          v10 = 1;
        }
      }
    }
    MmProbeAndLockPages(v13->MdlAddress, AccessMode, (LOCK_OPERATION)(a4 != 0));
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
LABEL_16:
    if ( !a7 )
      return v13;
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
      return v13;
    }
    MdlAddress = v13->MdlAddress;
    if ( MdlAddress )
    {
      MmUnlockPages(MdlAddress);
      IoFreeMdl(v13->MdlAddress);
    }
  }
  IoFreeIrp(v13);
  return 0LL;
}
