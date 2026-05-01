/*
 * XREFs of ?IsGamingOverlayExperienceManagerEnabled@@YA_NXZ @ 0x1800B6BC0
 * Callers:
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800B6A98 (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ??R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ @ 0x1803D9C78 (--R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char IsGamingOverlayExperienceManagerEnabled(void)
{
  if ( __TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                    + (unsigned int)tls_index)
                                                                                  + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA);
    if ( __TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA == -1 )
    {
      `IsGamingOverlayExperienceManagerEnabled'::`2'::isComponentEnabled = _lambda_472df6ff52501759c6fbda191ba6be37_::operator()();
      Init_thread_footer(&__TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA);
    }
  }
  return `IsGamingOverlayExperienceManagerEnabled'::`2'::isComponentEnabled;
}
