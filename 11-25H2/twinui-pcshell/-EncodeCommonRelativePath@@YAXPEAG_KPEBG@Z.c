/*
 * XREFs of ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1803F17A0
 * Callers:
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1803F3168 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x1803F1868 (-EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z.c)
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
      xmmword_18089BF20 = (__int128)FOLDERID_ProgramFilesX64;
      xmmword_18089BF30 = (__int128)FOLDERID_SystemX86;
      xmmword_18089BF40 = (__int128)FOLDERID_System;
      xmmword_18089BF50 = (__int128)FOLDERID_Windows;
      Init_thread_footer(&__TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA);
    }
  }
  EncodeRelativePath(a1, v4, &`EncodeCommonRelativePath'::`2'::c_rgRelativeFoldersForEncode, a4, a3);
}
