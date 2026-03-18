/*
 * XREFs of EtwTraceKillTimer @ 0x1400E0CD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0D04 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceKillTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &TimerKillTimer, a3, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 112));
  return result;
}
