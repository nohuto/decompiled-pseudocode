/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10
 * Callers:
 *     BiVerifyBootPartition @ 0x140B2E8B0 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140B4CCC4 (BiConvertBootEnvironmentDeviceToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140897B54 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiGetNtPartitionPath @ 0x1408987B8 (BiGetNtPartitionPath.c)
 *     BiIsBootRamdisk @ 0x140898E7C (BiIsBootRamdisk.c)
 *     BiVerifyBootPartition @ 0x140B2E8B0 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(int *a1, int a2, __int16 a3, PVOID *a4, _DWORD *a5)
{
  int v6; // ecx
  PVOID *v7; // r13
  _WORD *v10; // r12
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  void *v18; // rax
  int v19; // ebx
  void *v20; // rax
  void *v21; // rax
  __int64 v22; // rsi
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r13d
  void *v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  void *v33; // rax
  const wchar_t *v34; // r8
  void *v35; // rax
  void *v36; // rax
  unsigned int v37; // esi
  int NtPartitionPath; // eax
  void *v39; // rax
  int v40; // ecx
  size_t v41; // r8
  char *v42; // rcx
  PVOID v43; // rdx
  __int64 v44; // rsi
  unsigned int v45; // esi
  void *v46; // rax
  int v47; // ecx
  unsigned int v48; // eax
  void *v49; // rax
  unsigned int v50; // eax
  void *Pool2; // rax
  wchar_t *v53; // rcx
  int *v54; // rsi
  unsigned int v55; // ecx
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  unsigned int v58; // esi
  unsigned int v59; // ebx
  void *v60; // rax
  void *v61; // rax
  size_t Size; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v63; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  PVOID v65; // [rsp+48h] [rbp-18h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-10h] BYREF
  char v67; // [rsp+A0h] [rbp+40h]

  v6 = *a1;
  v7 = a4;
  v63 = 0;
  Src[0] = 0LL;
  v10 = 0LL;
  v65 = 0LL;
  v67 = 0;
  P = 0LL;
  Size = 0LL;
  if ( !v6 )
  {
    v47 = a1[4];
    if ( v47 )
    {
      switch ( v47 )
      {
        case 3:
        case 5:
          if ( v47 == 3 )
          {
            if ( a1[12] == 5 && a1[11] == 12 && BiIsBootRamdisk(a1 + 5) )
            {
              LODWORD(Size) = 128;
              Pool2 = (void *)ExAllocatePool2(0x102uLL);
              P = Pool2;
              if ( !Pool2 )
                goto LABEL_11;
              memset_0(Pool2, 0, (unsigned int)Size);
              *(_DWORD *)P = 2;
              v53 = (wchar_t *)P;
              *(_OWORD *)((char *)P + 20) = *(_OWORD *)L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}";
              wcscpy(v53 + 18, L"Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}");
              goto LABEL_13;
            }
            v54 = a1 + 13;
            v55 = 52;
          }
          else
          {
            v54 = a1 + 8;
            v55 = 32;
          }
          v56 = (unsigned int)a1[2];
          if ( v56 < (unsigned __int64)v55 + 12 || v54[2] > (unsigned int)v56 - v55 )
            goto LABEL_86;
          v19 = BiConvertBootEnvironmentDeviceToNt((_DWORD)v54, a2, a3 & 0x100, (unsigned int)&v65, (__int64)&Size + 4);
          if ( v19 < 0 )
            goto LABEL_85;
          if ( *(_DWORD *)v65 != 3 )
          {
            v10 = (_WORD *)((char *)v54 + (unsigned int)v54[2]);
            v57 = -1LL;
            do
              ++v57;
            while ( v10[v57] );
            v58 = 2 * v57 + 2;
            if ( v58 < 0xFFFFFFE0 && v58 + 32 + HIDWORD(Size) >= v58 + 32 )
            {
              v59 = (v58 + 31) & 0xFFFFFFF8;
              LODWORD(Size) = v59 + HIDWORD(Size);
              v60 = (void *)ExAllocatePool2(0x102uLL);
              P = v60;
              if ( !v60 )
                goto LABEL_11;
              memset_0(v60, 0, (unsigned int)Size);
              memmove((char *)P + 24, v10, v58);
              *((_DWORD *)P + 5) = v59;
              memmove((char *)P + v59, v65, HIDWORD(Size));
              v19 = 0;
              *(_DWORD *)P = 4 - (a1[4] != 3);
              goto LABEL_90;
            }
          }
          goto LABEL_86;
        case 6:
          v50 = a1[2];
          if ( v50 >= 0x34 && a1[12] <= v50 - 40 )
          {
            v19 = BiConvertBootEnvironmentDeviceToNt((int)a1 + 40, a2, a3 & 0x100, (unsigned int)&P, (__int64)&Size);
            if ( v19 >= 0 )
              goto LABEL_90;
            goto LABEL_85;
          }
          break;
        case 7:
          v48 = a1[2];
          if ( v48 >= 0x34 && (unsigned int)a1[12] <= (unsigned __int64)(v48 - 12) + 20 && !a1[10] && a1[14] == 6 )
          {
            v19 = BiConvertBootEnvironmentDeviceToNt(
                    (int)a1 + 40,
                    a2,
                    a3 & 0x100,
                    (unsigned int)&v65,
                    (__int64)&Size + 4);
            if ( v19 >= 0 )
            {
              if ( HIDWORD(Size) < 0xFFFFFFE4 )
              {
                LODWORD(Size) = HIDWORD(Size) + 24;
                v49 = (void *)ExAllocatePool2(0x102uLL);
                P = v49;
                if ( !v49 )
                  goto LABEL_11;
                memset_0(v49, 0, (unsigned int)Size);
                *((_DWORD *)P + 5) = 24;
                memmove((char *)P + *((unsigned int *)P + 5), v65, HIDWORD(Size));
                *(_DWORD *)P = 12;
                goto LABEL_13;
              }
              goto LABEL_86;
            }
            goto LABEL_85;
          }
          break;
      }
    }
    else if ( a1[5] == 2 )
    {
      LODWORD(Size) = 24;
      v61 = (void *)ExAllocatePool2(0x102uLL);
      P = v61;
      if ( !v61 )
        goto LABEL_11;
      memset_0(v61, 0, (unsigned int)Size);
      *(_DWORD *)P = 13;
      *((_DWORD *)P + 5) = a1[6];
      goto LABEL_13;
    }
LABEL_88:
    v19 = BiConvertBootEnvironmentDeviceToUnknown(a1, &P, (unsigned int *)&Size);
LABEL_89:
    if ( v19 < 0 )
      goto LABEL_91;
    goto LABEL_90;
  }
  v11 = v6 - 2;
  if ( !v11 )
    goto LABEL_50;
  v12 = v11 - 3;
  if ( !v12 )
  {
    LODWORD(Size) = 20;
    v36 = (void *)ExAllocatePool2(0x102uLL);
    P = v36;
    if ( !v36 )
      goto LABEL_11;
    memset_0(v36, 0, (unsigned int)Size);
    *(_DWORD *)P = 1;
    goto LABEL_13;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_50:
    v19 = BiVerifyBootPartition(a1, 0LL, 0LL, 0LL, 0LL, &v63);
    if ( v19 >= 0 )
    {
      v37 = v63;
      if ( (a3 & 0x20) != 0 && v63 )
      {
        v19 = -1073741823;
      }
      else
      {
        NtPartitionPath = BiGetNtPartitionPath((int)a1, Src);
        v10 = Src[0];
        v19 = NtPartitionPath;
        if ( NtPartitionPath >= 0 )
        {
          v44 = -1LL;
          v67 = 1;
          v19 = 0;
          do
            ++v44;
          while ( *((_WORD *)Src[0] + v44) );
          v45 = 2 * v44 + 2;
          LODWORD(Size) = v45 + 20;
          v46 = (void *)ExAllocatePool2(0x102uLL);
          P = v46;
          if ( !v46 )
            goto LABEL_11;
          memset_0(v46, 0, (unsigned int)Size);
          v43 = v10;
          v41 = v45;
          *(_DWORD *)P = 2;
          v42 = (char *)P + 20;
LABEL_68:
          memmove(v42, v43, v41);
          goto LABEL_90;
        }
      }
      if ( v37 )
      {
        v19 = BiConvertBootEnvironmentDeviceToNt(
                (unsigned int)a1 + v37,
                a2,
                a3 & 0x100,
                (unsigned int)&v65,
                (__int64)&Size + 4);
        if ( v19 >= 0 )
        {
          LODWORD(Size) = HIDWORD(Size) + 34;
          v39 = (void *)ExAllocatePool2(0x102uLL);
          P = v39;
          if ( !v39 )
            goto LABEL_11;
          memset_0(v39, 0, (unsigned int)Size);
          v40 = 301989890;
          *(_DWORD *)P = 8;
          *((_DWORD *)P + 5) = 0;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v40 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v40 = 301989956;
            }
          }
          *((_DWORD *)P + 7) = v40;
          *((_DWORD *)P + 6) = 34;
          v41 = HIDWORD(Size);
          v42 = (char *)P + 34;
          v43 = v65;
          goto LABEL_68;
        }
      }
    }
LABEL_85:
    if ( v19 == -1073741670 )
      goto LABEL_89;
    goto LABEL_86;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(Size) = 36;
    v35 = (void *)ExAllocatePool2(0x102uLL);
    P = v35;
    if ( !v35 )
      goto LABEL_11;
    memset_0(v35, 0, (unsigned int)Size);
    *(_DWORD *)P = 7;
    *(_OWORD *)((char *)P + 20) = *((_OWORD *)a1 + 2);
    goto LABEL_13;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v22 = -1LL;
    v23 = a1[4] == 1;
    LODWORD(Size) = 34;
    if ( v23 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *((_WORD *)a1 + v24 + 14) );
      LODWORD(Size) = 2 * v24 + 34;
    }
    v25 = (unsigned int)a1[6];
    if ( !(_DWORD)v25 )
      goto LABEL_38;
    if ( (a3 & 0x20) == 0 )
    {
      v26 = BiGetNtPartitionPath((int)a1, Src);
      v10 = Src[0];
      if ( v26 >= 0 )
      {
        v67 = 1;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_WORD *)Src[0] + v27) );
        v28 = 2 * v27 + 2;
        HIDWORD(Size) = 2 * v27 + 22;
        v29 = (void *)ExAllocatePool2(0x102uLL);
        v65 = v29;
        if ( !v29 )
          goto LABEL_11;
        memset_0(v29, 0, HIDWORD(Size));
        *(_DWORD *)v65 = 2;
        memmove((char *)v65 + 20, v10, v28);
        v7 = a4;
      }
      if ( v65 )
      {
LABEL_37:
        LODWORD(v25) = Size;
        LODWORD(Size) = Size + HIDWORD(Size);
LABEL_38:
        v33 = (void *)ExAllocatePool2(0x102uLL);
        P = v33;
        if ( !v33 )
          goto LABEL_11;
        memset_0(v33, 0, (unsigned int)Size);
        *(_DWORD *)P = 8;
        if ( a1[4] )
        {
          *((_DWORD *)P + 5) = 1;
          v34 = (const wchar_t *)(a1 + 7);
          do
            ++v22;
          while ( v34[v22] );
          wcscpy_s((wchar_t *)P + 16, v22 + 1, v34);
        }
        else
        {
          *((_DWORD *)P + 5) = 0;
          *((_DWORD *)P + 7) = a1[5];
        }
        if ( v65 )
        {
          *((_DWORD *)P + 6) = v25;
          memmove((char *)P + (unsigned int)v25, v65, HIDWORD(Size));
        }
        goto LABEL_13;
      }
    }
    v30 = (__int64)a1 + v25;
    if ( *(int *)((char *)a1 + v25) )
      goto LABEL_86;
    v31 = *(_DWORD *)(v30 + 16);
    if ( v31 == 6 )
    {
      if ( (unsigned int)(a1[2] - v25) >= 0x4C )
      {
        v32 = 40;
        goto LABEL_36;
      }
    }
    else if ( v31 == 7 )
    {
      v32 = 0;
LABEL_36:
      v19 = BiConvertBootEnvironmentDeviceToNt(v32 + (int)v30, a2, a3 & 0x100, (unsigned int)&v65, (__int64)&Size + 4);
      if ( v19 >= 0 )
        goto LABEL_37;
      goto LABEL_85;
    }
LABEL_86:
    if ( P )
      ExFreePoolWithTag(P, 0x4B444342u);
    goto LABEL_88;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        LODWORD(Size) = 40;
        v18 = (void *)ExAllocatePool2(0x102uLL);
        P = v18;
        if ( !v18 )
        {
LABEL_11:
          v19 = -1073741670;
          goto LABEL_91;
        }
        memset_0(v18, 0, (unsigned int)Size);
        *(_DWORD *)P = 11;
        *((_DWORD *)P + 5) = a1[4];
        *(_OWORD *)((char *)P + 24) = *((_OWORD *)a1 + 2);
        goto LABEL_13;
      }
      goto LABEL_88;
    }
    LODWORD(Size) = 40;
    v20 = (void *)ExAllocatePool2(0x102uLL);
    P = v20;
    if ( !v20 )
      goto LABEL_11;
    memset_0(v20, 0, (unsigned int)Size);
    *(_DWORD *)P = 10;
    *(_OWORD *)((char *)P + 20) = *((_OWORD *)a1 + 1);
    *((_DWORD *)P + 9) = a1[8];
  }
  else
  {
    LODWORD(Size) = a1[4] + 21;
    v21 = (void *)ExAllocatePool2(0x102uLL);
    P = v21;
    if ( !v21 )
      goto LABEL_11;
    memset_0(v21, 0, (unsigned int)Size);
    *(_DWORD *)P = 9;
    strcpy_s((char *)P + 20, (unsigned int)a1[4], (const char *)a1 + 20);
  }
LABEL_13:
  v19 = 0;
LABEL_90:
  *v7 = P;
  *a5 = Size;
LABEL_91:
  if ( v65 )
    ExFreePoolWithTag(v65, 0x4B444342u);
  if ( v67 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  return (unsigned int)v19;
}
