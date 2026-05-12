/*
 * XREFs of RaidAdapterRescanBus @ 0x140036EE4
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidDeleteBusEnumerator @ 0x1400370BC (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x14005CC38 (RaidBusEnumeratorProcessModifiedNodes.c)
 *     RaidAdapterTargetedRescan @ 0x14006BF20 (RaidAdapterTargetedRescan.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterRescanBus(__int64 a1, int *a2, _BYTE *a3)
{
  char v3; // r13
  char v4; // bp
  bool v5; // bl
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-B8h] BYREF
  char v17[112]; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v18[3]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(_BYTE *)(a1 + 106);
  v4 = 0;
  v5 = 0;
  if ( !v3 && (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
    return 0LL;
  memset_0(v17, 0, sizeof(v17));
  v16 = a1;
  v18[1] = v18;
  v12 = 0;
  v18[0] = v18;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4328) = MEMORY[0xFFFFF78000000014];
    if ( RaidIsAdapterControlSupported(a1 + 376, 11) )
      RaCallMiniportAdapterControl(a1 + 376);
    v14 = *(_DWORD *)(a1 + 4888);
    v12 = RaidAdapterEnumerateBus((unsigned __int8 *)a1, v13, (__int64)&v16);
    v4 = 1;
    v5 = v14 != *(_DWORD *)(a1 + 4888);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 4892) & 4) != 0 && (*(_DWORD *)(a1 + 4896) & 1) != 0 && *(_QWORD *)(a1 + 4944) )
        RtlSetBit((PRTL_BITMAP)(a1 + 4928), *(unsigned __int8 *)(*(_QWORD *)(a1 + 4904) + 8LL));
    }
    else
    {
      LOBYTE(v11) = v4;
      v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))RaidAdapterTargetedRescan)(
              a1,
              v10,
              &v16,
              v11);
      if ( !v4 )
        v12 = v15;
      if ( a2 )
        *a2 = v15;
      if ( a3 )
        *a3 = 1;
    }
  }
  if ( v12 >= 0 )
    RaidBusEnumeratorProcessModifiedNodes(&v16);
  RaidDeleteBusEnumerator(&v16);
  return (unsigned int)v12;
}
