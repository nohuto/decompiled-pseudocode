/*
 * XREFs of ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x14003A090
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14003AB48 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     FreeHidData @ 0x14003ABB0 (FreeHidData.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x14003AD08 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall FreeSavedMessageInfoHandles(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // r14
  __int64 v34; // rdi
  _BYTE v35[48]; // [rsp+28h] [rbp-70h] BYREF
  char v36; // [rsp+58h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 142);
  if ( v1 )
  {
    *((_QWORD *)a1 + 142) = 0LL;
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline()
      && a1 != *(struct tagTHREADINFO **)(v1 + 16) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2927LL);
    }
    else
    {
      FreeHidData(v1);
    }
  }
  v3 = *((_QWORD *)a1 + 149);
  if ( v3 )
  {
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(v35);
    v36 = 0;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION(v5, v4) == 1 )
    {
      v36 = 1;
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(v35);
    }
    PsGetCurrentThreadWin32Thread(v6);
    v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904);
    if ( (unsigned __int64)(unsigned __int16)v3 < *(_QWORD *)(v10 + 8) )
    {
      UserSessionState = W32GetUserSessionState(v10, v9);
      v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 19928) * (unsigned int)(unsigned __int16)v3
          + *(_QWORD *)(UserSessionState + 19920);
      v17 = (_QWORD *)HMPkheFromPhe(v14);
      LOWORD(v3) = WORD1(v3) & 0x7FFF;
      if ( ((WORD1(v3) & 0x7FFF) == *(_WORD *)(v14 + 26)
         || (_WORD)v3 == 0x7FFF
         || !(_WORD)v3 && PsGetCurrentProcessWow64Process(v16, v15))
        && (*(_BYTE *)(v14 + 25) & 1) == 0
        && *(_BYTE *)(v14 + 24) == 20 )
      {
        v18 = *v17;
        if ( *v17 )
        {
          if ( *(_BYTE *)(_HMPheFromObject(*v17) + 24) == 20 )
            HMDestroyObject(v18);
        }
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v35);
    *((_QWORD *)a1 + 149) = 0LL;
  }
  v19 = *((_QWORD *)a1 + 150);
  if ( v19 )
  {
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(v35);
    v36 = 0;
    if ( (unsigned int)GET_USERCRIT_DISPOSITION(v21, v20) == 1 )
    {
      v36 = 1;
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(v35);
    }
    PsGetCurrentThreadWin32Thread(v22);
    v26 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19904);
    if ( (unsigned __int64)(unsigned __int16)v19 < *(_QWORD *)(v26 + 8) )
    {
      v27 = W32GetUserSessionState(v26, v25);
      v30 = *(_DWORD *)(W32GetUserSessionState(v29, v28) + 19928) * (unsigned int)(unsigned __int16)v19
          + *(_QWORD *)(v27 + 19920);
      v33 = (_QWORD *)HMPkheFromPhe(v30);
      LOWORD(v19) = WORD1(v19) & 0x7FFF;
      if ( ((WORD1(v19) & 0x7FFF) == *(_WORD *)(v30 + 26)
         || (_WORD)v19 == 0x7FFF
         || !(_WORD)v19 && PsGetCurrentProcessWow64Process(v32, v31))
        && (*(_BYTE *)(v30 + 25) & 1) == 0
        && *(_BYTE *)(v30 + 24) == 21 )
      {
        v34 = *v33;
        if ( *v33 )
        {
          if ( *(_BYTE *)(_HMPheFromObject(*v33) + 24) == 21 )
            HMDestroyObject(v34);
        }
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v35);
    *((_QWORD *)a1 + 150) = 0LL;
  }
}
