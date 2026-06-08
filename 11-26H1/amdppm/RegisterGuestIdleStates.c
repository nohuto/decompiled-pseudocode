/*
 * XREFs of RegisterGuestIdleStates @ 0x14003D650
 * Callers:
 *     <none>
 * Callees:
 *     RegisterVmIdleStates @ 0x14003E360 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
    return RegisterVmIdleStates();
  else
    return 0LL;
}
