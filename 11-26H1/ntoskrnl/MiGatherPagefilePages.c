/*
 * XREFs of MiGatherPagefilePages @ 0x1403FFDF8
 * Callers:
 *     MiModifiedPageWriter @ 0x1403FF5C0 (MiModifiedPageWriter.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiModwriterConfigureMode @ 0x1403FFEC0 (MiModwriterConfigureMode.c)
 *     MiModwriterFillMdl @ 0x140400130 (MiModwriterFillMdl.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140400260 (MiModwriterAssignPageFileAddresses.c)
 *     MiModwriterConfirmMdl @ 0x140401828 (MiModwriterConfirmMdl.c)
 *     MiModwriterIssueWrite @ 0x140401A18 (MiModwriterIssueWrite.c)
 *     MiModwriterReturnUnusedPages @ 0x1407123A4 (MiModwriterReturnUnusedPages.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  __int128 v5; // [rsp+28h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-8h]

  v6 = a1;
  v4 = 0LL;
  v5 = 0LL;
  result = MiModwriterConfigureMode(&v4);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    LODWORD(v4) = v4 | 1;
    --CurrentThread->KernelApcDisable;
    result = MiModwriterFillMdl(&v4);
    if ( (int)result >= 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 172LL) & 0x40) == 0 )
        MiModwriterConfirmMdl(&v4);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      LODWORD(v4) = v4 & 0xFFFFFFFE;
      if ( (_DWORD)v5 != DWORD1(v5) )
        MiModwriterReturnUnusedPages(&v4);
      MiModwriterAssignPageFileAddresses(&v4);
      result = MiModwriterIssueWrite(&v4);
    }
    if ( (v4 & 1) != 0 )
      return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
