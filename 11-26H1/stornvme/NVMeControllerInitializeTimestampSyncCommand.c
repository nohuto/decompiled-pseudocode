/*
 * XREFs of NVMeControllerInitializeTimestampSyncCommand @ 0x14001D3F4
 * Callers:
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeControllerInitializeTimestampSyncCommand(__int64 a1)
{
  unsigned int DmaBuffer; // eax
  void *v3; // rbx
  unsigned int v4; // esi
  char v5; // al

  memset((void *)(a1 + 1408), 0, 0x80uLL);
  DmaBuffer = NVMeAllocateDmaBufferEx(a1, 1, 0, 0x3000u, (__int64 *)(a1 + 1536), (_QWORD *)(a1 + 1544));
  v3 = *(void **)(a1 + 1536);
  v4 = DmaBuffer;
  if ( v3 )
  {
    memset(v3, 0, 0x1088uLL);
    v5 = *(_BYTE *)(a1 + 1409) | 2;
    *(_BYTE *)(a1 + 1419) = 0;
    *(_BYTE *)(a1 + 1409) = v5;
    *(_QWORD *)(a1 + 1512) = *(_QWORD *)(a1 + 1544);
    *(_DWORD *)(a1 + 1428) = 251658240;
    *(_QWORD *)(a1 + 1504) = v3;
    *(_QWORD *)(a1 + 1472) = v3;
  }
  else
  {
    return (unsigned int)-1056964605;
  }
  return v4;
}
