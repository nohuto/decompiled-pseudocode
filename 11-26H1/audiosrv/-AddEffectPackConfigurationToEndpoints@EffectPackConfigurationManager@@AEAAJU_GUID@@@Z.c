/*
 * XREFs of ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1801032FC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_066034ca56f98fe9ea8b5be84f75c5f7__void_::_Do_call @ 0x1801040C0 (std--_Func_impl_no_alloc__lambda_066034ca56f98fe9ea8b5be84f75c5f7__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_44e1bd1227ba6592c785fc501179691e__void_::_Do_call @ 0x180104110 (std--_Func_impl_no_alloc__lambda_44e1bd1227ba6592c785fc501179691e__void_--_Do_call.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     _lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_ @ 0x1800ADDB8 (_lambda_f7a716bfe224096f553bb41568304cf0_--_lambda_f7a716bfe224096f553bb41568304cf0_.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     std::function_long___cdecl(CEndpointCharacteristics__)_::function_long___cdecl(CEndpointCharacteristics__)___lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__0_ @ 0x180102FF0 (std--function_long___cdecl(CEndpointCharacteristics__)_--function_long___cdecl(CEndpointCharacte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPackConfigurationManager::AddEffectPackConfigurationToEndpoints(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *i; // rdx
  __int64 v6; // rax
  std::_Ref_count_base **v7; // rax
  std::_Ref_count_base *v8; // rdx
  std::_Ref_count_base *v9; // rdx
  int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(PVOID, _QWORD *); // r8
  _QWORD *v15; // rdx
  std::_Ref_count_base *v16[2]; // [rsp+28h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-19h] BYREF
  __int64 v18; // [rsp+40h] [rbp-11h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-9h]
  _QWORD v20[7]; // [rsp+58h] [rbp+7h] BYREF
  _QWORD *v21; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  *(_OWORD *)v16 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v17 = v4;
  for ( i = (_QWORD *)*((_QWORD *)this + 8); i != *((_QWORD **)this + 9); i += 2 )
  {
    v6 = *(_QWORD *)*i - *(_QWORD *)&a2->Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(*i + 8LL) - *(_QWORD *)a2->Data4;
    if ( !v6 )
    {
      v7 = (std::_Ref_count_base **)std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v18, i);
      v8 = *v7;
      *v7 = v16[0];
      v16[0] = v8;
      v9 = v7[1];
      v7[1] = v16[1];
      v16[1] = v9;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      break;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  if ( !v16[0] )
  {
    v10 = -2147024809;
    v11 = 100LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v10);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    return (unsigned int)v10;
  }
  v13 = lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_(&v17, (__int64)v16);
  std::function_long___cdecl_CEndpointCharacteristics____::function_long___cdecl_CEndpointCharacteristics______lambda_6ce6f5b5c48dd15f085b9d66d99ef51d__0_(
    v20,
    v13);
  v10 = v14(g_pEndpointCharacteristicsCache, v20);
  if ( v21 )
  {
    v15 = v20;
    LOBYTE(v15) = v21 != v20;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v21 + 32LL))(v21, v15);
  }
  if ( v10 < 0 )
  {
    v11 = 121LL;
    goto LABEL_11;
  }
  if ( v16[1] )
    std::_Ref_count_base::_Decref(v16[1]);
  return 0LL;
}
