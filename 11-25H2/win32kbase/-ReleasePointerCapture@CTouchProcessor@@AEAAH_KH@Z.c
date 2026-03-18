/*
 * XREFs of ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1400C5F5C
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1400C4C30 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 * Callees:
 *     ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1401FB018 (-CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x140202A44 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1402091F4 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::ReleasePointerCapture(CTouchProcessor *this, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  struct CPointerCaptureInfo *v6; // rbx

  result = (__int64)CTouchProcessor::GetPointerCaptureData(this, a2);
  if ( result )
  {
    v6 = (struct CPointerCaptureInfo *)(result + (a3 != 0 ? 168LL : 32LL));
    CTouchProcessor::CheckAndDismissWindowResizeHighlight(this, v6);
    CTouchProcessor::ReleasePointerCaptureInt(this, v6);
    return 1LL;
  }
  return result;
}
