/*
 * XREFs of NvmeAdapterGetControllerNvmSetData @ 0x1400E98FC
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeAdapterGetControllerNvmSetData(__int64 a1)
{
  __int64 v1; // r9
  PVOID v3; // rdi
  unsigned int v4; // r14d
  __int64 Pool; // rax
  unsigned __int16 v6; // bp
  int ControllerIdentifyData; // eax
  int v8; // eax
  __int16 v9; // bx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  P = 0LL;
  v3 = 0LL;
  v4 = 0;
  Pool = RaidAllocatePool(
           64LL,
           (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 338LL) << 7,
           1380147538LL,
           *(_QWORD *)(v1 + 8));
  *(_QWORD *)(a1 + 624) = Pool;
  if ( Pool )
  {
    v6 = 0;
    while ( v6 < *(_WORD *)(*(_QWORD *)(a1 + 592) + 338LL) )
    {
      ControllerIdentifyData = NvmeAdapterGetControllerIdentifyData(a1, 0, 4, v6 + 1, 0, &P);
      v3 = P;
      v4 = ControllerIdentifyData;
      if ( ControllerIdentifyData < 0 )
        goto LABEL_11;
      v8 = *(unsigned __int8 *)P;
      if ( !(_BYTE)v8 )
        break;
      if ( v8 >= *(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 338LL) - v6 )
        LOWORD(v8) = *(_WORD *)(*(_QWORD *)(a1 + 592) + 338LL) - v6;
      v9 = v8;
      memmove(
        (void *)(*(_QWORD *)(a1 + 624) + ((unsigned __int64)v6 << 7)),
        (char *)P + 128,
        (unsigned __int64)(unsigned __int16)v8 << 7);
      v6 += v9;
      ExFreePoolWithTag(v3, 0x52436152u);
      v3 = 0LL;
      P = 0LL;
    }
    *(_WORD *)(a1 + 618) = v6;
LABEL_11:
    if ( v3 )
      ExFreePoolWithTag(v3, 0x52436152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
