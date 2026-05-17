/*
 * XREFs of RtlContractHashTable @ 0x1800D8A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpGetChainHead @ 0x1800D8D50 (RtlpGetChainHead.c)
 */

char __fastcall RtlContractHashTable(__int64 a1)
{
  int v1; // edx
  int v4; // eax
  int v5; // eax
  _QWORD *ChainHead; // r9
  _QWORD *v7; // r10
  _QWORD *i; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *j; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // rdi

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 128 || *(_DWORD *)(a1 + 28) )
    return 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    v5 = v4 - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) >>= 1;
    v5 = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 12) = v5;
  RtlpGetChainHead(a1, (unsigned int)(v1 - 1));
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, *(unsigned int *)(a1 + 12));
  --*(_DWORD *)(a1 + 8);
  if ( (_QWORD *)*v7 != v7 && (_QWORD *)*ChainHead != ChainHead )
    --*(_DWORD *)(a1 + 24);
  for ( i = ChainHead; ; *i = v9 )
  {
    v9 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    if ( (_QWORD *)v9[1] != v7 )
      goto LABEL_19;
    v13 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_19;
    *v7 = v13;
    *(_QWORD *)(v13 + 8) = v7;
    for ( j = (_QWORD *)*i; j != ChainHead; j = (_QWORD *)*j )
    {
      if ( j[2] >= v9[2] )
        break;
      i = j;
    }
    v15 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
LABEL_19:
      __fastfail(3u);
    *v9 = v15;
    v9[1] = i;
    v15[1] = v9;
  }
  v10 = *(_DWORD *)(a1 + 8) + 128;
  _BitScanReverse(&v11, v10);
  v12 = v11 - 7;
  if ( 1 << v11 == v10 )
  {
    v16 = *(_QWORD **)(a1 + 32);
    RtlFreeHeap_0();
    v16[v12] = 0LL;
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v16;
      RtlFreeHeap_0();
    }
  }
  return 1;
}
