/*
 * XREFs of MiAllocatePageChainHeader @ 0x140510F80
 * Callers:
 *     MiCreatePageChainsForNode @ 0x14071636C (MiCreatePageChainsForNode.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiInitializeAffinityWalker @ 0x1407163EC (MiInitializeAffinityWalker.c)
 */

__int64 __fastcall MiAllocatePageChainHeader(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // eax
  int *v14; // rdi
  int v15; // eax
  __int64 *v16; // r8
  __int64 v17; // r10
  _QWORD *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdi
  int v21; // eax

  v3 = *(unsigned int *)(a2 + 28);
  v4 = *(unsigned __int16 *)(a1 + 16);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = 16LL * *(unsigned __int16 *)(a1 + 16);
  result = ExAllocatePoolMm(
             64LL,
             v5 + 136 * (v3 + 4) + 48LL * *(unsigned __int16 *)(a1 + 16),
             1834641741,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v8 = result;
  if ( result )
  {
    v9 = (_DWORD *)(result + 120);
    *(_QWORD *)result = *(_QWORD *)a2;
    v10 = (_DWORD *)(result + 400);
    v11 = 3LL;
    *(_DWORD *)(result + 84) = *(_DWORD *)(a2 + 8);
    v12 = 3LL;
    *(_DWORD *)(result + 80) = *(_DWORD *)(a2 + 12);
    v13 = *(_DWORD *)(a2 + 24);
    v14 = (int *)(a2 + 36);
    *(_DWORD *)(v8 + 20) = v13;
    do
    {
      v15 = *v14++;
      *v10 = v15;
      v10 += 8;
      --v12;
    }
    while ( v12 );
    if ( (_DWORD)v3 )
    {
      v16 = (__int64 *)(v8 + 576);
      v17 = v3;
      v18 = (_QWORD *)(v8 + 664);
      do
      {
        v18[1] = 0LL;
        *(v18 - 1) = 0x3FFFFFFFFFLL;
        *v18 = 0x3FFFFFFFFFLL;
        v18 += 17;
        *v16 = v8;
        v16 += 17;
        --v17;
      }
      while ( v17 );
    }
    *v9 = *(_DWORD *)(v8 + 80);
    *(_DWORD *)(v8 + 124) = *(_DWORD *)(v8 + 84);
    v19 = (__int64 *)(v8 + 416);
    v20 = v8 + 544 + 136 * v3;
    do
    {
      *v19 = v20;
      v20 += v6;
      *((_DWORD *)v19 - 1) = v4;
      v19 += 4;
      --v11;
    }
    while ( v11 );
    v21 = MiInitializeAffinityWalker(*(_QWORD *)v8, v9, v4, *(unsigned int *)(v8 + 80));
    *(_DWORD *)(v8 + 28) = v21;
    *(_DWORD *)(v8 + 24) = v21;
    if ( v5 )
      *(_QWORD *)(v8 + 496) = v20;
    *(_DWORD *)(v8 + 92) = 1;
    return v8;
  }
  return result;
}
