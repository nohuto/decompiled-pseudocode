/*
 * XREFs of SfsGetRegisterStatus @ 0x1406DD14C
 * Callers:
 *     SfsFwpApplyPatch @ 0x1406DCDD8 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406DD060 (SfsGetFwVersions.c)
 * Callees:
 *     <none>
 */

__int64 SfsGetRegisterStatus()
{
  __int64 result; // rax

  result = 0LL;
  if ( !CmpCallbackListLock.WaitBlockFill4[8] )
    return 3221225659LL;
  if ( (unsigned __int16)**(_DWORD **)&CmpCallbackListLock.Timer.Processor )
    return 3221225473LL;
  return result;
}
