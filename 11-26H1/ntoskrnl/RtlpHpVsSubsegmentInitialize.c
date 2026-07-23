/*
 * XREFs of RtlpHpVsSubsegmentInitialize @ 0x14049010C
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x14024C60C (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsSubsegmentInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r10
  __int16 v5; // cx
  __int64 result; // rax

  v4 = (unsigned __int64)(a2 - 48) >> 4;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 32) = v4;
  v5 = 0;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)((unsigned __int64)a3 >> 12));
  if ( a3 == (_DWORD)a2 )
    v5 = 0x8000;
  *(_WORD *)(a1 + 36) = (*(_WORD *)(a1 + 36) & 0x7FFF | v5) ^ (v4 ^ (*(_WORD *)(a1 + 36) & 0x7FFF | v5) ^ 0x2BED) & 0x7FFF;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 50) = v4;
  result = *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(a1 + 48) ^ (a1 + 48);
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
