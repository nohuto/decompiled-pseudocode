/*
 * XREFs of EtwpRequestFlushTimer @ 0x140219A50
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x1404CFB70 (EtwpLoggerDpc.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  ULONG v6; // r9d
  __int64 v7; // rdx
  unsigned int v8; // ecx

  if ( (*(_DWORD *)(a1 + 824) & 0x400) != 0 )
    return 0;
  if ( (_BYTE)a2 || (unsigned __int8)KeGetEffectiveIrql(a1, a2, a3) > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 9u) )
      KiInsertQueueDpc(a1 + 568, 0);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 0xAu) )
      return 0;
    v5 = *(_DWORD *)(a1 + 208);
    if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
      v5 *= 1000;
    v6 = 500;
    v7 = EtwpOneMs * v5;
    v8 = v5 >> 2;
    if ( v8 < 0x1F4 )
      v6 = v8;
    KeSetCoalescableTimer((PKTIMER)(a1 + 504), (LARGE_INTEGER)v7, 0, v6, 0LL);
  }
  return 1;
}
