/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140373234
 * Callers:
 *     DxgkDestroyClientAllocation @ 0x1403731B8 (DxgkDestroyClientAllocation.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x140373448 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 152) == 1 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v6 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8732;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_ExecutionState != DXGDEVICEEXECUTION_ACTIVE || GetRenderCore()->IsCoreResourceSharedOwner()",
        8732LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v7 = *((_QWORD *)a2 + 5);
  if ( v7 )
  {
    if ( !a3 )
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v7 + 80));
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)(*((_QWORD *)a2 + 5) + 24LL));
    if ( !a3 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(*((_QWORD *)a2 + 5) + 80LL));
  }
  else if ( a3 )
  {
    if ( *((_DWORD *)this + 152) == 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 168)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8702;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_ExecutionState != DXGDEVICEEXECUTION_ACTIVE || GetRenderCore()->IsCoreResourceSharedOwner()",
          8702LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v9 = *((_QWORD *)a2 + 8);
    if ( v9 )
      *(_QWORD *)(v9 + 56) = *((_QWORD *)a2 + 7);
    v10 = *((_QWORD *)a2 + 7);
    v11 = *((_QWORD *)a2 + 8);
    if ( v10 )
      *(_QWORD *)(v10 + 64) = v11;
    else
      *((_QWORD *)this + 6) = v11;
    *((_QWORD *)a2 + 8) = 0LL;
    *((_QWORD *)a2 + 7) = 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (struct _KTHREAD **)this + 26);
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  }
}
