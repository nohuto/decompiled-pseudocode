/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04
 * Callers:
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1402B8570 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     DxgkLock @ 0x1402B9040 (DxgkLock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1402BB340 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1402BB730 (DxgkUnlock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x140446808 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140010BA4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401E5A70 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x140424B34 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, char a3)
{
  UINT NumAllocations; // r9d
  D3DKMT_HANDLE *phAllocations; // rcx
  int v7; // r13d
  UINT v8; // r12d
  unsigned int v9; // r8d
  D3DKMT_HANDLE hDevice; // r14d
  struct DXGALLOCATION *v11; // rdx
  DXGDEVICE *v12; // r9
  int v13; // eax
  int v14; // r14d
  unsigned int v16; // r14d
  __int64 v17; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v19; // r14d
  __int64 v20; // r13
  struct DXGALLOCATION *DisplayedPrimary; // rax
  unsigned int v22; // [rsp+50h] [rbp-48h] BYREF
  int v23; // [rsp+54h] [rbp-44h]
  struct DXGALLOCATION *v24[8]; // [rsp+58h] [rbp-40h] BYREF
  char v25; // [rsp+B0h] [rbp+18h]
  struct _D3DKMT_UNLOCK2 v26; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a3;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 255;
    return 3221225485LL;
  }
  phAllocations = (D3DKMT_HANDLE *)a2->phAllocations;
  if ( !phAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 264;
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1917) & 1) == 0 )
  {
    v7 = 0;
    v8 = 0;
    v26.hDevice = 0;
    while ( 1 )
    {
      v23 = v7;
      if ( v8 >= a2->NumAllocations )
        return (unsigned int)v7;
      v22 = 0;
      if ( a3 )
      {
        RtlCopyFromUser(&v22, (void *)&a2->phAllocations[v8], 4uLL);
        v9 = v22;
      }
      else
      {
        v9 = a2->phAllocations[v8];
        v22 = v9;
      }
      hDevice = v9 & 0x3F;
      v26.hDevice = hDevice;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)v24, v9);
      v11 = v24[0];
      if ( !v24[0] )
      {
        WdLogSingleEntry3(3LL, this, v22, -1073741811LL);
        WdLogGlobalForLineNumber = 343;
LABEL_20:
        v14 = -1073741811;
        goto LABEL_14;
      }
      if ( !*((_QWORD *)v24[0] + 3) )
      {
        WdLogSingleEntry4(3LL, this, v22, v24[0], -1073741811LL);
        WdLogGlobalForLineNumber = 353;
        goto LABEL_20;
      }
      if ( !*((_DWORD *)this + 116) )
        break;
LABEL_11:
      v12 = (DXGDEVICE *)*((_QWORD *)v11 + 1);
      if ( v12 != this )
      {
        WdLogSingleEntry4(3LL, v11, this, v12, -1073741811LL);
        WdLogGlobalForLineNumber = 388;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v24);
        return 3221225485LL;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 760LL)
                                                                                  + 8LL)
                                                                      + 256LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              *((_QWORD *)v11 + 3),
              hDevice,
              0LL);
      v14 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry4(3LL, this, v22, v24[0], v13);
        WdLogGlobalForLineNumber = 404;
      }
LABEL_14:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v24);
      v26.hDevice = ++v8;
      if ( v7 < 0 )
        v14 = v7;
      v7 = v14;
      a3 = v25;
    }
    v16 = *(_DWORD *)(*((_QWORD *)v24[0] + 6) + 4LL);
    if ( (v16 & 4) == 0 || !v25 )
    {
LABEL_24:
      hDevice = v26.hDevice;
      goto LABEL_11;
    }
    v19 = (v16 >> 6) & 0xF;
    v20 = *((_QWORD *)this + 237);
    if ( v20 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 237)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 371;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
          371LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)this + 152) != 1
        || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v20 + 3160), this, v19) )
      {
        goto LABEL_42;
      }
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v19);
      v11 = v24[0];
      if ( DisplayedPrimary == v24[0] )
      {
        DXGDEVICE::UpdateDodFrontBuffer((ADAPTER_RENDER **)this, v24[0]);
LABEL_42:
        v11 = v24[0];
      }
    }
    v7 = v23;
    goto LABEL_24;
  }
  if ( NumAllocations != 1 )
  {
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 275;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: NumAllocations must be 1, returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v26 = 0LL;
  if ( a3 )
    RtlCopyFromUser(&v26.hAllocation, phAllocations, 4uLL);
  else
    v26.hAllocation = *phAllocations;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  Current = DXGPROCESS::GetCurrent();
  return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 4712),
           Current,
           this,
           &v26,
           1u);
}
