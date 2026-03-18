/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x140161938
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     UmfdUninitializeThread @ 0x140161920 (UmfdUninitializeThread.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140161CB8 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x140161D0C (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x140161D40 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x14026E2D8 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x140338544 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1403416E8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeThread(__int64 a1, __int64 a2)
{
  int v2; // esi
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 SessionState; // rax
  __int64 v7; // rdx
  int v8; // ecx
  struct W32_PUSH_LOCK *v9; // rbx
  struct UmfdTls *v10; // rax
  struct UmfdTls *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *ServerPort; // rdi
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v16; // rbx
  struct _GRETHREAD *v17; // rax
  void *v18; // rcx

  v2 = a1;
  CurrentThread = GreGetCurrentThread(a1, a2);
  if ( CurrentThread && *((_QWORD *)CurrentThread + 39) )
  {
    SessionState = W32GetSessionState(v5, v4);
    v9 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24256LL);
    if ( *(_QWORD *)(SessionState + 96) != -24256LL )
      GreAcquirePushLockExclusive(v9);
    *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v8, v7) + 96) + 24288LL) = 0;
    if ( v9 )
      GreReleasePushLockExclusive(v9);
    v10 = UmfdTls::EnsureTls();
    v11 = v10;
    v12 = *((_DWORD *)v10 + 2);
    if ( v2 == 1 )
      UmfdHostLifeTimeManager::RecordUnhandledException(*((const struct FontDriverDdiRequest **)v10 + 3));
    ServerPort = (void *)UmfdGetServerPort(v12);
    if ( ServerPort )
    {
      v16 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v11 + 2);
      if ( v16 )
      {
        if ( *v16 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v16);
          *v16 = 0LL;
        }
        EngFreeMem(v16);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v17 = GreGetCurrentThread(v14, v13);
    if ( v17 )
    {
      v18 = (void *)*((_QWORD *)v17 + 39);
      if ( v18 )
      {
        *((_QWORD *)v17 + 39) = 0LL;
        UmfdTls::Destroy(v18);
      }
    }
  }
}
