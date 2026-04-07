/*
 * XREFs of ?IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ @ 0x180085B80
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18002B7AC (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CContactStationaryVisual::IsOKToCleanup(CContactStationaryVisual *this)
{
  __int64 v1; // rdx
  char result; // al
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 39);
  result = 0;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
  {
    v3 = *((_QWORD *)this + 40);
    if ( !v3 || *(_BYTE *)(v3 + 72) )
      return 1;
  }
  return result;
}
