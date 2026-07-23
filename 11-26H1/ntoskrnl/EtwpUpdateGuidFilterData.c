/*
 * XREFs of EtwpUpdateGuidFilterData @ 0x140913B50
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140913860 (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1404CAE90 (KeGenericCallDpc.c)
 *     EtwpUpdateEventFilterAndFree @ 0x140915530 (EtwpUpdateEventFilterAndFree.c)
 *     EtwpFreeEventNameFilter @ 0x140AA32D8 (EtwpFreeEventNameFilter.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateGuidFilterData(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int32 v4; // ebp
  unsigned int v5; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  void *v10; // r13
  void *v11; // r12
  char v12; // cl
  __int64 v14; // rsi
  __int32 v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 Pool2; // rax
  PVOID P; // [rsp+20h] [rbp-48h]
  PVOID v20; // [rsp+28h] [rbp-40h]
  PVOID v21; // [rsp+70h] [rbp+8h]
  PVOID v23; // [rsp+88h] [rbp+20h]

  v4 = *(_DWORD *)a4;
  v5 = 0;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 640);
  v20 = 0LL;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  if ( v8 )
    goto LABEL_7;
  v12 = 1;
  if ( v4 )
    v12 = a3;
  if ( v12 )
    return 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 640) = Pool2;
LABEL_7:
    v14 = 104 * v7;
    v15 = _InterlockedExchange((volatile __int32 *)(v14 + v8), 0);
    if ( (v15 & 0x80000004) == 0x80000004 || (v4 & 0x80000004) == 0x80000004 )
      EtwpUpdateEventFilterAndFree(v14 + *(_QWORD *)(a1 + 640) + 8LL, a4 + 8);
    if ( (v15 & 0x80000008) == 0x80000008 || (v4 & 0x80000008) == 0x80000008 )
      EtwpUpdateEventFilterAndFree(v14 + *(_QWORD *)(a1 + 640) + 16LL, a4 + 16);
    if ( (v15 & 0x80000010) == 0x80000010 || (v4 & 0x80000010) == 0x80000010 )
      EtwpUpdateEventFilterAndFree(v14 + *(_QWORD *)(a1 + 640) + 24LL, a4 + 24);
    if ( (v15 & 0x80000020) == 0x80000020 || (v4 & 0x80000020) == 0x80000020 )
      EtwpUpdateEventFilterAndFree(v14 + *(_QWORD *)(a1 + 640) + 32LL, a4 + 32);
    if ( (v15 & 0x80008000) == 0x80008000 || (v4 & 0x80008000) == 0x80008000 )
      EtwpUpdateEventFilterAndFree(v14 + *(_QWORD *)(a1 + 640) + 40LL, a4 + 40);
    if ( (v15 & 0x80001000) == 0x80001000 || (v4 & 0x80001000) == 0x80001000 )
    {
      v20 = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 48), *(_QWORD *)(a4 + 48));
      *(_QWORD *)(a4 + 48) = 0LL;
    }
    if ( (v15 & 0x80000200) == 0x80000200 || (v4 & 0x80000200) == 0x80000200 )
    {
      P = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 72), *(_QWORD *)(a4 + 72));
      *(_QWORD *)(a4 + 72) = 0LL;
    }
    if ( (v15 & 0x80000400) == 0x80000400 || (v4 & 0x80000400) == 0x80000400 )
    {
      v23 = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 96), *(_QWORD *)(a4 + 96));
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    if ( (v15 & 0x80002000) == 0x80002000 || (v4 & 0x80002000) == 0x80002000 )
    {
      v10 = (void *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 56), *(_QWORD *)(a4 + 56));
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    if ( (v15 & 0x80004000) == 0x80004000 || (v4 & 0x80004000) == 0x80004000 )
    {
      v21 = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 64), *(_QWORD *)(a4 + 64));
      *(_QWORD *)(a4 + 64) = 0LL;
    }
    if ( (v15 & 0x80000100) == 0x80000100 || (v4 & 0x80000100) == 0x80000100 )
    {
      v11 = (void *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 80), *(_QWORD *)(a4 + 80));
      *(_QWORD *)(a4 + 80) = 0LL;
    }
    v16 = a4 + 88;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 640) + v14 + 88) || *(_QWORD *)v16 )
    {
      if ( *(_QWORD *)v16 )
        *(_QWORD *)(*(_QWORD *)v16 + 8LL) = 1LL << a2;
      v17 = a2;
      EtwpUpdateEventFilterAndFree(*(_QWORD *)(a1 + 640) + 88LL + 104LL * a2, v16);
    }
    else
    {
      v17 = a2;
    }
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 640) + 104 * v17), v4);
    if ( v20 || P || v23 || v10 || v21 || v11 )
    {
      KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v23 )
        EtwpFreeEventNameFilter(v23);
      if ( v10 )
        EtwpFreeEventNameFilter(v10);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(v11, 0);
      }
    }
    return v5;
  }
  return (unsigned int)-1073741801;
}
