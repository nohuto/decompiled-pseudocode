/*
 * XREFs of MiGetNumberOfCachedPtes @ 0x1402A534C
 * Callers:
 *     MmGetNumberOfFreeSystemPtes @ 0x1402A51B0 (MmGetNumberOfFreeSystemPtes.c)
 *     MiPteBinsNeedTrimming @ 0x1402A52F0 (MiPteBinsNeedTrimming.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNumberOfCachedPtes(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  __int64 *v7; // r10
  __int64 v8; // rax
  bool v9; // cc
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0LL;
  if ( (_KWAIT_BLOCK **)a1 == &stru_140E366D8.WaitBlockList )
  {
    v3 = 3LL;
  }
  else
  {
    v3 = 2LL;
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      v4 = 1;
      if ( (_UNKNOWN *)a1 == &unk_140E34BC0 )
        v4 = 2;
      v3 = v4;
    }
  }
  v5 = (unsigned __int16)KeNumberNodes;
  do
  {
    v6 = 0;
    if ( v5 )
    {
      v7 = (__int64 *)(v1 + 64);
      do
      {
        v8 = *v7;
        v7 += 9;
        v9 = v8 <= 0;
        v10 = v8 + v2;
        v5 = (unsigned __int16)KeNumberNodes;
        if ( v9 )
          v10 = v2;
        v1 += 72LL;
        ++v6;
        v2 = v10;
      }
      while ( v6 < (unsigned __int16)KeNumberNodes );
    }
    --v3;
  }
  while ( v3 );
  return v2;
}
