/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z @ 0x1403517DC (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N5@Z @ 0x140372CF0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140377CC8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x140052B98 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEAVVIDMM_DEVICE@@@Z @ 0x140056160 (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEA.c)
 *     ?VidMmMapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@IPEA_K@Z @ 0x14005CEF8 (-VidMmMapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORA.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140061770 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?GetInitialFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x14006CC6C (-GetInitialFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z @ 0x1401AC264 (-DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z.c)
 *     ?DdiCreateNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATENATIVEFENCE@@@Z @ 0x140425BF0 (-DdiCreateNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATENATIVEFENCE@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct VIDMM_DEVICE **a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int8 *a5,
        unsigned int a6,
        bool a7,
        bool a8)
{
  char v8; // si
  __int64 v13; // r9
  int v14; // eax
  bool v15; // r12
  __int64 v16; // r15
  unsigned int v17; // r12d
  char *v18; // r11
  struct VIDMM_DEVICE *v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rbx
  struct _KTHREAD **v24; // r15
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 result; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  __int64 v29; // rcx
  int v30; // eax
  char v31; // al
  __int64 v32; // rcx
  bool v33; // cf
  __int64 v34; // rax
  unsigned __int64 InitialFenceValue; // rax
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // eax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  ADAPTER_RENDER *v43; // rcx
  int NativeFence; // eax
  __int64 v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  struct VIDMM_DEVICE *v49; // r15
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v50; // rax
  ADAPTER_RENDER *v51; // rcx
  int CpuEvent; // eax
  unsigned int v53; // ebx
  __int64 v54; // rcx
  char *v55; // r14
  char *v56; // rdi
  char **v57; // rax
  bool v58; // [rsp+28h] [rbp-D8h]
  char *v59; // [rsp+70h] [rbp-90h]
  char *v60; // [rsp+78h] [rbp-88h]
  struct VIDMM_MONITORED_FENCE_STORAGE *v61; // [rsp+80h] [rbp-80h]
  __int128 v62; // [rsp+88h] [rbp-78h] BYREF
  __int128 v63; // [rsp+98h] [rbp-68h]
  _QWORD v64[10]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v65[9]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v66[14]; // [rsp+190h] [rbp+90h] BYREF

  v8 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1907;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pVidSchSyncObject", 1907LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)a2 + 107) & 2) != 0 )
    goto LABEL_19;
  v59 = 0LL;
  v60 = 0LL;
  memset(v64, 0, sizeof(v64));
  memset(v66, 0, sizeof(v66));
  v14 = *((_DWORD *)a2 + 105);
  v15 = (*((_DWORD *)a2 + 106) & 4) != 0;
  v61 = 0LL;
  if ( v14 == 7 || (unsigned int)(v14 - 5) <= 1 )
  {
    CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(a2);
    *((_DWORD *)this + 36) = a6;
    v61 = CurrentValueStorage;
    *((_QWORD *)this + 17) = CurrentValueStorage;
  }
  if ( *((_DWORD *)a2 + 105) == 7 )
  {
    if ( a8 )
    {
      *((_BYTE *)this + 148) = 1;
      HIDWORD(v64[0]) = *((_DWORD *)a2 + 106);
      LODWORD(v64[0]) = 5;
      v64[1] = DXGSYNCOBJECT::GetInitialFenceValue(a2);
      v16 = (__int64)v64;
      goto LABEL_9;
    }
    *((_DWORD *)this + 25) = 2;
    v60 = (char *)this + 56;
    *((_BYTE *)this + 96) |= 1u;
    v59 = (char *)a2 + 304;
    v36 = *((_DWORD *)a2 + 79);
    *((_DWORD *)this + 27) |= 0x20u;
    *((_DWORD *)this + 26) = v36;
    if ( g_Feature_FenceStorageUsingVidMmAlloc )
    {
      *((_DWORD *)this + 27) |= 8u;
      *((_BYTE *)this + 96) |= 4u;
    }
    v37 = -(__int64)v15;
    v17 = a6;
    LOBYTE(v13) = *((_BYTE *)a2 + 424) & 1;
    result = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
               *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
               (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
               a6,
               v13,
               (*((_DWORD *)a2 + 107) & 0x20) != 0,
               v58,
               (unsigned int)~(_DWORD)v37,
               1,
               a3[99]);
    if ( (int)result >= 0 )
    {
      if ( a4 )
        v38 = *((_QWORD *)a4 + 4);
      else
        v38 = 0LL;
      v18 = (char *)a2 + 304;
      *((_QWORD *)this + 10) = v38;
      goto LABEL_38;
    }
  }
  else
  {
    if ( !a7 )
    {
      v16 = (__int64)a2 + 224;
LABEL_9:
      v17 = a6;
      v18 = 0LL;
      goto LABEL_10;
    }
    *((_DWORD *)this + 27) |= 0x20u;
    v31 = *((_BYTE *)this + 96);
    *(_QWORD *)((char *)this + 100) = 2LL;
    v32 = *((_QWORD *)this + 2);
    v33 = v15;
    v17 = a6;
    *((_BYTE *)this + 96) = v31 | 1;
    *((_BYTE *)this + 149) = 1;
    LOBYTE(v13) = *((_BYTE *)a2 + 424) & 1;
    v60 = (char *)this + 56;
    result = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
               *(VIDMM_EXPORT **)(v32 + 760),
               (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
               a6,
               v13,
               (*((_DWORD *)a2 + 107) & 0x20) != 0,
               v58,
               (unsigned int)v33 - 1,
               1,
               a3[99]);
    if ( (int)result >= 0 )
    {
      if ( a4 )
        v34 = *((_QWORD *)a4 + 4);
      else
        v34 = 0LL;
      *((_QWORD *)this + 10) = v34;
      LODWORD(v66[2]) = *((_DWORD *)a2 + 106);
      InitialFenceValue = DXGSYNCOBJECT::GetInitialFenceValue(a2);
      v18 = (char *)v66;
      v66[0] = InitialFenceValue;
      v59 = (char *)v66;
LABEL_38:
      v16 = 0LL;
LABEL_10:
      if ( a3 )
        v19 = a3[99];
      else
        v19 = 0LL;
      v20 = 0LL;
      if ( (*((_DWORD *)a2 + 106) & 4) != 0 )
        v20 = *((_QWORD *)a2 + 57);
      v21 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, __int64, _QWORD, __int64, _QWORD, unsigned int, char *, struct VIDMM_MONITORED_FENCE_STORAGE *, char *, char *, struct VIDMM_DEVICE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 632LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
              a2,
              v16,
              *((unsigned int *)a2 + 104),
              v20,
              0LL,
              v17,
              (char *)this + 32,
              v61,
              v18,
              v60,
              v19);
      LODWORD(v16) = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry2(3LL, a2, v21);
        WdLogGlobalForLineNumber = 2064;
      }
      else
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305952)
          || (*((_DWORD *)a2 + 105) != 7 || *((_BYTE *)this + 148)) && !*((_BYTE *)this + 149) )
        {
          goto LABEL_18;
        }
        v29 = *((_QWORD *)this + 2);
        if ( *(_BYTE *)(*(_QWORD *)(v29 + 16) + 5116LL) )
        {
          v30 = VIDMM_EXPORT::VidMmMapPagingProcessGpuVA(
                  *(VIDMM_EXPORT **)(v29 + 760),
                  *(struct VIDMM_GLOBAL **)(v29 + 768),
                  v61,
                  v17,
                  (unsigned __int64 *)this + 15);
          LODWORD(v16) = v30;
          if ( v30 < 0 )
          {
            WdLogSingleEntry2(3LL, a2, v30);
            WdLogGlobalForLineNumber = 2086;
            return (unsigned int)v16;
          }
          v39 = VIDMM_EXPORT::VidMmMapPagingProcessGpuVA(
                  *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                  (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
                  v17,
                  (unsigned __int64 *)this + 16);
          LODWORD(v16) = v39;
          if ( v39 < 0 )
          {
            WdLogSingleEntry2(3LL, a2, v39);
            WdLogGlobalForLineNumber = 2100;
            return (unsigned int)v16;
          }
        }
        memset(v65, 0, 0x88uLL);
        *(_QWORD *)&v65[0] = *((_QWORD *)this + 4);
        DWORD2(v65[0]) = *((_DWORD *)v59 + 3);
        if ( a5 )
        {
          v40 = *((_OWORD *)a5 + 1);
          v65[2] = *(_OWORD *)a5;
          v41 = *((_OWORD *)a5 + 2);
          v65[3] = v40;
          v42 = *((_OWORD *)a5 + 3);
          v65[4] = v41;
          v65[5] = v42;
        }
        v43 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v65[1] = *(_OWORD *)((char *)this + 120);
        NativeFence = ADAPTER_RENDER::DdiCreateNativeFence(v43, (struct _DXGKARG_CREATENATIVEFENCE *)v65);
        v16 = NativeFence;
        if ( NativeFence >= 0 )
        {
          v45 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 6) = *(_QWORD *)&v65[0];
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v45 + 736) + 8LL) + 1120LL))(*((_QWORD *)this + 4));
          if ( a5 )
          {
            v46 = v65[3];
            *(_OWORD *)a5 = v65[2];
            v47 = v65[4];
            *((_OWORD *)a5 + 1) = v46;
            v48 = v65[5];
            *((_OWORD *)a5 + 2) = v47;
            *((_OWORD *)a5 + 3) = v48;
          }
LABEL_18:
          v22 = *((_DWORD *)a2 + 106);
          if ( (v22 & 0x100) != 0 && a3 )
          {
            v49 = a3[5];
            if ( (*((_DWORD *)v49 + 102) & 0x100) != 0 )
            {
              v50 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)*((_QWORD *)a2 + 29);
              *((_QWORD *)this + 5) = v50;
            }
            else
            {
              v50 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)operator new(0x28uLL, 0x4B677844u, 64LL);
              *((_QWORD *)this + 5) = v50;
              if ( !v50 )
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 2147;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"Failed to allocate memory for m_pKmdSignalCpuEvent",
                  2147LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                return 3221225495LL;
              }
            }
            DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v50);
            v62 = 0LL;
            v63 = 0LL;
            if ( (v22 & 0x200) == 0 )
            {
              v51 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
              *((_QWORD *)&v62 + 1) = *((_QWORD *)this + 5);
              *(_QWORD *)&v62 = a3[77];
              CpuEvent = ADAPTER_RENDER::DdiCreateCpuEvent(v51, (struct _DXGKARG_CREATECPUEVENT *)&v62);
              v53 = CpuEvent;
              if ( CpuEvent < 0 )
              {
                WdLogSingleEntry2(3LL, a2, CpuEvent);
                result = v53;
                WdLogGlobalForLineNumber = 2170;
                return result;
              }
            }
            if ( (*((_DWORD *)v49 + 102) & 0x100) != 0 )
            {
              **((_QWORD **)this + 5) = *(_QWORD *)(*((_QWORD *)v49 + 74) + 592LL) + 160LL;
            }
            else
            {
              if ( (*((_DWORD *)a2 + 107) & 0x40) != 0 )
                v54 = *((_QWORD *)a2 + 11);
              else
                v54 = 0LL;
              *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) = v54;
              **((_QWORD **)this + 5) = 0LL;
            }
            *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) = *((_QWORD *)&v63 + 1);
            *(_QWORD *)(*((_QWORD *)this + 5) + 24LL) = a2;
          }
LABEL_19:
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
          v23 = *((_QWORD *)this + 2);
          v24 = (struct _KTHREAD **)(v23 + 192);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v23 + 192));
          v25 = (__int64 *)(v23 + 240);
          v26 = *v25;
          if ( *(__int64 **)(*v25 + 8) == v25 )
          {
            *(_QWORD *)this = v26;
            *((_QWORD *)this + 1) = v25;
            *(_QWORD *)(v26 + 8) = this;
            *v25 = (__int64)this;
            DXGFASTMUTEX::Release(v24);
            *((_BYTE *)this + 24) = 1;
            *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 106) & 4) != 0;
            if ( (*((_DWORD *)a2 + 106) & 1) != 0 || (*((_DWORD *)a2 + 107) & 0x20) != 0 )
              v8 = 1;
            *((_BYTE *)this + 27) = v8;
            if ( (*((_DWORD *)a2 + 106) & 4) == 0 )
              return 0LL;
            v55 = (char *)a2 + 440;
            v56 = (char *)this + 152;
            v57 = (char **)*((_QWORD *)v55 + 1);
            if ( *v57 == v55 )
            {
              *(_QWORD *)v56 = v55;
              *((_QWORD *)v56 + 1) = v57;
              *v57 = v56;
              *((_QWORD *)v55 + 1) = v56;
              return 0LL;
            }
          }
          __fastfail(3u);
        }
        WdLogSingleEntry2(2LL, a3, NativeFence);
        WdLogGlobalForLineNumber = 2120;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGDEVICE: 0x%I64x | DdiCreateNativeFence failed with Status = 0x%I64x",
          (__int64)a3,
          v16,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)v16;
    }
  }
  return result;
}
