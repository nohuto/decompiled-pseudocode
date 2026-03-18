/*
 * XREFs of HalpExtInitExtensions @ 0x140CAF098
 * Callers:
 *     HalpHalExtInitSystem @ 0x140BEB1C0 (HalpHalExtInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140342AEC (HalpAcpiGetTable.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x14057DCF0 (HalpMmAllocateMemoryInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HalpExtInitExtensions(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  _QWORD **v3; // rcx
  _QWORD *v4; // rax
  int v5; // edi
  unsigned int v6; // edi
  struct _KTHREAD *MemoryInternal; // rax
  unsigned int v8; // r15d
  __int64 **v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // r13
  struct _KTHREAD *Thread; // rbp
  unsigned __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rsi
  struct _LIST_ENTRY *v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 Table; // [rsp+80h] [rbp+18h]

  v1 = 0;
  HalpDeviceBlockUnblockPushLock.WaitBlock[1].SparePtr = a1;
  v2 = (__int64)a1;
  v19 = 0LL;
  v3 = (_QWORD **)(a1[30] + 2584LL);
  *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[80] = 0;
  v4 = *v3;
  if ( *v3 != v3 )
  {
    v5 = 0;
    do
    {
      v4 = (_QWORD *)*v4;
      ++v5;
    }
    while ( v4 != v3 );
    *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[80] = v5;
    if ( v5 )
    {
      v6 = v5 << 6;
      MemoryInternal = (struct _KTHREAD *)HalpMmAllocateMemoryInternal(v6, 1u);
      HalpDeviceBlockUnblockPushLock.WaitBlock[1].Thread = MemoryInternal;
      if ( MemoryInternal )
      {
        memset_0(MemoryInternal, 0, v6);
        Table = HalpAcpiGetTable(v2, 1414681411, 0, 0);
        if ( Table )
        {
          v8 = 0;
          v9 = (__int64 **)(*(_QWORD *)(v2 + 240) + 2584LL);
          v10 = *v9;
          while ( v10 != (__int64 *)v9 )
          {
            if ( *((int *)v10 + 10) >= 0 )
            {
              v11 = v10[2];
              v19 = 0LL;
              if ( (int)guard_dispatch_icall_no_overrides(0LL, (__int64)&v19) >= 0 && v19 )
              {
                Thread = HalpDeviceBlockUnblockPushLock.WaitBlock[1].Thread;
                v13 = (unsigned __int64)v8 << 6;
                *(struct _LIST_ENTRY **)((char *)&HalpDeviceBlockUnblockPushLock.WaitBlock[1].Thread->Header.WaitListHead.Flink
                                       + v13) = *(struct _LIST_ENTRY **)(v11 + 56);
                *(struct _LIST_ENTRY **)((char *)&Thread->Header.WaitListHead.Blink + v13) = v19;
                *(_DWORD *)((char *)&Thread->SListFaultAddress + v13) = 0;
                *(void *volatile *)((char *)&Thread->StackLimit + v13) = *(void *volatile *)(v11 + 48);
                *(_DWORD *)((char *)&Thread->StackBase + v13) = *(_DWORD *)(v11 + 64);
                v14 = (unsigned __int64 *)((char *)&Thread->QuantumTarget + v13);
                *(&Thread->Header.Type + v13) = 1;
                *(void **)((char *)&Thread->InitialStack + v13) = v14;
                *v14 = v14;
                v15 = (__int64 *)v10[3];
                if ( v15 != v10 + 3 )
                {
                  v16 = Table;
                  do
                  {
                    guard_dispatch_icall_no_overrides(v8, v16 + *((unsigned int *)v15 + 4));
                    v15 = (__int64 *)*v15;
                  }
                  while ( v15 != v10 + 3 );
                  v2 = (__int64)a1;
                }
                *(&Thread->Header.Type + v13) = 0;
              }
            }
            else
            {
              DbgPrintEx(
                0x65u,
                0,
                "HAL Extension %s failed load, status=0x%x\n",
                (const char *)v10[6],
                *((_DWORD *)v10 + 10));
            }
            ++v8;
            v10 = (__int64 *)*v10;
            v9 = (__int64 **)(*(_QWORD *)(v2 + 240) + 2584LL);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v1;
}
