/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18014E230
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

char __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        const struct wil::FailureInfo *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // rcx
  int v11; // eax
  PSRWLOCK SRWLock; // [rsp+140h] [rbp+10h] BYREF
  int v14; // [rsp+148h] [rbp+18h]
  int v15; // [rsp+150h] [rbp+20h]
  int v16; // [rsp+158h] [rbp+28h]

  if ( (*((_BYTE *)a2 + 4) & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, *((unsigned int *)a2 + 4)) )
    {
      v7 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v7 > 2u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
      {
        v14 = *((_DWORD *)a2 + 4);
        v9 = a1[34];
        v15 = *((_DWORD *)a2 + 26);
        v16 = *((_DWORD *)a2 + 20);
        LODWORD(SRWLock) = *((_DWORD *)a2 + 17);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v8,
          &unk_1807B836E,
          v9 + 8);
      }
    }
    else
    {
      v4 = TouchKeyboardExperienceTraceLogging::Provider();
      if ( *(_DWORD *)v4 > 2u && tlgKeywordOn((__int64)v4, 0x600000000000LL) )
      {
        v6 = a1[34];
        LODWORD(SRWLock) = *((_DWORD *)a2 + 26);
        v14 = *((_DWORD *)a2 + 20);
        v15 = *((_DWORD *)a2 + 8);
        v16 = *(_DWORD *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v5,
          &unk_1807B84A6,
          v6 + 8);
      }
    }
  }
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v10 = (_DWORD *)a1[34];
  v11 = *((_DWORD *)a2 + 2);
  if ( v11 != v10[22] && (v11 != v10[18] || (int)v10[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v10 + 20), a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
