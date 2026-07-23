/*
 * XREFs of RtlpUninitializeAssemblyStorageMap @ 0x1800A1958
 * Callers:
 *     RtlpFreeActivationContext @ 0x1800A0FF8 (RtlpFreeActivationContext.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800A14E0 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

int __fastcall RtlpUninitializeAssemblyStorageMap(__int64 a1)
{
  PVOID *v1; // rdi
  unsigned int i; // esi
  PVOID v4; // rax
  __int64 v5; // rbp
  void *v6; // rcx

  if ( a1 )
  {
    v1 = (PVOID *)(a1 + 8);
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v4 = *v1;
      v5 = *((_QWORD *)*v1 + i);
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
        *((_QWORD *)*v1 + i) = 0LL;
        LODWORD(v4) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v5);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      LODWORD(v4) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *v1);
    *(_QWORD *)a1 = 0LL;
    *v1 = 0LL;
  }
  return (int)v4;
}
