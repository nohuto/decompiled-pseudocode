/*
 * XREFs of VfDifCallbackReplacementRequested @ 0x14064AC58
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140C3E79C (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     <none>
 */

char VfDifCallbackReplacementRequested()
{
  unsigned int i; // ecx
  __int64 v1; // rax

  for ( i = 0; ; ++i )
  {
    v1 = 4LL * i;
    if ( !(&VfDifIoCallbackThunks)[v1] )
      break;
    if ( ((__int64)(&VfDifIoCallbackThunks)[v1 + 1] & 1) != 0 )
      return 1;
  }
  return 0;
}
