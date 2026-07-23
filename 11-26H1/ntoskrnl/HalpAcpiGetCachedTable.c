/*
 * XREFs of HalpAcpiGetCachedTable @ 0x140344CEC
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140D1082C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     strncmp @ 0x140741F60 (strncmp.c)
 */

__int64 __fastcall HalpAcpiGetCachedTable(int a1, const char *a2, const char *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rbx

  v3 = HalpAcpiTableCacheList;
  v7 = 0LL;
  while ( (__int64 *)v3 != &HalpAcpiTableCacheList )
  {
    if ( *(_DWORD *)(v3 + 24) == a1
      && (!a2 || !strncmp(a2, (const char *)(v3 + 34), 6uLL))
      && (!a3 || !strncmp(a3, (const char *)(v3 + 40), 8uLL)) )
    {
      return v3 + 24;
    }
    v3 = *(_QWORD *)v3;
  }
  return v7;
}
