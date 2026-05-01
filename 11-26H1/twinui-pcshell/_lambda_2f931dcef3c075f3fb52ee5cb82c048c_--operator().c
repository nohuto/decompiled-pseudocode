/*
 * XREFs of _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x1804698C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___::Run @ 0x180470150 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___--Run.c)
 * Callees:
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1800151E0 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18018FE28 (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z @ 0x1801F6A7C (-SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x180200F08 (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x180201AE4 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     _anonymous_namespace_::StringifyStateChange @ 0x18020A97C (_anonymous_namespace_--StringifyStateChange.c)
 *     ?InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802179E8 (-InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18022D4B8 (-InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ??$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG000$$QEA_NAEB_N@Z @ 0x18029F578 (--$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$.c)
 *     ??$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG$$QEAI$$QEA_N@Z @ 0x1804646E8 (--$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0$$QEAI$$QEA_N@Z @ 0x180464794 (--$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$.c)
 *     ??$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA_N@Z @ 0x180465850 (--$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ?ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18046C4D4 (-ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x18046F868 (-RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18047B138 (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator()(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  const wchar_t *v6; // rax
  bool v7; // cc
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  const wchar_t *v11; // rax
  int v12; // ecx
  const wchar_t *v13; // rax
  __int64 v14; // rax
  int v15; // eax
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v21[2]; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+68h] [rbp+18h] BYREF
  const wchar_t *v23; // [rsp+70h] [rbp+20h] BYREF
  __int64 v24; // [rsp+78h] [rbp+28h] BYREF

  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    if ( *(_DWORD *)(a1 + 32) != 8 )
      goto LABEL_12;
    if ( !*(_BYTE *)(a1 + 36) )
      goto LABEL_12;
    v2 = *(_QWORD *)(a1 + 40);
    LODWORD(v23) = 0;
    v3 = *(_QWORD *)(v2 + 376);
    if ( !v3 )
      goto LABEL_12;
    v4 = a1;
    if ( *(_QWORD *)(a1 + 24) > 7uLL )
      v4 = *(_QWORD *)a1;
    if ( (*(int (__fastcall **)(__int64, __int64, const wchar_t **))(*(_QWORD *)v3 + 56LL))(v3, v4, &v23) >= 0
      && (_DWORD)v23 == 1 )
    {
      v5 = *(_QWORD *)(a1 + 40);
      v22 = *(_BYTE *)(v5 + 1013);
      LODWORD(v24) = *(_DWORD *)(v5 + 1004);
      v6 = anonymous_namespace_::StringifyApplicationState(1);
      v7 = *(_QWORD *)(a1 + 24) <= 7uLL;
      v19 = (__int64)v6;
      if ( !v7 )
        a1 = *(_QWORD *)a1;
      v20 = a1;
      TouchKeyboardExperienceTelemetryLogger::ApplicationTerminatedWhileActivating<unsigned short const *,unsigned short const *,unsigned int,bool>(
        &v20,
        &v19);
    }
    else
    {
LABEL_12:
      wil::AcquireSRWLockExclusive(v21, (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 40) + 576LL));
      v8 = *(_QWORD *)(a1 + 40);
      switch ( *(_DWORD *)(a1 + 32) )
      {
        case 1:
          *(_DWORD *)(v8 + 564) = 1;
          break;
        case 2:
          *(_DWORD *)(v8 + 564) = 2;
          break;
        case 4:
          *(_DWORD *)(v8 + 564) = 3;
          break;
        case 8:
          *(_DWORD *)(v8 + 564) = 4;
          break;
      }
      v9 = *(_QWORD *)(a1 + 40);
      v22 = *(_BYTE *)(v9 + 1013);
      v23 = anonymous_namespace_::StringifyApplicationState(*(_DWORD *)(v9 + 564));
      v11 = anonymous_namespace_::StringifyApplicationState(v10);
      v12 = *(_DWORD *)(a1 + 32);
      v24 = (__int64)v11;
      v13 = anonymous_namespace_::StringifyStateChange(v12);
      v7 = *(_QWORD *)(a1 + 24) <= 7uLL;
      v20 = (__int64)v13;
      v14 = a1;
      if ( !v7 )
        v14 = *(_QWORD *)a1;
      v19 = v14;
      TouchKeyboardExperienceTelemetryLogger::ApplicationStateChanged<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool const &>(
        &v19,
        &v20,
        &v24,
        (__int64 *)&v23);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + 568LL) = 0;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v21);
      v15 = *(_DWORD *)(a1 + 32);
      switch ( v15 )
      {
        case 1:
          v16 = (unsigned __int16 *)a1;
          if ( *(_QWORD *)(a1 + 24) > 7uLL )
            v16 = *(unsigned __int16 **)a1;
          TouchKeyboardExperienceManager::SetCurrentInputAppId(*(TouchKeyboardExperienceManager **)(a1 + 40), v16);
          KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 40)
                                                                                               + 584LL));
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1012LL) )
          {
            v17 = *(_QWORD *)(a1 + 40);
            v22 = *(_BYTE *)(v17 + 1013);
            v7 = *(_QWORD *)(a1 + 24) <= 7uLL;
            LODWORD(v23) = *(_DWORD *)(v17 + 1004);
            if ( !v7 )
              a1 = *(_QWORD *)a1;
            v24 = a1;
            TouchKeyboardExperienceTelemetryLogger::ApplicationResumedButStillActivating<unsigned short const *,unsigned int,bool>(&v24);
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
            v18 = *(_QWORD *)(a1 + 40);
            v22 = *(_BYTE *)(v18 + 1013);
            LODWORD(v23) = *(_DWORD *)(v18 + 1004);
            TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTerminationRejected<unsigned int,bool>(
              (int *)&v23,
              &v22);
          }
          else
          {
            TouchKeyboardExperienceManager::RelaunchAfterMilliseconds(
              *(TouchKeyboardExperienceManager **)(a1 + 40),
              0x3E8u);
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
