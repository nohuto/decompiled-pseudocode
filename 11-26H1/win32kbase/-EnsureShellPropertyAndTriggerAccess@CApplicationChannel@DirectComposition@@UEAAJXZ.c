/*
 * XREFs of ?EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ @ 0x1401413E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x14014141C (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::EnsureShellPropertyAndTriggerAccess(
        DirectComposition::CConnection **this)
{
  int v2; // ecx

  v2 = 0;
  if ( (*((_BYTE *)this + 265) & 8) == 0 )
  {
    v2 = DirectComposition::CConnection::AcquireShellResourceAccess(this[5]);
    if ( v2 >= 0 )
      *((_BYTE *)this + 265) |= 8u;
  }
  return (unsigned int)v2;
}
