/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1402B5E3C
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402B27C4 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // r15
  volatile signed __int32 *v8; // r12
  unsigned int v9; // eax
  int v10; // r8d
  __int64 v11; // rcx
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebx
  struct _DXGKARG_DESCRIBEALLOCATION v16; // [rsp+50h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+C8h] [rbp+48h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
  {
    v8 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v9 = (a2 >> 6) & 0xFFFFFF;
    if ( v9 < *((_DWORD *)v7 + 74) )
    {
      v10 = *(_DWORD *)(*((_QWORD *)v7 + 35) + 16LL * v9 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v7 + 35) + 16LL * v9 + 8) & 0x60)
        && (v10 & 0x2000) == 0
        && (v10 & 0x1F) != 0 )
      {
        v11 = *((_QWORD *)v7 + 35);
        if ( (*(_BYTE *)(v11 + 16LL * v9 + 8) & 0x1F) == 5 )
        {
          v12 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v9);
          goto LABEL_8;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v12 = 0LL;
LABEL_8:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18, v12);
    _InterlockedDecrement(v8 + 4);
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
    if ( v18 )
    {
      v13 = *((_QWORD *)a1 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(v18[1].Count + 16) + 16LL) != *(_QWORD *)(v13 + 16) )
      {
        v14 = -1073741811;
        WdLogSingleEntry3(2LL, a1, v18, -1073741811LL);
        WdLogGlobalForLineNumber = 2628;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)a1,
          (__int64)v18,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_12;
      }
      memset(&v16, 0, sizeof(v16));
      v16.hAllocation = *(HANDLE *)(v18[6].Count + 16);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v13 + 16) + 3168LL), &v16) >= 0 )
      {
        a3->right = v16.Width;
        a3->bottom = v16.Height;
        *(_QWORD *)&a3->left = 0LL;
        v14 = 0;
LABEL_12:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18);
        return v14;
      }
      WdLogSingleEntry2(2LL, v16.hAllocation, a1);
      WdLogGlobalForLineNumber = 2637;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to query source surface size for source 0x%I64x, device 0x%I64x",
        (__int64)v16.hAllocation,
        (__int64)a1,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2619;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", a2, 0LL, 0LL, 0LL, 0LL);
    }
    v14 = -1073741823;
    goto LABEL_12;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2611;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 2611LL, 0LL, 0LL, 0LL, 0LL);
  return -1073741811LL;
}
