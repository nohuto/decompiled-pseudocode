/*
 * XREFs of EtwpCovSampImageNotify @ 0x140940E70
 * Callers:
 *     EtwpCovSampEnumerateProcess @ 0x140940AF0 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampEnumerateDriver @ 0x140942E20 (EtwpCovSampEnumerateDriver.c)
 * Callees:
 *     EtwpCovSampReleaseSamplerRundown @ 0x140940F74 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampModuleDereference @ 0x140940FA4 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140940FE8 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextGetModule @ 0x140941058 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140942010 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampProcessAddModule @ 0x1409420B4 (EtwpCovSampProcessAddModule.c)
 */

void __fastcall EtwpCovSampImageNotify(
        PUNICODE_STRING FullImageName,
        struct _LIST_ENTRY *ProcessId,
        PIMAGE_INFO ImageInfo)
{
  unsigned __int64 *p_MaxQuotaCycleTarget; // rbx
  bool v5; // zf
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  _LIST_ENTRY *Affinity; // rbp
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  p_MaxQuotaCycleTarget = 0LL;
  v5 = (ImageInfo->Properties & 0x400) == 0;
  v7 = (int)FullImageName;
  v11 = 0LL;
  v12 = 0LL;
  if ( v5 )
    goto LABEL_11;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v12) >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    p_MaxQuotaCycleTarget = &ExpSysDbgLock.QueuedScb->MaxQuotaCycleTarget;
    Process = CurrentThread->ApcState.Process;
    if ( ProcessId )
    {
      if ( ProcessId == Process[1].Header.WaitListHead.Flink
        && (int)EtwpCovSampProcessEnsureContext(CurrentThread->ApcState.Process) >= 0 )
      {
        Affinity = (_LIST_ENTRY *)Process[4].Affinity;
        goto LABEL_7;
      }
    }
    else if ( (ImageInfo->Properties & 0x100) != 0 )
    {
      Affinity = &ExpSysDbgLock.QueuedScb[2].ReadyListHead[11];
LABEL_7:
      if ( (int)EtwpCovSampContextGetModule(
                  (int)p_MaxQuotaCycleTarget,
                  (int)Process,
                  (int)Affinity,
                  v7,
                  (AutoBoost *)&ImageInfo[-1].ImageSectionNumber,
                  (__int64)&v11) >= 0 )
        EtwpCovSampProcessAddModule(Affinity, p_MaxQuotaCycleTarget, v11, ImageInfo->ImageBase);
    }
  }
  if ( v11 )
    EtwpCovSampModuleDereference(p_MaxQuotaCycleTarget);
LABEL_11:
  EtwpCovSampReleaseSamplerRundown(v12);
}
