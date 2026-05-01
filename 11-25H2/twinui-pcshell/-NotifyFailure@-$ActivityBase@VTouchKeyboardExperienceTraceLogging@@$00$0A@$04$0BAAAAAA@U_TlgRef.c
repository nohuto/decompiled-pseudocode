/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18017C470
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180015FA0 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180176750 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180182360 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801D5B70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801D5B70.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct _tlgProvider_t *v8; // r9
  const wchar_t *v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v12; // eax
  int v14; // [rsp+B0h] [rbp-80h] BYREF
  int v15; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-70h] BYREF
  const WCHAR *v18; // [rsp+C8h] [rbp-68h] BYREF
  const wchar_t *v19; // [rsp+D0h] [rbp-60h] BYREF
  const wchar_t *v20; // [rsp+D8h] [rbp-58h] BYREF
  const WCHAR *v21; // [rsp+E0h] [rbp-50h] BYREF
  const wchar_t *v22; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v23; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-38h] BYREF
  const wchar_t *v25; // [rsp+100h] [rbp-30h] BYREF
  const wchar_t *v26; // [rsp+108h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+110h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  int v29; // [rsp+148h] [rbp+18h] BYREF
  int v30; // [rsp+150h] [rbp+20h] BYREF
  int v31; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v8 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v8 > 2u )
      {
        v9 = (const wchar_t *)*((_QWORD *)a2 + 6);
        v10 = a1[34];
        v30 = a2[26];
        v21 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v20 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v31 = a2[20];
        v19 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v15 = a2[8];
        v18 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v14 = *a2;
        v25 = (const wchar_t *)*((_QWORD *)a2 + 16);
        LODWORD(v16) = a2[16];
        v26 = (const wchar_t *)*((_QWORD *)a2 + 7);
        LODWORD(v17) = a2[2];
        v24 = (__int64)v9;
        LODWORD(SRWLock) = a2[17];
        v29 = a2[4];
        v23 = (const WCHAR *)*((_QWORD *)a2 + 15);
        v22 = (const wchar_t *)*((_QWORD *)a2 + 14);
        v27[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (__int64)v8,
          byte_1807B6E7F,
          (const GUID *)(v10 + 8),
          (__int64)v8,
          (__int64)v27,
          (__int64)&v17,
          &v26,
          (__int64)&v16,
          &v25,
          (__int64)&v14,
          &v18,
          (__int64)&v15,
          &v19,
          (__int64)&v31,
          &v20,
          &v21,
          (__int64)&v30,
          &v22,
          &v23,
          (__int64)&v29,
          (__int64)&SRWLock,
          (const wchar_t **)&v24);
      }
    }
    else
    {
      v4 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v4 > 2u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
      {
        v6 = *((_QWORD *)a2 + 15);
        v7 = a1[34];
        LODWORD(SRWLock) = a2[26];
        v18 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v19 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v29 = a2[20];
        v20 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v30 = a2[8];
        v21 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v31 = *a2;
        v22 = (const wchar_t *)*((_QWORD *)a2 + 16);
        v14 = a2[16];
        v23 = (const WCHAR *)*((_QWORD *)a2 + 7);
        v15 = a2[2];
        v17 = v6;
        v16 = *((_QWORD *)a2 + 14);
        v24 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v5,
          &unk_1807B66DA,
          v7 + 8);
      }
    }
  }
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v11 = (_DWORD *)a1[34];
  v12 = a2[2];
  if ( v12 != v11[22] && (v12 != v11[18] || (int)v11[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v11 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
