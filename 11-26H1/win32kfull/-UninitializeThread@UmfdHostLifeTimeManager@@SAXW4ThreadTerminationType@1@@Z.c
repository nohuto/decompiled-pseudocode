/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x1401C4878
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     UmfdUninitializeThread @ 0x1401C4860 (UmfdUninitializeThread.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1400CF0F4 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1401C49AC (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1401C49E0 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x140295AC0 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x14034D860 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x14034EAB8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::UninitializeThread(__int64 a1)
{
  int v1; // esi
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 SessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct W32_PUSH_LOCK *v10; // rbx
  __int64 v11; // rcx
  struct UmfdTls *v12; // rax
  struct UmfdTls *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rcx
  void *ServerPort; // rdi
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v17; // rbx
  struct _GRETHREAD *v18; // rax
  void *v19; // rcx

  v1 = a1;
  CurrentThread = GreGetCurrentThread(a1);
  if ( CurrentThread && *((_QWORD *)CurrentThread + 39) )
  {
    SessionState = W32GetSessionState(v4, v3, v5);
    v10 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24240LL);
    if ( *(_QWORD *)(SessionState + 96) != -24240LL )
      GreAcquirePushLockExclusive(v10);
    *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96) + 24272LL) = 0;
    if ( v10 )
      GreReleasePushLockExclusive(v10);
    v12 = UmfdTls::EnsureTls(v11);
    v13 = v12;
    v14 = *((_DWORD *)v12 + 2);
    if ( v1 == 1 )
      UmfdHostLifeTimeManager::RecordUnhandledException(*((const struct FontDriverDdiRequest **)v12 + 3));
    ServerPort = (void *)UmfdGetServerPort(v14);
    if ( ServerPort )
    {
      v17 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v13 + 2);
      if ( v17 )
      {
        if ( *v17 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v17);
          *v17 = 0LL;
        }
        EngFreeMem(v17);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v18 = GreGetCurrentThread(v15);
    if ( v18 )
    {
      v19 = (void *)*((_QWORD *)v18 + 39);
      if ( v19 )
      {
        *((_QWORD *)v18 + 39) = 0LL;
        UmfdTls::Destroy(v19);
      }
    }
  }
}
