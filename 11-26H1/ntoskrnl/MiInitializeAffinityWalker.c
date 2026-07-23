/*
 * XREFs of MiInitializeAffinityWalker @ 0x1407163EC
 * Callers:
 *     MiAllocatePageChainHeader @ 0x140510F80 (MiAllocatePageChainHeader.c)
 * Callees:
 *     MiInitializeGroupAffinity @ 0x1404E83C0 (MiInitializeGroupAffinity.c)
 *     MiEnforcePartitionAffinity @ 0x140501548 (MiEnforcePartitionAffinity.c)
 */

__int64 __fastcall MiInitializeAffinityWalker(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 *v4; // rsi
  unsigned int *v5; // r15
  int *v9; // rbx
  __int64 v10; // r10
  bool v11; // zf
  int v12; // ebp
  int i; // edi
  _OWORD *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx

  v4 = &qword_140E2D818;
  v5 = (unsigned int *)(a2 + 280);
  v9 = (int *)(a2 + 280);
  v10 = *(_QWORD *)(384LL * a4 + qword_140E2D838 + 376);
  v11 = (*(_DWORD *)(v10 + 36) & 1) == 0;
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v10 + 36) & 1;
  if ( v11 )
    v4 = (__int64 *)v10;
  v12 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( *v9 )
    {
      if ( !v12 )
      {
        *(_DWORD *)(a2 + 12) = i;
        v12 = 1;
      }
      v14 = (_OWORD *)*((_QWORD *)v9 + 2);
      v9[7] = *((_DWORD *)v4 + 2);
      v15 = *v9;
      v9[1] = *v9;
      v16 = v15;
      v9[3] = a3;
      if ( i )
        v16 = *v4;
      MiInitializeGroupAffinity(v14, v16, a3, i);
    }
    v9 += 8;
  }
  return MiEnforcePartitionAffinity(a1, v5);
}
