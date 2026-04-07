/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A57E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001838 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004CB80 (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004CEE0 (-Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180076844 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18009EFB8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // r9
  int v5; // ecx
  const unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  const unsigned __int16 *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v12; // [rsp+B0h] [rbp-80h] BYREF
  int v13; // [rsp+B4h] [rbp-7Ch] BYREF
  int v14; // [rsp+B8h] [rbp-78h] BYREF
  int v15; // [rsp+BCh] [rbp-74h] BYREF
  const unsigned __int16 *v16; // [rsp+C0h] [rbp-70h] BYREF
  void *v17; // [rsp+C8h] [rbp-68h] BYREF
  const unsigned __int16 *v18; // [rsp+D0h] [rbp-60h] BYREF
  void *v19; // [rsp+D8h] [rbp-58h] BYREF
  const unsigned __int16 *v20; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v21; // [rsp+E8h] [rbp-48h] BYREF
  void *v22; // [rsp+F0h] [rbp-40h] BYREF
  const unsigned __int16 *v23; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v24; // [rsp+100h] [rbp-30h] BYREF
  __int64 v25[3]; // [rsp+108h] [rbp-28h] BYREF
  RTL_SRWLOCK *v26; // [rsp+130h] [rbp+0h] BYREF
  int v27; // [rsp+138h] [rbp+8h] BYREF
  int v28; // [rsp+140h] [rbp+10h] BYREF
  int v29; // [rsp+148h] [rbp+18h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    v4 = AnimationClockLogging::Provider(a1);
    if ( *(_DWORD *)v4 > 2u )
    {
      v5 = a2[17];
      v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v7 = *(_QWORD *)(a1 + 272);
      v28 = a2[26];
      v19 = (void *)*((_QWORD *)a2 + 12);
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
      v29 = a2[20];
      v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
      v12 = a2[8];
      v22 = (void *)*((_QWORD *)a2 + 3);
      v13 = *a2;
      v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
      v14 = a2[16];
      v24 = (const unsigned __int16 *)*((_QWORD *)a2 + 7);
      v15 = a2[2];
      LODWORD(v26) = v5;
      v27 = a2[4];
      v17 = (void *)*((_QWORD *)a2 + 15);
      v8 = (const unsigned __int16 *)*((_QWORD *)a2 + 14);
      v16 = v6;
      v18 = v8;
      v25[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v4,
        (int)&unk_180103FE6,
        v7 + 8,
        (__int64)v4,
        (__int64)v25,
        (__int64)&v15,
        &v24,
        (__int64)&v14,
        &v23,
        (__int64)&v13,
        &v22,
        (__int64)&v12,
        &v21,
        (__int64)&v29,
        &v20,
        &v19,
        (__int64)&v28,
        &v18,
        &v17,
        (__int64)&v27,
        (__int64)&v26,
        &v16);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v26);
  v9 = *(_DWORD **)(a1 + 272);
  v10 = a2[2];
  if ( v10 != v9[22] && (v10 != v9[18] || (int)v9[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v9 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v26);
  return 1;
}
