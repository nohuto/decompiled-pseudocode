/*
 * XREFs of ??$make_shared@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$V@std@@YA?AV?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@0@XZ @ 0x18005E39C
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18001D748 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008D064 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010FF14 (-OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx

  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 0LL;
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *v2 = &std::_Ref_count_obj2<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 2;
  return a1;
}
