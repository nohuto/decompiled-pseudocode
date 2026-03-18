/*
 * XREFs of ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403F7738
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1403971F0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x140045DFC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x14042B398 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, struct _EX_RUNDOWN_REF *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // rsi
  int Resident; // eax
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v20; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+58h] BYREF

  v20 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9137;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9137LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v6) = 0;
  Current = DXGPROCESS::GetCurrent(v5);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)Current + 74) )
  {
    v9 = (unsigned int)v8;
    v10 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16 * v8 + 8);
    if ( ((a2 >> 25) & 0x60) == (v10 & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
    {
      v11 = *((_QWORD *)Current + 35);
      v12 = 2 * v9;
      if ( (*(_BYTE *)(v11 + 8 * v12 + 8) & 0x1F) == 5 )
      {
        v13 = *(struct _EX_RUNDOWN_REF **)(v11 + 8 * v12);
        goto LABEL_9;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v13 = 0LL;
LABEL_9:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20, v13);
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9143;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"AllocRef.m_pAllocation != NULL", 9143LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4712LL),
                 *((_DWORD *)Current + 122),
                 *((_DWORD *)this + 118),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v20,
                 0LL,
                 0LL);
    v6 = Resident;
    if ( Resident < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9162;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else if ( *((_BYTE *)this + 1919)
         || *((_DWORD *)this + 116) == 2 && *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3044LL) >= 2000 )
  {
    v14 = *((_QWORD *)this + 2);
    v19 = 0LL;
    v17 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 936LL))(
      *((_QWORD *)this + 99),
      0LL,
      &v19,
      &v17);
    v21 = 0LL;
    v18 = 0LL;
    LODWORD(v6) = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 728LL))(
                    *(_QWORD *)(v14 + 768),
                    v19,
                    v20 + 3,
                    1LL,
                    3,
                    &v21,
                    &v18);
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 9194;
    }
    else if ( (_DWORD)v6 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 944LL))(
        *(_QWORD *)(v14 + 768),
        &v17,
        &v21,
        1LL);
      LODWORD(v6) = 0;
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
  return (unsigned int)v6;
}
