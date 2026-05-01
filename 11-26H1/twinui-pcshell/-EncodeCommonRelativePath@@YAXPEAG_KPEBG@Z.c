/*
 * XREFs of ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1803FBA14
 * Callers:
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1803FD368 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x1803FBADC (-EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z.c)
 */

void __fastcall EncodeCommonRelativePath(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, unsigned int a4)
{
  unsigned __int64 v4; // rdx

  v4 = (unsigned int)tls_index;
  if ( __TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                              + (unsigned int)tls_index)
                                                                            + 16LL) )
  {
    Init_thread_header(&__TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA);
    if ( __TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA == -1 )
    {
      `EncodeCommonRelativePath'::`2'::c_rgRelativeFoldersForEncode = FOLDERID_ProgramFilesX86;
      xmmword_1808DC5E0 = (__int128)FOLDERID_ProgramFilesX64;
      xmmword_1808DC5F0 = (__int128)FOLDERID_SystemX86;
      xmmword_1808DC600 = (__int128)FOLDERID_System;
      xmmword_1808DC610 = (__int128)FOLDERID_Windows;
      Init_thread_footer(&__TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA);
    }
  }
  EncodeRelativePath(a1, v4, &`EncodeCommonRelativePath'::`2'::c_rgRelativeFoldersForEncode, a4, a3);
}
