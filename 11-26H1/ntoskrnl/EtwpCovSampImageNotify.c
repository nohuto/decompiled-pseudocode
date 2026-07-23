/*
 * XREFs of EtwpCovSampImageNotify @ 0x140A33F80
 * Callers:
 *     EtwpCovSampEnumerateProcess @ 0x140A33C00 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampEnumerateDriver @ 0x140A35F30 (EtwpCovSampEnumerateDriver.c)
 * Callees:
 *     EtwpCovSampReleaseSamplerRundown @ 0x140A34084 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampModuleDereference @ 0x140A340B4 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140A340F8 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140A35120 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampProcessAddModule @ 0x140A351C4 (EtwpCovSampProcessAddModule.c)
 */

void __fastcall EtwpCovSampImageNotify(
        PUNICODE_STRING FullImageName,
        struct _LIST_ENTRY *ProcessId,
        PIMAGE_INFO ImageInfo)
{
  unsigned __int64 v3; // rbx
  bool v5; // zf
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  unsigned __int64 Affinity; // rbp
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = (ImageInfo->Properties & 0x400) == 0;
  v7 = (int)FullImageName;
  v11 = 0LL;
  v12 = 0LL;
  if ( v5 )
    goto LABEL_11;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v12) >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = ExpSysDbgLock.UserWaitTime + 16;
    Process = CurrentThread->ApcState.Process;
    if ( ProcessId )
    {
      if ( ProcessId == Process[1].Header.WaitListHead.Flink
        && (int)EtwpCovSampProcessEnsureContext(CurrentThread->ApcState.Process) >= 0 )
      {
        Affinity = (unsigned __int64)Process[4].Affinity;
        goto LABEL_7;
      }
    }
    else if ( (ImageInfo->Properties & 0x100) != 0 )
    {
      Affinity = ExpSysDbgLock.UserWaitTime + 1264;
LABEL_7:
      if ( (int)EtwpCovSampContextGetModule(
                  v3,
                  (int)Process,
                  Affinity,
                  v7,
                  (AutoBoost *)&ImageInfo[-1].ImageSectionNumber,
                  (__int64)&v11) >= 0 )
        EtwpCovSampProcessAddModule(Affinity, v3, v11, ImageInfo->ImageBase);
    }
  }
  if ( v11 )
    EtwpCovSampModuleDereference(v3);
LABEL_11:
  EtwpCovSampReleaseSamplerRundown(v12);
}
