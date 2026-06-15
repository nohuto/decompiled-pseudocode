/*
 * XREFs of ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x180062C58
 * Callers:
 *     ??_ECBridgeStreamInstanceProxy@@UEAAPEAXI@Z @ 0x1800C5420 (--_ECBridgeStreamInstanceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180021450 (-DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x1800FD020 (-DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 */

void __fastcall CBridgeStreamInstanceProxy::~CBridgeStreamInstanceProxy(CBridgeStreamInstanceProxy *this)
{
  CBridgeStreamInstanceProxy *v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  v2 = (CBridgeStreamInstanceProxy *)((char *)this + 40);
  *(_QWORD *)v2 = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  if ( *((_QWORD *)this + 3) )
  {
    v3 = CBridgeStreamInstanceProxy::DisconnectFromRightSubmix(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10CB,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v3,
        v5);
    v4 = CStreamInstanceProxyImpl::DestroyStream(this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10CC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v4,
        v5);
  }
  *((_DWORD *)this + 13) = -1073741823;
  CStreamInstanceProxyImpl::~CStreamInstanceProxyImpl(this);
}
