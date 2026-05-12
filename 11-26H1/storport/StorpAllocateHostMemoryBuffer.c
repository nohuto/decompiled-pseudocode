/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x140051374
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400F5474 (NvmeControllerInitHostMemoryBuffer.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     MiniportGetNvmeAdapter @ 0x140058B94 (MiniportGetNvmeAdapter.c)
 *     McTemplateK0zdqqqqqqqqq_EtwWriteTransfer @ 0x140079568 (McTemplateK0zdqqqqqqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  _DWORD *v10; // rcx
  unsigned __int64 v11; // rbp
  _QWORD *v12; // r15
  _QWORD *v13; // r13
  unsigned int *v14; // rsi
  __int64 NvmeAdapter; // rax
  unsigned int v16; // r8d
  unsigned __int64 v17; // r9
  SIZE_T v18; // r10
  unsigned __int64 v19; // r11
  bool v20; // zf
  unsigned int v21; // ebx
  __int64 RaidAdapter; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned __int64 v25; // r9
  SIZE_T v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdi
  SIZE_T v29; // r14
  _QWORD *v30; // r9
  __int64 Pool; // rax
  unsigned int *v32; // rbp
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD); // r10
  __int64 v35; // rax
  __int64 *v36; // rcx
  PMDL PagesForMdl; // rax
  PMDL v38; // rax
  __int64 ByteCount; // rdx
  __int64 v40; // r9
  unsigned int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  SIZE_T v45; // rax
  struct _MDL *v46; // rcx
  unsigned int *v47; // rbx
  _QWORD *v48; // rax
  int *Flags; // [rsp+28h] [rbp-D0h]
  unsigned int v51; // [rsp+70h] [rbp-88h]
  SIZE_T v52; // [rsp+78h] [rbp-80h]
  _QWORD *v53; // [rsp+80h] [rbp-78h]
  __int64 v54; // [rsp+88h] [rbp-70h]
  int v55; // [rsp+90h] [rbp-68h] BYREF
  PMDL *v56; // [rsp+98h] [rbp-60h]
  __int64 *v57; // [rsp+A0h] [rbp-58h]
  _QWORD *v58; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v59; // [rsp+B0h] [rbp-48h]
  unsigned int v60; // [rsp+100h] [rbp+8h]
  char v62; // [rsp+110h] [rbp+18h]

  v62 = a3;
  v10 = *(_DWORD **)(a1 - 16);
  v55 = 0;
  v11 = a3;
  v52 = 0LL;
  v12 = 0LL;
  v60 = 0;
  v53 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (v10[62] & 1) != 0 )
  {
    NvmeAdapter = MiniportGetNvmeAdapter(v10, 1LL, 0LL);
    v13 = (_QWORD *)NvmeAdapter;
    if ( !NvmeAdapter )
      goto LABEL_77;
    v20 = *(_QWORD *)(NvmeAdapter + 1424) == 0LL;
  }
  else
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v10);
    v12 = (_QWORD *)RaidAdapter;
    if ( !RaidAdapter )
      goto LABEL_77;
    v20 = *(_QWORD *)(RaidAdapter + 5664) == 0LL;
  }
  if ( !v20 )
  {
    v21 = -1056964607;
    goto LABEL_78;
  }
  v23 = 4096LL;
  if ( v19 )
    v23 = v19;
  v59 = v23;
  if ( v11 < v23 || ((v11 | v23) & 0xFFF) != 0 || 0x1000 % a5 )
    goto LABEL_77;
  if ( !a10 || (v24 = *a10, (v51 = *a10) == 0) || a8 )
  {
    LOBYTE(v19) = a2;
LABEL_77:
    v21 = -1056964602;
    goto LABEL_78;
  }
  switch ( HmbAllocationPolicy )
  {
    case 1:
      v25 = v23;
      break;
    case 2:
      v25 = v11;
      break;
    case 3:
      v25 = (v17 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v25 >= v23 )
      {
        if ( v25 > v11 )
          v25 = v11;
      }
      else
      {
        v25 = v23;
      }
      v24 = *a10;
      break;
    default:
      v21 = -1056964606;
      goto LABEL_22;
  }
  v26 = (unsigned int)HmbMaximumSize;
  if ( v25 <= (unsigned int)HmbMaximumSize )
    v26 = v25;
  if ( v12 )
  {
    v27 = v12[112];
  }
  else
  {
    v51 = v24;
    if ( !v13 )
    {
      v28 = 0LL;
      v54 = 0LL;
      goto LABEL_38;
    }
    v27 = v13[145];
  }
  v54 = v27;
  v28 = v27;
LABEL_38:
  v29 = v26;
  while ( v29 >= 0x1000 && v18 < v26 )
  {
    v30 = v12;
    if ( !v12 )
      v30 = v13;
    Pool = RaidAllocatePool(64LL, 40LL, 1161912658LL, v30[1]);
    v32 = (unsigned int *)Pool;
    if ( !Pool )
    {
      v16 = v60;
      v18 = v52;
      break;
    }
    v33 = *(_QWORD *)(v28 + 8);
    v56 = (PMDL *)(Pool + 8);
    v57 = (__int64 *)(Pool + 24);
    v58 = (_QWORD *)(Pool + 16);
    v34 = *(__int64 (__fastcall **)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD))(v33 + 272);
    if ( v34 )
    {
      Flags = &v55;
      v35 = v34(v28, &LowAddress, &HighAddress, (unsigned int)v29, 0);
      v36 = v57;
      *v57 = v35;
    }
    else
    {
      PagesForMdl = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v29, MmNonCached, 0x20u);
      *v56 = PagesForMdl;
      v36 = v57;
    }
    v18 = v52;
    v38 = *v56;
    if ( *v56 )
    {
      ByteCount = v38->ByteCount;
      v40 = a9;
      v41 = v60;
      v42 = 2LL * v60;
      v18 = ByteCount + v52;
      *(_QWORD *)(a9 + 8 * v42) = (__int64)v38[1].Next << 12;
      *(_DWORD *)(v40 + 8 * v42 + 8) = ByteCount;
LABEL_49:
      v16 = v41 + 1;
      v52 = v18;
      v60 = v16;
      if ( v14 )
        *v53 = v32;
      else
        v14 = v32;
      v53 = v32;
      goto LABEL_56;
    }
    if ( *v36 )
    {
      v43 = a9;
      v41 = v60;
      v44 = 2LL * v60;
      v18 = v29 + v52;
      *(_QWORD *)(a9 + 8 * v44) = *v58;
      *(_DWORD *)(v43 + 8 * v44 + 8) = v29;
      *((_QWORD *)v32 + 4) = v29;
      goto LABEL_49;
    }
    v16 = v60;
    v29 -= 4096LL;
LABEL_56:
    v45 = v26 - v18;
    if ( v29 <= v26 - v18 )
      v45 = v29;
    v29 = v45;
    if ( v16 >= v51 )
      break;
  }
  if ( !v16 )
  {
LABEL_75:
    v21 = -1056964605;
    goto LABEL_76;
  }
  if ( v18 < v59 )
  {
    if ( v14 )
    {
      do
      {
        v46 = (struct _MDL *)*((_QWORD *)v14 + 1);
        v47 = *(unsigned int **)v14;
        if ( v46 )
        {
          MmFreePagesFromMdl(v46);
          ExFreePoolWithTag(*((PVOID *)v14 + 1), 0);
        }
        if ( *((_QWORD *)v14 + 3) )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v54 + 8) + 24LL))(
            v54,
            v14[8],
            *((_QWORD *)v14 + 2));
        ExFreePoolWithTag(v14, 0);
        v14 = v47;
      }
      while ( v47 );
      v16 = v60;
    }
    goto LABEL_75;
  }
  if ( v12 )
  {
    v12[708] = v14;
  }
  else if ( v13 )
  {
    v13[178] = v14;
  }
  v21 = 0;
  *a10 = v16;
LABEL_76:
  LOBYTE(v11) = v62;
LABEL_22:
  LOBYTE(v19) = a2;
LABEL_78:
  if ( byte_140173444 < 0 )
  {
    v48 = v12;
    if ( v12 )
      v13 = v12;
    else
      v48 = v13;
    McTemplateK0zdqqqqqqqqq_EtwWriteTransfer(
      *((_DWORD *)v48 + 14),
      v21 == 0,
      v16,
      v13[6],
      *((_DWORD *)v48 + 14),
      (_DWORD)Flags,
      v19,
      v11);
  }
  return v21;
}
