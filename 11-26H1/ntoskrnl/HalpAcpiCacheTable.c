/*
 * XREFs of HalpAcpiCacheTable @ 0x14057BA40
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057BAAC (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiCacheOverrideTables @ 0x140CB3724 (HalpAcpiCacheOverrideTables.c)
 *     HalpAcpiTableCacheInit @ 0x140D1082C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpAcpiCacheTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 *i; // rax
  _QWORD *v5; // rax

  v2 = *(_QWORD *)(a2 - 8);
  v3 = (_QWORD *)(a2 - 24);
  if ( v2 )
  {
    for ( i = (__int64 *)HalpAcpiTableCacheList; i != &HalpAcpiTableCacheList; i = (__int64 *)*i )
    {
      if ( v2 == i[2] )
      {
        if ( a1 )
          HalpMmAllocCtxFree(a1, (__int64)v3);
        return;
      }
    }
  }
  v5 = (_QWORD *)qword_140E0F708;
  if ( *(__int64 **)qword_140E0F708 != &HalpAcpiTableCacheList )
    __fastfail(3u);
  *v3 = &HalpAcpiTableCacheList;
  v3[1] = v5;
  *v5 = v3;
  qword_140E0F708 = (__int64)v3;
}
