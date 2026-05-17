/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x18007F2F0
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x180017520 (RtlFlushSecureMemoryCache.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, __int64 a2)
{
  char v4; // r14
  _DWORD *v5; // rdi
  _DWORD *v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  bool v9; // zf
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v14; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v15; // [rsp+28h] [rbp-8h]

  v15 = &v14;
  v14 = &v14;
  v4 = 0;
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock, a2);
  v5 = RtlpSecMemListHead;
  if ( RtlpSecMemListHead != (_UNKNOWN *)&RtlpSecMemListHead )
  {
    do
    {
      v6 = v5 + 4;
      ++v5[4];
      v7 = v5;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( (*((unsigned __int8 (__fastcall **)(__int64, __int64))v5 + 3))(a1, a2) )
        v4 = 1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock, v8);
      v9 = (*v6)-- == 1;
      v5 = *(_DWORD **)v5;
      if ( v9 )
      {
        if ( *((_QWORD **)v5 + 1) != v7
          || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7)
          || (*v10 = v5, *((_QWORD *)v5 + 1) = v10, v11 = v15, *v15 != &v14) )
        {
LABEL_15:
          __fastfail(3u);
        }
        v7[1] = v15;
        *v7 = &v14;
        *v11 = v7;
        v15 = (_QWORD **)v7;
      }
    }
    while ( v5 != (_DWORD *)&RtlpSecMemListHead );
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( v14 != &v14 )
  {
    if ( (_QWORD **)v14[1] != &v14 )
      goto LABEL_15;
    v12 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_15;
    v14 = (_QWORD *)*v14;
    *(_QWORD *)(v12 + 8) = &v14;
    RtlFreeHeap_0();
  }
  return v4;
}
