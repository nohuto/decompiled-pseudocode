/*
 * XREFs of ResumeIrpCommands @ 0x14002DC2C
 * Callers:
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x140028478 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x140028F38 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     ProcessPendingIoCommands @ 0x14002C2D0 (ProcessPendingIoCommands.c)
 */

__int64 __fastcall ResumeIrpCommands(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 56) & 0x800000) == 0 )
  {
    v2 = 0;
    if ( !*(_BYTE *)(a1 + 20) )
    {
      if ( *(_WORD *)(a1 + 330) )
      {
        do
        {
          ProcessPendingIoCommands(a1, *(_QWORD *)(a1 + 936) + 208LL * v2, 0LL, 0LL);
          result = *(unsigned __int16 *)(a1 + 330);
          ++v2;
        }
        while ( v2 < (unsigned int)result );
      }
    }
  }
  return result;
}
