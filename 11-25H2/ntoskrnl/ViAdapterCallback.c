/*
 * XREFs of ViAdapterCallback @ 0x140B77B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     VfUtilDbgPrint @ 0x1406042DC (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x140604E10 (ViIsActiveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B74B44 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B74E40 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140B78BBC (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v8; // rax
  unsigned int v9; // esi
  char v10; // cl
  _DWORD *v12; // rdx
  KIRQL v13; // al
  __int64 v14; // r9
  _QWORD *v15; // r8

  v4 = *(_QWORD *)(a4 + 56);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 224) < 3u )
    {
      v8 = *(_QWORD *)(a4 + 96);
      if ( v8 && *(_DWORD *)v8 == -1393569779 )
      {
        *(_QWORD *)(v8 + 48) = a3;
        v6 = *(_QWORD *)(a4 + 96);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 228) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  *(_QWORD *)(a4 + 88) = v6;
  v9 = guard_dispatch_icall_no_overrides(a1);
  if ( !v4 || !ViIsActiveChannelWcb(v4, a4) )
    return v9;
  *(_DWORD *)(a4 + 52) = v9;
  v10 = *(_BYTE *)(v4 + 228);
  if ( v9 != 1 )
  {
    if ( !v10 )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v9 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, *(_DWORD *)(a4 + 48));
    v12 = *(_DWORD **)(a4 + 96);
    if ( v12 && *v12 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 176));
    v14 = *(_QWORD *)(a4 + 72);
    if ( *(_QWORD *)(v14 + 8) != a4 + 72 || (v15 = *(_QWORD **)(a4 + 80), *v15 != a4 + 72) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 176), v13);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)a4);
    return v9;
  }
  if ( v10 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 216));
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 80));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 288) = *(_DWORD *)(a4 + 48);
  return 1LL;
}
