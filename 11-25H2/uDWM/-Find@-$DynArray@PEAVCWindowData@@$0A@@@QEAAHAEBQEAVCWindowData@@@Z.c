/*
 * XREFs of ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18006B10C
 * Callers:
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180054544 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180056C28 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800AEB10 (-v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CWindowData *,0>::Find(__int64 a1, _QWORD *a2)
{
  __int64 i; // r8

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 24) )
      return 0LL;
    if ( *a2 == *(_QWORD *)(*(_QWORD *)a1 + 8 * i) )
      break;
  }
  return 1LL;
}
