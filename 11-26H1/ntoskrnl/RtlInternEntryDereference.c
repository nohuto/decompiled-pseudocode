/*
 * XREFs of RtlInternEntryDereference @ 0x1409CD1F8
 * Callers:
 *     PopEtEnergyContextCleanup @ 0x1409CBEB4 (PopEtEnergyContextCleanup.c)
 *     PopEtEnergyContextSetState @ 0x1409CC484 (PopEtEnergyContextSetState.c)
 *     PopEtAggregateKeyCleanup @ 0x1409CC898 (PopEtAggregateKeyCleanup.c)
 *     PopEtStringSet @ 0x1409CC948 (PopEtStringSet.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x1409CD0E0 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtAppIdDereference @ 0x1409CD7D8 (PopEtAppIdDereference.c)
 *     PopEtProcessSnapshotCreate @ 0x1409CD808 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlInternEntryDereference(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *i; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h]

  result = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 16));
  if ( result <= 0 )
  {
    if ( result )
      __fastfail(0xEu);
    guard_dispatch_icall_no_overrides(a1, 0LL);
    v6 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * (((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v6)
                                                            - 877075889
                                                            + 442596621 * (unsigned __int8)v6
                                                            + 37
                                                            * (BYTE6(v6)
                                                             + 37
                                                             * (BYTE5(v6)
                                                              + 37
                                                              * (BYTE4(v6)
                                                               + 37
                                                               * (BYTE3(v6)
                                                                + 37 * (BYTE2(v6) + 37 * (unsigned int)BYTE1(v6)))))))));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( *i == a2 )
      {
        *i = *(_QWORD *)a2;
        --*(_DWORD *)a1;
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    guard_dispatch_icall_no_overrides(a1, 0LL);
    return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
