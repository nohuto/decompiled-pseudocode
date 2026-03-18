/*
 * XREFs of InitializeInputComponents @ 0x14018C900
 * Callers:
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1401448FC (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x140144994 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x14014A5E0 (-Initialize@CInputGlobals@@SAJXZ.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140159F74 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14015B2BC (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x14015D360 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 *     ?Initialize@CDesktopInputSink@@SAJXZ @ 0x14018C3F8 (-Initialize@CDesktopInputSink@@SAJXZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x14018C774 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 *     ?Initialize@LastWokenThread@@YAJXZ @ 0x1401AA39C (-Initialize@LastWokenThread@@YAJXZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020E848 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     InitializeContext @ 0x1402162C0 (InitializeContext.c)
 *     ?Initialize@CKernelSensorThread@@SAJXZ @ 0x140223608 (-Initialize@CKernelSensorThread@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x1402236EC (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x140223A98 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 */

__int64 InitializeInputComponents()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  LastWokenThread *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserInputMgrSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v2 = InputExtensibilityCallout::Initialize();
  if ( v2 >= 0 )
  {
    v2 = CActivationObjectManager::Initialize(v1, v0);
    if ( v2 >= 0 )
    {
      v2 = LastWokenThread::Initialize(v3);
      if ( v2 >= 0 )
      {
        v2 = CInputGlobals::Initialize();
        if ( v2 >= 0 )
        {
          v2 = CCursorClip::Initialize();
          if ( v2 >= 0 )
          {
            v2 = CMasterInputThread::Initialize();
            if ( v2 >= 0 )
            {
              v2 = CKernelSensorThread::Initialize();
              if ( v2 >= 0 )
              {
                v2 = CInputConfig::Initialize(v5, v4);
                if ( v2 >= 0 )
                {
                  v8 = Win32AllocPoolZInitImpl(256LL, 0x14uLL, 0x6B747455u);
                  if ( !v8 )
                    return (unsigned int)-1073741801;
                  *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19600) = v8;
                  v2 = CFrameIdGenerator::Initialize(v10, v9);
                  if ( v2 >= 0 )
                  {
                    v2 = CInputSystemMetrics::Initialize();
                    if ( v2 >= 0 )
                    {
                      v2 = InputVirtualization::RootSynthesizedMouseList::Initialize(v12, v11);
                      if ( v2 >= 0 )
                      {
                        UserInputMgrSessionState = W32GetUserInputMgrSessionState();
                        *(_DWORD *)(UserInputMgrSessionState + 16) = 0;
                        *(_QWORD *)(UserInputMgrSessionState + 24) = 0LL;
                        *(_DWORD *)(UserInputMgrSessionState + 20) = 0;
                        *(_QWORD *)(W32GetUserInputMgrSessionState() + 8) = 0LL;
                        *(_QWORD *)(W32GetUserSessionState(v15, v14) + 3336) = 0LL;
                        v2 = CDesktopInputSink::Initialize(v17, v16);
                        if ( v2 >= 0 )
                        {
                          if ( CContentRects::GetInstance(v19, v18) )
                          {
                            v2 = 0;
                            InitializeContext();
                            return (unsigned int)v2;
                          }
                          return (unsigned int)-1073741801;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
