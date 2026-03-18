/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684
 * Callers:
 *     ?CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140007F0C (-CreateResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x140009150 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x140052F90 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateAllocationHandleSafe@DXGPROCESS@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140066330 (-CreateAllocationHandleSafe@DXGPROCESS@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@@Z @ 0x1401E2F50 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401E3B80 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401E99E0 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F9BAC (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@IPEAE@Z @ 0x140200460 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1402123F0 (-AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223E40 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224650 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B003C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403704B0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x140395968 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // r8d

  if ( a3 > 31 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 150LL;
    v10 = L"Type <= HMGRENTRY_TYPE_LIMIT";
LABEL_5:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_6;
  }
  if ( a3 <= 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 151LL;
    v10 = L"Type > HMGRENTRY_TYPE_FREE";
    goto LABEL_5;
  }
LABEL_6:
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v12 = a1[2];
  if ( (unsigned int)v12 >= a1[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 169;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 169LL, 0LL, 0LL, 0LL, 0LL);
  }
  v13 = 16 * v12;
  if ( (*(_DWORD *)(16 * v12 + *(_QWORD *)a1 + 8) & 0x1F) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 170;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pEntryTable[Index].Type == HMGRENTRY_TYPE_FREE",
      170LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = *(_QWORD *)a1;
  v15 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v16 = 2LL * a1[3];
  a1[2] = v15;
  a1[3] = *(_DWORD *)(v14 + 8 * v16);
  if ( v15 >= a1[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 177;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListHead < m_TableSize",
      177LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1[3] >= a1[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 178;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListTail < m_TableSize",
      178LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = *(_DWORD *)(v13 + *(_QWORD *)a1 + 8);
  *(_QWORD *)(v13 + *(_QWORD *)a1) = a2;
  v18 = v17 >> 5;
  *(_DWORD *)(v13 + *(_QWORD *)a1 + 8) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(v13 + *(_QWORD *)a1 + 8)) & 0x1F;
  *(_DWORD *)(v13 + *(_QWORD *)a1 + 8) ^= ((unsigned __int16)*(_DWORD *)(v13 + *(_QWORD *)a1 + 8) ^ (unsigned __int16)(a4 << 7)) & 0x1F80;
  *(_DWORD *)(v13 + *(_QWORD *)a1 + 8) = *(_DWORD *)(v13 + *(_QWORD *)a1 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  *(_DWORD *)(v13 + *(_QWORD *)a1 + 8) &= ~0x4000u;
  if ( (unsigned int)(a3 - 4) <= 1 )
    *(_DWORD *)(v13 + *(_QWORD *)a1 + 8) |= 0x4000u;
  --a1[5];
  return (*(_DWORD *)(*(_QWORD *)a1 + 16 * v12 + 8) >> 7) & 0x3F | (((v18 << 24) | v12 & 0xFFFFFF) << 6);
}
