/*
 * XREFs of ExpInitBootEntropyInformation @ 0x140838CA0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExpInitBootEntropyInformation(PRTL_RUN_ONCE a1, _DWORD **a2, PVOID *a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  _BYTE *v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v10; // xmm0
  __int64 result; // rax

  v4 = *a2;
  v5 = 1096LL;
  v6 = (_BYTE *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 344LL);
  if ( *a2 )
  {
    memset_0(v4, 0, 0x448uLL);
    v7 = v4 + 2;
    v8 = v6 - (_BYTE *)v4;
    v9 = 10LL;
    do
    {
      *v7 = *(_DWORD *)((char *)v7 + v8);
      *((_QWORD *)v7 + 1) = *(_QWORD *)((char *)v7 + v8 + 8);
      v7[4] = *(_DWORD *)((char *)v7 + v8 + 16);
      v7[5] = *(_DWORD *)((char *)v7 + v8 + 20);
      *((_QWORD *)v7 + 3) = *(_QWORD *)((char *)v7 + v8 + 24);
      v7[8] = *(_DWORD *)((char *)v7 + v8 + 32);
      v10 = *(_OWORD *)((char *)v7 + v8 + 36);
      v7 += 26;
      *(_OWORD *)(v7 - 17) = v10;
      *(_OWORD *)(v7 - 13) = *(_OWORD *)((char *)v7 + v8 - 52);
      *(_OWORD *)(v7 - 9) = *(_OWORD *)((char *)v7 + v8 - 36);
      *(_OWORD *)(v7 - 5) = *(_OWORD *)((char *)v7 + v8 - 20);
      --v9;
    }
    while ( v9 );
    *v4 = *(_DWORD *)v6;
    *(_OWORD *)(v4 + 262) = *(_OWORD *)(v6 + 1048);
    *(_OWORD *)(v4 + 266) = *(_OWORD *)(v6 + 1064);
    *(_OWORD *)(v4 + 270) = *(_OWORD *)(v6 + 1080);
  }
  do
  {
    *v6++ = 0;
    --v5;
  }
  while ( v5 );
  result = 1LL;
  *a2 = (_DWORD *)-1LL;
  return result;
}
