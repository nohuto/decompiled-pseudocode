/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970
 * Callers:
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1402B8570 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1402B8AB0 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     DxgkLock @ 0x1402B9040 (DxgkLock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x140446808 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z @ 0x140008EBC (-UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x140052CB4 (-VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1402B9EF8 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Lock(DXGDEVICE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3, char a4)
{
  int i; // r13d
  __int64 Value; // r8
  D3DKMT_HANDLE v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // eax
  int v20; // r8d
  __int64 v21; // rcx
  struct _EX_RUNDOWN_REF *v22; // rdx
  struct _EX_RUNDOWN_REF *v23; // rax
  DXGDEVICE *Count; // r9
  ULONG_PTR v25; // rdx
  int v26; // r15d
  DXGPROCESS *v27; // rbx
  __int16 v28; // ax
  __int64 result; // rax
  D3DKMT_HANDLE hAllocation; // eax
  __int64 v31; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v33; // ebx
  int v34; // eax
  const char *v35; // rdx
  unsigned int v36; // [rsp+28h] [rbp-48h]
  unsigned int v37; // [rsp+30h] [rbp-40h]
  __int64 v38; // [rsp+50h] [rbp-20h]
  _D3DKMT_LOCK2 v39; // [rsp+58h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+A0h] [rbp+30h] BYREF
  char v41; // [rsp+B8h] [rbp+48h]

  v41 = a4;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    hAllocation = a2->hAllocation;
    memset(&v39, 0, sizeof(v39));
    v39.hAllocation = hAllocation;
    v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent();
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v31 + 4712),
               Current,
               this,
               &v39,
               1u,
               v36,
               v37);
    if ( (int)result >= 0 )
      a2->pData = v39.pData;
    return result;
  }
  for ( i = 1; ; i = 2 )
  {
    Value = a2->Flags.Value;
    if ( (unsigned int)Value >= 0x800 )
      break;
    if ( (a2->NumPages == 0) != (a2->pPages == 0LL) )
    {
      v33 = -1073741811;
      WdLogSingleEntry3(3LL, this, a2->NumPages, -1073741811LL);
      WdLogGlobalForLineNumber = 64;
      return v33;
    }
    v9 = a2->hAllocation;
    v10 = ((a2->Flags.Value & 4) == 0) | 2;
    if ( (Value & 8) == 0 )
      v10 = (a2->Flags.Value & 4) == 0;
    v11 = v10 | 4;
    if ( (Value & 0x20) == 0 )
      v11 = v10;
    v12 = v11 | 8;
    if ( (Value & 0x40) == 0 )
      v12 = v11;
    v13 = v12 | 0x10;
    if ( (Value & 0x80u) == 0LL )
      v13 = v12;
    v14 = v13 | 0x20;
    if ( (Value & 0x100) == 0 )
      v14 = v13;
    v15 = v14 | 0x48;
    if ( (Value & 0x200) == 0 )
      v15 = v14;
    v16 = v15 | 0x80;
    if ( (Value & 0x400) == 0 )
      v16 = v15;
    v17 = v16 | 0x200;
    if ( (Value & 1) == 0 )
      v17 = v16;
    v18 = v17 | 0x400;
    if ( !a4 )
      v18 = v17;
    v38 = *((_QWORD *)this + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v38 + 248));
    v19 = (v9 >> 6) & 0xFFFFFF;
    if ( v19 < *(_DWORD *)(v38 + 296) )
    {
      v20 = *(_DWORD *)(*(_QWORD *)(v38 + 280) + 16LL * v19 + 8);
      if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v38 + 280) + 16LL * v19 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        v21 = *(_QWORD *)(v38 + 280);
        if ( (*(_BYTE *)(v21 + 16LL * v19 + 8) & 0x1F) == 5 )
        {
          v22 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * v19);
          goto LABEL_29;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v22 = 0LL;
LABEL_29:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v40, v22);
    _InterlockedDecrement((volatile signed __int32 *)(v38 + 264));
    ExReleasePushLockSharedEx(v38 + 248, 0LL);
    KeLeaveCriticalRegion();
    v23 = v40;
    if ( !v40 )
    {
      v33 = -1073741811;
      WdLogSingleEntry3(3LL, this, a2->hAllocation, -1073741811LL);
      WdLogGlobalForLineNumber = 126;
LABEL_45:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40);
      return v33;
    }
    if ( !v40[3].Count )
    {
      v33 = -1073741811;
      WdLogSingleEntry4(3LL, this, a2->hAllocation, v40, -1073741811LL);
      WdLogGlobalForLineNumber = 137;
      goto LABEL_45;
    }
    Count = (DXGDEVICE *)v40[1].Count;
    if ( Count != this )
    {
      v33 = -1073741811;
      WdLogSingleEntry4(3LL, v40, this, Count, -1073741811LL);
      WdLogGlobalForLineNumber = 148;
      goto LABEL_45;
    }
    if ( (*(_DWORD *)(v40[6].Count + 4) & 2) == 0 )
    {
      v25 = v40[5].Count;
      if ( v25 )
      {
        if ( (*(_DWORD *)(v25 + 4) & 3) == 1 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                         + 8LL)
                                                             + 1296LL))(v40[3].Count) )
          {
            v34 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 444LL);
            if ( (v34 & 0x10) == 0 && (v34 & 8) == 0 )
            {
              v33 = -1073741811;
              WdLogSingleEntry3(3LL, this, a2->hAllocation, -1073741811LL);
              WdLogGlobalForLineNumber = 168;
              goto LABEL_45;
            }
          }
          v23 = v40;
        }
      }
    }
    if ( i == 1 )
      v18 |= 0x100u;
    v26 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD, UINT, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                                  + 8LL)
                                                                                      + 248LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            v23[3].Count,
            a2->hAllocation & 0x3F,
            v18,
            a2->PrivateDriverData,
            &a2->pData);
    v27 = (DXGPROCESS *)*((_QWORD *)this + 5);
    v28 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                       + 264LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            v40[3].Count);
    a2->hAllocation = DXGPROCESS::UpdateHandleInstance(v27, a2->hAllocation, v28);
    if ( v26 != -1071775484
      || (COREDEVICEACCESS::Release(a3),
          v26 = VIDMM_EXPORT::VidMmWaitOnAllocationDmaReferences(
                  *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                  (struct VIDMM_MULTI_ALLOC *)v40[3].Count,
                  a2->hAllocation & 0x3F,
                  2u),
          v26 < 0) )
    {
LABEL_38:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40);
      return (unsigned int)v26;
    }
    v26 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 213;
      COREDEVICEACCESS::AcquireSharedUncheck(a3, v35);
      v33 = v26;
      goto LABEL_45;
    }
    a2->Flags.Value &= ~0x80u;
    if ( i != 1 )
      goto LABEL_38;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40);
    a4 = v41;
  }
  v33 = -1073741811;
  WdLogSingleEntry3(3LL, this, Value, -1073741811LL);
  WdLogGlobalForLineNumber = 54;
  return v33;
}
