/*
 * XREFs of CcMmLogLostDelayedWriteError @ 0x1404F70C0
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     MiLdwPopupWorker @ 0x14086EED0 (MiLdwPopupWorker.c)
 * Callees:
 *     IoQueryFileDosDeviceName @ 0x140920C50 (IoQueryFileDosDeviceName.c)
 *     FsRtlLogCcFlushError @ 0x140B5A650 (FsRtlLogCcFlushError.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall CcMmLogLostDelayedWriteError(struct _FILE_OBJECT *a1, NTSTATUS a2)
{
  ULONG Flags; // ebx
  NTSTATUS FileDosDeviceName; // eax
  UNICODE_STRING *p_FileName; // rcx
  PDEVICE_OBJECT *Vpb; // rdx
  NTSTATUS v8; // ebx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  Flags = 1;
  FileDosDeviceName = IoQueryFileDosDeviceName(a1, (POBJECT_NAME_INFORMATION *)&P);
  p_FileName = (UNICODE_STRING *)P;
  if ( FileDosDeviceName )
    p_FileName = &a1->FileName;
  if ( p_FileName->Length && p_FileName->MaximumLength && p_FileName->Buffer )
    Flags = 0;
  Vpb = (PDEVICE_OBJECT *)a1;
  if ( a1->Vpb )
    Vpb = (PDEVICE_OBJECT *)a1->Vpb;
  v8 = FsRtlLogCcFlushError(p_FileName, Vpb[1], a1->SectionObjectPointer, a2, Flags);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v8 == 0;
}
