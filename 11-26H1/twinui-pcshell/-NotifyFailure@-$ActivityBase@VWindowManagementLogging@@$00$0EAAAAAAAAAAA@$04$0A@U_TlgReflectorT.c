/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180323620
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18007B378 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180167A90 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180178104 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801CB9F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801CB9F0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  _DWORD *v9; // rax
  int v10; // edx
  int v12; // [rsp+B0h] [rbp-80h] BYREF
  int v13; // [rsp+B4h] [rbp-7Ch] BYREF
  const wchar_t *v14; // [rsp+B8h] [rbp-78h] BYREF
  const WCHAR *v15; // [rsp+C0h] [rbp-70h] BYREF
  const WCHAR *v16; // [rsp+C8h] [rbp-68h] BYREF
  const wchar_t *v17; // [rsp+D0h] [rbp-60h] BYREF
  const wchar_t *v18; // [rsp+D8h] [rbp-58h] BYREF
  const WCHAR *v19; // [rsp+E0h] [rbp-50h] BYREF
  const wchar_t *v20; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v21; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-38h] BYREF
  const wchar_t *v23; // [rsp+100h] [rbp-30h] BYREF
  const wchar_t *v24; // [rsp+108h] [rbp-28h] BYREF
  __int64 v25[4]; // [rsp+110h] [rbp-20h] BYREF
  RTL_SRWLOCK *v26; // [rsp+140h] [rbp+10h] BYREF
  int v27; // [rsp+148h] [rbp+18h] BYREF
  int v28; // [rsp+150h] [rbp+20h] BYREF
  int v29; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v7 = WindowManagementLogging::Provider(v4);
      if ( *(_DWORD *)v7 > 2u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
      {
        v22 = *((_QWORD *)a2 + 6);
        LODWORD(v26) = a2[17];
        v27 = a2[4];
        v21 = (const WCHAR *)*((_QWORD *)a2 + 15);
        v20 = (const wchar_t *)*((_QWORD *)a2 + 14);
        v28 = a2[26];
        v19 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v18 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v29 = a2[20];
        v17 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v13 = a2[8];
        v16 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v12 = *a2;
        v23 = (const wchar_t *)*((_QWORD *)a2 + 16);
        LODWORD(v14) = a2[16];
        v24 = (const wchar_t *)*((_QWORD *)a2 + 7);
        LODWORD(v15) = a2[2];
        v25[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v8,
          byte_1807E9679,
          (const GUID *)(a1[34] + 8LL),
          v8,
          (__int64)v25,
          (__int64)&v15,
          &v24,
          (__int64)&v14,
          &v23,
          (__int64)&v12,
          &v16,
          (__int64)&v13,
          &v17,
          (__int64)&v29,
          &v18,
          &v19,
          (__int64)&v28,
          &v20,
          &v21,
          (__int64)&v27,
          (__int64)&v26,
          (const wchar_t **)&v22);
      }
    }
    else
    {
      v5 = WindowManagementLogging::Provider(v4);
      if ( *(_DWORD *)v5 > 2u && tlgKeywordOn((__int64)v5, 0x600000000000LL) )
      {
        v15 = (const WCHAR *)*((_QWORD *)a2 + 15);
        v14 = (const wchar_t *)*((_QWORD *)a2 + 14);
        LODWORD(v26) = a2[26];
        v16 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v17 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v27 = a2[20];
        v18 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v28 = a2[8];
        v19 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v29 = *a2;
        v20 = (const wchar_t *)*((_QWORD *)a2 + 16);
        v12 = a2[16];
        v21 = (const WCHAR *)*((_QWORD *)a2 + 7);
        v13 = a2[2];
        v22 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v6,
          byte_1807E94B2,
          (const GUID *)(a1[34] + 8LL),
          v6,
          (__int64)&v22,
          (__int64)&v13,
          &v21,
          (__int64)&v12,
          &v20,
          (__int64)&v29,
          &v19,
          (__int64)&v28,
          &v18,
          (__int64)&v27,
          &v17,
          &v16,
          (__int64)&v26,
          &v14,
          &v15);
      }
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v26);
  v9 = (_DWORD *)a1[34];
  v10 = a2[2];
  if ( v10 != v9[22] && (v10 != v9[18] || (int)v9[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v9 + 20), (const struct wil::FailureInfo *)a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
  return 1;
}
