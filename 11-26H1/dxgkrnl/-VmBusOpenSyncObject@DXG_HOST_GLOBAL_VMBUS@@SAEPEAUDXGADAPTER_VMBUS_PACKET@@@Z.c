/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402292F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403527B8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CC54 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // edx
  int v8; // r8d
  int EntryType; // ebx
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  const wchar_t *v14; // r9
  __int64 v15; // rax
  DXGSHAREDVMOBJECT *v16; // rsi
  DXGSYNCOBJECT *v17; // rbx
  struct DXGGLOBAL *Global; // rax
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v20; // rbx
  struct DXGPROCESS *v21; // rdi
  char *v22; // r14
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rbx
  unsigned int v26; // edx
  struct _KTHREAD **v27; // r8
  struct DXGDEVICE *v28; // r15
  __int64 v29; // r9
  struct DXGGLOBAL *v30; // rax
  __int64 v31; // rbx
  unsigned int v32; // r14d
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  int v36; // edx
  __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned int v39; // r14d
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rbx
  int v43; // edx
  DXGSYNCOBJECT *v44; // rbx
  struct ADAPTER_RENDER *v45; // rdx
  struct DXGPROCESS *v46; // rax
  unsigned __int64 v47; // rbx
  struct DXGPROCESS *v48; // rdi
  char *v49; // rsi
  unsigned int v50; // ecx
  __int64 v51; // r8
  int v52; // edx
  __int64 v53; // rbx
  struct DXGGLOBAL *v54; // rax
  DXGGLOBAL *v55; // rax
  struct DXGPROCESS *v56; // rax
  unsigned __int64 v57; // rbx
  struct DXGPROCESS *v58; // rdi
  char *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 v64; // [rsp+28h] [rbp-E0h]
  __int64 v65; // [rsp+28h] [rbp-E0h]
  __int64 v66; // [rsp+28h] [rbp-E0h]
  __int64 v67; // [rsp+28h] [rbp-E0h]
  __int64 v68; // [rsp+28h] [rbp-E0h]
  unsigned int v69; // [rsp+40h] [rbp-C8h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v70; // [rsp+58h] [rbp-B0h]
  struct DXGDEVICE *v71; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v72[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v73[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v74[24]; // [rsp+A8h] [rbp-60h] BYREF
  struct DXGADAPTERSYNCOBJECT *v75; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v76[4]; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGDEVICE *v77; // [rsp+D8h] [rbp-30h]
  _BYTE v78[160]; // [rsp+E8h] [rbp-20h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    v4 = *((_QWORD *)a1 + 12);
    *(_OWORD *)v76 = 0LL;
    v77 = 0LL;
    v5 = *(_DWORD *)(v2 + 28);
    v6 = v4 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
    v7 = (v5 >> 6) & 0xFFFFFF;
    if ( v7 < *(_DWORD *)(v4 + 296)
      && (v8 = *(_DWORD *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8),
          ((v5 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8) & 0x60))
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v4 + 280);
    }
    else
    {
      EntryType = 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 16));
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( EntryType == 13 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v74,
        *((struct _KTHREAD ***)a1 + 12));
      v10 = *((_QWORD *)a1 + 12);
      v11 = (v3[7] >> 6) & 0xFFFFFF;
      if ( v11 < *(_DWORD *)(v10 + 296) )
      {
        v12 = *(_DWORD *)(*(_QWORD *)(v10 + 280) + 16LL * v11 + 8);
        if ( ((v3[7] >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v10 + 280) + 16LL * v11 + 8) & 0x60)
          && (v12 & 0x2000) == 0
          && (v12 & 0x1F) != 0 )
        {
          v13 = *(_QWORD *)(v10 + 280);
          if ( (*(_BYTE *)(v13 + 16LL * v11 + 8) & 0x1F) == 0xD )
          {
            v16 = *(DXGSHAREDVMOBJECT **)(v13 + 16LL * v11);
            if ( v16 )
            {
              if ( *(_DWORD *)v16 != 4 )
              {
                WdLogSingleEntry1(2LL);
                v15 = *(int *)v16;
                v14 = L"Invalid shared vm object type: 0x%I64x";
                WdLogGlobalForLineNumber = 7890;
                goto LABEL_17;
              }
              v17 = *(DXGSYNCOBJECT **)(*((_QWORD *)v16 + 1) + 32LL);
              if ( v17 )
              {
                DXGSHAREDVMOBJECT::AddReference(v16);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
                Global = DXGGLOBAL::GetGlobal();
                DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v72, Global, 0);
                DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v72);
                v76[1] = DXGSYNCOBJECT::Open(
                           v17,
                           0LL,
                           0LL,
                           0LL,
                           v76,
                           0LL,
                           0LL,
                           0,
                           0LL,
                           0,
                           (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0,
                           0LL,
                           0LL,
                           0,
                           0,
                           0);
                if ( (v76[1] & 0x80000000) == 0 )
                {
                  Current = DXGPROCESS::GetCurrent();
                  v20 = v76[0];
                  v21 = Current;
                  v22 = (char *)Current + 248;
                  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
                  v23 = ((unsigned int)v20 >> 6) & 0xFFFFFF;
                  if ( (unsigned int)v23 < *((_DWORD *)v21 + 74) )
                  {
                    v24 = *((_QWORD *)v21 + 35);
                    if ( (((unsigned int)v20 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
                      && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
                    {
                      v25 = 16 * ((v20 >> 6) & 0xFFFFFF);
                      if ( (*(_DWORD *)(v25 + v24 + 8) & 0x2000) == 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 224;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                          224LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      *(_DWORD *)(v25 + *((_QWORD *)v21 + 35) + 8) &= ~0x2000u;
                    }
                  }
                  *((_QWORD *)v21 + 32) = 0LL;
                  ExReleasePushLockExclusiveEx(v22, 0LL);
                  KeLeaveCriticalRegion();
                }
                else
                {
                  WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
                  v64 = (unsigned int)v3[7];
                  WdLogGlobalForLineNumber = 7928;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
                    v64,
                    -1073741811LL,
                    0LL,
                    0LL,
                    0LL);
                }
                DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v72);
                DXGSHAREDVMOBJECT::ReleaseReference(v16);
                goto LABEL_78;
              }
              WdLogSingleEntry1(2LL);
              v14 = L"Cannot open keyed mutex from a shared resource which doesn't include a keyed mutex: 0x%I64x";
              WdLogGlobalForLineNumber = 7902;
LABEL_16:
              v15 = (unsigned int)v3[7];
LABEL_17:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v15, 0LL, 0LL, 0LL, 0LL);
              v76[1] = -1073741811;
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v74);
LABEL_78:
              VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v76, 0x18u);
              LOBYTE(v2) = 1;
              return v2;
            }
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      WdLogSingleEntry1(2LL);
      v14 = L"Invalid shared vm object handle: 0x%I64x";
      WdLogGlobalForLineNumber = 7884;
      goto LABEL_16;
    }
    v26 = v3[6];
    if ( !v26 )
    {
      v54 = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v72, v54, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v72);
      v55 = DXGGLOBAL::GetGlobal();
      v76[1] = DXGGLOBAL::OpenSyncObject(v55, v3[7], &v71, v76, &v75);
      if ( (v76[1] & 0x80000000) == 0 )
      {
        v56 = DXGPROCESS::GetCurrent();
        v57 = v76[0];
        v58 = v56;
        v59 = (char *)v56 + 248;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v56 + 248));
        v60 = ((unsigned int)v57 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v60 < *((_DWORD *)v58 + 74) )
        {
          v61 = *((_QWORD *)v58 + 35);
          if ( (((unsigned int)v57 >> 25) & 0x60) == (*(_BYTE *)(v61 + 16 * v60 + 8) & 0x60)
            && (*(_DWORD *)(v61 + 16 * v60 + 8) & 0x1F) != 0 )
          {
            v62 = 16 * ((v57 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v62 + v61 + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 224;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                224LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)v58 + 35) + v62 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v58 + 32) = 0LL;
        ExReleasePushLockExclusiveEx(v59, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
        v68 = (unsigned int)v3[7];
        WdLogGlobalForLineNumber = 8005;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
          v68,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v72);
      goto LABEL_78;
    }
    v27 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
    v71 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v73, v26, v27, &v71);
    v28 = v71;
    if ( !v71 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)v3[6], -1073741811LL);
      v65 = (unsigned int)v3[6];
      WdLogGlobalForLineNumber = 7941;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v65,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v76[1] = -1073741811;
LABEL_36:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v73);
      goto LABEL_78;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72, v71);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, (__int64)v28, 0, v29, 0);
    v76[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v78, 0LL);
    if ( (v76[1] & 0x80000000) != 0 )
    {
LABEL_38:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v72);
      goto LABEL_36;
    }
    v30 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v74, v30, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v74);
    v31 = *((_QWORD *)a1 + 12);
    v32 = v3[7];
    v33 = v31 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v31 + 248));
    v34 = (v32 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *(_DWORD *)(v31 + 296)
      && (v35 = *(_QWORD *)(v31 + 280),
          v36 = *(_DWORD *)(v35 + 16 * v34 + 8),
          ((v32 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60))
      && (v36 & 0x2000) == 0
      && (v36 & 0x1F) != 0
      && (*(_BYTE *)(v35 + 16 * (((unsigned __int64)v32 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
    {
      v37 = *(_QWORD *)(v35 + 16 * (((unsigned __int64)v32 >> 6) & 0xFFFFFF));
    }
    else
    {
      v37 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v33 + 16));
    ExReleasePushLockSharedEx(v33, 0LL);
    KeLeaveCriticalRegion();
    if ( v37 )
    {
      v44 = *(DXGSYNCOBJECT **)(v37 + 32);
      goto LABEL_59;
    }
    v38 = *((_QWORD *)a1 + 12);
    v39 = v3[7];
    v40 = v38 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v38 + 248));
    v41 = (v39 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v41 < *(_DWORD *)(v38 + 296) )
    {
      v42 = *(_QWORD *)(v38 + 280);
      v43 = *(_DWORD *)(v42 + 16 * v41 + 8);
      if ( ((v39 >> 25) & 0x60) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x60) && (v43 & 0x2000) == 0 && (v43 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v42 + 16 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 8 )
        {
          v44 = *(DXGSYNCOBJECT **)(v42 + 16 * (((unsigned __int64)v39 >> 6) & 0xFFFFFF));
LABEL_54:
          _InterlockedDecrement((volatile signed __int32 *)(v40 + 16));
          ExReleasePushLockSharedEx(v40, 0LL);
          KeLeaveCriticalRegion();
          if ( !v44 )
          {
            WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
            v66 = (unsigned int)v3[7];
            WdLogGlobalForLineNumber = 7963;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid sync object (0x%I64x) specified, returning 0x%I64x",
              v66,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v76[1] = -1073741811;
LABEL_56:
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v74);
            goto LABEL_38;
          }
LABEL_59:
          v45 = (struct ADAPTER_RENDER *)*((_QWORD *)v28 + 2);
          v70.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v3[9];
          v69 = v3[8];
          v71 = 0LL;
          v76[1] = DXGSYNCOBJECT::Open(
                     v44,
                     v45,
                     v28,
                     0LL,
                     v76,
                     (void **)&v71,
                     (unsigned __int64 *)&v76[2],
                     v69,
                     &v75,
                     1,
                     v70,
                     0LL,
                     0LL,
                     0,
                     0,
                     0);
          if ( (v76[1] & 0x80000000) == 0 )
          {
            v46 = DXGPROCESS::GetCurrent();
            v47 = v76[0];
            v48 = v46;
            v49 = (char *)v46 + 248;
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v46 + 248));
            v50 = ((unsigned int)v47 >> 6) & 0xFFFFFF;
            if ( v50 < *((_DWORD *)v48 + 74) )
            {
              v51 = *((_QWORD *)v48 + 35);
              v52 = *(_DWORD *)(v51 + 16LL * v50 + 8);
              if ( (((unsigned int)v47 >> 25) & 0x60) == (v52 & 0x60) && (v52 & 0x1F) != 0 )
              {
                v53 = 16 * ((v47 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v53 + v51 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 224;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    224LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                *(_DWORD *)(v53 + *((_QWORD *)v48 + 35) + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)v48 + 32) = 0LL;
            ExReleasePushLockExclusiveEx(v49, 0LL);
            KeLeaveCriticalRegion();
            v77 = v71;
          }
          else
          {
            WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
            v67 = (unsigned int)v3[7];
            WdLogGlobalForLineNumber = 7988;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
              v67,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_56;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v44 = 0LL;
    goto LABEL_54;
  }
  return v2;
}
