/*
 * XREFs of ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x14014AB7C
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400CED8C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x14014A62C (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x14015FD70 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x14015FFB0 (netsetupIsImpliedProperty.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadGuid(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        struct _GUID *a3)
{
  unsigned int v4; // ebx
  int v6; // r10d
  struct KRegKey v8; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING v9; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  v8.m_ptr = 0LL;
  v6 = NetSetupPropertyBag::OpenPropertyKey(this, a2, &v8);
  if ( v6 != -1073741772 )
  {
    if ( !v6 )
    {
      v9 = 0LL;
      v4 = KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___(&v8.m_ptr, &v9, a3);
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  if ( !(unsigned __int8)netsetupIsImpliedProperty(a2) )
  {
LABEL_5:
    v4 = v6;
    goto LABEL_7;
  }
  *a3 = 0LL;
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8.m_ptr);
  return v4;
}
