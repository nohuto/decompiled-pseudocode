/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x140015450
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x140015370 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x14006DF50 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaidXrbSetDataBufferAddress(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  char v5; // r10
  char v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r11
  struct _MDL *v11; // r14
  int v12; // r13d
  unsigned int v13; // ebp
  bool v14; // cc
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  PMDL v18; // rcx
  int v20; // r13d
  char v21; // al
  unsigned int v22; // eax
  unsigned int v23; // r9d
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  int v26; // r13d
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  PVOID MappedSystemVa; // rsi
  int v30; // r13d
  unsigned int v31; // r8d
  unsigned int v32; // r11d
  __int64 v33; // rcx
  unsigned __int64 v34; // rbp
  __int64 v35; // r14
  unsigned int v36; // ecx
  unsigned int *Src; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+40h] [rbp-48h]
  unsigned int Size; // [rsp+90h] [rbp+8h]
  char v40; // [rsp+A0h] [rbp+18h]
  PMDL MemoryDescriptorList; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  v38 = 0LL;
  v6 = 0;
  v8 = 0LL;
  v9 = a1[21];
  if ( a3 )
  {
    v38 = 0LL;
    if ( *(_BYTE *)(v9 + 2) == 40 && (*(_BYTE *)(v9 + 24) & 0xC0) == 0xC0 )
    {
      v31 = *(_DWORD *)(v9 + 56);
      v32 = 0;
      if ( v31 )
      {
        do
        {
          v33 = *(unsigned int *)(v9 + 4LL * v32 + 120);
          if ( (unsigned int)v33 >= 0x80 )
          {
            v34 = *(unsigned int *)(v9 + 16);
            if ( (unsigned int)v33 <= (unsigned int)v34 )
            {
              v35 = v9 + v33;
              if ( *(_DWORD *)(v9 + v33) == 1 && v33 + 24 <= v34 )
              {
                v8 = v9 + v33;
                v38 = v35;
                goto LABEL_14;
              }
            }
          }
          ++v32;
        }
        while ( v32 < v31 );
        v8 = 0LL;
      }
    }
LABEL_14:
    v10 = a1[19];
    v11 = (struct _MDL *)a1[17];
  }
  else
  {
    v10 = a1[14];
    v11 = (struct _MDL *)a1[13];
  }
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v12 = *(_DWORD *)(v9 + 12);
    v13 = *(unsigned __int8 *)(v9 + 2);
    v5 = *(_BYTE *)(v9 + 72);
    v6 = *(_BYTE *)(v9 + 4);
    Src = *(unsigned int **)(v9 + 24);
    Size = *(_DWORD *)(v9 + 16);
    goto LABEL_5;
  }
  v12 = *(_DWORD *)(v9 + 24);
  v13 = *(_DWORD *)(v9 + 20);
  v40 = v12;
  if ( v8 && a3 )
  {
    Src = *(unsigned int **)(v8 + 16);
    v22 = *(_DWORD *)(v8 + 8);
  }
  else
  {
    v22 = *(_DWORD *)(v9 + 60);
    Src = *(unsigned int **)(v9 + 64);
  }
  Size = v22;
  if ( v13 )
  {
    v14 = v13 <= 0x17;
    if ( v13 != 23 )
    {
LABEL_6:
      if ( !v14 )
        goto LABEL_20;
      v15 = 8389124;
      if ( !_bittest(&v15, v13) )
        goto LABEL_20;
      goto LABEL_8;
    }
  }
  v23 = 0;
  LODWORD(MemoryDescriptorList) = *(_DWORD *)(v9 + 56);
  if ( !(_DWORD)MemoryDescriptorList )
  {
LABEL_5:
    v14 = v13 <= 0x17;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v24 = *(unsigned int *)(v9 + 4LL * v23 + 120);
    if ( (unsigned int)v24 < 0x80 )
      goto LABEL_36;
    v25 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v24 > (unsigned int)v25 )
      goto LABEL_36;
    v26 = *(_DWORD *)(v24 + v9);
    v27 = v24 + v9;
    if ( v26 == 64 )
    {
      if ( v13 )
        goto LABEL_36;
      v28 = v24 + 40;
      goto LABEL_35;
    }
    v30 = v26 - 65;
    if ( v30 )
      break;
    if ( v13 )
      goto LABEL_36;
    v28 = v24 + 56;
LABEL_35:
    if ( v28 <= v25 )
    {
      LOBYTE(v12) = v40;
      if ( *(_BYTE *)(v27 + 10) )
        v5 = *(_BYTE *)(v27 + 24);
      goto LABEL_20;
    }
LABEL_36:
    if ( ++v23 >= (unsigned int)MemoryDescriptorList )
    {
      LOBYTE(v12) = v40;
      goto LABEL_5;
    }
  }
  v20 = v30 - 1;
  if ( v20 )
  {
    if ( v20 == 30 && v13 == 23 && v24 + 24 <= v25 )
    {
      v6 = *(_BYTE *)(v27 + 8);
      LOBYTE(v12) = v40;
      goto LABEL_8;
    }
    goto LABEL_36;
  }
  if ( v13 || v24 + 40 > v25 )
    goto LABEL_36;
  LOBYTE(v12) = v40;
  if ( *(_DWORD *)(v27 + 12) )
    v5 = *(_BYTE *)(v27 + 32);
LABEL_20:
  if ( a2 == -376 )
    return 0LL;
  if ( *(_BYTE *)(a2 + 473) != 3 )
  {
    v21 = *(_BYTE *)(a2 + 473);
    if ( v21 != 1 && v21 != 2 )
      return 0LL;
    if ( !v13 && ((v5 - 8) & 0x5D) == 0 )
      return 0LL;
  }
LABEL_8:
  if ( !v10 )
    return 0LL;
  v16 = *(_QWORD *)(a2 + 896);
  MemoryDescriptorList = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(v16 + 8) + 120LL))(
          v16,
          v10,
          v11,
          &MemoryDescriptorList);
  if ( v17 < 0 )
  {
    if ( v17 != -2147483622 )
      return (unsigned int)v17;
    return v3;
  }
  v18 = MemoryDescriptorList;
  a1[18] = MemoryDescriptorList;
  if ( v11 == v18 )
    return v3;
  if ( (v18->MdlFlags & 5) != 0 )
    MappedSystemVa = v18->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v18, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( MappedSystemVa )
  {
    if ( (v12 & 0x80u) == 0 || a3 )
    {
      v36 = Size;
      if ( v13 == 23 && v6 == 9 && *Src )
        v36 = *Src;
      memmove(MappedSystemVa, Src, v36);
    }
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( a3 )
        *(_QWORD *)(v38 + 16) = MappedSystemVa;
      else
        *(_QWORD *)(v9 + 64) = MappedSystemVa;
    }
    else
    {
      *(_QWORD *)(v9 + 24) = MappedSystemVa;
    }
    return v3;
  }
  return 3221225626LL;
}
