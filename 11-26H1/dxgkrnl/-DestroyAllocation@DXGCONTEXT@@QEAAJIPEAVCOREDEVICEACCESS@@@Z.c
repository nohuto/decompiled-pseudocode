/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1403C98A8
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1403731B8 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, unsigned int a2, PERESOURCE **a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rdi
  unsigned int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  DXGDEVICE *v13; // r10
  _BYTE v15[32]; // [rsp+50h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this);
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 200LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, Current);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)v7 + 74) )
    goto LABEL_14;
  v9 = *(_DWORD *)(*((_QWORD *)v7 + 35) + 16LL * v8 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)v7 + 35) + 16LL * v8 + 8) & 0x60)
    || (v9 & 0x2000) != 0
    || (v9 & 0x1F) == 0 )
  {
    goto LABEL_14;
  }
  v10 = *((_QWORD *)v7 + 35);
  if ( (*(_BYTE *)(v10 + 16LL * v8 + 8) & 0x1F) != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_14:
    v11 = 0LL;
    goto LABEL_9;
  }
  v11 = *(_QWORD *)(v10 + 16LL * v8);
  if ( v11 )
    *(_DWORD *)(16 * (((unsigned __int64)a2 >> 6) & 0xFFFFFF) + v10 + 8) |= 0x2000u;
LABEL_9:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  if ( v11 )
  {
    v12 = *(unsigned int *)(*((_QWORD *)this + 2) + 608LL);
    v13 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( (_DWORD)v12 == 4 )
      DxgkDestroyClientAllocation(v12, v13, 0, 0LL, *(struct DXGALLOCATION ***)(v11 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v13,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v11 + 40),
        a3,
        DXGDEVICE::DestroyFlagsDefault);
    return 0LL;
  }
  return 3221225485LL;
}
