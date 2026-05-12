/*
 * XREFs of NvmeControllerGetChangedNamespaceListLog @ 0x1400C5C50
 * Callers:
 *     NvmeControllerReenumerationRoutine @ 0x1400C6370 (NvmeControllerReenumerationRoutine.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 */

__int64 __fastcall NvmeControllerGetChangedNamespaceListLog(
        union _SLIST_HEADER *SystemArgument2,
        __int64 a2,
        __int64 a3)
{
  __int64 *ExtendedCommand; // rdi
  _DWORD *Region; // rax
  int DmaBuffer; // esi
  __int64 v7; // rax
  __int128 v9; // [rsp+50h] [rbp-18h] BYREF

  v9 = 0LL;
  ExtendedCommand = 0LL;
  if ( (SystemArgument2[60].Region & 1) == 0
    || (SystemArgument2[60].Region & 2) != 0
    || (SystemArgument2[60].Region & 4) != 0
    || (SystemArgument2[60].Region & 8) != 0
    || (SystemArgument2[60].Region & 0x10) != 0 )
  {
    DmaBuffer = -1073741436;
  }
  else
  {
    Region = (_DWORD *)SystemArgument2[80].Region;
    if ( Region && *Region )
    {
      DmaBuffer = -2147483631;
    }
    else
    {
      ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(SystemArgument2);
      if ( ExtendedCommand )
      {
        DmaBuffer = NvmeAllocateDmaBuffer((__int64)SystemArgument2, 0x1000u, a3, (void **)&v9, (_QWORD *)&v9 + 1, 0);
        if ( DmaBuffer >= 0 )
        {
          LOBYTE(a3) = 4;
          v7 = *ExtendedCommand;
          *((_WORD *)ExtendedCommand + 26) = *(_WORD *)(SystemArgument2[8].Alignment + 1108);
          *(_DWORD *)(*ExtendedCommand + 4256) = *(_DWORD *)(v7 + 4256) | 1;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
          *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
          *(_WORD *)(*ExtendedCommand + 4252) = 0;
          *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
          *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerGetLogPageCompletionForAER;
          *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
          *(_OWORD *)(*ExtendedCommand + 4160) = v9;
          *(_DWORD *)(*ExtendedCommand + 4248) = 4096;
          BuildGetLogPageCommand(
            (__int64)SystemArgument2,
            *ExtendedCommand + 4096,
            a3,
            0x1000u,
            *((__int64 *)&v9 + 1),
            -1,
            0LL,
            0,
            *ExtendedCommand,
            ExtendedCommand[1]);
          DmaBuffer = NvmeControllerProcessCommand((__int64)SystemArgument2, ExtendedCommand);
          if ( DmaBuffer >= 0 )
            return (unsigned int)DmaBuffer;
        }
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  if ( (_QWORD)v9 )
    NvmeFreeDmaBuffer((_DWORD)SystemArgument2, 4096, a3, v9, *((__int64 *)&v9 + 1));
  if ( ExtendedCommand )
    NvmeControllerReclaimExtendedCommand(SystemArgument2, (__int64)ExtendedCommand);
  return (unsigned int)DmaBuffer;
}
