/*
 * XREFs of ?IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ @ 0x1800600C0
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18005FED4 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CContactStationaryVisual::IsOKToCleanup(CContactStationaryVisual *this)
{
  __int64 v1; // rdx
  char result; // al
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 35);
  result = 0;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
  {
    v3 = *((_QWORD *)this + 36);
    if ( !v3 || *(_BYTE *)(v3 + 72) )
      return 1;
  }
  return result;
}
