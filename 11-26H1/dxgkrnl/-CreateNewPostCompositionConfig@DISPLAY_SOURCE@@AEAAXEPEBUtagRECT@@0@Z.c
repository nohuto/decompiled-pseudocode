/*
 * XREFs of ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x14032EB8C
 * Callers:
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x14032CE3C (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x14032D46C (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x14032E9CC (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x14032FAF0 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14032FCA8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqtqqqqqqqq_EtwWriteTransfer @ 0x140070B40 (McTemplateK0pqtqqqqqqqq_EtwWriteTransfer.c)
 *     ?AllocateNewPostCompositionConfig@@YAPEAU_POST_COMPOSITION_CONFIG@@PEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x14032FF18 (-AllocateNewPostCompositionConfig@@YAPEAU_POST_COMPOSITION_CONFIG@@PEAU_POST_COMPOSITION_CONFIG_.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPostCompositionConfig(
        DISPLAY_SOURCE *this,
        unsigned __int8 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  int v5; // ebp
  struct _POST_COMPOSITION_CONFIG *NewPostCompositionConfig; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  LONG v17; // [rsp+48h] [rbp-30h]
  LONG left; // [rsp+50h] [rbp-28h]
  LONG top; // [rsp+58h] [rbp-20h]
  LONG right; // [rsp+60h] [rbp-18h]
  LONG bottom; // [rsp+68h] [rbp-10h]

  v5 = a2;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10190;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10190LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  NewPostCompositionConfig = AllocateNewPostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2848));
  *(_BYTE *)NewPostCompositionConfig = v5;
  *(struct tagRECT *)((char *)NewPostCompositionConfig + 4) = *a3;
  *(struct tagRECT *)((char *)NewPostCompositionConfig + 20) = *a4;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v17 = a3->bottom;
    LODWORD(v16) = a3->right;
    LODWORD(v15) = a3->top;
    LODWORD(v14) = a3->left;
    LODWORD(v13) = v5;
    LODWORD(v12) = *((_DWORD *)this + 4);
    McTemplateK0pqtqqqqqqqq_EtwWriteTransfer(
      v10,
      v9,
      v11,
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      left,
      top,
      right,
      bottom);
  }
}
