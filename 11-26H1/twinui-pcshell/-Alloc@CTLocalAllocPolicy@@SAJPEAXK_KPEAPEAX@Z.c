/*
 * XREFs of ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801E6A78
 * Callers:
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@PEAV234@@Z @ 0x18015DEAC (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPP.c)
 *     ?_EnsureSet@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJXZ @ 0x18015E158 (-_EnsureSet@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Mi.c)
 *     ?Realloc@CTLocalAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1801E6A20 (-Realloc@CTLocalAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802AD53C (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 *     ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1802E76C4 (-_RehashTable@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x180533208 (-_AddUpdateItem@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicat.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180533300 (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTLocalAllocPolicy::Alloc(void *a1, __int64 a2, SIZE_T a3, void **a4)
{
  HLOCAL v5; // rax

  v5 = LocalAlloc(0x40u, a3);
  *a4 = v5;
  return v5 == 0LL ? 0x8007000E : 0;
}
