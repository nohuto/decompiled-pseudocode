/*
 * XREFs of ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1401428C0
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x14004D140 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 * Callees:
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x14004E250 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x140142920 (-CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x140142C4C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::ReleasePointerCapture(PERESOURCE *this, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  struct CPointerCaptureInfo *v6; // rbx

  result = (__int64)CTouchProcessor::GetPointerCaptureData(this, a2);
  if ( result )
  {
    v6 = (struct CPointerCaptureInfo *)(result + (a3 != 0 ? 168LL : 32LL));
    CTouchProcessor::CheckAndDismissWindowResizeHighlight((CTouchProcessor *)this, v6);
    CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, v6);
    return 1LL;
  }
  return result;
}
