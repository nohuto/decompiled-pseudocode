/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800983B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001830 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180025070 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025390 (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180066D48 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800928CC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // rax
  int v8; // edx
  int v10; // [rsp+B0h] [rbp-80h] BYREF
  int v11; // [rsp+B4h] [rbp-7Ch] BYREF
  int v12; // [rsp+B8h] [rbp-78h] BYREF
  int v13; // [rsp+BCh] [rbp-74h] BYREF
  const unsigned __int16 *v14; // [rsp+C0h] [rbp-70h] BYREF
  void *v15; // [rsp+C8h] [rbp-68h] BYREF
  const unsigned __int16 *v16; // [rsp+D0h] [rbp-60h] BYREF
  void *v17; // [rsp+D8h] [rbp-58h] BYREF
  const unsigned __int16 *v18; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v19; // [rsp+E8h] [rbp-48h] BYREF
  void *v20; // [rsp+F0h] [rbp-40h] BYREF
  const unsigned __int16 *v21; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v22; // [rsp+100h] [rbp-30h] BYREF
  __int64 v23[3]; // [rsp+108h] [rbp-28h] BYREF
  RTL_SRWLOCK *v24; // [rsp+130h] [rbp+0h] BYREF
  int v25; // [rsp+138h] [rbp+8h] BYREF
  int v26; // [rsp+140h] [rbp+10h] BYREF
  int v27; // [rsp+148h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
  {
    v4 = (_DWORD *)wil::details::static_lazy<AnimationClockLogging>::get(a1, a2)[1];
    if ( *v4 > 2u )
    {
      v14 = *(const unsigned __int16 **)(a2 + 48);
      LODWORD(v24) = *(_DWORD *)(a2 + 68);
      v25 = *(_DWORD *)(a2 + 16);
      v15 = *(void **)(a2 + 120);
      v6 = *(_QWORD *)(a1 + 272);
      v16 = *(const unsigned __int16 **)(a2 + 112);
      v26 = *(_DWORD *)(a2 + 104);
      v17 = *(void **)(a2 + 96);
      v18 = *(const unsigned __int16 **)(a2 + 88);
      v27 = *(_DWORD *)(a2 + 80);
      v19 = *(const unsigned __int16 **)(a2 + 72);
      v10 = *(_DWORD *)(a2 + 32);
      v20 = *(void **)(a2 + 24);
      v11 = *(_DWORD *)a2;
      v21 = *(const unsigned __int16 **)(a2 + 128);
      v12 = *(_DWORD *)(a2 + 64);
      v22 = *(const unsigned __int16 **)(a2 + 56);
      v13 = *(_DWORD *)(a2 + 8);
      v23[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v4,
        (int)&unk_1800FF656,
        v6 + 8,
        v5,
        (__int64)v23,
        (__int64)&v13,
        &v22,
        (__int64)&v12,
        &v21,
        (__int64)&v11,
        &v20,
        (__int64)&v10,
        &v19,
        (__int64)&v27,
        &v18,
        &v17,
        (__int64)&v26,
        &v16,
        &v15,
        (__int64)&v25,
        (__int64)&v24,
        &v14);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v24);
  v7 = *(_DWORD **)(a1 + 272);
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 != v7[22] && (v8 != v7[18] || (int)v7[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v7 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v24);
  return 1;
}
