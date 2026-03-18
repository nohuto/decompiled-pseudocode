/*
 * XREFs of SfsIsAspReady @ 0x1406DD3C0
 * Callers:
 *     SfsFwpApplyPatch @ 0x1406DCDD8 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406DD060 (SfsGetFwVersions.c)
 *     SfsInitiateCmd @ 0x1406DD374 (SfsInitiateCmd.c)
 * Callees:
 *     <none>
 */

__int64 SfsIsAspReady()
{
  __int64 result; // rax

  result = 0LL;
  if ( !CmpCallbackListLock.WaitBlockFill4[8] )
    return 3221225659LL;
  if ( (int)**(_DWORD **)&CmpCallbackListLock.Timer.Processor >= 0 )
    return 2147483665LL;
  return result;
}
