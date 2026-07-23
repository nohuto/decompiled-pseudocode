/*
 * XREFs of VrpDecrementDiffHiveEntryHardRefCount @ 0x14093C0AC
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 * Callees:
 *     <none>
 */

char __fastcall VrpDecrementDiffHiveEntryHardRefCount(__int64 a1)
{
  char v1; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v1 = 0;
  if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
  {
    v1 = 1;
    _m_prefetchw((const void *)(a1 + 16));
    v3 = *(_QWORD *)(a1 + 16);
    do
    {
      if ( v3 - 1 <= 0 )
      {
        if ( v3 != 1 )
          __fastfail(0xEu);
        __fastfail(0xEu);
      }
      v4 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v3 - 1, v3);
    }
    while ( v4 != v3 );
  }
  return v1;
}
