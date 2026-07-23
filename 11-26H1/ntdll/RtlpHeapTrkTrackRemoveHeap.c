/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800FB938
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18005D350 (RtlpHeapTrkDereferenceStack.c)
 */

PVOID *__fastcall RtlpHeapTrkTrackRemoveHeap(PVOID a1)
{
  unsigned int v2; // edi
  PVOID **v3; // r8
  PVOID *v4; // rax
  _QWORD **v5; // rdx
  PVOID *v6; // r10
  bool v7; // zf
  PVOID *v8; // rcx
  _QWORD *v9; // r9
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  PVOID *result; // rax
  _QWORD *v13; // rcx
  PVOID *v14; // rax
  PVOID **v15; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67C8 + 8LL * (v2 & 0xF)));
    v3 = (PVOID **)(16LL * v2 + qword_1801C6280);
    v4 = *v3;
    while ( v4 != (PVOID *)v3 )
    {
      v5 = (_QWORD **)*v4;
      v6 = v4;
      v7 = v4[2] == a1;
      v8 = v4;
      v4 = (PVOID *)*v4;
      if ( v7 )
      {
        if ( v5[1] != v8
          || (v9 = v8[1], (PVOID *)*v9 != v8)
          || (*v9 = v5, v5[1] = v9, v10 = BaseAddress[0], *((PVOID **)BaseAddress[0] + 1) != BaseAddress) )
        {
LABEL_13:
          __fastfail(3u);
        }
        *v6 = BaseAddress[0];
        v8[1] = BaseAddress;
        v10[1] = v8;
        BaseAddress[0] = v8;
      }
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67C8 + 8LL * (v2++ & 0xF)));
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v11 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      return result;
    v13 = *(_QWORD **)BaseAddress[0];
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0] )
      goto LABEL_13;
    v14 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1);
    if ( *v14 != BaseAddress[0] )
      goto LABEL_13;
    *v14 = v13;
    v13[1] = v14;
    v15 = (PVOID **)v11[4];
    if ( v15 )
    {
      RtlpHeapTrkDereferenceStack(v15);
      v11[4] = 0LL;
    }
    RtlFreeHeap_0(HeapHandle, 0, v11);
  }
}
