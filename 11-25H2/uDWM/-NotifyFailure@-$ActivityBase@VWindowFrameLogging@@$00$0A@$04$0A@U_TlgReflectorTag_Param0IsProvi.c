/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800D01B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001838 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180001F88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001F88.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004D8D8 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004DA1C (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180076844 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18009EFB8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  void *v7; // rcx
  __int64 v8; // r8
  const struct _tlgProvider_t *v9; // r9
  const unsigned __int16 *v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // rcx
  int v13; // eax
  int v15; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B4h] [rbp-7Ch] BYREF
  const unsigned __int16 *v17; // [rsp+B8h] [rbp-78h] BYREF
  void *v18; // [rsp+C0h] [rbp-70h] BYREF
  void *v19; // [rsp+C8h] [rbp-68h] BYREF
  const unsigned __int16 *v20; // [rsp+D0h] [rbp-60h] BYREF
  const unsigned __int16 *v21; // [rsp+D8h] [rbp-58h] BYREF
  void *v22; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v23; // [rsp+E8h] [rbp-48h] BYREF
  void *v24; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-38h] BYREF
  const unsigned __int16 *v26; // [rsp+100h] [rbp-30h] BYREF
  const unsigned __int16 *v27; // [rsp+108h] [rbp-28h] BYREF
  __int64 v28[4]; // [rsp+110h] [rbp-20h] BYREF
  RTL_SRWLOCK *v29; // [rsp+140h] [rbp+10h] BYREF
  int v30; // [rsp+148h] [rbp+18h] BYREF
  int v31; // [rsp+150h] [rbp+20h] BYREF
  int v32; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v9 = WindowFrameLogging::Provider(v4);
      if ( *(_DWORD *)v9 > 2u )
      {
        v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
        v11 = a1[34];
        v31 = a2[26];
        v22 = (void *)*((_QWORD *)a2 + 12);
        v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
        v32 = a2[20];
        v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
        v16 = a2[8];
        v19 = (void *)*((_QWORD *)a2 + 3);
        v15 = *a2;
        v26 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
        LODWORD(v17) = a2[16];
        v27 = (const unsigned __int16 *)*((_QWORD *)a2 + 7);
        LODWORD(v18) = a2[2];
        v25 = (__int64)v10;
        LODWORD(v29) = a2[17];
        v30 = a2[4];
        v24 = (void *)*((_QWORD *)a2 + 15);
        v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 14);
        v28[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (int)v9,
          (int)&unk_180103FE6,
          v11 + 8,
          (__int64)v9,
          (__int64)v28,
          (__int64)&v18,
          &v27,
          (__int64)&v17,
          &v26,
          (__int64)&v15,
          &v19,
          (__int64)&v16,
          &v20,
          (__int64)&v32,
          &v21,
          &v22,
          (__int64)&v31,
          &v23,
          &v24,
          (__int64)&v30,
          (__int64)&v29,
          (const unsigned __int16 **)&v25);
      }
    }
    else
    {
      v5 = WindowFrameLogging::Provider(v4);
      if ( *(_DWORD *)v5 > 2u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
      {
        v7 = (void *)*((_QWORD *)a2 + 15);
        v8 = a1[34];
        LODWORD(v29) = a2[26];
        v19 = (void *)*((_QWORD *)a2 + 12);
        v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
        v30 = a2[20];
        v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
        v31 = a2[8];
        v22 = (void *)*((_QWORD *)a2 + 3);
        v32 = *a2;
        v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
        v15 = a2[16];
        v24 = (void *)*((_QWORD *)a2 + 7);
        v16 = a2[2];
        v18 = v7;
        v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 14);
        v25 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v6,
          (int)&unk_1801052D9,
          v8 + 8,
          v6,
          (__int64)&v25,
          (__int64)&v16,
          (const unsigned __int16 **)&v24,
          (__int64)&v15,
          &v23,
          (__int64)&v32,
          &v22,
          (__int64)&v31,
          &v21,
          (__int64)&v30,
          &v20,
          &v19,
          (__int64)&v29,
          &v17,
          &v18);
      }
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive((__int64)a1, &v29);
  v12 = (_DWORD *)a1[34];
  v13 = a2[2];
  if ( v13 != v12[22] && (v13 != v12[18] || (int)v12[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v12 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v29);
  return 1;
}
