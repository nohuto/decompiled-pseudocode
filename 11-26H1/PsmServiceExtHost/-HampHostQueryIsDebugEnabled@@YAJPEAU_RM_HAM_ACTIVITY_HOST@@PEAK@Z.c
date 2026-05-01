/*
 * XREFs of ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180027964
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800272D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E20C (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180055C28 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180027D48 (-HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028D50 (-HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostQueryIsDebugEnabled(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  HANDLE *v4; // rsi
  unsigned __int64 v5; // r14
  _DWORD *v6; // r12
  __int64 v7; // r15
  unsigned int *Heap; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned __int64 v14; // r13
  __int64 j; // rdi
  HANDLE *v16; // rdi
  __int64 v17; // r14
  unsigned int *v19; // rax
  unsigned int v20; // ecx
  __int64 i; // r13
  NTSTATUS v22; // eax
  unsigned int v23; // [rsp+50h] [rbp-39h] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-31h] BYREF
  void *v25; // [rsp+60h] [rbp-29h]
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v30; // [rsp+108h] [rbp+7Fh]

  if ( !HampHostSnapshotPackageDebugState(a1) )
  {
    v23 = 0;
    v29 = 1;
    v4 = 0LL;
    ProcessHandle = 0LL;
    v5 = ((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL);
    v6 = 0LL;
    v7 = 0LL;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( !Heap )
      return (unsigned int)-1073741801;
    v9 = v5 + 80;
    v10 = v5 + 544;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD, int, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 72LL))(
              v10,
              *(unsigned int *)(v5 + 612),
              v9,
              *(unsigned int *)(v5 + 616),
              *(_QWORD *)(v5 + 32),
              *(_BYTE *)(v5 + 648) != 0 ? 4 : 0,
              Heap,
              &v29);
      v12 = v11;
      if ( v11 >= 0 )
        break;
      if ( v11 != -2147483643 )
      {
        if ( Heap )
          HampFreeHeap(Heap);
        return (unsigned int)v12;
      }
      HampFreeHeap(Heap);
      v19 = (unsigned int *)HampAllocateHeap(8LL * v29);
      v9 = v5 + 80;
      Heap = v19;
      v10 = v5 + 544;
      if ( !v19 )
        return (unsigned int)-1073741801;
    }
    v13 = v29;
    v30 = v29;
    if ( v29 )
    {
      v14 = v29;
      v25 = 0LL;
      if ( !is_mul_ok(v29, 8uLL) )
      {
LABEL_7:
        v12 = -1073741675;
        goto LABEL_8;
      }
      v4 = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v29);
      v20 = v4 == 0LL ? 0xC0000017 : 0;
      if ( !v4 )
        goto LABEL_44;
      v25 = 0LL;
      if ( !is_mul_ok(v14, 4uLL) )
        goto LABEL_7;
      v6 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * v14);
      v20 = v6 == 0LL ? 0xC0000017 : 0;
      if ( !v6 )
      {
LABEL_44:
        v12 = v20;
        goto LABEL_8;
      }
      v13 = v14;
    }
    for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
    {
      v25 = (void *)Heap[2 * i];
      ClientId.UniqueProcess = v25;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ClientId.UniqueThread = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 40);
      v22 = NtOpenProcess(&ProcessHandle, 0x1400u, &ObjectAttributes, &ClientId);
      v12 = v22;
      if ( v22 < 0 )
      {
        if ( v22 != -1073741813 )
          goto LABEL_8;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 80LL))(
                  v5 + 544,
                  *(unsigned int *)(v5 + 612),
                  v5 + 80,
                  *(unsigned int *)(v5 + 616),
                  *(_QWORD *)(v5 + 32),
                  *(_BYTE *)(v5 + 648) != 0 ? 4 : 0,
                  ProcessHandle) )
      {
        v4[v7] = ProcessHandle;
        v6[v7] = (_DWORD)v25;
        v7 = (unsigned int)(v7 + 1);
      }
      else
      {
        NtClose(ProcessHandle);
      }
      v13 = v30;
    }
    v12 = 0;
LABEL_8:
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v12 >= 0 )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v7; j = (unsigned int)(j + 1) )
      {
        v12 = HampHostQueryProcessDebuggedCallback((struct _RM_ACTIVITY_HOST *)v5, v4[j], v6[j], &v23);
        if ( v12 < 0 )
          goto LABEL_16;
      }
      v12 = 0;
    }
LABEL_16:
    if ( (_DWORD)v7 )
    {
      v16 = v4;
      v17 = (unsigned int)v7;
      do
      {
        NtClose(*v16++);
        --v17;
      }
      while ( v17 );
    }
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( v12 >= 0 )
    {
      *a2 = v23;
      return 0;
    }
    return (unsigned int)v12;
  }
  *a2 = 1;
  return 0;
}
