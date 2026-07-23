/*
 * XREFs of IvtUpdateRemappingDestination @ 0x1405AA500
 * Callers:
 *     <none>
 * Callees:
 *     IvtInvalidateRemappingTableEntries @ 0x1404348A0 (IvtInvalidateRemappingTableEntries.c)
 *     IvtUpdateExtendedDestination @ 0x1405AA46C (IvtUpdateExtendedDestination.c)
 */

__int64 __fastcall IvtUpdateRemappingDestination(__int64 a1, char a2, int a3, int a4, int a5)
{
  unsigned int i; // ebp
  __int64 v9; // rdi
  __int64 updated; // rdx

  for ( i = 0; i < *(_DWORD *)(a1 + 304); ++i )
  {
    v9 = *(_QWORD *)(a1 + 288);
    if ( (*(_QWORD *)(v9 + 16LL * i) & 1) != 0 && (!a2 || (*(_QWORD *)(v9 + 16LL * i) & 0x100LL) != 0) )
    {
      updated = (unsigned int)IvtUpdateExtendedDestination(
                                HIDWORD(*(_QWORD *)(v9 + 16LL * i)),
                                (*(_QWORD *)(v9 + 16LL * i) & 4) != 0,
                                a3,
                                a4,
                                a5);
      if ( HIDWORD(*(_QWORD *)(v9 + 16LL * i)) != updated )
        *(_QWORD *)(v9 + 16LL * i) = (updated << 32) | (unsigned int)*(_QWORD *)(v9 + 16LL * i);
    }
  }
  return IvtInvalidateRemappingTableEntries(a1, 0LL);
}
