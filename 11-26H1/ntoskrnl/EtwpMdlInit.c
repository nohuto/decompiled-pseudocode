/*
 * XREFs of EtwpMdlInit @ 0x14082D004
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x140482658 (EtwpFreeTraceBuffer.c)
 *     EtwpAllocateTraceBuffer @ 0x1404B67A4 (EtwpAllocateTraceBuffer.c)
 *     EtwpFreePfnArray @ 0x14082C000 (EtwpFreePfnArray.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall EtwpMdlInit(__int64 a1, int a2, __int64 a3)
{
  __int16 result; // ax

  *(_OWORD *)a1 = 0LL;
  result = 8 * (a2 + 6);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 40) = a2 << 12;
  *(_WORD *)(a1 + 10) = 8202;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 24) = a3;
    *(_WORD *)(a1 + 10) = 8203;
  }
  return result;
}
