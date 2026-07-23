/*
 * XREFs of HalpAcpiGetTableWork @ 0x140344BEC
 * Callers:
 *     HalMatchAcpiOemTableId @ 0x140344890 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiOemId @ 0x140344990 (HalMatchAcpiOemId.c)
 *     HalAcpiGetTableDispatch @ 0x140344B10 (HalAcpiGetTableDispatch.c)
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     HalpAcpiGetTableFromBios @ 0x140345224 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057BAAC (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x14057BCBC (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     HalpAcpiGetCachedTable @ 0x140344CEC (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140344D90 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetTableFromBios @ 0x140345224 (HalpAcpiGetTableFromBios.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     HalpUnmapVirtualAddress @ 0x140503890 (HalpUnmapVirtualAddress.c)
 *     HalpAcpiCopyBiosTable @ 0x140527B1C (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiCacheTable @ 0x14057BA40 (HalpAcpiCacheTable.c)
 */

__int64 __fastcall HalpAcpiGetTableWork(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  void *Buf2; // rax
  __int64 v9; // rbx
  __int64 TableFromBios; // rax
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned int v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  v14 = 0;
  Buf2 = (void *)HalpAcpiGetCachedTable(a2, a3, a4);
  v9 = (__int64)Buf2;
  if ( !Buf2 || (unsigned __int8)HalpAcpiIsCachedTableCompromised(a1, a2, (int)a3, (int)a4, Buf2) )
  {
    TableFromBios = HalpAcpiGetTableFromBios(a1, a2, a3, a4, (__int64)&v14, (__int64)&v15);
    v9 = TableFromBios;
    if ( TableFromBios )
    {
      v12 = HalpAcpiCopyBiosTable(a1, TableFromBios, v15);
      if ( a1 )
      {
        HalpUnmapVirtualAddress(v9, ((v9 & 0xFFF) + (unsigned __int64)v14 + 4095) >> 12, 0LL);
      }
      else
      {
        LOBYTE(v13) = 1;
        MiUnmapContiguousMemory(v9, v14, v13);
      }
      if ( v12 )
      {
        HalpAcpiCacheTable(a1, v12);
        return v12;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v9;
}
