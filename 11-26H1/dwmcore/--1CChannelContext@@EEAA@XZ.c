/*
 * XREFs of ??1CChannelContext@@EEAA@XZ @ 0x18020E078
 * Callers:
 *     ??_ECChannelContext@@EEAAPEAXI@Z @ 0x1801C5610 (--_ECChannelContext@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009ADE0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1801AA340 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CChannelContext::~CChannelContext(CChannelContext *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  void *v4; // rdx
  void *v5; // rcx

  *(_QWORD *)this = &CChannelContext::`vftable';
  v2 = *((_QWORD *)g_pComposition + 798);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 96LL))(
      *((_QWORD *)g_pComposition + 798),
      *((unsigned int *)this + 29));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 96LL))(v2, *((unsigned int *)this + 30));
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  ReleaseInterface<CProcessAttribution>((volatile signed __int32 **)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  operator delete(*((void **)this + 9));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    std::_Deallocate<16>(v5, (*((_QWORD *)this + 12) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 5,
    v4);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)this + 4);
}
