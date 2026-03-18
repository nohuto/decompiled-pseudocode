/*
 * XREFs of ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036DC38
 * Callers:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14036D2A8 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 * Callees:
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
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v6; // edi
  struct DXGADAPTER *v10; // rdx
  DXGADAPTER *v11; // rcx
  __int64 v12; // rcx
  DXGFASTMUTEX *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rsi
  struct DXGGLOBAL *Global; // rax
  int v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  char v25; // [rsp+68h] [rbp-98h]
  _BYTE v26[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v30; // [rsp+C8h] [rbp-38h]
  char v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]

  v6 = 0;
  v10 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( !*((_BYTE *)v10 + 209) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v10, 0LL);
    if ( v31 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v29, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v11 = v30;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v30 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v30 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)"g");
        KeWaitForSingleObject((char *)v30 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v30, 0LL);
      v11 = v30;
    }
    v32 = 0LL;
    v31 = 1;
    if ( *((_DWORD *)v11 + 50) == 1 )
    {
      if ( v28 == v30 || (COREACCESS::AcquireShared((COREACCESS *)v27, 0LL), *((_DWORD *)v28 + 50) == 1) )
      {
        v13 = (DXGFASTMUTEX *)(a2 + 32);
        v26[1] = 1;
        v24 = a2 + 32;
        v25 = 0;
        if ( a2 == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 628;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
          v13 = 0LL;
        }
        if ( DXGFASTMUTEX::IsOwner(v13) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 635;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24);
        v23 = *(_QWORD *)(a1 + 32);
        v14 = *(_QWORD *)(a1 + 16);
        v22 = a3;
        LOBYTE(v21) = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 664LL))(
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                &v23,
                0,
                &v22,
                v21);
        v18 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1305;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
            v18,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
          v6 = v18;
        }
        else
        {
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qpx_EtwWriteTransfer(v23, v16, v17, 0, v23, v22);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
        }
        goto LABEL_18;
      }
      COREACCESS::Release((COREACCESS *)v27);
    }
    COREACCESS::Release((COREACCESS *)v29);
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 1279;
LABEL_18:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    return v6;
  }
  Global = DXGGLOBAL::GetGlobal();
  return DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((struct DXG_VMBUS_CHANNEL_BASE **)Global + 212), a4, a3, a5);
}
