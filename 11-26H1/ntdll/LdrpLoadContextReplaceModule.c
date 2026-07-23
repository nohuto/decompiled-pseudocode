/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x18007C6F0
 * Callers:
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpMapDllFullPath @ 0x18007BE20 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x18007D9B0 (LdrpMapDllRetry.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpQueueWork @ 0x180087FA0 (LdrpQueueWork.c)
 *     LdrpDependencyExist @ 0x180119230 (LdrpDependencyExist.c)
 */

void __fastcall LdrpLoadContextReplaceModule(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // eax
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  _QWORD *v11; // r9
  _QWORD *v12; // rcx
  _QWORD **v13; // rcx
  _QWORD *i; // rdx
  _QWORD **v15; // rax
  int v16; // eax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 != -1 )
    *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(v4 + 24) = 0;
  v7 = *(_QWORD ***)(v4 + 48);
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(v4 + 48) = 0LL;
    else
      *v7 = (_QWORD *)*v8;
    LdrpDereferenceModule((char *)a2);
    v9 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v9, v5) )
    {
      v13 = *(_QWORD ***)(v9 + 40);
      for ( i = *v13; i != v11; i = (_QWORD *)*i )
        v13 = (_QWORD **)i;
      *v13 = (_QWORD *)*v11;
      if ( *(_QWORD **)(v9 + 40) == v11 )
      {
        v15 = 0LL;
        if ( v13 != v11 )
          v15 = v13;
        *(_QWORD *)(v9 + 40) = v15;
      }
      v16 = *(_DWORD *)(v5 + 24);
      if ( v16 != -1 )
        *(_DWORD *)(v5 + 24) = v16 - 1;
      RtlFreeHeap_0(LdrpHeap, 0, v11);
      v11 = 0LL;
    }
    else
    {
      v11[1] = v5;
      v12 = *(_QWORD **)(v5 + 48);
      if ( v12 )
      {
        *v8 = *v12;
        *v12 = v8;
      }
      else
      {
        *v8 = v8;
      }
      *(_QWORD *)(v5 + 48) = v8;
    }
    if ( v10 && (*(int *)(v5 + 56) >= 2 || !v11) && (*(_DWORD *)(v10 + 108))-- == 1 )
    {
      *(_DWORD *)(v9 + 56) = 4;
      LdrpQueueWork(v10);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
