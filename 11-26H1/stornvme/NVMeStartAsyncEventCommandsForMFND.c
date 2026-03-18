/*
 * XREFs of NVMeStartAsyncEventCommandsForMFND @ 0x140019014
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeIssueAsyncEventCommand @ 0x14000CB80 (NVMeIssueAsyncEventCommand.c)
 *     NVMeAllocateAsyncEventCommandsForMFND @ 0x140015D24 (NVMeAllocateAsyncEventCommandsForMFND.c)
 */

__int64 __fastcall NVMeStartAsyncEventCommandsForMFND(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int AsyncEventCommandsForMFND; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp

  v1 = 0;
  if ( !*(_BYTE *)(a1 + 20) && (*(_DWORD *)(a1 + 12) & 4) != 0 && *(_WORD *)(a1 + 4054) )
  {
    if ( *(_QWORD *)(a1 + 1400) )
      AsyncEventCommandsForMFND = *(unsigned __int16 *)(a1 + 1554);
    else
      AsyncEventCommandsForMFND = NVMeAllocateAsyncEventCommandsForMFND(a1);
    *(_WORD *)(a1 + 1554) = AsyncEventCommandsForMFND;
    if ( AsyncEventCommandsForMFND && *(_QWORD *)(a1 + 1400) )
    {
      v4 = 0LL;
      v5 = AsyncEventCommandsForMFND;
      v1 = AsyncEventCommandsForMFND;
      do
      {
        NVMeIssueAsyncEventCommand(a1, v4 + *(_QWORD *)(a1 + 1400));
        v4 += 128LL;
        --v5;
      }
      while ( v5 );
    }
  }
  return v1;
}
