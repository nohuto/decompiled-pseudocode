/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A0890
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001830 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180001F80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001F80.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180066D48 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180075E60 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800928CC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // rcx
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r8
  _DWORD *v14; // rax
  int v15; // edx
  int v17; // [rsp+B0h] [rbp-80h] BYREF
  int v18; // [rsp+B4h] [rbp-7Ch] BYREF
  const unsigned __int16 *v19; // [rsp+B8h] [rbp-78h] BYREF
  void *v20; // [rsp+C0h] [rbp-70h] BYREF
  void *v21; // [rsp+C8h] [rbp-68h] BYREF
  const unsigned __int16 *v22; // [rsp+D0h] [rbp-60h] BYREF
  const unsigned __int16 *v23; // [rsp+D8h] [rbp-58h] BYREF
  void *v24; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v25; // [rsp+E8h] [rbp-48h] BYREF
  void *v26; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v28; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v29; // [rsp+108h] [rbp-28h] BYREF
  __int64 v30[4]; // [rsp+110h] [rbp-20h] BYREF
  RTL_SRWLOCK *v31; // [rsp+140h] [rbp+10h] BYREF
  int v32; // [rsp+148h] [rbp+18h] BYREF
  int v33; // [rsp+150h] [rbp+20h] BYREF
  int v34; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v10 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(v5, v4) + 1);
      if ( *v10 > 2u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
      {
        v27 = *((_QWORD *)a2 + 6);
        LODWORD(v31) = a2[17];
        v32 = a2[4];
        v26 = (void *)*((_QWORD *)a2 + 15);
        v13 = a1[34];
        v25 = (const unsigned __int16 *)*((_QWORD *)a2 + 14);
        v33 = a2[26];
        v24 = (void *)*((_QWORD *)a2 + 12);
        v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
        v34 = a2[20];
        v22 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
        v18 = a2[8];
        v21 = (void *)*((_QWORD *)a2 + 3);
        v17 = *a2;
        v28 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
        LODWORD(v19) = a2[16];
        v29 = (const unsigned __int16 *)*((_QWORD *)a2 + 7);
        LODWORD(v20) = a2[2];
        v30[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v11,
          (int)&unk_1801001AA,
          v13 + 8,
          v12,
          (__int64)v30,
          (__int64)&v20,
          &v29,
          (__int64)&v19,
          &v28,
          (__int64)&v17,
          &v21,
          (__int64)&v18,
          &v22,
          (__int64)&v34,
          &v23,
          &v24,
          (__int64)&v33,
          &v25,
          &v26,
          (__int64)&v32,
          (__int64)&v31,
          (const unsigned __int16 **)&v27);
      }
    }
    else
    {
      v6 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(v5, v4) + 1);
      if ( *v6 > 2u && tlgKeywordOn((__int64)v6, 0x200000000000LL) )
      {
        v9 = a1[34];
        v20 = (void *)*((_QWORD *)a2 + 15);
        v19 = (const unsigned __int16 *)*((_QWORD *)a2 + 14);
        LODWORD(v31) = a2[26];
        v21 = (void *)*((_QWORD *)a2 + 12);
        v22 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
        v32 = a2[20];
        v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
        v33 = a2[8];
        v24 = (void *)*((_QWORD *)a2 + 3);
        v34 = *a2;
        v25 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
        v17 = a2[16];
        v26 = (void *)*((_QWORD *)a2 + 7);
        v18 = a2[2];
        v27 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v7,
          (int)&unk_180100095,
          v9 + 8,
          v8,
          (__int64)&v27,
          (__int64)&v18,
          (const unsigned __int16 **)&v26,
          (__int64)&v17,
          &v25,
          (__int64)&v34,
          &v24,
          (__int64)&v33,
          &v23,
          (__int64)&v32,
          &v22,
          &v21,
          (__int64)&v31,
          &v19,
          &v20);
      }
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v31);
  v14 = (_DWORD *)a1[34];
  v15 = a2[2];
  if ( v15 != v14[22] && (v15 != v14[18] || (int)v14[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v14 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v31);
  return 1;
}
