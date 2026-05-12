/*
 * XREFs of RaUnitStorageDumpControl @ 0x14018C0B0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1400A3064 (RaUnitStorageFreeDumpInfo.c)
 *     RaidNvmeIceDumpTypeFromUsageAndAction @ 0x1400A690C (RaidNvmeIceDumpTypeFromUsageAndAction.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x140185A14 (RaidAdapterPopulateMiniportDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageDumpControl(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r8
  void (__fastcall *v12)(_QWORD, _QWORD); // r9
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // r9
  unsigned __int64 v18; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  int v22; // [rsp+20h] [rbp-18h]

  v3 = a1[6];
  v6 = *(_QWORD *)(v3 + 16);
  if ( a2 == 2 )
  {
    v7 = RaUnitAcquireRemoveLock(*(_QWORD *)(v3 + 16), 0LL, 0);
    if ( v7 >= 0 )
    {
      v7 = RaidAdapterPopulateMiniportDumpInfo(*(_QWORD *)(v6 + 24), a1[7], a3);
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v7 >= 0 )
        {
          v13 = *(_QWORD *)(v6 + 3608);
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 48);
            if ( v14 )
            {
              if ( *(_QWORD *)(v14 + 88) )
              {
                v15 = RaidNvmeIceDumpTypeFromUsageAndAction(*(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8));
                v7 = v17(*(_QWORD *)(v16 + 8), v15);
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                {
                  v22 = v7;
                  WPP_SF_qD(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    0x24u,
                    (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
                    v6,
                    v22);
                }
              }
            }
          }
        }
      }
      v18 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v19 = *(_DWORD *)(v18 + *(_QWORD *)(v6 + 40));
      while ( (v19 & 1) == 0 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + *(_QWORD *)(v6 + 40)), v19 - 2, v19);
        if ( v20 == v19 )
          return (unsigned int)v7;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
    }
  }
  else if ( a2 == 7 )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      v8 = *(_QWORD *)(v6 + 3608);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 48);
        if ( v9 )
        {
          if ( *(_QWORD *)(v9 + 96) )
          {
            v10 = RaidNvmeIceDumpTypeFromUsageAndAction(*(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8));
            v12(*(_QWORD *)(v11 + 8), v10);
          }
        }
      }
    }
    return (unsigned int)RaUnitStorageFreeDumpInfo(a3, a1);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
