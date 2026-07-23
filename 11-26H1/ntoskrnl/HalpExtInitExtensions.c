/*
 * XREFs of HalpExtInitExtensions @ 0x140CB50D8
 * Callers:
 *     HalpHalExtInitSystem @ 0x140BF11C0 (HalpHalExtInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpExtInitExtensions(struct _LIST_ENTRY *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY *v4; // rax
  int v5; // edi
  unsigned int v6; // edi
  void *MemoryInternal; // rax
  unsigned int v8; // r15d
  __int64 **v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // r13
  _BYTE *SparePtr; // rbp
  unsigned __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 Table; // [rsp+80h] [rbp+18h]

  v1 = 0;
  HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink = a1;
  v2 = (__int64)a1;
  v19 = 0LL;
  p_Blink = &a1[15].Flink[161].Blink;
  *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[48] = 0;
  v4 = *p_Blink;
  if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
  {
    v5 = 0;
    do
    {
      v4 = v4->Flink;
      ++v5;
    }
    while ( v4 != (struct _LIST_ENTRY *)p_Blink );
    *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[48] = v5;
    if ( v5 )
    {
      v6 = v5 << 6;
      MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v6, 1u);
      HalpDeviceBlockUnblockPushLock.WaitBlock[0].SparePtr = MemoryInternal;
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
                SparePtr = HalpDeviceBlockUnblockPushLock.WaitBlock[0].SparePtr;
                v13 = (unsigned __int64)v8 << 6;
                *(_QWORD *)((char *)HalpDeviceBlockUnblockPushLock.WaitBlock[0].SparePtr + v13 + 8) = *(_QWORD *)(v11 + 56);
                *(_QWORD *)&SparePtr[v13 + 16] = v19;
                *(_DWORD *)&SparePtr[v13 + 24] = 0;
                *(_QWORD *)&SparePtr[v13 + 48] = *(_QWORD *)(v11 + 48);
                *(_DWORD *)&SparePtr[v13 + 56] = *(_DWORD *)(v11 + 64);
                v14 = &SparePtr[v13 + 32];
                SparePtr[v13] = 1;
                *(_QWORD *)&SparePtr[v13 + 40] = v14;
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
                SparePtr[v13] = 0;
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
