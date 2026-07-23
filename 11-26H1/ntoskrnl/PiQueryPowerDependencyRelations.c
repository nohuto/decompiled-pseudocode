/*
 * XREFs of PiQueryPowerDependencyRelations @ 0x140B37DDC
 * Callers:
 *     PiQueryPowerRelations @ 0x140B37868 (PiQueryPowerRelations.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404E6CC8 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404ED618 (PnpReleasePowerRelationsQueueLock.c)
 *     PiEnumerateProviderListEntry @ 0x1407A2650 (PiEnumerateProviderListEntry.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1409B298C (PiGetProviderList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerDependencyRelations(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *ProviderList; // r15
  _QWORD *v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  __int64 i; // r11
  __int64 *v9; // r11
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *j; // r14

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  ProviderList = PiGetProviderList(*(_QWORD *)(a1 + 32));
  v4 = (_QWORD *)(a1 + 192);
  v5 = *(_QWORD **)(a1 + 192);
  while ( v5 != v4 )
  {
    v6 = v5;
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 48) )
    {
      for ( i = *ProviderList; (__int64 *)i != ProviderList; i = *v9 )
        PiEnumerateProviderListEntry(i);
      PnpAcquirePowerRelationsQueueLock();
      v10 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v6
        || (v11 = (_QWORD *)v6[1], (_QWORD *)*v11 != v6)
        || (*v11 = v10, *(_QWORD *)(v10 + 8) = v11, v12 = v6[3], *(_QWORD **)(v12 + 8) != v6 + 3)
        || (v13 = (_QWORD *)v6[4], (_QWORD *)*v13 != v6 + 3) )
      {
        __fastfail(3u);
      }
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      PnpReleasePowerRelationsQueueLock();
      ExFreePoolWithTag(v6, 0x72775044u);
    }
  }
  for ( j = (__int64 *)*ProviderList; j != ProviderList; j = (__int64 *)*j )
    PiEnumerateProviderListEntry((__int64)j);
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
