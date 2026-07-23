/*
 * XREFs of IopHardErrorThread @ 0x140797730
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopCheckHardErrorEmpty @ 0x1405CCF60 (IopCheckHardErrorEmpty.c)
 *     IopRemoveHardErrorPacket @ 0x1405CD3E8 (IopRemoveHardErrorPacket.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void IopHardErrorThread()
{
  char *v0; // rbx
  __int64 v1; // rax
  char v2; // al
  void *v3; // rcx
  char v4; // di
  int v5; // [rsp+48h] [rbp+10h] BYREF
  char *v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  do
  {
    KeWaitForSingleObject(&IopPerfIoTrackingLock.SchedulerApcFill5[16], Executive, 0, 0, 0LL);
    v0 = (char *)IopRemoveHardErrorPacket();
    v1 = *((_QWORD *)v0 + 4);
    v6 = v0 + 24;
    if ( ExReadyForErrors )
      ExRaiseHardError(*((unsigned int *)v0 + 4), v1 != 0, v1 != 0, (unsigned __int64)&v6 & -(__int64)(v1 != 0), 7, &v5);
    v2 = IopCheckHardErrorEmpty();
    v3 = (void *)*((_QWORD *)v0 + 4);
    v4 = v2;
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v0, 0);
  }
  while ( v4 );
}
