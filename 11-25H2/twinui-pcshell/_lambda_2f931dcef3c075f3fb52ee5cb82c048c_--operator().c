/*
 * XREFs of _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18045D554
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___::Run @ 0x180464480 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___--Run.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18014D6B8 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1801AB59C (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z @ 0x180202F5C (-SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x18020DDD4 (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18020E8D8 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     _anonymous_namespace_::StringifyStateChange @ 0x180218C70 (_anonymous_namespace_--StringifyStateChange.c)
 *     ?InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180227240 (-InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18023C3C8 (-InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ??$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG000$$QEA_NAEB_N@Z @ 0x1802A65E8 (--$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$.c)
 *     ??$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG$$QEAI$$QEA_N@Z @ 0x180458358 (--$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0$$QEAI$$QEA_N@Z @ 0x180458404 (--$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$.c)
 *     ??$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA_N@Z @ 0x180459644 (--$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ?ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18045FF34 (-ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x180463938 (-RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18046CFDC (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator()(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rdx
  const wchar_t *v5; // rax
  bool v6; // cc
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  const wchar_t *v10; // rax
  int v11; // ecx
  const wchar_t *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned __int16 *v15; // rdx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+78h] [rbp+28h] BYREF
  const wchar_t *v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    v2 = 1;
    if ( *(_DWORD *)(a1 + 32) != 8 )
      goto LABEL_12;
    if ( !*(_BYTE *)(a1 + 36) )
      goto LABEL_12;
    LODWORD(v20) = 0;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 376LL);
    if ( !v3 )
      goto LABEL_12;
    v4 = a1;
    if ( *(_QWORD *)(a1 + 24) > 7uLL )
      v4 = *(_QWORD *)a1;
    if ( (*(int (__fastcall **)(__int64, __int64, const wchar_t **))(*(_QWORD *)v3 + 56LL))(v3, v4, &v20) >= 0
      && (_DWORD)v20 == 1 )
    {
      v19 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL);
      LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL);
      v5 = anonymous_namespace_::StringifyApplicationState(1);
      v6 = *(_QWORD *)(a1 + 24) <= 7uLL;
      v16 = (__int64)v5;
      if ( !v6 )
        a1 = *(_QWORD *)a1;
      v17 = a1;
      TouchKeyboardExperienceTelemetryLogger::ApplicationTerminatedWhileActivating<unsigned short const *,unsigned short const *,unsigned int,bool>(
        &v17,
        &v16);
    }
    else
    {
LABEL_12:
      wil::AcquireSRWLockExclusive(v18, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 40) + 576LL));
      v7 = *(_QWORD *)(a1 + 40);
      switch ( *(_DWORD *)(a1 + 32) )
      {
        case 1:
          *(_DWORD *)(v7 + 564) = 1;
          break;
        case 2:
          *(_DWORD *)(v7 + 564) = 2;
          break;
        case 4:
          *(_DWORD *)(v7 + 564) = 3;
          break;
        case 8:
          *(_DWORD *)(v7 + 564) = 4;
          break;
      }
      v8 = *(_QWORD *)(a1 + 40);
      v19 = *(_BYTE *)(v7 + 1013);
      v20 = anonymous_namespace_::StringifyApplicationState(*(_DWORD *)(v8 + 564));
      v10 = anonymous_namespace_::StringifyApplicationState(v9);
      v11 = *(_DWORD *)(a1 + 32);
      v21 = (__int64)v10;
      v12 = anonymous_namespace_::StringifyStateChange(v11);
      v6 = *(_QWORD *)(a1 + 24) <= 7uLL;
      v17 = (__int64)v12;
      v13 = a1;
      if ( !v6 )
        v13 = *(_QWORD *)a1;
      v16 = v13;
      TouchKeyboardExperienceTelemetryLogger::ApplicationStateChanged<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool const &>(
        &v16,
        &v17,
        &v21,
        (__int64 *)&v20);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + 568LL) = 0;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v18);
      v14 = *(_DWORD *)(a1 + 32);
      switch ( v14 )
      {
        case 1:
          v15 = (unsigned __int16 *)a1;
          if ( *(_QWORD *)(a1 + 24) > 7uLL )
            v15 = *(unsigned __int16 **)a1;
          TouchKeyboardExperienceManager::SetCurrentInputAppId(*(TouchKeyboardExperienceManager **)(a1 + 40), v15);
          KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 40)
                                                                                               + 584LL));
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1012LL) )
          {
            v19 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL);
            v6 = *(_QWORD *)(a1 + 24) <= 7uLL;
            LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL);
            if ( !v6 )
              a1 = *(_QWORD *)a1;
            v21 = a1;
            TouchKeyboardExperienceTelemetryLogger::ApplicationResumedButStillActivating<unsigned short const *,unsigned int,bool>(&v21);
          }
          break;
        case 8:
          TouchKeyboardExperienceManager::ClearCurrentInputAppId(*(TouchKeyboardExperienceManager **)(a1 + 40));
          KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 40)
                                                                                                  + 584LL));
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL)
            || *(int *)(*(_QWORD *)(a1 + 40) + 1008LL) < 0
            || *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL) >= 0xAu )
          {
            v2 = 0;
          }
          if ( v2 )
          {
            TouchKeyboardExperienceManager::RelaunchAfterMilliseconds(
              *(TouchKeyboardExperienceManager **)(a1 + 40),
              0x3E8u);
          }
          else
          {
            v19 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL);
            LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL);
            TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTerminationRejected<unsigned int,bool>(
              (int *)&v20,
              &v19);
          }
          break;
        case 2:
          TouchKeyboardExperienceManager::HideAllInputViews(*(RTL_SRWLOCK **)(a1 + 40));
          TouchKeyboardExperienceTelemetryLogger::InputAppSuspending();
          break;
        case 4:
          TouchKeyboardExperienceTelemetryLogger::InputAppSuspended();
          break;
      }
    }
  }
}
