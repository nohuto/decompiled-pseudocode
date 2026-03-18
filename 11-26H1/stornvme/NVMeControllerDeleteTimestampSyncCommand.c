/*
 * XREFs of NVMeControllerDeleteTimestampSyncCommand @ 0x1400113E0
 * Callers:
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 */

__int64 __fastcall NVMeControllerDeleteTimestampSyncCommand(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 1536);
  if ( *(_QWORD *)(a1 + 1536) )
  {
    NVMeFreeDmaBufferEx(a1, 1, 0, 12288LL, (__int64 *)(a1 + 1536), *(_QWORD *)(a1 + 1544));
    result = 0LL;
    *v1 = 0LL;
    *(_QWORD *)(a1 + 1544) = 0LL;
  }
  *(_OWORD *)(a1 + 1408) = 0LL;
  *(_OWORD *)(a1 + 1424) = 0LL;
  *(_OWORD *)(a1 + 1440) = 0LL;
  *(_OWORD *)(a1 + 1456) = 0LL;
  *(_OWORD *)(a1 + 1472) = 0LL;
  *(_OWORD *)(a1 + 1488) = 0LL;
  *(_OWORD *)(a1 + 1504) = 0LL;
  *(_OWORD *)(a1 + 1520) = 0LL;
  return result;
}
