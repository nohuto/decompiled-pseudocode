/*
 * XREFs of MmCreateKernelStack @ 0x1403D3D00
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiAllocateXStateStack @ 0x1403D3C80 (KiAllocateXStateStack.c)
 *     KiEnableOptionalXStateFeatures @ 0x1403D5A0C (KiEnableOptionalXStateFeatures.c)
 *     KiAllocateProcessorStacks @ 0x1405EC974 (KiAllocateProcessorStacks.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140A7BC1C (PspRecheckThreadOptionalXStateFeatures.c)
 *     KiCreateKernelShadowStack @ 0x140A90E48 (KiCreateKernelShadowStack.c)
 *     KeAllocateCalloutStackEx @ 0x140AB3C50 (KeAllocateCalloutStackEx.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     MiCreateKernelStackInitialize @ 0x1403D3F4C (MiCreateKernelStackInitialize.c)
 *     MiCreateKernelStackFromPrcbCache @ 0x1403D40B8 (MiCreateKernelStackFromPrcbCache.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D41A0 (MiCreateKernelStackFromNodeCache.c)
 *     MiCreateKernelStackSlow @ 0x1403D4610 (MiCreateKernelStackSlow.c)
 *     MiLogKernelStackEvent @ 0x1405000AC (MiLogKernelStackEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmCreateKernelStack(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 KernelStackFromNodeCache; // r9
  char *v5; // rax
  char v6; // al
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD v18[4]; // [rsp+20h] [rbp-60h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  unsigned int v20; // [rsp+50h] [rbp-30h]
  unsigned int v21; // [rsp+54h] [rbp-2Ch]
  int v22; // [rsp+5Ch] [rbp-24h]
  char *v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  char v25; // [rsp+90h] [rbp+10h] BYREF

  memset_0(v18, 0, 0x58uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  result = MiCreateKernelStackInitialize(v18, a1);
  if ( (int)result < 0 )
    return result;
  v5 = &v25;
  if ( *(_DWORD *)(a1 + 4) == 5 )
    v5 = v23;
  v23 = v5;
  v6 = v19;
  if ( (v19 & 1) != 0 )
    goto LABEL_5;
  if ( (v19 & 0x10) == 0
    || (ULONG *)v18[0] != &MiSystemPartition
    || (KernelStackFromNodeCache = MiCreateKernelStackFromPrcbCache(v18)) == 0 )
  {
    KernelStackFromNodeCache = MiCreateKernelStackFromNodeCache(v18, v20, v3, KernelStackFromNodeCache);
    if ( !KernelStackFromNodeCache )
    {
      if ( (unsigned __int64)v22 >= 8
        || (v15 = *(unsigned int *)(((v22 + 880LL * v20) << 6) + *(_QWORD *)(v18[0] + 16LL) + 14284), (_DWORD)v15 == v20)
        || (KernelStackFromNodeCache = MiCreateKernelStackFromNodeCache(v18, v15, v14, 0LL)) == 0 )
      {
        v6 = v19;
LABEL_5:
        if ( (v6 & 0x40) != 0 )
          return 3221225688LL;
        KernelStackFromNodeCache = MiCreateKernelStackSlow(v18);
        if ( !KernelStackFromNodeCache )
          return 3221225626LL;
      }
    }
  }
  v7 = v21;
  if ( v21 != v20 && (unsigned __int64)v22 < 8 )
  {
    v16 = (v22 + 880LL * v20) << 6;
    v17 = *(_QWORD *)(v18[0] + 16LL);
    v7 = v21;
    if ( *(_DWORD *)(v16 + v17 + 14284) != v21 )
    {
      *(_DWORD *)(v16 + v17 + 14284) = v21;
      v7 = v21;
    }
  }
  v8 = v22;
  v9 = v24;
  *(_QWORD *)(a1 + 24) = KernelStackFromNodeCache;
  *(_QWORD *)(a1 + 32) = v9;
  if ( v8 < 8 )
  {
    v10 = v7;
    v11 = 1;
    v12 = *(_QWORD *)(v18[0] + 16LL) + ((880 * v10 + v8) << 6);
    if ( *(_DWORD *)(v12 + 14276) + 1 > 0 )
      v11 = *(_DWORD *)(v12 + 14276) + 1;
    *(_DWORD *)(v12 + 14276) = v11;
    v13 = *(_DWORD *)(v12 + 4LL * *(unsigned int *)(v12 + 14272) + 14256);
    if ( v13 < v11 || v13 < 0 )
      *(_DWORD *)(v12 + 4LL * *(unsigned int *)(v12 + 14272) + 14256) = v11;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v19 & 8) != 0 && *(_DWORD *)(a1 + 4) == 5 )
    MiLogKernelStackEvent(KernelStackFromNodeCache - (v18[2] << 12), v18[3], 1LL);
  return 0LL;
}
