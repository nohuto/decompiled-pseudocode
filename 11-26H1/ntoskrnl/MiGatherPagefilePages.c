/*
 * XREFs of MiGatherPagefilePages @ 0x140406D08
 * Callers:
 *     MiModifiedPageWriter @ 0x1404064D0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     MiModwriterConfigureMode @ 0x140406DD0 (MiModwriterConfigureMode.c)
 *     MiModwriterFillMdl @ 0x140407040 (MiModwriterFillMdl.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140407170 (MiModwriterAssignPageFileAddresses.c)
 *     MiModwriterConfirmMdl @ 0x140408738 (MiModwriterConfirmMdl.c)
 *     MiModwriterIssueWrite @ 0x140408928 (MiModwriterIssueWrite.c)
 *     MiModwriterReturnUnusedPages @ 0x14070D6F4 (MiModwriterReturnUnusedPages.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  __int128 v7; // [rsp+28h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-8h]

  v8 = a1;
  v6 = 0LL;
  v7 = 0LL;
  result = MiModwriterConfigureMode(&v6);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    LODWORD(v6) = v6 | 1;
    --CurrentThread->KernelApcDisable;
    result = MiModwriterFillMdl(&v6);
    if ( (int)result >= 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 172LL) & 0x40) == 0 )
        MiModwriterConfirmMdl(&v6);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v4, v5);
      LODWORD(v6) = v6 & 0xFFFFFFFE;
      if ( (_DWORD)v7 != DWORD1(v7) )
        MiModwriterReturnUnusedPages(&v6);
      MiModwriterAssignPageFileAddresses(&v6);
      result = MiModwriterIssueWrite(&v6);
    }
    if ( (v6 & 1) != 0 )
      return KeLeaveCriticalRegionThread((__int64)CurrentThread, v4, v5);
  }
  return result;
}
