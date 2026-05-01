/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x180009870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r14
  void **v4; // rbx
  void **v5; // rdi
  int v6; // eax
  void **v8; // rax

  RtlAcquireSRWLockExclusive(a2 + 32);
  v3 = (_DWORD *)(a2 + 64);
  v4 = (void **)(a2 + 16);
  while ( 1 )
  {
    v5 = (void **)*v4;
    if ( *v4 == v4 )
    {
      v6 = *(_DWORD *)(a2 + 64);
      v3 = (_DWORD *)(a2 + 64);
      if ( (v6 & 2) == 0 )
        break;
    }
    if ( (*v3 & 2) != 0 )
    {
      *v3 &= ~2u;
      RtlReleaseSRWLockExclusive(a2 + 32);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 40))(*(_QWORD *)(a2 + 8), 0LL, 0LL);
    }
    else
    {
      if ( v5 == v4 || v5[1] != v4 || (v8 = (void **)*v5, *((void ***)*v5 + 1) != v5) )
        __fastfail(3u);
      *v4 = v8;
      v8[1] = v4;
      *(_OWORD *)v5 = 0LL;
      RtlReleaseSRWLockExclusive(a2 + 32);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 40))(
        *(_QWORD *)(a2 + 8),
        (__int64)v5 + 20,
        *((unsigned int *)v5 + 4));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    RtlAcquireSRWLockExclusive(a2 + 32);
  }
  *(_DWORD *)(a2 + 64) = v6 & 0xFFFFFFFE;
  return RtlReleaseSRWLockExclusive(a2 + 32);
}
