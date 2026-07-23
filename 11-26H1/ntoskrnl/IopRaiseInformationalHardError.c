/*
 * XREFs of IopRaiseInformationalHardError @ 0x140B358F0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseInformationalHardError(_DWORD *P)
{
  void *v2; // rcx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  char *v4; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (char *)(P + 6);
  if ( ExReadyForErrors )
    ExRaiseHardError(
      P[4],
      *((_QWORD *)P + 4) != 0LL,
      *((_QWORD *)P + 4) != 0LL,
      (char *)((unsigned __int64)&v4 & -(__int64)(*((_QWORD *)P + 4) != 0LL)),
      7,
      &v3);
  v2 = (void *)*((_QWORD *)P + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)&IopPerfIoTrackingLock.SchedulerApcFill5[52]);
}
