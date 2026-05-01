/*
 * XREFs of _lambda_d2fa7908b891c12cbb1669318d2d4613_::operator() @ 0x180223D74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&_::Run @ 0x1802B01B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-_--Run.c)
 * Callees:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801F00B0 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802BC76C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

void __fastcall lambda_d2fa7908b891c12cbb1669318d2d4613_::operator()(__int64 a1)
{
  __int64 v2; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 220LL) == 1 )
  {
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(*(_QWORD *)(a1 + 8) + 216LL, 2LL);
    v2 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v2 + 52) )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(v2, 0);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
