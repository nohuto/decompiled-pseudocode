/*
 * XREFs of RtlpUninitializeAssemblyStorageMap @ 0x1800A2828
 * Callers:
 *     RtlpFreeActivationContext @ 0x1800A1EC8 (RtlpFreeActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A23B0 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlpUninitializeAssemblyStorageMap(__int64 a1)
{
  __int64 *v1; // rdi
  unsigned int i; // esi
  __int64 result; // rax
  __int64 v5; // rbp
  void *v6; // rcx

  if ( a1 )
  {
    v1 = (__int64 *)(a1 + 8);
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      result = *v1;
      v5 = *(_QWORD *)(*v1 + 8LL * i);
      if ( v5 )
      {
        v6 = *(void **)(v5 + 24);
        *(_DWORD *)(v5 + 8) = 0;
        *(_QWORD *)(v5 + 16) = 0LL;
        if ( v6 )
        {
          NtClose(v6);
          *(_QWORD *)(v5 + 24) = 0LL;
        }
        *(_QWORD *)(*v1 + 8LL * i) = 0LL;
        result = RtlFreeHeap_0();
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      result = RtlFreeHeap_0();
    *(_QWORD *)a1 = 0LL;
    *v1 = 0LL;
  }
  return result;
}
