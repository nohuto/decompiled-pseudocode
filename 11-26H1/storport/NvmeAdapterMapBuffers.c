/*
 * XREFs of NvmeAdapterMapBuffers @ 0x1400D9798
 * Callers:
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x140100F94 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 * Callees:
 *     RaidGetSystemAddressForMdl @ 0x14002D3D0 (RaidGetSystemAddressForMdl.c)
 *     IsPhysicalStorageController @ 0x140030880 (IsPhysicalStorageController.c)
 */

__int64 __fastcall NvmeAdapterMapBuffers(_DWORD *a1, __int64 a2)
{
  char v2; // r8
  __int64 v5; // rbx
  unsigned int v6; // r15d
  int v7; // r12d
  unsigned int v8; // esi
  char *v9; // r8
  char v10; // di
  __int64 v11; // r11
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r8
  char v18; // al
  int v19; // ecx
  _DWORD *v20; // rax
  int v21; // ecx
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // rcx
  bool v25; // cf
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // r10d
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 v33; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v5 + 2) != 40 )
    goto LABEL_65;
  v6 = *(_DWORD *)(v5 + 20);
  v7 = *(_DWORD *)(v5 + 24);
  if ( !v6 )
  {
    v8 = *(_DWORD *)(v5 + 56);
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    if ( !v8 )
      goto LABEL_31;
    while ( 1 )
    {
      v12 = *(unsigned int *)(v5 + 4 * v11 + 120);
      if ( (unsigned int)v12 >= 0x80 )
      {
        v13 = *(unsigned int *)(v5 + 16);
        if ( (unsigned int)v12 < (unsigned int)v13 )
        {
          v14 = (unsigned int)v12;
          v15 = *(_DWORD *)(v12 + v5) - 64;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 == 1 && v14 + 40 <= v13 )
              {
                if ( !*(_DWORD *)(v14 + v5 + 12) )
                  goto LABEL_22;
                v17 = v5 + 32;
                goto LABEL_21;
              }
            }
            else if ( v14 + 56 <= v13 )
            {
              v10 = 1;
              if ( !*(_BYTE *)(v14 + v5 + 10) )
                goto LABEL_22;
              v9 = (char *)(v14 + v5 + 24);
            }
          }
          else if ( v14 + 40 <= v13 )
          {
            if ( !*(_BYTE *)(v14 + v5 + 10) )
              goto LABEL_22;
            v17 = v5 + 24;
LABEL_21:
            v9 = (char *)(v14 + v17);
LABEL_22:
            if ( !v9
              || (v18 = *v9, *v9 != 8)
              && v18 != 40
              && v18 != -88
              && v18 != -120
              && v18 != 10
              && v18 != 42
              && v18 != -86
              && v18 != -118 )
            {
LABEL_31:
              v2 = 0;
              goto LABEL_36;
            }
LABEL_35:
            v2 = 1;
            goto LABEL_36;
          }
          if ( v10 )
            goto LABEL_22;
        }
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v8 )
        goto LABEL_22;
    }
  }
  if ( v6 == 10 )
  {
    v19 = (unsigned __int8)*(_DWORD *)(*(unsigned int *)(v5 + 120) + v5 + 16);
    if ( v19 == 2 || v19 == 1 )
      goto LABEL_35;
  }
LABEL_36:
  if ( (v7 & 0xC0) != 0 && (*(_QWORD *)(v5 + 64) || *(_QWORD *)(a2 + 8)) )
  {
    if ( *a1 == 1094997074 )
    {
      v20 = a1 + 94;
    }
    else if ( *a1 == 1314275652 )
    {
      v20 = a1 + 42;
    }
    else
    {
      v20 = 0LL;
    }
    if ( v6 <= 0x17 && (v21 = 8389124, _bittest(&v21, v6))
      || v20 && (*((_BYTE *)v20 + 97) == 3 || ((v22 = *((_BYTE *)v20 + 97), v22 == 1) || v22 == 2) && !v2) )
    {
      v23 = *(_QWORD *)(v5 + 64);
      v24 = *(_QWORD *)(a2 + 8);
      v25 = *(_BYTE *)(a2 + 64) != 0;
      v33 = 0LL;
      LODWORD(v26) = RaidGetSystemAddressForMdl(v24, v23, v25 ? 16 : 32, &v33);
      if ( (int)v26 >= 0 )
        *(_QWORD *)(v5 + 64) = v33;
    }
    else if ( (unsigned int)IsPhysicalStorageController((__int64)a1) )
    {
      v27 = 0LL;
      if ( (v7 & 0x80u) != 0 && (v7 & 0x40) != 0 )
      {
        v28 = *(_DWORD *)(v5 + 56);
        v29 = 0LL;
        if ( v28 )
        {
          while ( 1 )
          {
            v30 = *(unsigned int *)(v5 + 4 * v29 + 120);
            v27 = 0LL;
            if ( (unsigned int)v30 >= 0x80 )
            {
              v31 = *(unsigned int *)(v5 + 16);
              if ( (unsigned int)v30 <= (unsigned int)v31 && *(_DWORD *)(v30 + v5) == 1 && v30 + 24 <= v31 )
                break;
            }
            v29 = (unsigned int)(v29 + 1);
            if ( (unsigned int)v29 >= v28 )
              goto LABEL_63;
          }
          v27 = v30 + v5;
        }
      }
LABEL_63:
      *(_QWORD *)(v5 + 64) = v26;
      if ( v27 )
        *(_QWORD *)(v27 + 16) = v26;
    }
  }
  else
  {
LABEL_65:
    LODWORD(v26) = -1073741811;
  }
  return (unsigned int)v26;
}
