/*
 * XREFs of UnInitializeInputComponents @ 0x1400CEE88
 * Callers:
 *     InputUnInitialize @ 0x1400CED9C (InputUnInitialize.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1400CF07C (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?UnInitialize@CInputConfig@@SAXXZ @ 0x1400CF0EC (-UnInitialize@CInputConfig@@SAXXZ.c)
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400CF13C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ?UnInitialize@CCursorClip@@SAJXZ @ 0x1400CF254 (-UnInitialize@CCursorClip@@SAJXZ.c)
 *     ?UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ @ 0x1401A07E4 (-UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ.c)
 *     ?UnInitialize@CKernelSensorThread@@SAXXZ @ 0x1401A1C78 (-UnInitialize@CKernelSensorThread@@SAXXZ.c)
 *     ?UnInitialize@CMasterInputThread@@SAXXZ @ 0x1401A1D3C (-UnInitialize@CMasterInputThread@@SAXXZ.c)
 *     ??1CActivationObjectManager@@AEAA@XZ @ 0x1401A9A30 (--1CActivationObjectManager@@AEAA@XZ.c)
 *     ?UnInitialize@CDesktopInputSink@@SAXXZ @ 0x1402136C8 (-UnInitialize@CDesktopInputSink@@SAXXZ.c)
 *     ?UnInitialize@CFrameIdGenerator@@SAXXZ @ 0x140215CC0 (-UnInitialize@CFrameIdGenerator@@SAXXZ.c)
 */

void __fastcall UnInitializeInputComponents(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  char *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  char *v26; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(char **)(UserSessionState + 18864);
  if ( v5 )
  {
    CActivationObjectManager::~CActivationObjectManager(*(CActivationObjectManager **)(UserSessionState + 18864));
    GreDeleteFastMutex(v5);
  }
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18864) = 0LL;
  InputExtensibilityCallout::UnInitialize();
  v9 = *(char **)(W32GetUserSessionState(v7, v6) + 3056);
  if ( v9 )
    GreDeleteFastMutex(v9);
  *(_QWORD *)(W32GetUserSessionState(v9, v8) + 3056) = 0LL;
  v12 = W32GetUserSessionState(v11, v10);
  v13 = *(char **)(v12 + 3048);
  if ( v13 )
    GreDeleteFastMutex(v13);
  *(_QWORD *)(v12 + 3048) = 0LL;
  CTouchProcessor::UnInitialize();
  CCursorClip::UnInitialize();
  CMasterInputThread::UnInitialize();
  CKernelSensorThread::UnInitialize();
  CInputConfig::UnInitialize();
  v16 = W32GetUserSessionState(v15, v14);
  v17 = *(char **)(v16 + 19600);
  if ( v17 )
  {
    GreDeleteFastMutex(v17);
    *(_QWORD *)(v16 + 19600) = 0LL;
  }
  CFrameIdGenerator::UnInitialize();
  v21 = *(char **)(W32GetUserSessionState(v19, v18) + 18952);
  if ( v21 )
    GreDeleteFastMutex(v21);
  *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18952) = 0LL;
  v22 = *(void **)(W32GetUserInputMgrSessionState() + 24);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  InputVirtualization::RootSynthesizedMouseList::UnInitialize();
  CDesktopInputSink::UnInitialize();
  v25 = W32GetUserSessionState(v24, v23);
  v26 = *(char **)(v25 + 70712);
  if ( v26 )
  {
    GreDeleteFastMutex(v26);
    *(_QWORD *)(v25 + 70712) = 0LL;
  }
}
