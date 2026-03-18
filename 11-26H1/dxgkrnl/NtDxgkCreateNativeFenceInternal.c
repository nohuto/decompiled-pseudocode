/*
 * XREFs of NtDxgkCreateNativeFenceInternal @ 0x140200CD8
 * Callers:
 *     NtDxgkCreateNativeFence @ 0x140200CB0 (NtDxgkCreateNativeFence.c)
 *     ?VmBusCreateNativeFence@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223BD0 (-VmBusCreateNativeFence@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x140030B4C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140038160 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_MSRC99194_58219321__private_IsEnabledNoReportingNoInline @ 0x140082084 (Feature_MSRC99194_58219321__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140221014 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateNativeFence@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATENATIVEFENCE@@PEAUDXGKVMB_COMMAND_CREATENATIVEFENCE_RETURN@@@Z @ 0x14022D3E8 (-VmBusSendCreateNativeFence@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATENATIVEFENCE@@PE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403C698C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall NtDxgkCreateNativeFenceInternal(_OWORD *Src, _DWORD *a2, char a3)
{
  struct DXGPROCESS *Current; // r14
  unsigned int v6; // ebx
  struct DXGDEVICE *v8; // r15
  _DWORD *v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r12
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v14; // rax
  __int64 v15; // r12
  __int64 v16; // r8
  unsigned int HostProcess; // r12d
  int NativeFence; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdi
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v39[2]; // [rsp+78h] [rbp-290h] BYREF
  struct DXGDEVICE *v40; // [rsp+80h] [rbp-288h] BYREF
  _BYTE v41[16]; // [rsp+88h] [rbp-280h] BYREF
  _QWORD v42[2]; // [rsp+98h] [rbp-270h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-260h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-258h] BYREF
  _BYTE v45[8]; // [rsp+B8h] [rbp-250h] BYREF
  _DWORD *v46; // [rsp+C0h] [rbp-248h]
  struct DXGPROCESS *v47; // [rsp+C8h] [rbp-240h]
  _BYTE v48[16]; // [rsp+D0h] [rbp-238h] BYREF
  _OWORD v49[7]; // [rsp+E0h] [rbp-228h] BYREF
  unsigned int v50[56]; // [rsp+150h] [rbp-1B8h] BYREF
  _BYTE v51[160]; // [rsp+230h] [rbp-D8h] BYREF

  v46 = a2;
  Current = DXGPROCESS::GetCurrent();
  v47 = Current;
  if ( !Current )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1929;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v6;
  }
  memset(v50, 0, 0xD8uLL);
  if ( a3 )
  {
    RtlCopyFromUser(v50, Src, 0xD8uLL);
  }
  else
  {
    *(_OWORD *)v50 = *Src;
    *(_OWORD *)&v50[4] = Src[1];
    *(_OWORD *)&v50[8] = Src[2];
    *(_OWORD *)&v50[12] = Src[3];
    *(_OWORD *)&v50[16] = Src[4];
    *(_OWORD *)&v50[20] = Src[5];
    *(_OWORD *)&v50[24] = Src[6];
    *(_OWORD *)&v50[28] = Src[7];
    *(_OWORD *)&v50[32] = Src[8];
    *(_OWORD *)&v50[36] = Src[9];
    *(_OWORD *)&v50[40] = Src[10];
    *(_OWORD *)&v50[44] = Src[11];
    *(_OWORD *)&v50[48] = Src[12];
    *(_QWORD *)&v50[52] = *((_QWORD *)Src + 26);
  }
  if ( v50[21] > 1 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1957;
    return v6;
  }
  if ( v50[46] || (v50[22] & 0x7FFFF800) != 0 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1965;
    return v6;
  }
  if ( ((v50[22] >> 1) & 1) != 0 )
  {
    if ( (v50[22] & 1) == 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)&gDxgkrnlCounterAccumulated, 1u);
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1973;
      return -1073741811LL;
    }
  }
  else if ( (v50[22] & 1) == 0 )
  {
    goto LABEL_17;
  }
  if ( ((v50[22] >> 1) & 1) == 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1979;
    return -1073741811LL;
  }
LABEL_17:
  if ( (v50[22] & 0x10) != 0 && (v50[22] & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1985;
    return -1073741811LL;
  }
  if ( !(unsigned __int8)RtlIsZeroMemory(&v50[47], 28LL)
    || !(unsigned __int8)RtlIsZeroMemory(&v50[39], 24LL)
    || !(unsigned __int8)RtlIsZeroMemory(&v50[30], 32LL) )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1994;
    return v6;
  }
  v40 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v45, v50[0], (struct _KTHREAD **)Current, &v40);
  v8 = v40;
  if ( !v40 )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, v50[0], -1073741811LL);
    WdLogGlobalForLineNumber = 2004;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v50[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_42:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
    return v6;
  }
  if ( (*((_BYTE *)v40 + 1917) & 1) != 0 && *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) <= 0x2Cu )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2012;
    v6 = -1073741637;
    goto LABEL_42;
  }
  *(_QWORD *)&v39[0].hSyncObject = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v42[0] = 0LL;
  v9 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 16LL);
  if ( v50[38] >= v9[74] )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2026;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid physical adapter index. Index=%u",
      v50[38],
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_30:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v42, 0LL);
    v6 = -1073741811;
    goto LABEL_42;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v8, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v8, 0, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(2LL, v8, v11);
    WdLogGlobalForLineNumber = 2036;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire COREDEVICEACCESS for DXGDEVICE:0x%I64x, returning 0x%I64x",
      (__int64)v8,
      v12,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v42, 0LL);
    v6 = v12;
    goto LABEL_42;
  }
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v9) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2042;
LABEL_35:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
    goto LABEL_30;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) && (v9[626] & 0x800) == 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2050;
    goto LABEL_35;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v42, (struct DXGADAPTER *)v9);
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v48);
  v14 = DXGGLOBAL::GetGlobal();
  LODWORD(v15) = DXGGLOBAL::CreateSyncObject(
                   v14,
                   *((_QWORD *)v8 + 2),
                   v8,
                   v50[20],
                   0LL,
                   1,
                   1,
                   0LL,
                   v39,
                   &v43,
                   &v50[1],
                   &v44,
                   &v50[18],
                   &v50[2]);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48);
  if ( (*((_BYTE *)v8 + 1917) & 1) != 0 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(Current);
    if ( !HostProcess )
    {
      v6 = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2086;
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
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v42, 0LL);
      goto LABEL_42;
    }
    memset(v49, 0, sizeof(v49));
    NativeFence = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateNativeFence(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v9 + 1178),
                    HostProcess,
                    *((_DWORD *)v8 + 118),
                    (const struct _D3DKMT_CREATENATIVEFENCE *)v50,
                    (struct DXGKVMB_COMMAND_CREATENATIVEFENCE_RETURN *)v49);
    v15 = NativeFence;
    if ( NativeFence >= 0 )
    {
      v19 = v43;
      *(_DWORD *)(v43 + 44) = DWORD1(v49[0]);
      v20 = *(_QWORD *)&v49[1];
      *(_QWORD *)(v19 + 48) = *(_QWORD *)&v49[1];
      v21 = *((_QWORD *)&v49[1] + 1);
      *(_QWORD *)(v19 + 104) = *((_QWORD *)&v49[1] + 1);
      *(_QWORD *)&v50[26] = v20;
      *(_QWORD *)&v50[28] = v21;
      *(_OWORD *)&v50[2] = v49[3];
      *(_OWORD *)&v50[6] = v49[4];
      *(_OWORD *)&v50[10] = v49[5];
      *(_OWORD *)&v50[14] = v49[6];
      v22 = (_QWORD *)(v19 + 56);
      v23 = MapGuestFenceCpuVaToHost(
              *(unsigned __int64 *)&v49[2],
              (void **)(v19 + 56),
              (unsigned __int64 *)(v19 + 80),
              (unsigned int *)(v19 + 88));
      v15 = v23;
      if ( v23 >= 0 )
      {
        *(_QWORD *)&v50[24] = *v22;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2119;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v24 = *(_QWORD *)&v39[0].hSyncObject;
      if ( (*(_DWORD *)(*(_QWORD *)&v39[0].hSyncObject + 424LL) & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)&v39[0].hSyncObject + 84LL) = DWORD2(v49[0]);
        *(_DWORD *)(v24 + 428) &= ~8u;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2099;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateSyncObject failed, returning 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (int)v15 >= 0 )
  {
    *v46 = *(_DWORD *)(*(_QWORD *)&v39[0].hSyncObject + 296LL);
    if ( a3 )
    {
      RtlWriteULongToUser((_DWORD *)Src + 1, v50[1]);
      RtlCopyToUser((char *)Src + 72, &v50[18], 0x70uLL);
      RtlCopyToUser((char *)Src + 8, &v50[2], 0x40uLL);
      v25 = v50[1];
    }
    else
    {
      v25 = v50[1];
      *((_DWORD *)Src + 1) = v50[1];
      *(_OWORD *)((char *)Src + 72) = *(_OWORD *)&v50[18];
      *(_OWORD *)((char *)Src + 88) = *(_OWORD *)&v50[22];
      *(_OWORD *)((char *)Src + 104) = *(_OWORD *)&v50[26];
      *(_OWORD *)((char *)Src + 120) = *(_OWORD *)&v50[30];
      *(_OWORD *)((char *)Src + 136) = *(_OWORD *)&v50[34];
      *(_OWORD *)((char *)Src + 152) = *(_OWORD *)&v50[38];
      *(_OWORD *)((char *)Src + 168) = *(_OWORD *)&v50[42];
      *(_OWORD *)((char *)Src + 8) = *(_OWORD *)&v50[2];
      *(_OWORD *)((char *)Src + 24) = *(_OWORD *)&v50[6];
      *(_OWORD *)((char *)Src + 40) = *(_OWORD *)&v50[10];
      *(_OWORD *)((char *)Src + 56) = *(_OWORD *)&v50[14];
    }
    if ( bTracingEnabled )
    {
      if ( v44 ? *(_QWORD *)(v44 + 32) : 0LL )
      {
        v28 = v44 ? *(_QWORD *)(v44 + 32) : 0LL;
        v27 = *(_QWORD *)(v28 + 16);
      }
      else
      {
        v27 = 0LL;
      }
      v29 = v44 ? *(_QWORD *)(v44 + 32) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(v27, &EventOpenSyncObject, v16, v29, v25, v8, v27);
    }
  }
  if ( (unsigned int)Feature_MSRC99194_58219321__private_IsEnabledNoReportingNoInline() )
  {
    v30 = v50[1];
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v31 = ((unsigned int)v30 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *((_DWORD *)Current + 74) )
    {
      v32 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v30 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60)
        && (*(_DWORD *)(v32 + 16 * v31 + 8) & 0x1F) != 0 )
      {
        v33 = 16 * ((v30 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v32 + v33 + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(v33 + *((_QWORD *)Current + 35) + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v51);
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
  }
  else
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v51);
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
    v34 = v50[1];
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v35 = ((unsigned int)v34 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v35 < *((_DWORD *)Current + 74) )
    {
      v36 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v34 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60)
        && (*(_DWORD *)(v36 + 16 * v35 + 8) & 0x1F) != 0 )
      {
        v37 = 16 * ((v34 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v36 + v37 + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*((_QWORD *)Current + 35) + v37 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (int)v15 < 0 )
  {
    v39[0] = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT)v50[1];
    DxgkDestroySynchronizationObjectImpl(v39, 0);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v42, 0LL);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
  return (unsigned int)v15;
}
