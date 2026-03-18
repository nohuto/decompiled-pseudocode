/*
 * XREFs of DxgGetCaptureAddressCB @ 0x140422B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140038950 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(union _LARGE_INTEGER *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct _EX_RUNDOWN_REF *v9; // rdx
  ADAPTER_RENDER *v10; // rcx
  bool v11; // cf
  struct _EX_RUNDOWN_REF *v12; // rax
  __int64 v13; // r9
  ULONG_PTR Count; // r8
  struct _EX_RUNDOWN_REF *v16; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v18);
  a1->HighPart = 0;
  a1[1].QuadPart = 0LL;
  Current = DXGPROCESS::GetCurrent(v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v17, (struct _KTHREAD **)Current);
  v4 = (a1->LowPart >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v5 = (unsigned int)v4;
  v6 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16 * v4 + 8);
  if ( ((a1->LowPart >> 25) & 0x60) != (v6 & 0x60) || (v6 & 0x2000) != 0 || (v6 & 0x1F) == 0 )
    goto LABEL_7;
  v7 = *((_QWORD *)Current + 35);
  v8 = 2 * v5;
  if ( (*(_BYTE *)(v7 + 8 * v8 + 8) & 0x1F) != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v9 = 0LL;
    goto LABEL_8;
  }
  v9 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v8);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v16, v9);
  if ( v16 )
  {
    v10 = *(ADAPTER_RENDER **)(v16[1].Count + 16);
    if ( v10 && ADAPTER_RENDER::IsCoreResourceSharedOwner(v10) )
    {
      v11 = KeGetCurrentIrql() < 2u;
      v12 = v16;
      if ( !v11 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v16[1].Count + 16) + 16LL);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry5(0LL, 275LL, 20LL, v13, 0LL, 0LL);
          v12 = v16;
          WdLogGlobalForLineNumber = 526;
        }
      }
      Count = v12[6].Count;
      if ( (*(_DWORD *)(Count + 4) & 0x20) != 0 && (v12[9].Count & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
          *(VIDMM_EXPORT **)(*(_QWORD *)(v12[1].Count + 16) + 760LL),
          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v12[1].Count + 16) + 768LL),
          *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(Count + 8),
          (unsigned int *)&a1->HighPart,
          a1 + 1,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
        DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v18);
        return 0LL;
      }
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 534;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 515;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v18);
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 504;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
    if ( v18[0] )
      KeUnstackDetachProcess(&ApcState);
  }
  return 3221225485LL;
}
