/*
 * XREFs of PoFxRegisterCoreDevice @ 0x1407D0040
 * Callers:
 *     HalpTimerInitPowerManagement @ 0x1405846BC (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14058DFA4 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x140592834 (HalpInterruptInitPowerManagement.c)
 *     PoFxRegisterDebugger @ 0x140CDC3E8 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxInsertDevice @ 0x1404E9100 (PopFxInsertDevice.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x140B59668 (PopFxConvertV1Components.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterCoreDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // esi
  void *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KLOCK_ENTRIES *v10; // r9
  _QWORD v12[10]; // [rsp+50h] [rbp-58h] BYREF
  struct _LIST_ENTRY *v13; // [rsp+B0h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = a1;
  if ( a1 && *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 24) )
  {
    v6 = (void *)PopFxConvertV1Components(a2 + 48, *(unsigned int *)(a2 + 4));
    if ( v6 )
    {
      memset_0(v12, 0, sizeof(v12));
      v12[0] = *(_QWORD *)(a2 + 8);
      v12[1] = *(_QWORD *)(a2 + 16);
      v12[2] = *(_QWORD *)(a2 + 32);
      v12[6] = *(_QWORD *)(a2 + 24);
      v7 = PopFxRegisterDeviceWorker(
             0,
             v5,
             (unsigned int)v12,
             (_DWORD)v6,
             *(_DWORD *)(a2 + 4),
             *(_QWORD *)(a2 + 40),
             0,
             0LL,
             (__int64)&v13);
      if ( v7 >= 0 )
      {
        PopFxInsertDevice(v9, v8, v13, v10);
        v7 = 0;
      }
      else
      {
        v13 = 0LL;
      }
      ExFreePoolWithTag(v6, 0x4D584650u);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  *a3 = v13;
  return (unsigned int)v7;
}
