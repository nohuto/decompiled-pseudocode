/*
 * XREFs of ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x140160770
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z @ 0x140160830 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x140160900 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x140160B80 (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 */

char __fastcall Ndis::BindStack::ReadV2InterfaceBindings(
        Ndis::BindStack *this,
        const struct _GUID *a2,
        enum NetSetupSubkeyType a3)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( Ndis::BindStack::OpenV2InterfaceKey(a2, (unsigned int)a2, a3, (struct KRegKey *)&Handle) < 0 )
  {
    if ( Handle )
      ZwClose(Handle);
    return 0;
  }
  else
  {
    v5 = KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___(&Handle, v4, this);
    if ( ((int)(v5 + 0x80000000) < 0 || v5 == -1073741772)
      && ((v7 = KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___(
                  &Handle,
                  v6,
                  this,
                  this),
           ((v7 + 0x80000000) & 0x80000000) != 0)
       || v7 == -1073741772) )
    {
      if ( Handle )
        ZwClose(Handle);
      return 1;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return 0;
    }
  }
}
