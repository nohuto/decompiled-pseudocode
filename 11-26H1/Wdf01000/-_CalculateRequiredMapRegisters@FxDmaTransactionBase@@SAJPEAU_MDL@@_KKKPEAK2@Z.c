/*
 * XREFs of ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x140062380
 * Callers:
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008793C (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaTransactionBase::_CalculateRequiredMapRegisters(
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        unsigned int AvailableMapRegisters,
        unsigned int *PossibleTransferLength,
        unsigned int *MapRegistersRequired)
{
  unsigned int v7; // ebx
  unsigned int ByteOffset; // r10d
  unsigned int v9; // edx
  unsigned int ByteCount; // r11d
  unsigned int i; // r8d
  unsigned int v12; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax

  v7 = Mdl->ByteCount - CurrentOffset;
  ByteOffset = ((_WORD)CurrentOffset + LOWORD(Mdl->StartVa) + LOWORD(Mdl->ByteOffset)) & 0xFFF;
  v9 = 0;
  ByteCount = v7;
  for ( i = 0; v7 < Length; i = v16 )
  {
    Mdl = Mdl->Next;
    if ( !Mdl )
      break;
    v14 = ByteCount + 4095;
    ByteCount = Mdl->ByteCount;
    v15 = ByteOffset + v14;
    ByteOffset = Mdl->ByteOffset;
    v9 += v15 >> 12;
    v16 = v7;
    if ( v9 > AvailableMapRegisters )
      v16 = i;
    v7 += ByteCount;
  }
  if ( v7 + 4096 < ByteOffset + Length )
    return 3221225507LL;
  v12 = ((Length + ByteCount + ByteOffset - v7 + 4095) >> 12) + v9;
  if ( v12 <= AvailableMapRegisters )
    i += Length + ByteCount - v7;
  if ( PossibleTransferLength )
    *PossibleTransferLength = i;
  *MapRegistersRequired = v12;
  return 0LL;
}
