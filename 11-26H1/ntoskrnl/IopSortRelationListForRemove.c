/*
 * XREFs of IopSortRelationListForRemove @ 0x1409B16D8
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x1409B4990 (PnpBuildRemovalRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x1409B5A28 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     PiEnumerateProviderListEntry @ 0x1407A2650 (PiEnumerateProviderListEntry.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1409B2918 (PipIsDeviceInDeviceObjectList.c)
 *     PiGetProviderList @ 0x1409B298C (PiGetProviderList.c)
 *     PipSortDeviceObjectList @ 0x1409B2DD8 (PipSortDeviceObjectList.c)
 */

__int64 __fastcall IopSortRelationListForRemove(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v3; // r11
  int v4; // r15d
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char IsDeviceInDeviceObjectList; // r14
  __int64 v11; // r11
  _QWORD **ProviderList; // r13
  _QWORD *i; // rsi

  if ( *(_BYTE *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
    v3 = *(_DWORD **)a1;
    v4 = 0;
    v5 = 0LL;
    if ( !**(_DWORD **)a1 )
      goto LABEL_3;
    do
    {
      v7 = *(_QWORD *)&v3[6 * v5 + 4];
      if ( v7 )
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
      else
        v8 = 0LL;
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 || (v9 = *(_QWORD *)(v8 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        IsDeviceInDeviceObjectList = PipIsDeviceInDeviceObjectList(v3, *(_QWORD *)(v9 + 32), 0LL);
      else
        IsDeviceInDeviceObjectList = 0;
      ProviderList = (_QWORD **)PiGetProviderList(v7);
      for ( i = *ProviderList; i != ProviderList; i = (_QWORD *)*i )
        PiEnumerateProviderListEntry((__int64)i);
      if ( IsDeviceInDeviceObjectList )
      {
        *(_DWORD *)(v11 + 24 * v5 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v11 + 24 * v5 + 32) |= 4u;
        ++v4;
      }
      v3 = *(_DWORD **)a1;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < **(_DWORD **)a1 );
    if ( v4 )
    {
      v6 = PipSortDeviceObjectList(a1);
      if ( v6 >= 0 )
        *(_BYTE *)(a1 + 8) = 1;
    }
    else
    {
LABEL_3:
      v6 = -1073741823;
    }
    PnpReleaseDependencyRelationsLock();
  }
  return (unsigned int)v6;
}
