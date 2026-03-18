/*
 * XREFs of DxgkpAcquireKeyedMutexFromHandle @ 0x14040DFBC
 * Callers:
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402218B0 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022B260 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14040DE30 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004D2D8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkpAcquireKeyedMutexFromHandle(struct _KTHREAD **a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned int v5; // eax
  int v6; // edx
  struct _KTHREAD *v7; // rcx
  int *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-58h]
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v13, a1);
  v4 = 0LL;
  v5 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)a1 + 74) )
    goto LABEL_7;
  v6 = *((_DWORD *)a1[35] + 4 * v5 + 2);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (*((_BYTE *)a1[35] + 16 * v5 + 8) & 0x60)
    || (v6 & 0x2000) != 0
    || (v6 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v7 = a1[35];
  if ( (*((_BYTE *)v7 + 16 * v5 + 8) & 0x1F) != 0xD )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8053;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid shared vm object handle: 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_8:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0LL;
  }
  v9 = (int *)*((_QWORD *)v7 + 2 * v5);
  if ( !v9 )
    goto LABEL_7;
  if ( *v9 != 4 )
  {
    WdLogSingleEntry1(2LL);
    v12 = *v9;
    WdLogGlobalForLineNumber = 8058;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid shared vm object type: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_8;
  }
  v10 = *((_QWORD *)v9 + 1);
  v11 = *(_QWORD *)(v10 + 24);
  if ( v11 )
  {
    DXGKEYEDMUTEX::AcquireReference(*(DXGKEYEDMUTEX **)(v10 + 24));
    v4 = v11;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8069;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot open keyed mutex from a shared resource which doesn't include a keyed mutex: 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return v4;
}
