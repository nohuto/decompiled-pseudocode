/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x1403A98D0
 * Callers:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 * Callees:
 *     <none>
 */

char __fastcall KeIsUserVaAccessAllowed(__int64 a1)
{
  _BYTE v2[3]; // [rsp+0h] [rbp-8h]

  if ( !KeSmapEnabled )
    return 1;
  if ( a1 )
    return (*(_DWORD *)(a1 + 376) & 0x40000) != 0;
  return (*(_DWORD *)v2 & 0x40000) != 0;
}
