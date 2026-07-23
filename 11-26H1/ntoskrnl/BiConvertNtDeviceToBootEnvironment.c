/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C
 * Callers:
 *     BiConvertNtFilePathToBootEnvironment @ 0x140897C04 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 *     BiConvertElementToRegistryData @ 0x1409A3524 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x140897C04 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140B1E440 (BiGetPartitionVhdFilePath.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140B3DEF0 (BiIsVolumePartitionInformationRetained.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C (BiConvertNtDeviceToBootEnvironment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 BiConvertNtDeviceToBootEnvironment(__int64 a1, unsigned int a2, unsigned int a3, ...)
{
  unsigned int v3; // eax
  _QWORD *v5; // r13
  char *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // ebx
  char *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rax
  size_t v17; // r8
  const void *v18; // rdx
  void *v19; // rcx
  __int64 v20; // rax
  unsigned int *v21; // rbx
  unsigned int v22; // esi
  char *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  char *v26; // rax
  int v27; // eax
  char *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r14d
  unsigned int v31; // r15d
  unsigned int v32; // ebx
  _DWORD *v33; // r14
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // ecx
  int v37; // eax
  void *PartitionVhdFilePath; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  char *v41; // rax
  unsigned int v42; // ebx
  __int64 v43; // rdx
  char *v44; // rdx
  int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  char *v50; // rax
  __int64 v51; // rax
  _DWORD *v52; // rcx
  unsigned int v53; // ecx
  _DWORD *v54; // rbx
  unsigned int v55; // esi
  char *v56; // rax
  char *v57; // rax
  __int64 v58; // rax
  char *Pool2; // rax
  __int64 v60; // rbx
  char *v61; // rax
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  char *v64; // [rsp+38h] [rbp-8h] BYREF
  int v65; // [rsp+80h] [rbp+40h] BYREF
  void *Src; // [rsp+98h] [rbp+58h] BYREF
  va_list Srca; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, void *);
  v3 = *(_DWORD *)a1;
  v65 = 0;
  P = 0LL;
  v5 = Src;
  v64 = 0LL;
  v7 = 0LL;
  if ( v3 > 8 )
  {
    v46 = v3 - 9;
    if ( v46 )
    {
      v47 = v46 - 1;
      if ( !v47 )
      {
        if ( a2 < 0x28 )
          goto LABEL_10;
        v58 = *(_QWORD *)(a1 + 20) - CompositeDeviceSignature;
        if ( !v58 )
          v58 = *(_QWORD *)(a1 + 28) - 0x526C65784171869ELL;
        if ( v58 )
          goto LABEL_10;
        Pool2 = (char *)ExAllocatePool2(0x102uLL);
        v7 = Pool2;
        if ( Pool2 )
        {
          memset_0(Pool2, 0, 0x48uLL);
          *(_DWORD *)v7 = 10;
          *((_DWORD *)v7 + 2) = 72;
          *((_DWORD *)v7 + 1) = 1;
          *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 20);
          *((_DWORD *)v7 + 8) = *(_DWORD *)(a1 + 36);
          goto LABEL_39;
        }
        goto LABEL_37;
      }
      v48 = v47 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          if ( v49 != 1 || a2 < 0x18 )
            goto LABEL_10;
          v50 = (char *)ExAllocatePool2(0x102uLL);
          v7 = v50;
          if ( v50 )
          {
            memset_0(v50, 0, 0x48uLL);
            *(_DWORD *)v7 = 0;
            *((_DWORD *)v7 + 2) = 72;
            *((_DWORD *)v7 + 4) = 0;
            *((_DWORD *)v7 + 5) = 2;
            *((_DWORD *)v7 + 6) = *(_DWORD *)(a1 + 20);
            goto LABEL_39;
          }
          goto LABEL_37;
        }
        if ( a2 < 0x18 )
          goto LABEL_10;
        v51 = *(unsigned int *)(a1 + 20);
        v52 = (_DWORD *)(v51 + a1);
        if ( *v52 != 8 )
          goto LABEL_10;
        v13 = BiConvertNtDeviceToBootEnvironment(v52, a2 - (unsigned int)v51, 64LL, &P);
        if ( v13 >= 0 )
        {
          if ( P )
          {
            if ( *(_DWORD *)P == 8 )
            {
              v53 = *((_DWORD *)P + 6);
              if ( v53 )
              {
                v54 = (char *)P + v53;
                if ( !*v54 )
                {
                  v55 = v54[2] + 40;
                  v56 = (char *)ExAllocatePool2(0x102uLL);
                  v7 = v56;
                  if ( !v56 )
                    goto LABEL_37;
                  memset_0(v56, 0, v55);
                  *(_DWORD *)v7 = 0;
                  v19 = v7 + 40;
                  *((_DWORD *)v7 + 2) = v55;
                  v18 = v54;
                  *((_DWORD *)v7 + 1) = 33;
                  *((_DWORD *)v7 + 4) = 7;
                  v17 = (unsigned int)v54[2];
                  goto LABEL_18;
                }
              }
            }
          }
          v13 = -1073741811;
        }
        goto LABEL_114;
      }
      if ( a2 >= 0x28 )
      {
        v57 = (char *)ExAllocatePool2(0x102uLL);
        v7 = v57;
        if ( v57 )
        {
          memset_0(v57, 0, 0x48uLL);
          *(_DWORD *)v7 = 11;
          *((_DWORD *)v7 + 2) = 72;
          *((_DWORD *)v7 + 1) = 1;
          *((_DWORD *)v7 + 4) = *(_DWORD *)(a1 + 20);
          v15 = *(_OWORD *)(a1 + 24);
          goto LABEL_13;
        }
LABEL_37:
        v13 = -1073741670;
        goto LABEL_114;
      }
    }
    else if ( a2 >= 0x15 )
    {
      v60 = -1LL;
      do
        ++v60;
      while ( *(_BYTE *)(a1 + v60 + 20) );
      v61 = (char *)ExAllocatePool2(0x102uLL);
      v7 = v61;
      if ( !v61 )
        goto LABEL_37;
      memset_0(v61, 0, (unsigned int)(v60 + 21));
      *(_DWORD *)v7 = 9;
      *((_DWORD *)v7 + 1) = 32;
      *((_DWORD *)v7 + 2) = v60 + 21;
      *((_DWORD *)v7 + 4) = v60 + 1;
      strcpy_s(v7 + 20, (unsigned int)(v60 + 1), (const char *)(a1 + 20));
      v13 = 0;
      goto LABEL_114;
    }
    goto LABEL_10;
  }
  if ( v3 == 8 )
  {
    v29 = *(unsigned int *)(a1 + 24);
    if ( a2 < 0x22 || a2 <= (unsigned int)v29 )
      goto LABEL_10;
    v30 = 0;
    v31 = 30;
    if ( (_DWORD)v29 )
    {
      v32 = a2 - v29;
      v33 = (_DWORD *)(a1 + v29);
      v34 = *(_DWORD *)(a1 + v29);
      if ( v34 == 3 )
      {
        if ( v32 < 0x2E )
          goto LABEL_10;
      }
      else if ( v34 != 12 || v32 < 0x18 )
      {
        goto LABEL_10;
      }
      v35 = (unsigned int)v33[5];
      v36 = v32 - v35;
      v37 = *(_DWORD *)((char *)v33 + v35);
      if ( v37 == 2 )
      {
        if ( v36 < 0x16 )
          goto LABEL_10;
        if ( (a3 & 0x40) == 0 )
        {
          PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath((PCWSTR)((char *)v33 + v35 + 20));
          if ( PartitionVhdFilePath )
          {
            ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
            goto LABEL_53;
          }
        }
      }
      else if ( v37 != 6 && (v37 != 8 || v36 < 0x22) && (v37 != 1 || v36 < 0x14) && (v37 != 9 || v36 < 0x15) )
      {
        goto LABEL_10;
      }
      v13 = BiConvertNtDeviceToBootEnvironment(v33, v32, a3 & 0x40, &P);
      if ( v13 < 0 )
        goto LABEL_114;
      v30 = *v33 != 12 ? 0x28 : 0;
      v31 = v30 + *((_DWORD *)P + 2) + 30;
    }
    v39 = -1LL;
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( *(_WORD *)(a1 + 2 * v40 + 32) );
      v31 += 2 * v40;
    }
    v41 = (char *)ExAllocatePool2(0x102uLL);
    v7 = v41;
    if ( v41 )
    {
      memset_0(v41, 0, v31);
      *(_DWORD *)v7 = 8;
      *((_DWORD *)v7 + 2) = v31;
      if ( *(_DWORD *)(a1 + 20) )
      {
        *((_DWORD *)v7 + 4) = 1;
        v43 = -1LL;
        do
          ++v43;
        while ( *(_WORD *)(a1 + 2 * v43 + 32) );
        wcscpy_s((wchar_t *)v7 + 14, v43 + 1, (const wchar_t *)(a1 + 32));
        do
          ++v39;
        while ( *(_WORD *)(a1 + 2 * v39 + 32) );
        v42 = 2 * v39 + 30;
      }
      else
      {
        *((_DWORD *)v7 + 4) = 0;
        v42 = 30;
        *((_DWORD *)v7 + 5) = *(_DWORD *)(a1 + 28);
      }
      if ( P )
      {
        v44 = &v7[v42];
        if ( v30 )
        {
          *(_DWORD *)v44 = 0;
          v45 = *((_DWORD *)P + 2);
          *((_DWORD *)v44 + 4) = 6;
          *((_DWORD *)v44 + 2) = v30 + v45;
        }
        memmove(&v44[v30], P, *((unsigned int *)P + 2));
        *((_DWORD *)v7 + 6) = v42;
        *((_DWORD *)v7 + 1) |= *((_DWORD *)P + 1) & 0x20;
      }
      v13 = 0;
    }
    else
    {
      v13 = -1073741670;
    }
    v5 = Src;
    goto LABEL_114;
  }
  v8 = v3 - 1;
  if ( !v8 )
  {
    if ( a2 >= 0x14 )
    {
      v28 = (char *)ExAllocatePool2(0x102uLL);
      v7 = v28;
      if ( v28 )
      {
        memset_0(v28, 0, 0x48uLL);
        *(_DWORD *)v7 = 5;
        *((_DWORD *)v7 + 2) = 72;
        goto LABEL_39;
      }
      goto LABEL_37;
    }
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a2 >= 0x16 )
    {
      if ( BiIsVolumePartitionInformationRetained((PCWSTR)(a1 + 20)) )
      {
        v27 = BiCreatePartitionDevice((PCWSTR)(a1 + 20), a3, &v64, &v65);
        v7 = v64;
        v13 = v27;
        if ( v27 >= 0 )
          goto LABEL_39;
        goto LABEL_114;
      }
LABEL_53:
      v13 = -1073741637;
      goto LABEL_114;
    }
LABEL_10:
    v13 = -1073741811;
    goto LABEL_116;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 2 || a2 < 0x24 )
          goto LABEL_10;
        v14 = (char *)ExAllocatePool2(0x102uLL);
        v7 = v14;
        if ( v14 )
        {
          memset_0(v14, 0, 0x48uLL);
          *(_DWORD *)v7 = 7;
          *((_DWORD *)v7 + 2) = 72;
          *((_OWORD *)v7 + 1) = VmbFsInterfaceTypeGuid;
          v15 = *(_OWORD *)(a1 + 20);
LABEL_13:
          *((_OWORD *)v7 + 2) = v15;
LABEL_39:
          v13 = 0;
          goto LABEL_114;
        }
        goto LABEL_37;
      }
      if ( a2 < 0x20 || *(_DWORD *)(a1 + 28) > 0x100000u )
        goto LABEL_10;
      v16 = ExAllocatePool2(0x102uLL);
      v7 = (char *)v16;
      if ( !v16 )
        goto LABEL_37;
      v17 = *(unsigned int *)(a1 + 28);
      v18 = (const void *)(a1 + 20);
      v19 = (void *)v16;
LABEL_18:
      memmove(v19, v18, v17);
      goto LABEL_39;
    }
    if ( a2 < 0x2E )
      goto LABEL_10;
    v20 = *(unsigned int *)(a1 + 20);
    if ( !(_DWORD)v20 )
      goto LABEL_10;
    Src = 0LL;
    v13 = BiConvertNtFilePathToBootEnvironment(v20 + a1, a2 - (unsigned int)v20, (_WORD *)(a1 + 24), a3, (void **)Srca);
    if ( v13 >= 0 )
    {
      v21 = (unsigned int *)Src;
      v22 = *((_DWORD *)Src + 1) + 40;
      v23 = (char *)ExAllocatePool2(0x102uLL);
      v7 = v23;
      if ( v23 )
      {
        memset_0(v23, 0, v22);
        *(_DWORD *)v7 = 0;
        *((_DWORD *)v7 + 1) = 1;
        *((_DWORD *)v7 + 2) = v22;
        *((_DWORD *)v7 + 4) = 3;
        memmove(v7 + 40, v21, v21[1]);
LABEL_30:
        ExFreePoolWithTag(v21, 0x4B444342u);
        goto LABEL_39;
      }
      goto LABEL_28;
    }
  }
  else
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v24 = *(unsigned int *)(a1 + 20);
    if ( !(_DWORD)v24 )
      goto LABEL_10;
    Src = 0LL;
    v13 = BiConvertNtFilePathToBootEnvironment(v24 + a1, a2 - (unsigned int)v24, (_WORD *)(a1 + 24), a3, (void **)Srca);
    if ( v13 >= 0 )
    {
      v21 = (unsigned int *)Src;
      v25 = *((_DWORD *)Src + 1) + 20;
      v26 = (char *)ExAllocatePool2(0x102uLL);
      v7 = v26;
      if ( v26 )
      {
        memset_0(v26, 0, v25);
        *(_DWORD *)v7 = 0;
        *((_DWORD *)v7 + 2) = v25;
        *((_DWORD *)v7 + 4) = 5;
        memmove(v7 + 20, v21, v21[1]);
        *((_DWORD *)v7 + 1) = v21[4] & 0x20;
        goto LABEL_30;
      }
LABEL_28:
      ExFreePoolWithTag(v21, 0x4B444342u);
      goto LABEL_37;
    }
  }
LABEL_114:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_116:
  result = (unsigned int)v13;
  *v5 = v7;
  return result;
}
