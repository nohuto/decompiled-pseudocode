/*
 * XREFs of DecPaintCount @ 0x14005332C
 * Callers:
 *     InternalInvalidate3 @ 0x140032DB8 (InternalInvalidate3.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoPaint @ 0x14005138C (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x140053964 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401C8208 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 640))-- == 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 488) + 8LL), 0xFFFFFFDF);
    result = *(_QWORD *)(v1 + 488);
    _InterlockedAnd((volatile signed __int32 *)(result + 4), 0xFFFFFFDF);
  }
  return result;
}
