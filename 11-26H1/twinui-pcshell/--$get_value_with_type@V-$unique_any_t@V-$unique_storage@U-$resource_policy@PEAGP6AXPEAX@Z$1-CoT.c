/*
 * XREFs of ??$get_value_with_type@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@Uerr_returncode_policy@2@@?$reg_view_t@Uerr_returncode_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@3@K@Z @ 0x1805C5B80
 * Callers:
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D43E4 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1803370AC (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@4@K@Z @ 0x1805DCA08 (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$unique_any_t@V-$uniq.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_returncode_policy>::get_value_with_type<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,wil::err_returncode_policy>(
        HKEY *a1,
        __int64 a2,
        __int64 a3,
        PVOID *a4,
        wil::reg::reg_view_details *a5)
{
  int v7; // edx
  DWORD value_flags_from_value_type; // ebp
  HKEY v9; // rcx
  LSTATUS ValueW; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  int v13; // eax
  __int64 pcbData; // [rsp+60h] [rbp+18h] BYREF

  pcbData = a3;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)(unsigned int)a5);
  while ( 1 )
  {
    v9 = *a1;
    LODWORD(pcbData) = v7;
    ValueW = RegGetValueW(
               v9,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess",
               L"ActivePolicyCode",
               value_flags_from_value_type,
               0LL,
               *a4,
               (LPDWORD)&pcbData);
    v11 = ValueW;
    if ( ValueW > 0 )
      v11 = (unsigned __int16)ValueW | 0x80070000;
    if ( v11 == -2147024662 )
      goto LABEL_8;
    if ( (v11 & 0x80000000) != 0 )
      return v11;
    if ( *a4 )
      break;
    if ( !(_DWORD)pcbData )
      return v11;
LABEL_8:
    result = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(a4);
    if ( (int)result < 0 )
      return result;
    v7 = pcbData;
  }
  if ( (_DWORD)pcbData )
  {
    v13 = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(a4);
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  return v11;
}
