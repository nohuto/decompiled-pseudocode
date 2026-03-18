/*
 * XREFs of ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x14028FCA0
 * Callers:
 *     NtDxgkGetProperties @ 0x140413730 (NtDxgkGetProperties.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140373024 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 */

__int64 __fastcall PresentStatsDwm2Property(struct _KTHREAD **a1, struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *a2)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rbx
  char *v11; // rcx
  __int64 v12; // rbp
  struct DXGADAPTER *v13; // rdx
  char *v14; // rdi
  __int64 v15; // rax
  struct _D3DKMT_PRESENT_STATS_DWM2 *v16; // r15
  __int64 v17; // r14
  int PresentStatsDWM; // esi
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-F8h]
  _BYTE v22[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = *(_DWORD *)a2;
  v3 = (char *)(a1 + 31);
  if ( a1 != (struct _KTHREAD **)-248LL && a1[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v3, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v3 + 6) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)"g");
    ExAcquirePushLockSharedEx(v3, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v3 + 4);
  v7 = (v2 >> 6) & 0xFFFFFF;
  if ( v7 >= *((_DWORD *)a1 + 74) )
    goto LABEL_32;
  v8 = (__int64)a1[35] + 16 * v7;
  if ( ((v2 >> 25) & 0x60) != (*(_BYTE *)(v8 + 8) & 0x60) )
    goto LABEL_32;
  if ( (*(_DWORD *)(v8 + 8) & 0x2000) != 0 )
    goto LABEL_32;
  v9 = *(_DWORD *)(v8 + 8) & 0x1F;
  if ( !v9 )
    goto LABEL_32;
  if ( v9 != 3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_32:
    v11 = v3;
    goto LABEL_33;
  }
  v10 = *(_QWORD *)v8;
  v11 = v3;
  if ( !*(_QWORD *)v8 )
  {
LABEL_33:
    _InterlockedDecrement((volatile signed __int32 *)v3 + 4);
    ExReleasePushLockSharedEx(v11, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry2(2LL, *(unsigned int *)a2, -1073741811LL);
    v21 = *(unsigned int *)a2;
    WdLogGlobalForLineNumber = 6281;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v21,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v10 + 64));
  _InterlockedDecrement((volatile signed __int32 *)v3 + 4);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v12 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 152));
  if ( *(_DWORD *)(v12 + 200) == 1 )
  {
    v13 = *(struct DXGADAPTER **)(v10 + 1896);
    v14 = (char *)v13 + 3160;
    if ( v13 && *((_DWORD *)a2 + 1) >= *(_DWORD *)(*(_QWORD *)v14 + 96LL) )
    {
      PresentStatsDWM = -1073741811;
      WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 1), -1073741811LL);
      WdLogGlobalForLineNumber = 6302;
    }
    else
    {
      v15 = *(_QWORD *)(v10 + 16);
      v16 = (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)((char *)a2 + 8);
      v17 = *((unsigned int *)a2 + 1);
      if ( v13 == *(struct DXGADAPTER **)(v15 + 16) )
      {
        PresentStatsDWM = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _D3DKMT_PRESENT_STATS_DWM2 *))(*(_QWORD *)(*(_QWORD *)(v15 + 736) + 8LL) + 512LL))(
                            *(_QWORD *)(v10 + 800),
                            (unsigned int)v17,
                            v16);
      }
      else if ( v13 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v13, 0LL);
        PresentStatsDWM = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
        if ( PresentStatsDWM >= 0 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)v14 + 464LL);
          if ( v20 )
            PresentStatsDWM = BLTQUEUE::QueryPresentStatsDWM((BLTQUEUE *)(*(_QWORD *)(v20 + 8) + 3040 * v17), v16);
          else
            PresentStatsDWM = -1073741811;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
      }
      else
      {
        PresentStatsDWM = -1073741811;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 152));
    ExReleasePushLockSharedEx(v12 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
    return (unsigned int)PresentStatsDWM;
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 152));
    ExReleasePushLockSharedEx(v12 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
    return 3221226166LL;
  }
}
