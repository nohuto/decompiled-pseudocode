/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1805C38F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180176750 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180182360 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801D5B70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801D5B70.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802901A4 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180290300 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // r8
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  const wchar_t *v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  int v14; // eax
  int v16; // [rsp+B0h] [rbp-80h] BYREF
  int v17; // [rsp+B4h] [rbp-7Ch] BYREF
  int v18; // [rsp+B8h] [rbp-78h] BYREF
  int v19; // [rsp+BCh] [rbp-74h] BYREF
  int v20; // [rsp+C0h] [rbp-70h] BYREF
  int v21; // [rsp+C4h] [rbp-6Ch] BYREF
  const wchar_t *v22; // [rsp+C8h] [rbp-68h] BYREF
  const WCHAR *v23; // [rsp+D0h] [rbp-60h] BYREF
  const wchar_t *v24; // [rsp+D8h] [rbp-58h] BYREF
  const wchar_t *v25; // [rsp+E0h] [rbp-50h] BYREF
  const WCHAR *v26; // [rsp+E8h] [rbp-48h] BYREF
  const wchar_t *v27; // [rsp+F0h] [rbp-40h] BYREF
  const wchar_t *v28; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+100h] [rbp-30h] BYREF
  const wchar_t *v30; // [rsp+108h] [rbp-28h] BYREF
  const wchar_t *v31; // [rsp+110h] [rbp-20h] BYREF
  __int64 v32; // [rsp+118h] [rbp-18h] BYREF
  RTL_SRWLOCK *v33; // [rsp+120h] [rbp-10h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v9 = PinManagerTelemetry::Provider(v4);
      if ( *(_DWORD *)v9 > 2u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
      {
        v11 = (const wchar_t *)*((_QWORD *)a2 + 6);
        v20 = a2[4];
        v28 = (const wchar_t *)*((_QWORD *)a2 + 15);
        v12 = a1[34];
        v27 = (const wchar_t *)*((_QWORD *)a2 + 14);
        v19 = a2[26];
        v26 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v25 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v18 = a2[20];
        v24 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v17 = a2[8];
        v23 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v16 = *a2;
        v30 = (const wchar_t *)*((_QWORD *)a2 + 16);
        LODWORD(v22) = a2[16];
        v31 = (const wchar_t *)*((_QWORD *)a2 + 7);
        LODWORD(v33) = a2[2];
        v29 = (__int64)v11;
        v21 = a2[17];
        v32 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v10,
          byte_1807B836E,
          (const GUID *)(v12 + 8),
          v10,
          (__int64)&v32,
          (__int64)&v33,
          &v31,
          (__int64)&v22,
          &v30,
          (__int64)&v16,
          &v23,
          (__int64)&v17,
          &v24,
          (__int64)&v18,
          &v25,
          &v26,
          (__int64)&v19,
          &v27,
          &v28,
          (__int64)&v20,
          (__int64)&v21,
          (const wchar_t **)&v29);
      }
    }
    else
    {
      v5 = PinManagerTelemetry::Provider(v4);
      if ( *(_DWORD *)v5 > 2u && tlgKeywordOn((__int64)v5, 0x600000000000LL) )
      {
        v7 = (RTL_SRWLOCK *)*((_QWORD *)a2 + 15);
        v8 = a1[34];
        v16 = a2[26];
        v23 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v24 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v17 = a2[20];
        v25 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v18 = a2[8];
        v26 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v19 = *a2;
        v27 = (const wchar_t *)*((_QWORD *)a2 + 16);
        v20 = a2[16];
        v28 = (const wchar_t *)*((_QWORD *)a2 + 7);
        v21 = a2[2];
        v33 = v7;
        v22 = (const wchar_t *)*((_QWORD *)a2 + 14);
        v29 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v6,
          byte_1807B84A6,
          (const GUID *)(v8 + 8),
          v6,
          (__int64)&v29,
          (__int64)&v21,
          &v28,
          (__int64)&v20,
          &v27,
          (__int64)&v19,
          &v26,
          (__int64)&v18,
          &v25,
          (__int64)&v17,
          &v24,
          &v23,
          (__int64)&v16,
          &v22,
          (const WCHAR **)&v33);
      }
    }
  }
  v33 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v33);
  v13 = (_DWORD *)a1[34];
  v14 = a2[2];
  if ( v14 != v13[22] && (v14 != v13[18] || (int)v13[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v13 + 20), (const struct wil::FailureInfo *)a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v33);
  return 1;
}
