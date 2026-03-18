/*
 * XREFs of LockAllPoolForAddRemove @ 0x140115344
 * Callers:
 *     VidMmInitDmaPool @ 0x1400A47A0 (VidMmInitDmaPool.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall LockAllPoolForAddRemove(char a1)
{
  if ( a1 )
    return ExAcquireResourceExclusiveLite(Resource, 1u);
  else
    return ExAcquireResourceSharedLite(Resource, 1u);
}
