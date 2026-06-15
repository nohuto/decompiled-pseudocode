/*
 * XREFs of ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013BAF0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCharacteristics___::_Do_call @ 0x180104160 (std--_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCh_ea_180104160.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180083398 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___ @ 0x1800C3D60 (wil--scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___.c)
 *     _lambda_b04dcad4e52f0d96382020bfb06775ad_::_lambda_b04dcad4e52f0d96382020bfb06775ad_ @ 0x1800C3DE8 (_lambda_b04dcad4e52f0d96382020bfb06775ad_--_lambda_b04dcad4e52f0d96382020bfb06775ad_.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___ @ 0x180134AC8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--share_ea_180134AC8.c)
 *     wil::details::lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___::_lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___ @ 0x1801352F8 (wil--details--lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___--_lambda_call__lambda_89b5.c)
 *     ?ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z @ 0x180137C94 (-ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z.c)
 *     ?ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertykey@@@Z @ 0x180137DF8 (-ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertyk.c)
 *     ?DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ @ 0x180138518 (-DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x180138F70 (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?erase@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@0@Z @ 0x18013FF70 (-erase@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::RemoveEffectPack(CEndpointCharacteristics *this, struct _GUID *Buf1)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  char *v5; // rdi
  __int128 *v6; // rax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-88h] BYREF
  __int64 v13; // [rsp+38h] [rbp-80h] BYREF
  std::_Ref_count_base *v14; // [rsp+40h] [rbp-78h]
  struct _GUID Buf2; // [rsp+50h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v17[40]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v12 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 320);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 8);
  v16 = v4;
  v5 = (char *)this + 384;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v13, (_QWORD *)this + 48);
  v6 = (__int128 *)lambda_b04dcad4e52f0d96382020bfb06775ad_::_lambda_b04dcad4e52f0d96382020bfb06775ad_(
                     v18,
                     (__int64)this,
                     (__int64)Buf1,
                     (__int64)&v13,
                     (__int64)&v12);
  wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___((__int64)v17, v6);
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___(
    (__int64 **)&Buf2,
    *((__int64 **)this + 45),
    *((__int64 **)this + 46),
    Buf1);
  std::vector<std::shared_ptr<EffectPack>>::erase(
    (char *)this + 360,
    &Buf2,
    *(_QWORD *)&Buf2.Data1,
    *((_QWORD *)this + 46));
  try
  {
    if ( *(_QWORD *)v5 )
    {
      Buf2 = *(struct _GUID *)*(_QWORD *)(*(_QWORD *)v5 + 1568LL);
      if ( !memcmp_0(Buf1, &Buf2, 0x10uLL) )
      {
        Buf2 = *(struct _GUID *)*(_QWORD *)(v13 + 1568);
        CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
          this,
          &Buf2,
          &PKEY_AudioEndpoint_UserSelectedEffectPack);
        Buf2 = *(struct _GUID *)*(_QWORD *)(v13 + 1568);
        CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
          this,
          &Buf2,
          &PKEY_AudioEndpoint_LastSetEffectPack);
        v7 = CEndpointCharacteristics::DetermineCurrentEffectPack(this);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1504LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v7);
        v8 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists(this);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5E4,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v8);
          wil::details::lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___::_lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___((__int64)v17);
          if ( v14 )
            std::_Ref_count_base::_Decref(v14);
LABEL_9:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
          return v9;
        }
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v13 + 1568) + 1320LL),
          *(_DWORD *)(*(_QWORD *)(v13 + 1568) + 1312LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v13 + 1568) + 1352LL),
          *(_DWORD *)(*(_QWORD *)(v13 + 1568) + 1344LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v13 + 1568) + 1384LL),
          *(_DWORD *)(*(_QWORD *)(v13 + 1568) + 1376LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v13 + 1568) + 1416LL),
          *(_DWORD *)(*(_QWORD *)(v13 + 1568) + 1408LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v13 + 1568) + 1448LL),
          *(_DWORD *)(*(_QWORD *)(v13 + 1568) + 1440LL));
        CEndpointCharacteristics::DisconnectStreamsOnEndpoint(this);
      }
    }
    v9 = v12;
    wil::details::lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___::_lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___((__int64)v17);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5FB,
                           (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v10);
  }
  return result;
}
