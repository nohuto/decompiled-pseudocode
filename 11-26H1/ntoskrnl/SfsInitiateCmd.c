/*
 * XREFs of SfsInitiateCmd @ 0x1406DD374
 * Callers:
 *     SfsFwpApplyPatch @ 0x1406DCDD8 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406DD060 (SfsGetFwVersions.c)
 * Callees:
 *     SfsIsAspReady @ 0x1406DD3C0 (SfsIsAspReady.c)
 */

__int64 __fastcall SfsInitiateCmd(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( CmpCallbackListLock.WaitBlockFill4[8] )
  {
    if ( (int)SfsIsAspReady(a1, a2, 0LL) >= 0 )
    {
      **(_DWORD **)&CmpCallbackListLock.Timer.Processor = 917504;
      _InterlockedOr(v4, v2);
    }
    else
    {
      return (unsigned int)-2147483631;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
