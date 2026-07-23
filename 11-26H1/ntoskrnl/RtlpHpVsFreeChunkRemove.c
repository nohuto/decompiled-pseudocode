/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x14037AAF0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404135D0 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, _RTL_RB_TREE *a2, int a3, ULONG_PTR a4)
{
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r9
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 result; // rax
  int v15; // ecx

  RtlRbRemoveNode(a2 + 1, (PRTL_BALANCED_NODE)(a4 + 8));
  if ( (RtlpHpLfhPerfFlags & 0x20000) != 0 && byte_140FC8BD8 )
    KasanMarkAddressValidNoInline(
      a4,
      16LL * (WORD1(a4) ^ WORD1(*(_QWORD *)a4) ^ *(_WORD *)&PspTlsContext.Timer.TimerType));
  v7 = (a4 - a3 + 4127) & 0xFFFFF000;
  v8 = 16 * (WORD1(a4) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ (unsigned __int64)WORD1(*(_QWORD *)a4));
  v9 = (v8 + (a4 & 0xFFF) + 4095) >> 12;
  v10 = (v8 + 4095) >> 12;
  v11 = (a4 + 16 * (WORD1(a4) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)a4)) - a3) & 0xFFFFF000;
  if ( v7 >= v11 )
    v12 = 0;
  else
    v12 = v11 - v7;
  v13 = *(__int16 *)(a1 + 6);
  result = PspTlsContext.Timer.Processor;
  v15 = v10 + (PspTlsContext.Timer.Processor ^ (unsigned __int16)(*(_QWORD *)a4 ^ a4)) - (v12 >> 12) - v9;
  if ( (_WORD)v13 )
    _InterlockedAdd64((volatile signed __int64 *)(v13 + a1 + 32), v15);
  else
    *(_QWORD *)(a1 + 96) += v15;
  return result;
}
