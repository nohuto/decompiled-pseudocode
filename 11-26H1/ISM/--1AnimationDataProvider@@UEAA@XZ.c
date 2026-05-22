/*
 * XREFs of ??1AnimationDataProvider@@UEAA@XZ @ 0x180102418
 * Callers:
 *     ??_GAnimationDataProvider@@UEAAPEAXI@Z @ 0x180102550 (--_GAnimationDataProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180095BAC (-InternalRelease@-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x1800B0BE8 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Micro.c)
 */

void __fastcall AnimationDataProvider::~AnimationDataProvider(
        AnimationDataProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &AnimationDataProvider::`vftable';
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      a4);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    *(_QWORD *)(*((_QWORD *)this + 2) + 248LL) = 0LL;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v5,
      *((_QWORD *)this + 6));
    std::_Deallocate<16>(
      *((void **)this + 5),
      (struct std::nothrow_t *)((*((_QWORD *)this + 7) - *((_QWORD *)this + 5)) & 0xFFFFFFFFFFFFFFC0uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease((Microsoft::Bamo::BaseBamoConnection **)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
