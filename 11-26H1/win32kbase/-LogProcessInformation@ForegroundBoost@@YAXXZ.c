/*
 * XREFs of ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30
 * Callers:
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401DA6F4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14000476C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     IsServiceSession @ 0x140165EF4 (IsServiceSession.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401C93F0 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4 (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401CC878 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401D3B5C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401D3C04 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 */

void __fastcall ForegroundBoost::LogProcessInformation(ForegroundBoost *this)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  __int64 v4; // rbx
  char IsBoostAllowed; // si
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 i; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOL v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 j; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  BOOL v21; // eax
  __int64 v22; // rcx
  int CurrentWin32kSessionId; // r12d
  char v24; // r15
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  HANDLE v28; // rdi
  int NextProcess; // ebx
  NTSTATUS v30; // eax
  PVOID v31; // rsi
  _QWORD *ProcessWin32Process; // rax
  __int64 v33; // rbx
  BOOL v34; // r14d
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  char PsProcessWindowState; // [rsp+90h] [rbp+40h] BYREF
  BOOL v40; // [rsp+98h] [rbp+48h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+58h] BYREF

  if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = W32GetUserSessionState(v2, v1, v3) + 18904;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    IsBoostAllowed = 1;
    if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
      IsBoostAllowed = ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(v7, v6, v8);
    for ( i = *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 36400); i; i = *(_QWORD *)(i + 368) )
    {
      if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 4LL) )
      {
        PsProcessWindowState = tagPROCESSINFO::GetPsProcessWindowState(i, 0);
        v13 = IsBoostAllowed && ForegroundBoost::_anonymous_namespace_::HasBoostSource(i, 0);
        v40 = v13;
        v41 = *(_DWORD *)(i + 56);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v10,
          (__int64)&unk_140282602,
          v11,
          v12,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&PsProcessWindowState);
      }
    }
    if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      for ( j = *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 36408); j; j = *(_QWORD *)(j + 1112) )
      {
        if ( *(_BYTE *)(j + 1200) != 1
          && (unsigned int)dword_1402A9F58 > 5
          && tlgKeywordOn((__int64)&dword_1402A9F58, 4LL) )
        {
          PsProcessWindowState = tagPROCESSINFO::GetPsProcessWindowState(j, 0);
          v21 = IsBoostAllowed && ForegroundBoost::_anonymous_namespace_::HasBoostSource(j, 0);
          v40 = v21;
          v41 = *(_DWORD *)(j + 56);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
            v18,
            (__int64)&unk_1402825AC,
            v19,
            v20,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&PsProcessWindowState);
        }
      }
    }
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v22);
    if ( !IsServiceSession(CurrentWin32kSessionId) )
    {
      v24 = 1;
      if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
        v24 = ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(v26, v25, v27);
      v28 = 0LL;
      while ( 1 )
      {
        Handle = 0LL;
        NextProcess = ZwGetNextProcess(v28, 1024LL, 512LL, 0LL, &Handle);
        if ( v28 )
          ZwClose(v28);
        if ( NextProcess < 0 )
          break;
        v28 = Handle;
        Object = 0LL;
        v30 = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        v31 = Object;
        if ( v30 >= 0 )
        {
          if ( CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(Object) )
          {
            ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(v31);
            v33 = (__int64)ProcessWin32Process;
            if ( ProcessWin32Process )
            {
              if ( *ProcessWin32Process )
              {
                v34 = v24 && (ProcessWin32Process[101] & 0xFFFFFFFFC0000000uLL) != 0;
                if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 4LL) )
                {
                  PsProcessWindowState = tagPROCESSINFO::GetPsProcessWindowState(v33, 0);
                  v41 = *(_DWORD *)(v33 + 56);
                  v40 = v34;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                    v35,
                    (__int64)&unk_140282556,
                    v36,
                    v37,
                    (__int64)&v41,
                    (__int64)&v40,
                    (__int64)&PsProcessWindowState);
                }
              }
            }
          }
          ObfDereferenceObject(v31);
        }
      }
    }
  }
}
