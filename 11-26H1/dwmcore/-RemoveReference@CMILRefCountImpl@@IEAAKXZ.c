/*
 * XREFs of ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800E2EC0
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E120C (-InternalRelease@-$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E1E44 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIAccelerator@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E1F64 (-InternalRelease@-$CMILRefCountBaseT@UIAccelerator@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@VICompositionSurfaceStatistics@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800E2340 (-Release@-$CMILCOMBaseT@VICompositionSurfaceStatistics@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800E28B0 (-Release@-$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2D40 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     ?Release@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800E2DC0 (-Release@-$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2E44 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801CBD64 (-InternalRelease@-$CMILRefCountBaseT@VISwapChainBuffer@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIDwmMessageConversationHost@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18021B4D0 (-InternalRelease@-$CMILRefCountBaseT@UIDwmMessageConversationHost@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UIDwmCursorController@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1802918F0 (-Release@-$CMILCOMBaseT@UIDwmCursorController@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802A2E64 (-InternalRelease@-$CMILRefCountBaseT@VILegacyRemotingSwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802AC870 (--1-$com_ptr_t@VCSwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CSwapChainRealization@@UEAAKXZ @ 0x1802AE190 (-Release@CSwapChainRealization@@UEAAKXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CMILRefCountImpl::RemoveReference(CMILRefCountImpl *this)
{
  int v1; // ebx
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( v1 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v3);
  return (unsigned int)v1;
}
