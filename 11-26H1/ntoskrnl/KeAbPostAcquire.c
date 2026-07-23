/*
 * XREFs of KeAbPostAcquire @ 0x14043AA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAbPostAcquire(__int64 a1)
{
  __int64 result; // rax

  result = KiAbpGlobalState;
  if ( (KiAbpGlobalState & 1) != 0 )
    *(_BYTE *)(a1 + 33) |= 2u;
  else
    *(_BYTE *)(a1 + 10) = 1;
  return result;
}
