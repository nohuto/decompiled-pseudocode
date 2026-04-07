/*
 * XREFs of ?IsOKToCleanup@CFlickVisual@@UEAA_NXZ @ 0x1800A8CF0
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18005FED4 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlickVisual::IsOKToCleanup(CFlickVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 35);
  result = 0;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1;
  return result;
}
