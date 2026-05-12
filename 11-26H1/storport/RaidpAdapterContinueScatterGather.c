/*
 * XREFs of RaidpAdapterContinueScatterGather @ 0x140015370
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRequestComplete @ 0x14000E730 (RaidAdapterRequestComplete.c)
 *     RaidXrbSetDataBufferAddress @ 0x140015450 (RaidXrbSetDataBufferAddress.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUpdateZoneIoMetadata @ 0x14002B1E0 (RaidUpdateZoneIoMetadata.c)
 */

void __fastcall RaidpAdapterContinueScatterGather(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v6; // al
  char v7; // cl
  char v8; // al
  int v9; // esi
  __int64 v10; // rax
  struct _DEVICE_OBJECT *v11; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_BYTE *)(a4 + 17);
  v7 = v6 & 0xDF;
  v8 = v6 | 0x20;
  if ( *(_DWORD *)v4 != 1094997074 )
    v7 = v8;
  *(_BYTE *)(a4 + 17) = v7;
  *(_QWORD *)(a4 + 216) = v4;
  *(_QWORD *)(a4 + 112) = a3;
  if ( (int)RaidXrbSetDataBufferAddress(a4, v4, 0LL) < 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 168) + 3LL) = 48;
    v10 = *(_QWORD *)(a4 + 168);
    if ( *(_BYTE *)(v10 + 2) == 40 )
      *(_DWORD *)(v10 + 44) = -1073741670;
    else
      *(_DWORD *)(v10 + 64) = -1073741670;
    RaidUpdateZoneIoMetadata(*(_QWORD *)(a4 + 224), 0LL, a4);
    goto LABEL_13;
  }
  v9 = RaidAdapterPostScatterGatherExecute(v4, a4);
  if ( *(_BYTE *)(v4 + 105) )
  {
    v11 = *(struct _DEVICE_OBJECT **)(v4 + 32);
    *(_BYTE *)(v4 + 105) = 0;
    IoInvalidateDeviceRelations(v11, BusRelations);
  }
  if ( v9 < 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 168) + 3LL) = 4;
LABEL_13:
    RaidAdapterRequestComplete(v4, a4, 1);
  }
}
