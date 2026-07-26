/*
 * XREFs of NetioCopyOpaqueNetBufferListInformation @ 0x140042E80
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1400CC340 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NetioCopyOpaqueNetBufferListInformation(__int64 a1, __int64 a2)
{
  char v3; // [rsp+20h] [rbp-18h]

  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
  if ( (*(_QWORD *)(a2 + 224) & 0xFFFFFFFFFFFFFFFCuLL) == 0 || (*(_QWORD *)(a2 + 224) & 1) != 0 )
    return 0LL;
  v3 = 1;
  return WfpNblInfoClone(a2, a1, 0LL, 0LL, v3);
}
