/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140158860
 * Callers:
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x140144F10 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x140144F80 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015C390 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1401589E0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, volatile signed __int32 **),
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // r8
  unsigned __int64 i; // rdi
  volatile signed __int32 *v7; // rbx
  unsigned __int64 v8; // rax
  volatile signed __int32 *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = qword_14011F6D8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = qword_14011F6D8;
  for ( i = 0LL; i < *(unsigned int *)(v5 + 44); ++i )
  {
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(v5 + 48) + 8 * i);
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 16);
      ExReleasePushLockEx(v2, 0LL);
      KeLeaveCriticalRegion();
      v9 = v7;
      _InterlockedIncrement(v7 + 16);
    }
    else
    {
      ExReleasePushLockEx(v2, 0LL);
      KeLeaveCriticalRegion();
      v9 = 0LL;
    }
    a1(a2, &v9);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    v5 = qword_14011F6D8;
    v8 = *(unsigned int *)(qword_14011F6D8 + 44);
    if ( v8 < i )
      goto LABEL_15;
    if ( v8 <= i )
      __fastfail(5u);
    if ( (*(_QWORD *)(*(_QWORD *)(qword_14011F6D8 + 48) + 8 * i) != 0LL) != (v7 != 0LL) )
LABEL_15:
      i = 0LL;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 16, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v7);
      v5 = qword_14011F6D8;
    }
  }
  ExReleasePushLockEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
