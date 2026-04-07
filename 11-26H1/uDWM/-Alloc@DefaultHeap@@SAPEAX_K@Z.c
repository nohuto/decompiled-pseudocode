/*
 * XREFs of ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130
 * Callers:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x18001B210 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180030CA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180031788 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800353F4 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180045EA8 (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18005897C (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180085E74 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?AllocTableData@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x180086120 (-AllocTableData@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@CAPEA.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800A8A10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800A8D30 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800ABA40 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E5528 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall DefaultHeap::Alloc(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
