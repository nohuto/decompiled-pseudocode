/*
 * XREFs of NvmeRegisterPerfStates @ 0x14012AEB0
 * Callers:
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 *     RaidGetStorPoFxPerfState @ 0x140079D94 (RaidGetStorPoFxPerfState.c)
 *     RaidValidatePerfSets @ 0x140081298 (RaidValidatePerfSets.c)
 */

__int64 __fastcall NvmeRegisterPerfStates(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  _DWORD *NvmeNamespace; // rbp
  _DWORD *NvmeAdapter; // r15
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // ecx
  void *v14; // r12
  unsigned int v15; // ecx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  _DWORD *Pool; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r10
  _QWORD *v22; // r11
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // esi
  __int64 StorPoFxPerfState; // rax
  _QWORD *v29; // r11
  unsigned int v30; // esi

  NvmeNamespace = 0LL;
  NvmeAdapter = 0LL;
  if ( RuntimePowerDisabled )
    return 0LL;
  if ( !a4 )
    return 3221225485LL;
  v12 = (unsigned int)*a4;
  if ( !(_DWORD)v12 || !a5 || !RaidValidatePerfSets(a5, v12) )
    return 3221225485LL;
  v13 = **(_DWORD **)(a1 + 64);
  if ( v13 == 1314275652 )
  {
    v14 = NvmeAdapterPerfStateCallback;
    NvmeAdapter = GetNvmeAdapter(a1);
    goto LABEL_11;
  }
  if ( v13 != 1314278989 )
    return 3221225485LL;
  v14 = RaidNullReference;
  NvmeNamespace = GetNvmeNamespace(a1);
LABEL_11:
  v15 = 48 * v12 + 56;
  v16 = (_DWORD *)(a5 + 24);
  v17 = v12;
  do
  {
    if ( !*(v16 - 1) )
      v15 += 16 * *v16;
    v16 += 10;
    --v17;
  }
  while ( v17 );
  Pool = (_DWORD *)RaidAllocatePool(64LL, v15, 1330667858LL, a1);
  v19 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v20 = (unsigned int)*a4;
  v21 = 0LL;
  *Pool = v20;
  v22 = &Pool[12 * v20 + 14];
  if ( (_DWORD)v20 )
  {
    do
    {
      v23 = a5 + 40 * v21;
      v24 = 6 * v21;
      v19[v24 + 3] = *(_QWORD *)(v23 + 8);
      HIDWORD(v19[v24 + 4]) = *(_DWORD *)(v23 + 20);
      v25 = 0;
      if ( *(_DWORD *)(v23 + 16) != 3 )
        v25 = *(_DWORD *)(v23 + 16);
      LODWORD(v19[6 * v21 + 4]) = v25;
      v26 = *(_DWORD *)(v23 + 20);
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v19[6 * v21 + 5] = *(_QWORD *)(v23 + 24);
          v19[6 * v21 + 6] = *(_QWORD *)(v23 + 32);
        }
      }
      else
      {
        v19[6 * v21 + 6] = v22;
        v27 = 0;
        for ( LODWORD(v19[6 * v21 + 5]) = *(_DWORD *)(v23 + 24); v27 < *(_DWORD *)(v23 + 24); v22 = v29 + 2 )
        {
          StorPoFxPerfState = RaidGetStorPoFxPerfState((_DWORD *)v23, v27++);
          v29[1] = *(_QWORD *)(StorPoFxPerfState + 16);
          *v29 = *(_QWORD *)(StorPoFxPerfState + 8);
        }
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < *a4 );
  }
  v30 = PoFxRegisterComponentPerfStates(a7, 0LL, 1LL, v14, v19, 0LL);
  ExFreePoolWithTag(v19, 0x4F506152u);
  result = v30;
  if ( (v30 & 0x80000000) == 0 )
  {
    if ( NvmeNamespace )
    {
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NvmeNamespace + 16) + 8LL) + 40LL) = *(_BYTE *)a4;
      return v30;
    }
    if ( NvmeAdapter )
    {
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NvmeAdapter + 20) + 8LL) + 80LL) = *(_BYTE *)a4;
      return v30;
    }
  }
  return result;
}
