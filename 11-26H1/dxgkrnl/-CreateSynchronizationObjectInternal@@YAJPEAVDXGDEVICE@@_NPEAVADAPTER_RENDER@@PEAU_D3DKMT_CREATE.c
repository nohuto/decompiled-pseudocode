/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A778C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x14020A050 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1402204F0 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403C442C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140423030 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1401FE770 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140221014 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x14022DBB8 (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        char a2,
        ADAPTER_RENDER *a3,
        __int64 a4,
        int a5,
        int a6,
        DXGSYNCOBJECT **a7,
        __int64 *a8,
        __int64 a9)
{
  unsigned int v9; // edi
  __int64 v11; // r14
  __int64 v13; // rbx
  DXGSYNCOBJECT **v14; // r12
  int *v15; // r15
  int v16; // edx
  __int64 v17; // rax
  const wchar_t *v18; // r9
  int v20; // r8d
  int v21; // ecx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v23; // rax
  int v24; // ebx
  DXGSYNCOBJECT *v25; // rdi
  __int64 v26; // r12
  DXGPROCESS *Current; // rax
  ADAPTER_RENDER *v28; // rdx
  int v29; // ecx
  unsigned int HostProcess; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  int SyncObject; // eax
  _QWORD *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 *v37; // r12
  int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // eax
  int v41; // [rsp+38h] [rbp-59h]
  unsigned int v42[4]; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v43[8]; // [rsp+88h] [rbp-9h]
  DXGSYNCOBJECT *v44; // [rsp+D8h] [rbp+47h] BYREF
  char v45; // [rsp+E0h] [rbp+4Fh]
  ADAPTER_RENDER *v46; // [rsp+E8h] [rbp+57h]

  v46 = a3;
  v45 = a2;
  v9 = 0;
  v11 = (__int64)a3;
  v13 = 40LL;
  if ( a1 && !ADAPTER_RENDER::IsCoreResourceSharedOwner(a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 40;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice == NULL || pAdapter->IsCoreResourceSharedOwner()",
      40LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = a7;
  v15 = (int *)(a4 + 8);
  LODWORD(a7) = 0;
  v44 = 0LL;
  *v14 = 0LL;
  v16 = *(_DWORD *)(a4 + 12);
  if ( (v16 & 0x100) != 0 )
  {
    if ( *v15 != 4 )
    {
      WdLogSingleEntry0(2LL);
      v17 = 52LL;
      v18 = L"SignalByKmd can only be set for D3DDDI_CPU_NOTIFICATION objects";
LABEL_7:
      WdLogGlobalForLineNumber = v17;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    if ( (v16 & 5) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v17 = 57LL;
      v18 = L"SignalByKmd cannot be used with CrossAdapter or Shared";
      goto LABEL_7;
    }
    v16 |= 0x30u;
    *(_DWORD *)(a4 + 12) = v16;
  }
  v20 = *v15;
  if ( *v15 == 5 || v20 == 6 )
  {
    if ( v20 != 5 )
      v13 = 48LL;
    v9 = *(_DWORD *)(v13 + a4);
    v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 296LL);
    if ( v21 == 1 )
    {
      v9 = 1;
    }
    else if ( v9 >= 1 << v21 )
    {
      v9 = (1 << v21) - 1;
    }
    if ( v20 == 6 )
      *(_DWORD *)(a4 + 12) = v16 | 0x17;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
  v23 = DXGGLOBAL::GetGlobal();
  v24 = a5;
  LOBYTE(v41) = v45;
  LODWORD(v11) = DXGGLOBAL::CreateSyncObject(
                   v23,
                   v11,
                   a1,
                   v9,
                   a4 + 8,
                   a5,
                   v41,
                   0LL,
                   &v44,
                   a8,
                   (unsigned __int64)&a7 & -(__int64)(a1 != 0),
                   a9,
                   0LL,
                   0LL);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42);
  if ( (int)v11 >= 0 )
  {
    v25 = v44;
    *(_DWORD *)(a4 + 88) = (_DWORD)a7;
    *(_DWORD *)(a4 + 80) = *((_DWORD *)v25 + 20);
    *v14 = v25;
    v26 = (*((_DWORD *)v25 + 107) & 0x40) != 0 ? *((_QWORD *)v25 + 11) : 0LL;
    Current = DXGPROCESS::GetCurrent();
    v28 = v46;
    if ( *(_BYTE *)(*((_QWORD *)v46 + 2) + 209LL) )
    {
      v29 = a6;
      if ( a6 )
      {
        *((_DWORD *)v25 + 107) |= 8u;
        *((_DWORD *)v25 + 21) = v29;
      }
      else
      {
        if ( a1 )
        {
          HostProcess = DXGPROCESS::GetHostProcess(Current);
          if ( !HostProcess )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 161;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get host adapter process, returning 0x%I64x",
              -1073741823LL,
              0LL,
              0LL,
              0LL,
              0LL);
            return 3221225473LL;
          }
          v28 = v46;
        }
        else
        {
          HostProcess = 0;
        }
        if ( v26 )
          *(_QWORD *)(a4 + 16) = v26;
        v31 = *((_QWORD *)v28 + 2) + 4712LL;
        *(_OWORD *)v42 = 0LL;
        *(_OWORD *)v43 = 0LL;
        if ( a1 )
          v32 = *(unsigned int *)(a1 + 472);
        else
          v32 = 0LL;
        SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(v31, HostProcess, v32, a4, v24, v42);
        v11 = SyncObject;
        if ( SyncObject >= 0 )
        {
          if ( *v15 == 5 || *v15 == 6 )
          {
            v34 = (_QWORD *)(a4 + 32);
            v35 = *a8;
            *(_DWORD *)(v35 + 44) = v42[0];
            v36 = *(_QWORD *)&v42[2];
            *(_QWORD *)(v35 + 48) = *(_QWORD *)&v42[2];
            if ( *v15 == 5 )
              *v34 = v36;
            else
              *(_QWORD *)(a4 + 40) = v36;
            v37 = (__int64 *)(v35 + 56);
            v38 = MapGuestFenceCpuVaToHost(
                    v43[0],
                    (void **)(v35 + 56),
                    (unsigned __int64 *)(v35 + 80),
                    (unsigned int *)(v35 + 88));
            v11 = v38;
            if ( v38 >= 0 )
            {
              v39 = *v37;
              if ( *v15 == 5 )
                *(_QWORD *)(a4 + 24) = v39;
              else
                *v34 = v39;
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 207;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
                v11,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else if ( v42[0] )
          {
            LODWORD(v11) = DXGSYNCOBJECT::SetHostHandle(v25, (unsigned int)a7, v42[0]);
          }
          if ( (*((_DWORD *)v25 + 106) & 1) != 0 )
          {
            v40 = v42[1];
            *((_DWORD *)v25 + 107) &= ~8u;
            *((_DWORD *)v25 + 21) = v40;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 182;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"VmBusSendCreateSyncObject failed, returning 0x%I64x",
            v11,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
    }
  }
  return (unsigned int)v11;
}
