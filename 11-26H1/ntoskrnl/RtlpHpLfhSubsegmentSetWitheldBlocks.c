/*
 * XREFs of RtlpHpLfhSubsegmentSetWitheldBlocks @ 0x14034DB48
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x14034D570 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSetWitheldBlocks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // esi
  unsigned int v6; // r11d
  unsigned int v7; // r9d
  unsigned int i; // r10d
  unsigned __int64 v9; // rdx

  v5 = (unsigned __int16)a4;
  v6 = 0;
  v7 = HIWORD(a4);
  for ( i = 4096; i < a5; i += 4096 )
  {
    if ( i - v5 * ((*(unsigned int *)(a3 + 72) * (unsigned __int64)(i - v7)) >> 32) != v7 )
    {
      v9 = (*(unsigned int *)(a3 + 72) * (unsigned __int64)(i - v7)) >> 38;
      *(_QWORD *)(a1 + 8 * v9) |= 1LL << (((*(unsigned int *)(a3 + 72) * (unsigned __int64)(i - v7)) >> 32) & 0x3F);
      ++v6;
    }
  }
  return v6;
}
