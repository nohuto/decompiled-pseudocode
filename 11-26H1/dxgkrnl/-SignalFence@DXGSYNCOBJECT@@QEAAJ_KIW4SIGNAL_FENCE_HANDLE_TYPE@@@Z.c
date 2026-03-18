/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036D2A8
 * Callers:
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F9E70 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036CEC0 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qpx_EtwWriteTransfer @ 0x140013B9C (McTemplateK0qpx_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14018DC2C (-VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036DC38 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SignalFence(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _QWORD *v4; // rbx
  unsigned int v9; // edi
  struct DXGADAPTER *v10; // rdx
  DXGADAPTER *v11; // rcx
  __int64 v12; // rcx
  DXGFASTMUTEX *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  _QWORD *v21; // rbx
  struct DXGGLOBAL *Global; // rax
  int v23; // [rsp+40h] [rbp-C0h]
  DXGFASTMUTEX *v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v30; // [rsp+88h] [rbp-78h]
  _BYTE v31[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v32; // [rsp+C8h] [rbp-38h]
  char v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]

  v4 = (_QWORD *)(a1 + 440);
  if ( (*(_DWORD *)(a1 + 424) & 4) == 0 )
  {
    v9 = 0;
    v10 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 456) + 16LL);
    if ( *((_BYTE *)v10 + 209) )
    {
      Global = DXGGLOBAL::GetGlobal();
      return (unsigned int)DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(
                             *((struct DXG_VMBUS_CHANNEL_BASE **)Global + 212),
                             a3,
                             a2,
                             a4);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v10, 0LL);
    if ( v33 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v31, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v11 = v32;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v32 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v32 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)"g");
        KeWaitForSingleObject((char *)v32 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v32, 0LL);
      v11 = v32;
    }
    v34 = 0LL;
    v33 = 1;
    if ( *((_DWORD *)v11 + 50) == 1 )
    {
      if ( v30 == v32 || (COREACCESS::AcquireShared((COREACCESS *)v29, 0LL), *((_DWORD *)v30 + 50) == 1) )
      {
        v13 = (DXGFASTMUTEX *)(a1 + 32);
        v28[1] = 1;
        v24 = (DXGFASTMUTEX *)(a1 + 32);
        v25 = 0;
        if ( a1 == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 628;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
          v13 = v24;
        }
        if ( DXGFASTMUTEX::IsOwner(v13) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 635;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24);
        v27 = v4[4];
        v14 = v4[2];
        v26 = a2;
        LOBYTE(v23) = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 664LL))(
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                &v27,
                0,
                &v26,
                v23);
        v19 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1305;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
            v19,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
          return (unsigned int)v19;
        }
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qpx_EtwWriteTransfer(v17, v16, v18, 0, v27, v26);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
LABEL_19:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
        return v9;
      }
      COREACCESS::Release((COREACCESS *)v29);
    }
    COREACCESS::Release((COREACCESS *)v31);
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 1279;
    goto LABEL_19;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v24, (struct DXGFASTMUTEX *const)(a1 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24);
  if ( (_QWORD *)*v4 == v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1340;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!IsListEmpty(&pCrossAdapterSyncObject->m_DxgSyncObjectSyncObjectListHead)",
      1340LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v21 = (_QWORD *)*v4;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v21 - 19, a1, a2, a3, a4);
}
