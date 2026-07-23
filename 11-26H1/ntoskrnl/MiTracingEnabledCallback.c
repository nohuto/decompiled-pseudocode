/*
 * XREFs of MiTracingEnabledCallback @ 0x140B45DF0
 * Callers:
 *     <none>
 * Callees:
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 */

unsigned __int64 __fastcall MiTracingEnabledCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 result; // rax

  result = (unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 1 && ((unsigned __int8)a4 & 0x20) != 0 )
    return (unsigned __int64)MiLogHotPatchRundown(a1, a2, a3, a4);
  return result;
}
