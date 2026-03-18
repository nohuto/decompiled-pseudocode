/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D52B0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1400787C0 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     DxgkSignalEventCB @ 0x140084D60 (DxgkSignalEventCB.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022EAE8 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N5@Z @ 0x140372CF0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 */

__int64 __fastcall DrtTestSignalEventCb(struct ADAPTER_RENDER **a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // r15
  __int64 v6; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned int v8; // r12d
  unsigned int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  const wchar_t *v13; // r9
  unsigned int v14; // ebx
  unsigned int v15; // edi
  unsigned int HostProcess; // eax
  int v17; // eax
  void *v18; // rax
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v20; // rcx
  _QWORD *v21; // rcx
  int v23; // eax
  _BYTE v24[16]; // [rsp+50h] [rbp-30h] BYREF
  _DXGKARGCB_SIGNALEVENT v25; // [rsp+60h] [rbp-20h] BYREF
  struct DXGADAPTERSYNCOBJECT *v26; // [rsp+B8h] [rbp+38h] BYREF

  if ( *((_DWORD *)a2 + 1) >= 0x20u )
  {
    *(_QWORD *)&v25.0 = 0LL;
    v26 = 0LL;
    Current = DXGPROCESS::GetCurrent();
    v5 = Current;
    if ( a1 )
    {
      if ( Current )
      {
        v6 = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v24, Global, 0);
        if ( !*((_BYTE *)a2 + 25) )
          goto LABEL_18;
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v24);
        v8 = *((_DWORD *)a2 + 4);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v5 + 248));
        v9 = (v8 >> 6) & 0xFFFFFF;
        if ( v9 < *((_DWORD *)v5 + 74) )
        {
          v10 = *(_DWORD *)(*((_QWORD *)v5 + 35) + 16LL * v9 + 8);
          if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v5 + 35) + 16LL * v9 + 8) & 0x60)
            && (v10 & 0x2000) == 0
            && (v10 & 0x1F) != 0 )
          {
            v11 = *((_QWORD *)v5 + 35);
            if ( (*(_BYTE *)(v11 + 16LL * v9 + 8) & 0x1F) == 8 )
            {
              v6 = *(_QWORD *)(v11 + 16LL * v9);
              goto LABEL_12;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v6 = 0LL;
LABEL_12:
        _InterlockedDecrement((volatile signed __int32 *)v5 + 66);
        ExReleasePushLockSharedEx((char *)v5 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( !v6 )
        {
          WdLogSingleEntry1(2LL);
          v12 = *((_QWORD *)a2 + 2);
          v13 = L"Invalid sync object handle: 0x%I64x";
          WdLogGlobalForLineNumber = 95;
LABEL_14:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
          LODWORD(v6) = -1073741811;
          goto LABEL_30;
        }
        if ( !*((_BYTE *)a1 + 209) )
        {
LABEL_22:
          v18 = (void *)*((_QWORD *)v5 + 8);
          v25.hDxgkProcess = v18;
          if ( *((_BYTE *)a2 + 25) )
          {
            v25.Flags |= 1u;
            DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 32));
            DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                                     (DXGSYNCOBJECT *)v6,
                                     a1[396],
                                     &v26,
                                     0LL,
                                     0LL,
                                     0LL,
                                     0,
                                     0,
                                     0);
            v20 = (struct _KTHREAD **)(v6 + 32);
            LODWORD(v6) = DxgAdapterSyncObject;
            DXGFASTMUTEX::Release(v20);
            if ( (int)v6 < 0 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 132;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to get adapter sync object",
                132LL,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_30:
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v24);
              return (unsigned int)v6;
            }
            v21 = (_QWORD *)*((_QWORD *)v26 + 5);
            v25.hEvent = v21;
            if ( !v21 || !v21[1] )
            {
              WdLogSingleEntry0(2LL);
              v12 = 139LL;
              v13 = L"Invalid CpuEvent object";
              WdLogGlobalForLineNumber = 139;
              goto LABEL_14;
            }
          }
          else
          {
            if ( !v18 )
              goto LABEL_29;
            v25.hEvent = (HANDLE)*((_QWORD *)a2 + 2);
          }
          if ( *((_BYTE *)a2 + 24) )
            v23 = CallDxgkSignalEventCbAtDispatch(&v25);
          else
            v23 = DxgkSignalEventCB(&v25);
          LODWORD(v6) = v23;
          goto LABEL_30;
        }
        *((_QWORD *)a2 + 2) = (unsigned int)DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v6, *((_DWORD *)a2 + 4));
LABEL_18:
        if ( *((_BYTE *)a1 + 209) )
        {
          v14 = *((_DWORD *)a2 + 1);
          v15 = *((_DWORD *)a1 + 1200);
          HostProcess = DXGPROCESS::GetHostProcess(v5);
          v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(a1 + 589),
                  HostProcess,
                  v15,
                  0,
                  0,
                  D3DKMT_ESCAPE_DRT_TEST,
                  0,
                  v14,
                  (unsigned __int8 *)a2);
          v6 = v17;
          if ( v17 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 117;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Paravirtualized escape failed: 0x%I64x",
              v6,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_30;
        }
        goto LABEL_22;
      }
    }
  }
  return 3221225485LL;
}
