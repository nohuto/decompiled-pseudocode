/*
 * XREFs of ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400D3670
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x140203B90 (-GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D3718 (ApiSetEditionGetThreadPointerHookData.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FF790 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

unsigned __int64 __fastcall CTouchProcessor::GetThreadPointerData(
        CTouchProcessor *this,
        struct _LIST_ENTRY *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        int *a5,
        HWND *a6)
{
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10

  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData(a2, a3);
  if ( !ThreadPointerHookData )
  {
    ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, a2, a3);
    if ( !ThreadPointerHookData )
      return 0LL;
  }
  if ( (*((_DWORD *)ThreadPointerHookData + 12) & 8) != 0 )
    return 0LL;
  if ( a4 )
    *a4 = *((_DWORD *)ThreadPointerHookData + 5);
  if ( a5 )
    *a5 = -(*((_DWORD *)ThreadPointerHookData + 12) & 1);
  if ( a6 )
    *a6 = (HWND)*((_QWORD *)ThreadPointerHookData + 5);
  return *((_QWORD *)ThreadPointerHookData + 3);
}
