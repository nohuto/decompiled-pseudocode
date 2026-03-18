/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1403B75BC
 * Callers:
 *     DxgkDestroyKeyedMutex @ 0x1401FF680 (DxgkDestroyKeyedMutex.c)
 *     ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225AB0 (-VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B05CC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140353BE0 (DxgkOpenResourceFromNtHandleInternal.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7978 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1)
{
  __int64 v1; // rdi
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v3; // rbx
  unsigned int v4; // eax
  int v5; // r8d
  __int64 v6; // rcx
  DXGKEYEDMUTEX *v7; // rbx
  _BYTE v9[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v3 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4345;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v9, Current);
  v4 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v4 >= *((_DWORD *)v3 + 74) )
    goto LABEL_14;
  v5 = *(_DWORD *)(*((_QWORD *)v3 + 35) + 16LL * v4 + 8);
  if ( (((unsigned int)v1 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)v3 + 35) + 16LL * v4 + 8) & 0x60)
    || (v5 & 0x2000) != 0
    || (v5 & 0x1F) == 0 )
  {
    goto LABEL_14;
  }
  v6 = *((_QWORD *)v3 + 35);
  if ( (*(_BYTE *)(v6 + 16LL * v4 + 8) & 0x1F) != 9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  v7 = *(DXGKEYEDMUTEX **)(v6 + 16LL * v4);
  if ( !v7 )
  {
LABEL_14:
    WdLogSingleEntry2(3LL, v1, -1073741811LL);
    WdLogGlobalForLineNumber = 4360;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    return 3221225485LL;
  }
  *(_DWORD *)(16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + v6 + 8) |= 0x2000u;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v7, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle(v1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4373;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 4373LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
