/*
 * XREFs of NvmeNamespaceDsmDeallocate @ 0x140044400
 * Callers:
 *     NvmeNamespaceDataSetManagementIoctl @ 0x1401A3FCC (NvmeNamespaceDataSetManagementIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x140044DA8 (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeNamespaceIsDeallocateSupported @ 0x140044F68 (NvmeNamespaceIsDeallocateSupported.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceDsmDeallocate(__int64 a1, __int64 a2)
{
  int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rcx
  _DWORD *v6; // r8
  _OWORD *v8; // r11
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  unsigned __int64 v15; // rdi
  _QWORD *v16; // r11
  unsigned int v17; // edi
  unsigned int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // r11
  int v22; // esi
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  char v29; // cl
  unsigned int v30; // r9d
  unsigned __int16 v31; // r8
  unsigned __int64 v32; // r15
  __int64 v33; // r10
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  _DWORD *v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned int v39; // r9d
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rax
  int v43; // r8d
  int v44; // [rsp+28h] [rbp-41h]
  char v45; // [rsp+30h] [rbp-39h]
  char v46; // [rsp+31h] [rbp-38h]
  int v47; // [rsp+34h] [rbp-35h]
  unsigned int v48; // [rsp+34h] [rbp-35h]
  __int64 ExtendedCommand; // [rsp+38h] [rbp-31h]
  unsigned int Size; // [rsp+40h] [rbp-29h]
  int Size_4; // [rsp+44h] [rbp-25h]
  __int128 v52; // [rsp+48h] [rbp-21h] BYREF
  int v53; // [rsp+58h] [rbp-11h]
  _OWORD *v54; // [rsp+60h] [rbp-9h]
  __int64 v55; // [rsp+68h] [rbp-1h]
  void *v56; // [rsp+70h] [rbp+7h]
  _OWORD v57[4]; // [rsp+78h] [rbp+Fh] BYREF

  v57[0] = 0LL;
  v3 = 0;
  v4 = 0LL;
  v47 = 1;
  v52 = 0LL;
  if ( !(unsigned __int8)NvmeNamespaceIsDeallocateSupported(a1, a2, a2) )
    return 3221225659LL;
  if ( (v6[2] & 1) != 0 )
  {
    v8 = v57;
    v9 = 1LL;
    *((_QWORD *)&v57[0] + 1) = *(_QWORD *)(v5 + 424) * *(unsigned int *)(v5 + 64);
    v54 = v57;
    Size_4 = 1;
  }
  else
  {
    v8 = (_OWORD *)((char *)v6 + (unsigned int)v6[5]);
    v9 = v6[6] >> 4;
    v18 = 0;
    Size_4 = v9;
    v54 = v8;
    while ( v18 < (unsigned int)v9 )
    {
      v19 = *(unsigned int *)(a1 + 64);
      v20 = *(_QWORD *)&v8[v18];
      if ( v20 % (__int64)v19
        || (v21 = *((_QWORD *)&v8[v18] + 1), v21 % v19)
        || !v21
        || v21 + v20 > *(_QWORD *)(a1 + 424) * v19 )
      {
        v22 = -1073741811;
        goto LABEL_78;
      }
      v8 = v54;
      ++v18;
    }
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(v10 + 600);
  if ( !v11 || (v12 = *(_DWORD *)(v11 + 4)) == 0 )
    v12 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) & 0x10) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 84);
    if ( v13 )
    {
      if ( v12 >= v13 )
        v12 -= v12 % v13;
    }
  }
  v14 = 0;
  if ( (_DWORD)v9 )
  {
    v15 = *(unsigned int *)(a1 + 64);
    v16 = (_QWORD *)v8 + 1;
    do
    {
      if ( *v16 / v15 )
        v14 += (*v16 / v15 - 1) / v12 + 1;
      v16 += 2;
      --v9;
    }
    while ( v9 );
  }
  if ( v11 && *(_BYTE *)(v11 + 3) )
  {
    v17 = *(unsigned __int8 *)(v11 + 3);
  }
  else
  {
    v23 = *(_DWORD *)(v10 + 620);
    v17 = 256;
    if ( v23 )
    {
      v17 = v23 >> 4;
      if ( v23 >> 4 > 0x100 )
        v17 = 256;
    }
  }
  if ( v14 < v17 )
    v17 = v14;
  if ( v11 && (v24 = *(_QWORD *)(v11 + 8)) != 0 )
  {
    v25 = 0xFFFFFFFFLL;
    if ( v24 < 0xFFFFFFFF )
      v25 = *(_QWORD *)(v11 + 8);
  }
  else
  {
    v25 = (0x40000000u / *(_DWORD *)(a1 + 64)) << 6;
  }
  while ( 1 )
  {
    LOBYTE(v44) = 0;
    v3 = 16 * v17;
    Size = 16 * v17;
    v22 = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 16 * v17, v11, &v52, (char *)&v52 + 8, v44);
    if ( v22 >= 0 )
      break;
    if ( !v47 )
      goto LABEL_78;
    --v47;
    v17 >>= 1;
  }
  v26 = *(_QWORD *)(a1 + 16);
  v56 = (void *)v52;
  ExtendedCommand = NvmeControllerGetExtendedCommand(v26);
  v27 = ExtendedCommand;
  if ( !ExtendedCommand )
  {
    v22 = -1073741670;
    v4 = 0LL;
    goto LABEL_78;
  }
  v28 = 0;
  v48 = 0;
  v29 = 1;
  v55 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  v33 = 0LL;
  while ( !v28 )
  {
    if ( v29 )
    {
      v34 = v30++;
      v48 = v30;
      v33 = *(_QWORD *)&v54[v34];
      v4 = *((_QWORD *)&v54[v34] + 1);
      v55 = v33;
    }
    if ( v4 )
    {
      while ( v31 < v17 )
      {
        if ( v32 >= v25 )
        {
          v27 = ExtendedCommand;
          goto LABEL_59;
        }
        v35 = v12;
        if ( v4 / *(unsigned int *)(a1 + 64) <= v12 )
          v35 = v4 / *(unsigned int *)(a1 + 64);
        if ( v35 + v32 > v25 )
          v35 = v25 - v32;
        v36 = v56;
        v32 += v35;
        v37 = 2LL * v31;
        *((_QWORD *)v56 + v37 + 1) = v33 / *(unsigned int *)(a1 + 64);
        v36[2 * v37 + 1] = v35;
        v38 = v35 * *(unsigned int *)(a1 + 64);
        v33 += v38;
        v4 -= v38;
        v28 = 1;
        v55 = v33;
        ++v31;
        if ( !v4 )
        {
          v27 = ExtendedCommand;
          goto LABEL_60;
        }
      }
      v27 = ExtendedCommand;
LABEL_64:
      v29 = 0;
      v46 = 0;
LABEL_65:
      v28 = 0;
      goto LABEL_66;
    }
LABEL_59:
    v28 = 1;
LABEL_60:
    if ( v4 )
      goto LABEL_64;
    v29 = 1;
    v46 = 1;
    if ( v30 != Size_4 )
      goto LABEL_65;
LABEL_66:
    v45 = v28;
    if ( v31 == v17 || v32 == v25 || v28 )
    {
      v3 = 16 * v17;
      v39 = 16 * v31;
      if ( v39 > Size )
      {
        v22 = -1073741789;
        goto LABEL_77;
      }
      v40 = *(_QWORD *)v27;
      v41 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(v40 + 4140) |= 4u;
      *(_BYTE *)(v40 + 4096) = 9;
      *(_DWORD *)(v40 + 4100) = v41;
      *(_BYTE *)(v40 + 4136) = v31 - 1;
      *(_QWORD *)(v40 + 4120) = *((_QWORD *)&v52 + 1);
      *(_DWORD *)(*(_QWORD *)v27 + 4256LL) &= ~1u;
      *(_DWORD *)(*(_QWORD *)v27 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v27 + 4256LL) |= 2u;
      *(_QWORD *)(*(_QWORD *)v27 + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)v27 + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*(_QWORD *)v27 + 4200LL) = v27;
      *(_OWORD *)(*(_QWORD *)v27 + 4160LL) = v52;
      *(_DWORD *)(*(_QWORD *)v27 + 4248LL) = v39;
      v42 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
      if ( v42 && (*(_DWORD *)(v42 + 24) & 0x10000000) != 0 )
        *(_DWORD *)(*(_QWORD *)v27 + 4256LL) |= 0x100u;
      v22 = NvmeControllerProcessCommandSync(*(PVOID *)(a1 + 16));
      if ( v22 < 0 )
        goto LABEL_77;
      v32 = 0LL;
      v53 = 0;
      memset_0(v56, 0, Size);
      v31 = v53;
      v27 = ExtendedCommand;
      v28 = v45;
      v29 = v46;
      v33 = v55;
    }
    v30 = v48;
  }
  v3 = 16 * v17;
LABEL_77:
  v4 = ExtendedCommand;
LABEL_78:
  NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), v4);
  if ( (_QWORD)v52 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v3, v43, v52, *((__int64 *)&v52 + 1));
  return (unsigned int)v22;
}
