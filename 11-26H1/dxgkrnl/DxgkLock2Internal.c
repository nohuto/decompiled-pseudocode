/*
 * XREFs of DxgkLock2Internal @ 0x14028ED50
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x14020A728 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1402B9EF8 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DxgkLock2Internal(struct DXGDEVICE *a1, __int64 a2, __int64 a3, struct _D3DKMT_LOCK2 *a4)
{
  D3DKMT_HANDLE hAllocation; // esi
  __int64 v5; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  struct _EX_RUNDOWN_REF *v14; // rdx
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // r8
  char v17; // dl
  ULONG_PTR Count; // rcx
  struct DXGDEVICE *v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ebx
  struct DXGTHREAD *DxgThread; // rax
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // [rsp+28h] [rbp-50h]
  unsigned int v27; // [rsp+30h] [rbp-48h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+90h] [rbp+18h] BYREF
  struct DXGTHREAD *v29; // [rsp+98h] [rbp+20h] BYREF

  hAllocation = a4->hAllocation;
  v5 = a3 + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v5, 0LL) )
  {
    if ( bTracingEnabled && *(_DWORD *)(v5 + 24) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v11 < *(_DWORD *)(a3 + 296) )
  {
    v12 = *(_QWORD *)(a3 + 280) + 16LL * v11;
    if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v12 + 8) & 0x60) && (*(_DWORD *)(v12 + 8) & 0x2000) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 8) & 0x1F;
      if ( v13 )
      {
        if ( v13 == 5 )
        {
          v14 = *(struct _EX_RUNDOWN_REF **)v12;
          goto LABEL_13;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v14 = 0LL;
LABEL_13:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v14);
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 16));
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v15 = v28;
  if ( !v28 )
  {
    v21 = -1073741811;
    WdLogSingleEntry2(3LL, a4->hAllocation, -1073741811LL);
    WdLogGlobalForLineNumber = 919;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
    return v21;
  }
  v16 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL) != *(_QWORD *)(v16 + 16) )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(3LL, a1, v28, -1073741811LL);
    WdLogGlobalForLineNumber = 928;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
    return v21;
  }
  if ( *(_BYTE *)(a2 + 209) )
  {
    v17 = 1;
  }
  else
  {
    if ( !v28[3].Count )
    {
      v21 = -1073741811;
      WdLogSingleEntry3(3LL, a4->hAllocation, v28, -1073741811LL);
      WdLogGlobalForLineNumber = 938;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
      return v21;
    }
    v17 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(v16 + 760) + 8LL) + 1296LL))();
    v15 = v28;
  }
  Count = v15[5].Count;
  if ( Count )
  {
    if ( (*(_DWORD *)(Count + 4) & 3) == 1 && !v17 )
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v25 = *(_DWORD *)(v24 + 444);
      if ( (v25 & 0x10) == 0 && (v25 & 8) == 0 && (*(_DWORD *)(v24 + 2508) & 0x80u) == 0 )
      {
        v21 = -1073741811;
        WdLogSingleEntry3(3LL, a1, v15, -1073741811LL);
        WdLogGlobalForLineNumber = 973;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
        return v21;
      }
    }
  }
  if ( *(_BYTE *)(a2 + 209) )
  {
    v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(a2 + 4712),
            (struct DXGPROCESS *)a3,
            a1,
            a4,
            0,
            v26,
            v27);
  }
  else
  {
    v19 = (struct DXGDEVICE *)v15[1].Count;
    if ( v19 != a1 )
    {
      v21 = -1073741811;
      WdLogSingleEntry4(3LL, v15, a1, v19, -1073741811LL);
      WdLogGlobalForLineNumber = 1134;
      goto LABEL_23;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 768LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 768LL),
            v15[3].Count,
            0LL,
            &a4->pData);
  }
  v21 = v20;
LABEL_23:
  if ( v28 )
    ExReleaseRundownProtection(v28 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 344) )
  {
    v29 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v29) >= 0 )
    {
      DxgThread = v29;
      if ( v29 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v29 = DxgThread) != 0LL) )
      {
        if ( *((_DWORD *)DxgThread + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
  return v21;
}
