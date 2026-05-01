/*
 * XREFs of ?EndUpdates@CSwitchItemGrid@@UEAAXXZ @ 0x1804C6170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C39BC (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSwitchItemGrid::EndUpdates(CSwitchItemGrid *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 180, 0xFFFFFFFF) == 1 )
  {
    v2 = (_QWORD *)((char *)this - 208);
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 26) + 304LL))((char *)this - 208)
      && !*((_QWORD *)this - 5) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*v2 + 272LL))(v2, &v3, 0LL, 7LL, 0);
      if ( v3 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 288LL))(v2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v3);
    }
    CMultitaskingViewElementBase::_LayoutChildren(v2, 0, 0LL);
  }
}
