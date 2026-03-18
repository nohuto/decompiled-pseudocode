/*
 * XREFs of ?sizeSave@RGNCOREOBJ@@QEBAKXZ @ 0x140026E1C
 * Callers:
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401D2700 (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140026F18 (-RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_numRect@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140026FA4 (-RegionCore_numRect@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 */

int __fastcall RGNCOREOBJ::sizeSave(Win32kRS **this)
{
  int v2; // ebx
  int i; // edx
  _DWORD *v4; // r8

  if ( qword_1402A10B0 )
    return Win32kRS::RegionCore_sizeSave(*this, qword_1402A10B0);
  v2 = *((_DWORD *)*this + 6);
  v4 = *(_DWORD **)*this;
  for ( i = 0; v2; --v2 )
  {
    i += *v4 >> 1;
    v4 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
  }
  return 16 * i;
}
