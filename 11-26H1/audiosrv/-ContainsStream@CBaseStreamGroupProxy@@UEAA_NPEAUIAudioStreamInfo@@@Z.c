/*
 * XREFs of ?ContainsStream@CBaseStreamGroupProxy@@UEAA_NPEAUIAudioStreamInfo@@@Z @ 0x1800FB140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __std_find_trivial_8 @ 0x1800B1B60 (__std_find_trivial_8.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_5b74153b8b2c834a9d652af584a9de1c___ @ 0x1800F9420 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--Wea.c)
 */

bool __fastcall CBaseStreamGroupProxy::ContainsStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const __m128i *v5; // rdx
  const __m128i *v6; // rcx
  bool v7; // bl
  __int64 *v9; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = (const __m128i *)*((_QWORD *)this + 28);
  v6 = (const __m128i *)*((_QWORD *)this + 27);
  v10 = v2;
  if ( _std_find_trivial_8(v6, v5, (unsigned __int64)a2) == *((const __m128i **)this + 28) )
  {
    std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_5b74153b8b2c834a9d652af584a9de1c___(
      &v9,
      *((__int64 **)this + 30),
      *((__int64 **)this + 31),
      a2);
    v7 = v9 != *((__int64 **)this + 31);
  }
  else
  {
    v7 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return v7;
}
