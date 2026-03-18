/*
 * XREFs of ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1401BD9C8
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x140063508 (-VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCE.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1402D3ACC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

void __fastcall PresentQualcommPanelRefreshWorkaround(struct DXGCONTEXT *a1, ADAPTER_DISPLAY **a2, unsigned int a3)
{
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rdi
  VIDSCH_EXPORT **v7; // rbx
  void *v8; // rcx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v9; // r8
  _DXGKARG_SETVIDPNSOURCEADDRESS v10; // [rsp+30h] [rbp-868h] BYREF

  DXGDEVICE::FlushScheduler(*((_QWORD *)a1 + 2), 1LL, 4294967293LL, 0LL);
  DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(a2[395], a3);
  if ( DisplayedPrimaryAllocation )
  {
    memset(&v10, 0, sizeof(v10));
    v7 = (VIDSCH_EXPORT **)a2[396];
    v8 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
    v9 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)DisplayedPrimaryAllocation + 1);
    v10.VidPnSourceId = a3;
    v10.hAllocation = v8;
    VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(v7[95], v7[96], v9, &v10.PrimarySegment, &v10.PrimaryAddress, 0LL);
    VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(
      v7[92],
      *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 744LL),
      &v10);
  }
}
