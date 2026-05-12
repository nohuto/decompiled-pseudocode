/*
 * XREFs of NvmeNativeDumpCreateDumpAdapterInfo @ 0x1401A2C88
 * Callers:
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A3730 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidQueryCrashdumpFunctions @ 0x14007FBFC (RaidQueryCrashdumpFunctions.c)
 *     NvmeNativeDumpFreeDumpDriverInfo @ 0x1401A22A0 (NvmeNativeDumpFreeDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A3264 (NvmeNativeDumpCreateDumpDriverInfo.c)
 */

__int64 __fastcall NvmeNativeDumpCreateDumpAdapterInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _BYTE *a5,
        _QWORD *a6,
        _BYTE *a7)
{
  _BYTE *v7; // r10
  _QWORD *v8; // rdi
  _QWORD *v9; // r11
  _BYTE *v10; // r14
  _QWORD *v13; // r9
  _QWORD *v14; // r8
  unsigned int v15; // esi
  char v16; // r12
  PVOID v17; // rbp
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 Pool; // rax
  char *v21; // r14
  _QWORD *v22; // rax
  __int128 v23; // xmm0
  _DWORD *v24; // rax
  _DWORD *v25; // rdi
  _DWORD *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  char v34; // si
  struct _DEVICE_OBJECT *v35; // rcx
  __int64 v36; // rax
  PVOID v37; // rax
  _QWORD *v38; // rcx
  _BYTE *v39; // rax
  void *v40; // rcx
  PVOID v42[8]; // [rsp+28h] [rbp-40h] BYREF
  char v45; // [rsp+88h] [rbp+20h] BYREF

  v7 = a5;
  v8 = (_QWORD *)(a1 + 1048);
  v9 = a6;
  v10 = a7;
  *a4 = 0LL;
  v13 = (_QWORD *)(a3 + 40);
  v45 = 0;
  v14 = *(_QWORD **)(a3 + 40);
  v15 = 0;
  v42[0] = 0LL;
  v16 = 0;
  *v7 = 0;
  v17 = 0LL;
  *v9 = 0LL;
  *v10 = 0;
  if ( v14 != v13 )
  {
    do
    {
      v18 = v14 - 1;
      v19 = v14[2] - *v8;
      if ( !v19 )
        v19 = v18[4] - v8[1];
      if ( !v19 )
        break;
      v14 = (_QWORD *)*v14;
      v18 = 0LL;
    }
    while ( v14 != v13 );
    if ( v18 )
    {
      *v9 = v18[7];
      *v7 = 1;
      *v10 = 1;
      *a4 = v18;
      return v15;
    }
  }
  Pool = RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v21 = (char *)Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  v22 = (_QWORD *)(Pool + 8);
  v22[1] = v22;
  *v22 = v22;
  *(_DWORD *)v21 = 112;
  v23 = *(_OWORD *)v8;
  *((_DWORD *)v21 + 18) = 0x40000;
  *(_OWORD *)(v21 + 24) = v23;
  v24 = (_DWORD *)RaidAllocatePool(64LL, 392LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v25 = v24;
  if ( v24 )
  {
    *v24 = 1145917490;
    v26 = v24 + 88;
    v24[1] = 8193;
    v24[2] = 352;
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v25 + 2) = a1;
    v27 = RaidAllocatePool(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v27 )
    {
      v15 = -1073741670;
      goto LABEL_36;
    }
    v25[12] = 0x10000;
    *((_QWORD *)v25 + 7) = v27;
    *((_DWORD *)v21 + 10) |= 0x80000000;
    if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
    {
      v28 = *(_QWORD *)(a1 + 1160);
      v29 = a1 + 1416;
    }
    else
    {
      v29 = 0LL;
      v28 = 0LL;
    }
    *((_QWORD *)v21 + 8) = v28;
    *((_QWORD *)v25 + 37) = v29;
    *(_OWORD *)(v25 + 18) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(v25 + 22) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(v25 + 26) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(v25 + 30) = *(_OWORD *)(a1 + 224);
    *(_OWORD *)(v25 + 34) = *(_OWORD *)(a1 + 240);
    *(_OWORD *)(v25 + 38) = *(_OWORD *)(a1 + 256);
    *(_OWORD *)(v25 + 42) = *(_OWORD *)(a1 + 272);
    *(_OWORD *)(v25 + 46) = *(_OWORD *)(a1 + 288);
    *(_OWORD *)(v25 + 50) = *(_OWORD *)(a1 + 304);
    *(_OWORD *)(v25 + 54) = *(_OWORD *)(a1 + 320);
    *(_OWORD *)(v25 + 58) = *(_OWORD *)(a1 + 336);
    *(_OWORD *)(v25 + 62) = *(_OWORD *)(a1 + 352);
    *(_OWORD *)(v25 + 66) = *(_OWORD *)(a1 + 368);
    *(_OWORD *)(v25 + 70) = *(_OWORD *)(a1 + 384);
    v30 = RaidAllocatePool(64LL, 132LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v30 )
    {
      v15 = -1073741670;
LABEL_32:
      if ( !v16 && v17 )
        NvmeNativeDumpFreeDumpDriverInfo(v42);
      if ( !v25 )
      {
LABEL_37:
        if ( !v21 )
          return v15;
        goto LABEL_38;
      }
LABEL_36:
      ExFreePoolWithTag(v25, 0x44436152u);
      goto LABEL_37;
    }
    v31 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 1048LL);
    *(_OWORD *)v30 = *(_OWORD *)v31;
    *(_OWORD *)(v30 + 16) = *(_OWORD *)(v31 + 16);
    *(_OWORD *)(v30 + 32) = *(_OWORD *)(v31 + 32);
    *(_OWORD *)(v30 + 48) = *(_OWORD *)(v31 + 48);
    *(_OWORD *)(v30 + 64) = *(_OWORD *)(v31 + 64);
    *(_OWORD *)(v30 + 80) = *(_OWORD *)(v31 + 80);
    *(_OWORD *)(v30 + 96) = *(_OWORD *)(v31 + 96);
    *(_OWORD *)(v30 + 112) = *(_OWORD *)(v31 + 112);
    *(_DWORD *)(v30 + 128) = *(_DWORD *)(v31 + 128);
    *((_WORD *)v25 + 153) = *(_WORD *)(*(_QWORD *)(a1 + 592) + 8LL);
    *((_WORD *)v25 + 154) = *(_WORD *)(*(_QWORD *)(a1 + 592) + 10LL);
    *((_BYTE *)v25 + 310) = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 16LL);
    v32 = *(_DWORD *)(*(_QWORD *)(a1 + 592) + 24LL) & 0xFFFFC000;
    *((_QWORD *)v25 + 39) = v32;
    *((_QWORD *)v25 + 39) = v32 | ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 592) + 28LL) << 32);
    v25[83] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 620LL);
    *((_QWORD *)v25 + 40) = v30;
    v25[82] = *(_DWORD *)(a2 + 56);
    v15 = NvmeNativeDumpCreateDumpDriverInfo(a1, a3, v42, &v45);
    if ( (v15 & 0x80000000) != 0 )
    {
      v16 = v45;
      v17 = v42[0];
      goto LABEL_32;
    }
    v33 = *(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL);
    if ( v33 && (int)PoFxRegisterCrashdumpDevice(*v33) >= 0 )
    {
      *(_BYTE *)v26 = 1;
      v34 = 1;
      *((_QWORD *)v26 + 1) = **(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL);
    }
    else
    {
      v34 = 0;
    }
    v35 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    *(_WORD *)(a1 + 104) = 40;
    *(_WORD *)(a1 + 106) = 1;
    if ( RaidQueryCrashdumpFunctions(v35, (_LARGE_INTEGER)(a1 + 104)) >= 0
      && (v36 = *(_QWORD *)(a1 + 136)) != 0
      && *(_QWORD *)(a1 + 128) )
    {
      *((_QWORD *)v26 + 3) = v36;
      *((_QWORD *)v26 + 4) = *(_QWORD *)(a1 + 112);
    }
    else
    {
      *(_WORD *)(a1 + 106) = 0;
      if ( !v34 )
      {
LABEL_30:
        v37 = v42[0];
        v38 = a6;
        v15 = 0;
        v16 = v45;
        v17 = 0LL;
        *((PVOID *)v21 + 7) = v42[0];
        *((_QWORD *)v21 + 6) = v25;
        v25 = 0LL;
        *v38 = v37;
        v39 = a7;
        *a4 = v21;
        v21 = 0LL;
        v42[0] = 0LL;
        *v39 = v16;
        goto LABEL_32;
      }
    }
    *((_QWORD *)v26 + 2) = a1 + 100;
    *((_QWORD *)v25 + 3) = a1 + 100;
    *((_QWORD *)v25 + 4) = StorDumpAdapterPowerOn;
    *((_QWORD *)v25 + 5) = v26;
    goto LABEL_30;
  }
  v15 = -1073741670;
LABEL_38:
  v40 = (void *)*((_QWORD *)v21 + 6);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0x44436152u);
    *((_QWORD *)v21 + 6) = 0LL;
  }
  ExFreePoolWithTag(v21, 0x44436152u);
  return v15;
}
