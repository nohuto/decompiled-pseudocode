/*
 * XREFs of ?GetTrustLevel@CAppMemoryReport@System@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800111B0
 * Callers:
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180014030 (-GetTrustLevel@CMemoryManager@System@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180014040 (-GetTrustLevel@CMemoryManager@System@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x180014050 (-GetTrustLevel@CMemoryManager@System@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x180014060 (-GetTrustLevel@CMemoryManager@System@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800178C0 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800178D0 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::GetTrustLevel(
        Windows::System::CAppMemoryReport *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
