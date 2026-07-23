/*
 * XREFs of HalpAuditAcpiTables @ 0x140CB9EA0
 * Callers:
 *     HalpAcpiInitSystem @ 0x140BF1270 (HalpAcpiInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     HalpAuditEnumerateRsdts @ 0x140CBA00C (HalpAuditEnumerateRsdts.c)
 *     HalpAuditQuerySlicAddresses @ 0x140CBA1EC (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditSlicTables @ 0x140CBA464 (HalpAuditSlicTables.c)
 */

void __fastcall HalpAuditAcpiTables(__int64 a1)
{
  int v1; // eax
  _DWORD *v2; // rbx
  int SlicAddresses; // edi
  unsigned int v4; // esi
  unsigned int i; // edi
  void *v6; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 264) & 1) == 0 )
  {
    P = 0LL;
    v1 = HalpAuditEnumerateRsdts(a1, &P);
    v2 = P;
    SlicAddresses = v1;
    if ( v1 >= 0 )
    {
      SlicAddresses = 0;
      v4 = 0;
      if ( *((_DWORD *)P + 1) )
      {
        do
        {
          SlicAddresses = HalpAuditQuerySlicAddresses(&v2[8 * v4 + 2]);
          if ( SlicAddresses < 0 )
            break;
          ++v4;
        }
        while ( v4 < v2[1] );
      }
      if ( SlicAddresses >= 0 )
        HalpAuditSlicTables(v2);
    }
    HalpAuditStatus = SlicAddresses;
    if ( v2 )
    {
      for ( i = 0; i < v2[1]; ++i )
      {
        v6 = *(void **)&v2[8 * i + 8];
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
      }
      ExFreePoolWithTag(v2, 0);
    }
  }
}
