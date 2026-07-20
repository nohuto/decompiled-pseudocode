/*
 * XREFs of SmpInternalLogFailure @ 0x140005424
 * Callers:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmpAllocateControlBlock @ 0x140003E10 (SmpAllocateControlBlock.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall SmpInternalLogFailure(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // r8
  _BYTE *v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  _BYTE *v8; // rax
  _OWORD *v9; // rax
  _OWORD *result; // rax
  __int128 v11; // xmm0
  _OWORD *v12; // r9

  *(_DWORD *)(a4 + 192) = a3;
  *(_DWORD *)(a4 + 216) = a2;
  if ( a1 )
  {
    v4 = 64LL;
    v5 = (_BYTE *)a4;
    v6 = a1 - a4;
    do
    {
      if ( v4 == -2147483582 )
        break;
      v7 = v5[v6];
      if ( !v7 )
        break;
      *v5++ = v7;
      --v4;
    }
    while ( v4 );
    v8 = v5 - 1;
    if ( v4 )
      v8 = v5;
    *v8 = 0;
  }
  v9 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_14002FE94) % 16) + 8);
  *v9 = *(_OWORD *)a4;
  v9[1] = *(_OWORD *)(a4 + 16);
  v9[2] = *(_OWORD *)(a4 + 32);
  v9[3] = *(_OWORD *)(a4 + 48);
  v9[4] = *(_OWORD *)(a4 + 64);
  v9[5] = *(_OWORD *)(a4 + 80);
  v9[6] = *(_OWORD *)(a4 + 96);
  result = v9 + 8;
  v11 = *(_OWORD *)(a4 + 112);
  v12 = (_OWORD *)(a4 + 128);
  *(result - 1) = v11;
  *result = *v12;
  result[1] = v12[1];
  result[2] = v12[2];
  result[3] = v12[3];
  result[4] = v12[4];
  result[5] = v12[5];
  return result;
}
