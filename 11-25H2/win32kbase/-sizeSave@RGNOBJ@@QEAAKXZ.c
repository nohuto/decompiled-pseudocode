/*
 * XREFs of ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x140026EA0
 * Callers:
 *     EtwTraceLifetimeAccum @ 0x140026660 (EtwTraceLifetimeAccum.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x140026B64 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     EtwTraceDWMGetDirtyRegion @ 0x140028540 (EtwTraceDWMGetDirtyRegion.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140026F18 (-RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 */

__int64 __fastcall RGNOBJ::sizeSave(RGNOBJ *this, const struct REGION_CORE *a2)
{
  Win32kRS *v2; // rax
  int v3; // ebx
  int i; // edx
  _DWORD *v7; // r8

  v2 = (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  if ( qword_1402A10B0 )
  {
    return Win32kRS::RegionCore_sizeSave(v2, a2);
  }
  else
  {
    v3 = *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 0x18);
    v7 = *(_DWORD **)v2;
    for ( i = 0; v3; --v3 )
    {
      i += *v7 >> 1;
      v7 = (_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
    }
    return (unsigned int)(16 * i);
  }
}
