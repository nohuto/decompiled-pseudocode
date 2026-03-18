/*
 * XREFs of BvgaNotifyDisplayOwnershipLost @ 0x1405C5D50
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x1405C5CF0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BvgaAcquireLock @ 0x1405C5AD0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1405C5DC0 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    BvgaAcquireLock();
    if ( BvgaDisplayState != 2 )
      VidCleanUp();
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
    return BvgaReleaseLock(v2);
  }
  else
  {
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
  }
  return result;
}
