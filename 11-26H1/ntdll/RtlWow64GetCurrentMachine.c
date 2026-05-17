/*
 * XREFs of RtlWow64GetCurrentMachine @ 0x1800B3F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlWow64GetCpuAreaInfo @ 0x1800B4750 (RtlWow64GetCpuAreaInfo.c)
 */

__int64 RtlWow64GetCurrentMachine()
{
  unsigned __int16 v0; // bx
  _BYTE v2[32]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+40h] [rbp-18h]

  v0 = -31132;
  if ( NtCurrentTeb()->WowTebOffset > 0 )
  {
    v3 = 0LL;
    if ( (int)RtlWow64GetCpuAreaInfo(NtCurrentTeb()->TlsSlots[1], 0LL, v2) >= 0 )
      return WORD2(v3);
  }
  return v0;
}
