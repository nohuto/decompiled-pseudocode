/*
 * XREFs of MiZeroChainWorker @ 0x1402A02A0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiZeroWithUltraSpace @ 0x1402A0430 (MiZeroWithUltraSpace.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 */

__int64 __fastcall MiZeroChainWorker(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r10
  __int64 v4; // r11
  _QWORD *v5; // rdi
  __int64 v6; // r14
  int v7; // edx
  unsigned int v8; // r12d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned __int64 v13; // r15
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v15; // r13d
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  _DWORD *v18; // rbx
  __int64 v19; // [rsp+30h] [rbp-48h]
  int i; // [rsp+98h] [rbp+20h]

  v2 = a1[4];
  v3 = a2;
  v4 = a1[12];
  v5 = a1;
  v6 = a1[14];
  v19 = v4;
  v7 = *(_DWORD *)(v2 + 20);
  v8 = *(_DWORD *)(v2 + 16) & 4;
  for ( i = v7; ; v7 = i )
  {
    result = 0x3FFFFFFFFFLL;
    if ( v6 == 0x3FFFFFFFFFLL )
      break;
    v10 = 48 * v6;
    v11 = 48 * v6 - 0x220000000000LL;
    v12 = 3;
    v6 = *(_QWORD *)v11 & 0xFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 )
    {
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v11);
      v3 = a2;
      v12 = PfnPageSizeIndex;
      v4 = v19;
      v7 = i;
    }
    v13 = MiPageSizes[v12];
    if ( v12 <= 2 && (*(_DWORD *)(v2 + 16) & 0x10) == 0 && ((*(_DWORD *)(v11 + 32) >> 22) & 3) != v7 )
    {
      MiZeroAndConvertPage(v3, v11, v12, v7, *(_DWORD *)(v2 + 16));
      goto LABEL_8;
    }
    if ( v4 )
    {
      MiZeroWithUltraSpace(v4, v3, v11, v8);
LABEL_8:
      v4 = v19;
      goto LABEL_9;
    }
    v15 = 0;
    v16 = (__int64)((unsigned __int128)(v10 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v17 = (v16 >> 63) + v16;
    if ( v13 )
    {
      v18 = (_DWORD *)(v11 + 32);
      do
      {
        MiZeroPhysicalPage(a2, v17, 0LL, (*v18 >> 22) & 3);
        ++v15;
        v18 += 12;
        ++v17;
      }
      while ( v15 < v13 );
      v5 = a1;
      goto LABEL_8;
    }
LABEL_9:
    v5[13] -= v13;
    v3 = a2;
  }
  return result;
}
