/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403704B0
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B09C (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x140057CFC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x140058DF8 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x140059908 (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x14022CFEC (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x140371584 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x140372000 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  int v5; // r15d
  DXGADAPTER *v7; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // edx
  struct _ERESOURCE *v15; // rax
  NTSTATUS v16; // eax
  unsigned int v17; // esi
  struct _KEVENT *v18; // rax
  __int64 v19; // r8
  int Value; // edx
  int v21; // eax
  volatile unsigned __int8 v22; // al
  struct VIDMM_DEVICE *v23; // rax
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rsi
  DXGGLOBAL *Global; // rax
  ULONG v30; // ecx
  void *KmdProcessHandle; // rax
  ADAPTER_RENDER *v32; // rcx
  _QWORD *v33; // r14
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdi
  struct VIDMM_DEVICE *v45; // rax
  signed __int64 v46; // rax
  __int64 v47; // rax
  int HostProcess; // edx
  int Device; // eax
  int v50; // edi
  __int64 v51; // [rsp+30h] [rbp-51h]
  __int64 v52; // [rsp+40h] [rbp-41h]
  __int64 v53; // [rsp+48h] [rbp-39h]
  unsigned int v54; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v55[20]; // [rsp+7Ch] [rbp-5h]
  _DXGKARG_CREATEDEVICE v56; // [rsp+90h] [rbp+Fh] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = a3;
  v7 = *(DXGADAPTER **)(v3 + 16);
  if ( (*((_DWORD *)v7 + 754) & 8) != 0
    && (*((_DWORD *)v7 + 627) & 0x80u) == 0
    && !DXGADAPTER::IsGpuVirtualAddressingSupported(v7) )
  {
    v7 = (DXGADAPTER *)*((_QWORD *)this + 5);
    v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 176), (signed __int64)v7, 0LL);
    if ( v46 && *((_QWORD *)this + 5) != v46 )
    {
      v17 = -1071775744;
      WdLogSingleEntry3(3LL, this, v46, -1071775744LL);
      WdLogGlobalForLineNumber = 1110;
      return v17;
    }
    *((_BYTE *)this + 1917) |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL));
  }
  Current = DXGPROCESS::GetCurrent((__int64)v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v54, Current);
  v9 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 280LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 117) = v9;
  v10 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1129;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v54);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 5);
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( v12 < *(_DWORD *)(v11 + 296) )
  {
    v13 = *(_QWORD *)(v11 + 280);
    v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
    if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16LL * v12 + 8) = v14 | 0x2000;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v54);
  v15 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 17) = v15;
  if ( !v15 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1147;
    return 3221225495LL;
  }
  v16 = ExInitializeResourceLite(v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v16);
    WdLogGlobalForLineNumber = 1156;
    return v17;
  }
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    v47 = operator new[](0x14uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 60) = v47;
    if ( v47 )
    {
      *(_QWORD *)v47 = 0LL;
      *(_DWORD *)(v47 + 8) = 4;
      *(_DWORD *)(v47 + 12) = 1;
      *(_DWORD *)(*((_QWORD *)this + 60) + 16LL) = 0;
      HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
      if ( !HostProcess )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1179;
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
      Device = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4712LL),
                 HostProcess,
                 *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 488),
                 *((_DWORD *)this + 116) == 2,
                 *((struct CRefCountedBuffer **)this + 60));
      *((_DWORD *)this + 118) = Device;
      if ( !Device )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1188;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create device on the host",
          1188LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741823LL;
      }
      goto LABEL_34;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1166;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate m_pVidSchErrorCode",
      1166LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v18 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 241) = v18;
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1199;
    return 3221225495LL;
  }
  KeInitializeEvent(v18, NotificationEvent, 1u);
  v19 = *((_QWORD *)this + 2);
  *(_OWORD *)&v56.Flags.0 = 0LL;
  v56.hDevice = this;
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 16) + 2504LL) & 1) != 0 )
  {
    if ( (*((_BYTE *)this + 1917) & 8) != 0 || (*((_DWORD *)this + 122) & 8) != 0 )
    {
      Value = v56.Flags.Value | 2;
      v56.Flags.Value |= 2u;
    }
    else
    {
      Value = v56.Flags.Value;
    }
  }
  else
  {
    Value = (_DWORD)this + 624;
    v56.pInfo = (DXGK_DEVICEINFO *)((char *)this + 624);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 16) + 444LL) & 0x10) != 0 )
  {
    v21 = v5 << 31;
    LOBYTE(v5) = 1;
    v56.Flags.Value = Value & 0x7FFFFFFF | v21;
  }
  v22 = g_Feature_FenceStorageUsingVidMmAlloc;
  *((_BYTE *)this + 1913) = a2;
  *((_BYTE *)this + 1914) = v5;
  if ( !v22 )
  {
    v23 = VIDMM_EXPORT::VidMmCreateDevice(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
            this);
    *((_QWORD *)this + 99) = v23;
    if ( !v23 )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1253;
      return 3221225495LL;
    }
    result = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                          + 8LL)
                                                              + 376LL))(v23);
    if ( (int)result < 0 )
      return result;
  }
  v17 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
  if ( (v17 & 0x80000000) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1272;
    return v17;
  }
  v25 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 1918) = 1;
  v26 = *(_QWORD *)(v25 + 16);
  if ( (*(_DWORD *)(v26 + 2508) & 0x80u) != 0 )
  {
    v27 = *((_QWORD *)this + 5);
    v28 = *(unsigned int *)(v26 + 240);
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)v28 >= DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      v30 = 0;
    }
    else
    {
      _mm_lfence();
      v30 = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v27 + 48) + 8 * v28) + 24LL);
    }
    v56.Pasid = v30;
  }
  KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(
                       *((DXGPROCESS **)this + 5),
                       *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 240LL));
  v32 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v56.hKmdProcess = KmdProcessHandle;
  v17 = ADAPTER_RENDER::DdiCreateDevice(v32, &v56);
  if ( (v17 & 0x80000000) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1288;
    return v17;
  }
  v33 = (_QWORD *)((char *)this + 800);
  v34 = *((_DWORD *)this + 116);
  v35 = 0;
  *((_QWORD *)this + 77) = v56.hDevice;
  *(_OWORD *)v55 = 0LL;
  if ( v34 == 2 )
    v35 = 8;
  v36 = 0;
  if ( v34 == 1 )
    v36 = 32;
  v37 = v36 | v35 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (v5 & 1))));
  *(_QWORD *)&v55[12] = *((_QWORD *)this + 60);
  v38 = *((_QWORD *)this + 2);
  v54 = v37;
  v39 = (*(__int64 (__fastcall **)(DXGDEVICE *, unsigned int *, char *))(*(_QWORD *)(*(_QWORD *)(v38 + 736) + 8LL)
                                                                       + 120LL))(
          this,
          &v54,
          (char *)this + 800);
  v17 = v39;
  if ( v39 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v39);
    WdLogGlobalForLineNumber = 1308;
    return v17;
  }
  if ( g_Feature_FenceStorageUsingVidMmAlloc )
  {
    v45 = VIDMM_EXPORT::VidMmCreateDevice(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
            this);
    *((_QWORD *)this + 99) = v45;
    if ( v45 )
    {
      v50 = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                         + 8LL)
                                                             + 376LL))(v45);
      if ( v50 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1335;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Failed to initialize VidMm device",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v50;
      }
      goto LABEL_33;
    }
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1326;
    return 3221225495LL;
  }
LABEL_33:
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 128LL))(
    *v33,
    *((_QWORD *)this + 99));
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 1048LL))(
    *((_QWORD *)this + 99),
    *v33);
LABEL_34:
  v40 = *((_QWORD *)this + 5);
  v41 = *((unsigned int *)this + 117);
  *((_DWORD *)this + 152) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v40 + 248));
  v42 = ((unsigned int)v41 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v42 < *(_DWORD *)(v40 + 296) )
  {
    v43 = *(_QWORD *)(v40 + 280);
    if ( (((unsigned int)v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
      && (*(_DWORD *)(v43 + 16 * v42 + 8) & 0x1F) != 0 )
    {
      v44 = 16 * ((v41 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v44 + v43 + 8) & 0x2000) == 0 )
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
      *(_DWORD *)(v44 + *(_QWORD *)(v40 + 280) + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v40 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v40 + 248, 0LL);
  KeLeaveCriticalRegion();
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 117), *((_QWORD *)this + 5));
  WdLogGlobalForLineNumber = 1360;
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v53) = *((unsigned __int8 *)this + 1914);
      LODWORD(v52) = *((unsigned __int8 *)this + 1913);
      LODWORD(v51) = *((_DWORD *)this + 116);
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        *((unsigned __int8 *)this + 1914),
        (const EVENT_DESCRIPTOR *)"\x1B",
        *((_QWORD *)this + 14),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        v51,
        this,
        v52,
        v53,
        *((_DWORD *)this + 117),
        *((_QWORD *)this + 5),
        *((_DWORD *)this + 118),
        *((_QWORD *)this + 14));
    }
  }
  return 0LL;
}
