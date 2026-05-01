/*
 * XREFs of ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1801129B4
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180110B94 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator() @ 0x180112518 (_lambda_cc5ed20aaab4032583b283f4fa22eb03_--operator().c)
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18011262C (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 *     _lambda_7695e591477d8b1c45133260318902fa_::operator() @ 0x18011280C (_lambda_7695e591477d8b1c45133260318902fa_--operator().c)
 * Callees:
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18024E0B0 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@@@details@wil@@QEAA_NXZ @ 0x18041A360 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  __int64 result; // rax
  char v5; // di
  UINT uFlags; // r10d

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( *(_BYTE *)(a1 + 504) && *(_DWORD *)(a1 + 296) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
    {
      v5 = a2 & 0xFD;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) )
        v5 = a2;
      uFlags = (((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::GetImpl'::`2'::impl) ^ 1) << 16)
             + 17428;
      if ( (v5 & 1) == 0 )
        uFlags |= 2u;
      if ( (v5 & 2) == 0 )
        uFlags |= 1u;
      if ( SetWindowPos(
             (HWND)*(int *)(a1 + 296),
             0LL,
             (int)*(float *)(a1 + 488),
             (int)*(float *)(a1 + 492),
             (int)*(float *)(a1 + 496),
             (int)*(float *)(a1 + 500),
             uFlags) )
      {
        UwpWindowReadyState::PosChanged(
          (UwpWindowReadyState *)(a1 + 360),
          (int)*(float *)(a1 + 496),
          (int)*(float *)(a1 + 500));
      }
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  }
  return result;
}
