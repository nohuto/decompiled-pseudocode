/*
 * XREFs of InitializeInputComponents @ 0x14021B770
 * Callers:
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x14017FDA4 (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?InitDimAndWakeSources@CInputGlobals@@AEAAXXZ @ 0x140187664 (-InitDimAndWakeSources@CInputGlobals@@AEAAXXZ.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140198F38 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14019B430 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x14019C870 (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1401BB2D0 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?Initialize@LastWokenThread@@YAJXZ @ 0x1401CD438 (-Initialize@LastWokenThread@@YAJXZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x14021B070 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 *     InitializeContext @ 0x14021B720 (InitializeContext.c)
 *     ?Initialize@CKernelSensorThread@@SAJXZ @ 0x140225524 (-Initialize@CKernelSensorThread@@SAJXZ.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x140225698 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 */

__int64 __fastcall InitializeInputComponents(int a1, int a2, int a3)
{
  LastWokenThread *v3; // rcx
  signed int v4; // ebx
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 UserSessionState; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rbx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 UserInputMgrSessionState; // rax
  int v31; // edx
  int v32; // ecx
  int v33; // r8d

  v4 = InputExtensibilityCallout::Initialize(a1, a2, a3);
  if ( v4 >= 0 )
  {
    v4 = LastWokenThread::Initialize(v3);
    if ( v4 >= 0 )
    {
      v5 = Win32AllocPoolZInitImpl(256LL, 0x98uLL, 0x67697355u);
      v9 = v5;
      if ( v5 )
      {
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_OWORD *)(v5 + 16) = 0LL;
        *(_OWORD *)(v5 + 32) = 0LL;
        *(_OWORD *)(v5 + 48) = 0LL;
        *(_QWORD *)(v5 + 64) = 0LL;
        *(_QWORD *)(v5 + 72) = 1LL;
        *(_OWORD *)(v5 + 80) = 0LL;
        *(_OWORD *)(v5 + 96) = 0LL;
        *(_OWORD *)(v5 + 112) = 0LL;
        *(_QWORD *)(v5 + 128) = 0LL;
        *(_DWORD *)(v5 + 136) = 0;
        *(_BYTE *)(v5 + 140) = 0;
        *(_QWORD *)(v5 + 144) = 30LL;
        *(_QWORD *)v5 = 0LL;
        CInputGlobals::InitDimAndWakeSources((CInputGlobals *)v5);
      }
      else
      {
        v9 = 0LL;
      }
      *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 3056) = v9;
      UserSessionState = W32GetUserSessionState(v11, v10, v12);
      v4 = *(_QWORD *)(UserSessionState + 3056) == 0LL ? 0xC0000017 : 0;
      if ( *(_QWORD *)(UserSessionState + 3056) )
      {
        v4 = CCursorClip::Initialize();
        if ( v4 >= 0 )
        {
          v4 = CMasterInputThread::Initialize(v15, v14, v16);
          if ( v4 >= 0 )
          {
            v4 = CKernelSensorThread::Initialize();
            if ( v4 >= 0 )
            {
              v4 = CInputConfig::Initialize(v18, v17, v19);
              if ( v4 >= 0 )
              {
                v22 = Win32AllocPoolZInitImpl(256LL, 0x14uLL, 0x6B747455u);
                if ( v22 )
                {
                  *(_QWORD *)(W32GetUserSessionState(v21, v20, v23) + 19632) = v22;
                  v4 = CFrameIdGenerator::Initialize(v25, v24, v26);
                  if ( v4 >= 0 )
                  {
                    v4 = CInputSystemMetrics::Initialize();
                    if ( v4 >= 0 )
                    {
                      v4 = InputVirtualization::RootSynthesizedMouseList::Initialize(v28, v27, v29);
                      if ( v4 >= 0 )
                      {
                        UserInputMgrSessionState = W32GetUserInputMgrSessionState();
                        *(_QWORD *)(UserInputMgrSessionState + 16) = 0LL;
                        *(_QWORD *)(UserInputMgrSessionState + 24) = 0LL;
                        *(_QWORD *)(W32GetUserInputMgrSessionState() + 8) = 0LL;
                        v4 = 0;
                        *(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 3336) = 0LL;
                        InitializeContext();
                      }
                    }
                  }
                }
                else
                {
                  return (unsigned int)-1073741801;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
