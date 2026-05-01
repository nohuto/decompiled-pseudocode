/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180462860
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180015FA0 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180176750 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180182360 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // r9
  int v5; // ecx
  const wchar_t *v6; // rdx
  __int64 v7; // r8
  const wchar_t *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v12; // [rsp+B0h] [rbp-80h] BYREF
  int v13; // [rsp+B4h] [rbp-7Ch] BYREF
  int v14; // [rsp+B8h] [rbp-78h] BYREF
  int v15; // [rsp+BCh] [rbp-74h] BYREF
  const wchar_t *v16; // [rsp+C0h] [rbp-70h] BYREF
  const WCHAR *v17; // [rsp+C8h] [rbp-68h] BYREF
  const wchar_t *v18; // [rsp+D0h] [rbp-60h] BYREF
  const WCHAR *v19; // [rsp+D8h] [rbp-58h] BYREF
  const wchar_t *v20; // [rsp+E0h] [rbp-50h] BYREF
  const wchar_t *v21; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v22; // [rsp+F0h] [rbp-40h] BYREF
  const wchar_t *v23; // [rsp+F8h] [rbp-38h] BYREF
  const wchar_t *v24; // [rsp+100h] [rbp-30h] BYREF
  __int64 v25[3]; // [rsp+108h] [rbp-28h] BYREF
  RTL_SRWLOCK *v26; // [rsp+130h] [rbp+0h] BYREF
  int v27; // [rsp+138h] [rbp+8h] BYREF
  int v28; // [rsp+140h] [rbp+10h] BYREF
  int v29; // [rsp+148h] [rbp+18h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    v4 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v4 > 2u )
    {
      v5 = a2[17];
      v6 = (const wchar_t *)*((_QWORD *)a2 + 6);
      v7 = *(_QWORD *)(a1 + 272);
      v28 = a2[26];
      v19 = (const WCHAR *)*((_QWORD *)a2 + 12);
      v20 = (const wchar_t *)*((_QWORD *)a2 + 11);
      v29 = a2[20];
      v21 = (const wchar_t *)*((_QWORD *)a2 + 9);
      v12 = a2[8];
      v22 = (const WCHAR *)*((_QWORD *)a2 + 3);
      v13 = *a2;
      v23 = (const wchar_t *)*((_QWORD *)a2 + 16);
      v14 = a2[16];
      v24 = (const wchar_t *)*((_QWORD *)a2 + 7);
      v15 = a2[2];
      LODWORD(v26) = v5;
      v27 = a2[4];
      v17 = (const WCHAR *)*((_QWORD *)a2 + 15);
      v8 = (const wchar_t *)*((_QWORD *)a2 + 14);
      v16 = v6;
      v18 = v8;
      v25[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v4,
        byte_1807B6E7F,
        (const GUID *)(v7 + 8),
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
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v26);
  v9 = *(_DWORD **)(a1 + 272);
  v10 = a2[2];
  if ( v10 != v9[22] && (v10 != v9[18] || (int)v9[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v9 + 20), (const struct wil::FailureInfo *)a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
  return 1;
}
