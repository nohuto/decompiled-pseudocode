/*
 * XREFs of SmHwAcceleratorPartitionMgrStart @ 0x140821B84
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SmHwAcceleratorMgrPartitionRegister @ 0x1408214A8 (SmHwAcceleratorMgrPartitionRegister.c)
 */

__int64 __fastcall SmHwAcceleratorPartitionMgrStart(struct _LIST_ENTRY *a1, struct _KTHREAD *a2, _KPROCESS *a3)
{
  struct _LIST_ENTRY *v3; // rbp
  __int64 v4; // rsi
  __int64 v6; // rdi
  _QWORD *p_Flink; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  _OWORD v17[3]; // [rsp+20h] [rbp-78h] BYREF

  v3 = a1 + 2;
  v4 = 16LL * (unsigned __int16)KeNumberNodes;
  v6 = 0LL;
  p_Flink = &a1[2].Flink;
  memset(v17, 0, sizeof(v17));
  while ( v6 < 2 )
  {
    *p_Flink = SmAllocEx(v4, 0x6C416D73u, -1);
    if ( !v3 )
      return (unsigned int)-1073741670;
    if ( KeNumberNodes )
    {
      v10 = 0LL;
      v11 = (unsigned __int16)KeNumberNodes;
      do
      {
        v12 = (_QWORD *)(v10 + *p_Flink);
        v10 += 16LL;
        v12[1] = v12;
        *v12 = v12;
        --v11;
      }
      while ( v11 );
    }
    ++v6;
    ++p_Flink;
  }
  KiStackAttachProcess(a3, 0, (__int64)v17);
  v13 = SmHwAcceleratorMgrPartitionRegister(a2, a1, v14, v15);
  KiUnstackDetachProcess((__int64)v17, 0);
  if ( v13 >= 0 )
    return 0;
  return (unsigned int)v13;
}
