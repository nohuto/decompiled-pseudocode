/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x140C37DC0
 * Callers:
 *     ViDeadlockAddResource @ 0x140C36AF0 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140C36E58 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140C37FF8 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140C38198 (ViDeadlockRemoveThread.c)
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14052FE80 (VfUtilDbgPrint.c)
 */

__int64 ViDeadlockPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xFFF;
    if ( v9 >= 0xC )
    {
      *a1 = 4;
      goto LABEL_7;
    }
    result = *(unsigned int *)&ViDeadlockDefaultActions[2 * v9];
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_7:
  ViDeadlockIssue = a3;
  qword_140F082C8 = a4;
  qword_140F082D0 = a5;
  qword_140F082D8 = a6;
  VfUtilDbgPrint("************ Verifier Detected a Potential Deadlock *************\n");
  VfUtilDbgPrint("**\n");
  VfUtilDbgPrint("** ");
  if ( a2 )
    DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
  VfUtilDbgPrint("\n");
  VfUtilDbgPrint("**\n");
  return VfUtilDbgPrint("*****************************************************************\n");
}
