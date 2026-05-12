/*
 * XREFs of NvmeDumpCreateDumpAdapterInfo @ 0x1401A1A10
 * Callers:
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x1401A2794 (NvmeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeDumpCreateDumpDriverInfo @ 0x1401A1ED0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeDumpFreeDumpAdapterInfo @ 0x1401A2108 (NvmeDumpFreeDumpAdapterInfo.c)
 *     NvmeNativeDumpFreeDumpDriverInfo @ 0x1401A22A0 (NvmeNativeDumpFreeDumpDriverInfo.c)
 *     NvmeDumpGetAdditionalCrashDumpArea @ 0x1401A2484 (NvmeDumpGetAdditionalCrashDumpArea.c)
 */

__int64 __fastcall NvmeDumpCreateDumpAdapterInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _BYTE *a5,
        _QWORD *a6,
        _BYTE *a7)
{
  _BYTE *v7; // r11
  _QWORD *v8; // r12
  _BYTE *v10; // r13
  unsigned int v12; // edi
  _QWORD *v13; // r9
  _QWORD *v14; // rcx
  _QWORD *v15; // rsi
  _QWORD *v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // r10
  _QWORD *v19; // rax
  __int64 Pool; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rsi
  __int64 v25; // rax
  char v26; // al
  __int16 v27; // ax
  __int64 v28; // rax
  int v29; // eax
  char v30; // cl
  bool v31; // sf
  __int64 v32; // rax
  __int64 v34; // [rsp+68h] [rbp+48h] BYREF
  __int64 v35; // [rsp+70h] [rbp+50h]
  __int64 v36; // [rsp+78h] [rbp+58h] BYREF

  v35 = a3;
  v34 = a2;
  v7 = a5;
  v8 = a6;
  v10 = a7;
  *a4 = 0LL;
  v12 = 0;
  v13 = (_QWORD *)(a3 + 40);
  LOBYTE(v34) = 0;
  v14 = *(_QWORD **)(a3 + 40);
  v15 = (_QWORD *)(a1 + 1048);
  v36 = 0LL;
  *v7 = 0;
  *v8 = 0LL;
  *v10 = 0;
  if ( v14 != (_QWORD *)(a3 + 40) )
  {
    do
    {
      v16 = v14 - 1;
      v17 = v14[2] - *v15;
      if ( !v17 )
        v17 = v14[3] - *(_QWORD *)(a1 + 1056);
      v18 = v14 - 1;
      v19 = v14 - 1;
      if ( !v17 )
        break;
      v14 = (_QWORD *)*v14;
      v16 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
    }
    while ( v14 != v13 );
    if ( v18 )
    {
      *v8 = v19[7];
      *a4 = (__int64)v16;
      *v7 = 1;
      *v10 = 1;
      return v12;
    }
  }
  Pool = RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  a5 = (_BYTE *)Pool;
  v21 = Pool;
  if ( Pool
    && (v22 = (_QWORD *)(Pool + 8),
        v22[1] = v22,
        *v22 = v22,
        *(_DWORD *)v21 = 112,
        *(_OWORD *)(v21 + 24) = *(_OWORD *)v15,
        v23 = (_DWORD *)RaidAllocatePool(64LL, 360LL, 1145266514LL, *(_QWORD *)(a1 + 8)),
        (v24 = v23) != 0LL) )
  {
    *v23 = 1145917490;
    v23[1] = 4097;
    v23[2] = 320;
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v24 + 2) = a1;
    *(_OWORD *)(v24 + 18) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(v24 + 22) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(v24 + 26) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(v24 + 30) = *(_OWORD *)(a1 + 224);
    *(_OWORD *)(v24 + 34) = *(_OWORD *)(a1 + 240);
    *(_OWORD *)(v24 + 38) = *(_OWORD *)(a1 + 256);
    *(_OWORD *)(v24 + 42) = *(_OWORD *)(a1 + 272);
    *(_OWORD *)(v24 + 46) = *(_OWORD *)(a1 + 288);
    *(_OWORD *)(v24 + 50) = *(_OWORD *)(a1 + 304);
    *(_OWORD *)(v24 + 54) = *(_OWORD *)(a1 + 320);
    *(_OWORD *)(v24 + 58) = *(_OWORD *)(a1 + 336);
    *(_OWORD *)(v24 + 62) = *(_OWORD *)(a1 + 352);
    *(_OWORD *)(v24 + 66) = *(_OWORD *)(a1 + 368);
    *(_OWORD *)(v24 + 70) = *(_OWORD *)(a1 + 384);
    v24[68] &= ~2u;
    *(_DWORD *)(v21 + 44) = 320;
    v25 = RaidAllocatePool(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( v25 )
    {
      v24[12] = 0x10000;
      *((_QWORD *)v24 + 7) = v25;
      v26 = *(_BYTE *)(a1 + 320);
      if ( v26 == 2 || (unsigned __int8)(v26 - 3) <= 1u )
        *(_DWORD *)(v21 + 40) |= 1u;
      v27 = HiberFileHybridPriority;
      *(_DWORD *)(v21 + 40) |= 0x40000002u;
      *((_WORD *)v24 + 152) = v27;
      if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
      {
        *(_QWORD *)(v21 + 64) = *(_QWORD *)(a1 + 1160);
        v28 = a1 + 1416;
      }
      else
      {
        *(_QWORD *)(v21 + 64) = 0LL;
        v28 = 0LL;
      }
      *((_QWORD *)v24 + 37) = v28;
      if ( *(_DWORD *)(a1 + 368) )
        NvmeDumpGetAdditionalCrashDumpArea(a1, v24 + 18);
      v29 = NvmeDumpCreateDumpDriverInfo(a1, v35, &v36, &v34);
      v30 = v34;
      v12 = v29;
      v31 = v29 < 0;
      v32 = v36;
      if ( !v31 )
      {
        *(_QWORD *)(v21 + 48) = v24;
        v12 = 0;
        *(_QWORD *)(v21 + 56) = v32;
        v24 = 0LL;
        *v8 = v32;
        v32 = 0LL;
        *a4 = v21;
        v21 = 0LL;
        a5 = 0LL;
        v36 = 0LL;
        *v10 = v30;
      }
      if ( !v30 && v32 )
        NvmeNativeDumpFreeDumpDriverInfo(&v36);
      if ( !v24 )
        goto LABEL_28;
    }
    else
    {
      v12 = -1073741670;
    }
    ExFreePoolWithTag(v24, 0x44436152u);
  }
  else
  {
    v12 = -1073741670;
  }
LABEL_28:
  if ( v21 )
    NvmeDumpFreeDumpAdapterInfo(&a5);
  return v12;
}
