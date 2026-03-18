/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1403B8380
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ @ 0x14018E340 (-VmBusSendFlushHeapTransitions@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJXZ.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ @ 0x1403B85CC (-FlushHeapTransitions@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1)
{
  __int64 v1; // rcx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v3; // rbx
  ADAPTER_RENDER *v4; // rdx
  unsigned __int64 v6; // rdx
  DXGADAPTER *v7[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-28h] BYREF
  struct DXGADAPTER *v9; // [rsp+48h] [rbp-20h]
  char v10; // [rsp+50h] [rbp-18h]
  unsigned int ULongFromUser; // [rsp+78h] [rbp+10h]
  struct DXGADAPTER *v12; // [rsp+80h] [rbp+18h] BYREF

  ULongFromUser = RtlReadULongFromUser(a1);
  v12 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v1);
  if ( !Current )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11733;
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v7, ULongFromUser, Current, &v12, 1);
  v3 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry2(3LL, ULongFromUser, -1073741811LL);
    WdLogGlobalForLineNumber = 11744;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v7, v6);
    return 3221225485LL;
  }
  v9 = v12;
  v10 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  if ( *((_DWORD *)v3 + 50) == 1 )
  {
    v4 = (ADAPTER_RENDER *)(*((_QWORD *)v3 + 396) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v3 + 396) >> 64));
    if ( v4 )
    {
      if ( *((_BYTE *)v3 + 209) )
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushHeapTransitions((struct DXGADAPTER *)((char *)v3 + 4712));
      else
        ADAPTER_RENDER::FlushHeapTransitions(v4);
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  if ( v7[0] )
    DXGADAPTER::ReleaseReference(v7[0]);
  return 0LL;
}
