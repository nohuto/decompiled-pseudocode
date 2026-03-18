/*
 * XREFs of ?BuildDirtyBitplaneFromTransportBuffer@DXGK_DIRTY_BITPLANE@@QEAAJPEAE_KPEA_K@Z @ 0x140083D08
 * Callers:
 *     ?LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1403A86A0 (-LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGK_DIRTY_BITPLANE::BuildDirtyBitplaneFromTransportBuffer(
        struct _RTL_BITMAP *this,
        unsigned __int8 *a2,
        size_t a3,
        unsigned __int64 *a4)
{
  PULONG Buffer; // rax
  __int64 v9; // rbx
  size_t v10; // r8
  int v11; // ecx

  if ( !HIDWORD(this[4].Buffer) )
    RtlClearAllBits(this);
  Buffer = this->Buffer;
  v9 = HIDWORD(this[4].Buffer) >> 3;
  v10 = (unsigned int)(this[1].SizeOfBitMap - v9);
  if ( a3 < v10 )
    v10 = a3;
  *a4 = v10;
  memmove(&Buffer[v9], a2, v10);
  v11 = *(_DWORD *)a4;
  HIDWORD(this[4].Buffer) += 8 * *(_DWORD *)a4;
  if ( (unsigned int)(v11 + v9) < this[1].SizeOfBitMap )
    return 261LL;
  HIDWORD(this[4].Buffer) = 0;
  return 0LL;
}
