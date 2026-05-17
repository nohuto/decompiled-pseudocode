/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800FC1E8
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800117C0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlpHeapTrkDereferenceStack @ 0x180011C20 (RtlpHeapTrkDereferenceStack.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

_QWORD *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  _QWORD **v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r10
  bool v8; // zf
  _QWORD *v9; // rcx
  _QWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *result; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 *v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v17[1] = v17;
  v3 = 0;
  v17[0] = v17;
  do
  {
    RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_1801C7778 + 8LL * (v3 & 0xF)), a2);
    v4 = (_QWORD **)(16LL * v3 + qword_1801C7280);
    v5 = *v4;
    while ( v5 != v4 )
    {
      v6 = *v5;
      v7 = v5;
      v8 = v5[2] == a1;
      v9 = v5;
      v5 = (_QWORD *)*v5;
      if ( v8 )
      {
        if ( *(_QWORD **)(v6 + 8) != v9
          || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9)
          || (*v10 = v6, *(_QWORD *)(v6 + 8) = v10, v11 = v17[0], *(_QWORD **)(v17[0] + 8LL) != v17) )
        {
LABEL_13:
          __fastfail(3u);
        }
        *v7 = v17[0];
        v9[1] = v17;
        *(_QWORD *)(v11 + 8) = v9;
        v17[0] = v9;
      }
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801C7778 + 8LL * (v3++ & 0xF)));
  }
  while ( v3 < 0x1EEF );
  while ( 1 )
  {
    v12 = v17[0];
    result = v17;
    if ( (_QWORD *)v17[0] == v17 )
      return result;
    v14 = *(_QWORD *)v17[0];
    if ( *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) != v17[0] )
      goto LABEL_13;
    v15 = *(_QWORD **)(v17[0] + 8LL);
    if ( *v15 != v17[0] )
      goto LABEL_13;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *(__int64 **)(v12 + 32);
    if ( v16 )
    {
      RtlpHeapTrkDereferenceStack(v16);
      *(_QWORD *)(v12 + 32) = 0LL;
    }
    RtlFreeHeap_0();
  }
}
