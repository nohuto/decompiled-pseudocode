/*
 * XREFs of ?IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ @ 0x18020CD48
 * Callers:
 *     ?IsStartSearchAvailable@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x1802D0A90 (-IsStartSearchAvailable@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ.c)
 * Callees:
 *     ??R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ @ 0x1800F49C4 (--R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 */

char __fastcall StartSearchSharedUtils::IsSearchBoxExtensionAvailable(StartSearchSharedUtils *this)
{
  _QWORD *v2; // rcx

  if ( __TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                                 + (unsigned int)tls_index)
                                                                                               + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA);
    if ( __TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA == -1 )
    {
      `StartSearchSharedUtils::IsSearchBoxExtensionAvailable'::`2'::s_isExtensionAvailable = _lambda_120b110b9b84ba13734d7b16b46ad979_::operator()(v2);
      Init_thread_footer(&__TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA);
    }
  }
  return `StartSearchSharedUtils::IsSearchBoxExtensionAvailable'::`2'::s_isExtensionAvailable;
}
