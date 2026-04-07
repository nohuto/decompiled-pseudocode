/*
 * XREFs of ?Contains@?$DynArray@PEAUHMONITOR__@@$0A@@@QEBA_NAEBQEAUHMONITOR__@@@Z @ 0x180065B0C
 * Callers:
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18002CA8C (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800718B8 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800C2CE0 (-_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z @ 0x1800C4174 (-_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DynArray<HMONITOR__ *,0>::Contains(__int64 a1, _QWORD *a2)
{
  __int64 i; // r8

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    if ( *a2 == *(_QWORD *)(*(_QWORD *)a1 + 8 * i) )
      return 1;
  }
  return 0;
}
