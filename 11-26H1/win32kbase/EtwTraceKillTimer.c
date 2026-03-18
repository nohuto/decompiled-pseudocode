/*
 * XREFs of EtwTraceKillTimer @ 0x14012AC30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140113150 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceKillTimer(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v4; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 112);
    return McTemplateK0pq_EtwWriteTransfer(a1, &TimerKillTimer, a3, *(_QWORD *)(a1 + 104), v4);
  }
  return result;
}
