/*
 * XREFs of ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x1800FD540
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1800B0748 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z @ 0x1800FD648 (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
        unsigned __int16 **this,
        struct AuxiliaryInputDescriptor *a2)
{
  int v2; // ebx
  unsigned __int16 **v5; // r14
  int CurrentLoopbackEndpointIdInternal; // eax
  unsigned int v7; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( this[39] )
  {
    v5 = (unsigned __int16 **)((char *)a2 + 8);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)a2 + 1,
      0LL);
    CurrentLoopbackEndpointIdInternal = GetCurrentLoopbackEndpointIdInternal(this[39], v5, (bool *)a2 + 16);
    v7 = CurrentLoopbackEndpointIdInternal;
    if ( CurrentLoopbackEndpointIdInternal < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x853,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)CurrentLoopbackEndpointIdInternal);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E1,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)v7);
      return v7;
    }
    LOBYTE(v2) = *v5 != 0LL;
    *(_DWORD *)a2 = v2;
  }
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 320);
  return 0LL;
}
