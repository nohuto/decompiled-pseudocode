/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18003CFD0
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18003CE98 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800C92B8 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z @ 0x18003D1D0 (--0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003D214 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18003E0D4 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x18008990C (McTemplateU0qdq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // ecx
  unsigned int v10; // edi
  CBaseObject *v11; // rax
  CBaseObject *v12; // rax
  int started; // ebx
  unsigned int v14; // eax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // eax
  CBaseObject *v19; // [rsp+60h] [rbp+8h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = (CBaseObject *)operator new(0x48uLL);
  v19 = v11;
  if ( !v11 )
  {
    v19 = 0LL;
    goto LABEL_5;
  }
  v12 = (CBaseObject *)CAnimationEngine::CTransitionVisualSet::CTransitionVisualSet(v11, v10, a2);
  v19 = v12;
  if ( !v12 )
  {
LABEL_5:
    started = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7Eu, 0LL);
    goto LABEL_6;
  }
  started = CAnimationEngine::CTransitionVisualSet::Initialize(v12, a3, a4);
  if ( started >= 0 )
  {
    v16 = *((_DWORD *)this + 16);
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      started = -2147024362;
      v18 = 183;
    }
    else
    {
      if ( v17 <= *((_DWORD *)this + 15) )
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v19;
        *((_DWORD *)this + 16) = v17;
        goto LABEL_16;
      }
      started = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v19);
      if ( started >= 0 )
      {
LABEL_16:
        *a5 = v10;
        started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
        if ( started >= 0 )
          goto LABEL_11;
        v14 = 133;
        goto LABEL_10;
      }
      v18 = 194;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v18, 0LL);
    v14 = 129;
    goto LABEL_10;
  }
  v14 = 128;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v14, 0LL);
LABEL_6:
  if ( v19 )
    CBaseObject::Release(v19);
LABEL_11:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)started;
}
