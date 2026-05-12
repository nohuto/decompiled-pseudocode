/*
 * XREFs of sub_14001C790 @ 0x14001C790
 * Callers:
 *     sub_14001B960 @ 0x14001B960 (sub_14001B960.c)
 *     sub_14001C020 @ 0x14001C020 (sub_14001C020.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_14001B870 @ 0x14001B870 (sub_14001B870.c)
 *     sub_14001E870 @ 0x14001E870 (sub_14001E870.c)
 *     sub_14001EC90 @ 0x14001EC90 (sub_14001EC90.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_140068F64 @ 0x140068F64 (sub_140068F64.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401AA8A0 @ 0x1401AA8A0 (sub_1401AA8A0.c)
 *     sub_1401ABBEC @ 0x1401ABBEC (sub_1401ABBEC.c)
 */

__int64 __fastcall sub_14001C790(__int64 *a1, int a2, __int64 a3, _BYTE *a4)
{
  unsigned __int16 v4; // r15
  _BYTE *v5; // r13
  void *v8; // rcx
  __int64 v9; // rdi
  IRP *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rbp
  __int64 Pool2; // rax
  struct _MDL *v14; // rcx
  PMDL Mdl; // rax
  _OWORD *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // edi
  _DWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int8 *v27; // r14
  unsigned int v28; // ecx
  int v29; // edi
  void *v30; // rcx
  _DWORD *v31; // r14
  IRP *v32; // rcx
  void *v33; // rcx
  unsigned __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rax
  struct _MDL *v37; // rcx
  PMDL v38; // rax
  __int64 v39; // r14
  _DWORD *v40; // rdi
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // esi
  unsigned int v45; // ebx
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rax
  PIRP v52; // rax
  _DWORD *v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  unsigned int v56; // ecx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rax
  PIRP v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // r9
  unsigned __int64 v66; // rax
  __int64 v67; // r9
  int v68; // eax
  unsigned __int8 *v69; // rdi
  __int64 v70; // rsi
  unsigned __int16 v71; // bx
  char Irp; // [rsp+20h] [rbp-78h]
  char Irpa; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v74; // [rsp+40h] [rbp-58h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  int v76; // [rsp+A8h] [rbp+10h]
  __int64 v77; // [rsp+B0h] [rbp+18h]
  _BYTE *v78; // [rsp+B8h] [rbp+20h]

  v78 = a4;
  v77 = a3;
  v76 = a2;
  v4 = 0;
  v5 = a4;
  v74 = 0LL;
  LODWORD(Size) = 16;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_140068F64(off_140168120->AttachedDevice, 15LL, &unk_14014B290, *a1, (unsigned __int8)a2, BYTE1(a2), BYTE2(a2));
  }
  v8 = (void *)a1[10];
  v9 = *a1;
  if ( v8 )
  {
    sub_1401AA8A0(v8);
  }
  else
  {
    if ( *(_DWORD *)v9 == 1314275652 )
    {
      v46 = v9 + 274;
    }
    else if ( *(_DWORD *)v9 == 1094997074 )
    {
      v46 = v9 + 482;
    }
    else
    {
      v46 = 98LL;
    }
    v47 = sub_140015A14(*(_QWORD *)(v9 + 8), 0, *(_BYTE *)v46, 1);
    a1[10] = v47;
    if ( !v47 )
      goto LABEL_70;
  }
  if ( !a1[11] )
  {
    v51 = sub_1400143E0(64LL, 18LL, 1314087250LL, *(_QWORD *)(v9 + 8));
    a1[11] = v51;
    if ( !v51 )
    {
LABEL_70:
      v22 = -1073741801;
LABEL_23:
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_140055BD4(off_140168120->AttachedDevice, 16LL, &unk_14014B290, (unsigned int)v22);
      }
      return (unsigned int)v22;
    }
  }
  v10 = (IRP *)a1[8];
  if ( v10 )
  {
    IoReuseIrp(v10, -1073741823);
  }
  else
  {
    v52 = IoAllocateIrp(1, 0);
    a1[8] = (__int64)v52;
    if ( !v52 )
    {
      v22 = -1073741801;
      goto LABEL_23;
    }
  }
  v11 = (void *)a1[12];
  if ( v11 )
    ExFreePoolWithTag(v11, 0x6C526152u);
  v12 = *(_QWORD *)(v9 + 8);
  Pool2 = ExAllocatePool2(64LL, 16LL, 1817338194LL);
  if ( !Pool2 && v12 )
  {
    sub_14008D9B8(v12, 64, 16, 1817338194, 0x80000000);
    a1[12] = 0LL;
    goto LABEL_70;
  }
  a1[12] = Pool2;
  if ( !Pool2 )
    goto LABEL_70;
  v14 = (struct _MDL *)a1[9];
  *((_DWORD *)a1 + 26) = 16;
  if ( v14 )
    IoFreeMdl(v14);
  Mdl = IoAllocateMdl((PVOID)a1[12], *((_DWORD *)a1 + 26), 0, 0, 0LL);
  a1[9] = (__int64)Mdl;
  if ( !Mdl )
    goto LABEL_70;
  v16 = (_OWORD *)a1[12];
  v17 = a1[10];
  *v16 = 0LL;
  v18 = *a1;
  v19 = *(_DWORD *)*a1;
  if ( v19 == 1314275652 )
  {
    v20 = v18 + 274;
  }
  else if ( v19 == 1094997074 )
  {
    v20 = v18 + 482;
  }
  else
  {
    v20 = 98LL;
  }
  sub_1401ABBEC(v17, (unsigned __int8)a2, BYTE1(v76), BYTE2(v76), (__int64)v16, 16LL, *(_BYTE *)v20);
  if ( *(_BYTE *)v20 == 1 )
  {
    *(_DWORD *)(v17 + 24) |= 0x80110u;
    v48 = 0;
    v49 = *(_DWORD *)(v17 + 56);
    *(_QWORD *)(v17 + 104) = 0LL;
    *(_QWORD *)(v17 + 64) = a1[12];
    *(_DWORD *)(v17 + 60) = 16;
    if ( v49 )
    {
      while ( 1 )
      {
        v50 = *(unsigned int *)(v17 + 4LL * v48 + 120);
        if ( (unsigned int)v50 >= 0x80 )
        {
          v64 = *(unsigned int *)(v17 + 16);
          if ( (unsigned int)v50 <= (unsigned int)v64 )
          {
            v65 = *(unsigned int *)(v17 + 4LL * v48 + 120);
            if ( *(_DWORD *)(v17 + v50) == 64 && v50 + 40 <= v64 )
              break;
          }
        }
        if ( ++v48 >= v49 )
          goto LABEL_20;
      }
      *(_QWORD *)(v17 + v65 + 16) = a1[11];
      *(_BYTE *)(v17 + v65 + 9) = 18;
    }
  }
  else
  {
    *(_QWORD *)(v17 + 56) = 0LL;
    *(_QWORD *)(v17 + 32) = a1[11];
    *(_BYTE *)(v17 + 11) = 18;
    v21 = a1[12];
    *(_DWORD *)(v17 + 12) |= 0x80110u;
    *(_QWORD *)(v17 + 24) = v21;
    *(_DWORD *)(v17 + 16) = 16;
  }
LABEL_20:
  v22 = sub_14001EC90((_DWORD)a1, v77, (int)a1 + 64, v17, Irp);
  if ( v22 < 0 )
  {
    if ( v22 == -1073741789 )
      v22 = -1073741810;
    goto LABEL_23;
  }
  v24 = (_DWORD *)*a1;
  v25 = *(_DWORD *)*a1;
  if ( v25 == 1314275652 )
  {
    v26 = (__int64)v24 + 274;
  }
  else if ( v25 == 1094997074 )
  {
    v26 = (__int64)v24 + 482;
  }
  else
  {
    v26 = 98LL;
  }
  if ( *(_BYTE *)v26 == 1 )
    v27 = *(unsigned __int8 **)(v17 + 64);
  else
    v27 = *(unsigned __int8 **)(v17 + 24);
  v28 = v27[3] | ((v27[2] | ((v27[1] | (*v27 << 8)) << 8)) << 8);
  if ( v28 >= v28 + 8 )
  {
    v22 = -1073741436;
    goto LABEL_23;
  }
  if ( (unsigned __int64)v28 + 8 <= 0x10 )
  {
    v29 = 0;
  }
  else
  {
    LODWORD(Size) = v28 + 8;
    v29 = -1073741789;
  }
  if ( v29 < 0 )
  {
    v30 = (void *)a1[10];
    v31 = (_DWORD *)*a1;
    if ( v30 )
    {
      sub_1401AA8A0(v30);
    }
    else
    {
      if ( *v31 == 1314275652 )
      {
        v57 = (__int64)v31 + 274;
      }
      else if ( *v31 == 1094997074 )
      {
        v57 = (__int64)v31 + 482;
      }
      else
      {
        v57 = 98LL;
      }
      v58 = sub_140015A14(*((_QWORD *)v31 + 1), 0, *(_BYTE *)v57, 1);
      a1[10] = v58;
      if ( !v58 )
        return (unsigned int)-1073741801;
    }
    if ( !a1[11] )
    {
      v62 = sub_1400143E0(64LL, 18LL, 1314087250LL, *((_QWORD *)v31 + 1));
      a1[11] = v62;
      if ( !v62 )
        return (unsigned int)-1073741801;
    }
    v32 = (IRP *)a1[8];
    if ( v32 )
    {
      IoReuseIrp(v32, -1073741823);
    }
    else
    {
      v63 = IoAllocateIrp(1, 0);
      a1[8] = (__int64)v63;
      if ( !v63 )
        return (unsigned int)-1073741801;
    }
    v33 = (void *)a1[12];
    if ( v33 )
      ExFreePoolWithTag(v33, 0x6C526152u);
    v34 = (unsigned int)Size;
    v35 = *((_QWORD *)v31 + 1);
    v36 = ExAllocatePool2(64LL, (unsigned int)Size, 1817338194LL);
    if ( !v36 && v35 )
    {
      sub_14008D9B8(v35, 64, v34, 1817338194, 0x80000000);
      a1[12] = 0LL;
      return (unsigned int)-1073741801;
    }
    a1[12] = v36;
    if ( !v36 )
      return (unsigned int)-1073741801;
    v37 = (struct _MDL *)a1[9];
    *((_DWORD *)a1 + 26) = Size;
    if ( v37 )
      IoFreeMdl(v37);
    v38 = IoAllocateMdl((PVOID)a1[12], *((_DWORD *)a1 + 26), 0, 0, 0LL);
    a1[9] = (__int64)v38;
    if ( !v38 )
      return (unsigned int)-1073741801;
    v39 = a1[10];
    v74 = (unsigned __int8 *)a1[12];
    memset_0(v74, 0, v34);
    v40 = (_DWORD *)*a1;
    v41 = *(_DWORD *)*a1;
    if ( v41 == 1314275652 )
    {
      v42 = (__int64)v40 + 274;
    }
    else if ( v41 == 1094997074 )
    {
      v42 = (__int64)v40 + 482;
    }
    else
    {
      v42 = 98LL;
    }
    sub_1401ABBEC(v39, (unsigned __int8)a2, BYTE1(v76), BYTE2(v76), (__int64)v74, v34, *(_BYTE *)v42);
    if ( *(_BYTE *)v42 == 1 )
    {
      *(_DWORD *)(v39 + 24) |= 0x80110u;
      v59 = 0;
      v60 = *(_DWORD *)(v39 + 56);
      *(_QWORD *)(v39 + 104) = 0LL;
      *(_QWORD *)(v39 + 64) = a1[12];
      *(_DWORD *)(v39 + 60) = Size;
      if ( v60 )
      {
        while ( 1 )
        {
          v61 = *(unsigned int *)(v39 + 4LL * v59 + 120);
          if ( (unsigned int)v61 >= 0x80 )
          {
            v66 = *(unsigned int *)(v39 + 16);
            if ( (unsigned int)v61 <= (unsigned int)v66 )
            {
              v67 = *(unsigned int *)(v39 + 4LL * v59 + 120);
              if ( *(_DWORD *)(v61 + v39) == 64 && v61 + 40 <= v66 )
                break;
            }
          }
          if ( ++v59 >= v60 )
            goto LABEL_53;
        }
        *(_QWORD *)(v67 + v39 + 16) = a1[11];
        *(_BYTE *)(v67 + v39 + 9) = 18;
      }
    }
    else
    {
      *(_QWORD *)(v39 + 56) = 0LL;
      *(_QWORD *)(v39 + 32) = a1[11];
      *(_BYTE *)(v39 + 11) = 18;
      v43 = a1[12];
      *(_DWORD *)(v39 + 12) |= 0x80110u;
      *(_QWORD *)(v39 + 24) = v43;
      *(_DWORD *)(v39 + 16) = Size;
    }
LABEL_53:
    v44 = v77;
    v22 = sub_14001EC90((_DWORD)a1, v77, (int)a1 + 64, v39, Irpa);
    if ( v22 < 0 )
    {
      if ( v22 == -1073741789 )
        return (unsigned int)-1073741810;
      return (unsigned int)v22;
    }
    v53 = (_DWORD *)*a1;
    v54 = *(_DWORD *)*a1;
    if ( v54 == 1314275652 )
    {
      v55 = (__int64)v53 + 274;
    }
    else if ( v54 == 1094997074 )
    {
      v55 = (__int64)v53 + 482;
    }
    else
    {
      v55 = 98LL;
    }
    if ( *(_BYTE *)v55 == 1 )
      v27 = *(unsigned __int8 **)(v39 + 64);
    else
      v27 = *(unsigned __int8 **)(v39 + 24);
    v56 = v27[3] | ((v27[2] | ((v27[1] | (*v27 << 8)) << 8)) << 8);
    if ( v56 >= v56 + 8 )
      return (unsigned int)-1073741436;
    v22 = 0;
    v74 = v27;
    if ( v34 < (unsigned __int64)v56 + 8 )
      v22 = -1073741789;
    if ( v22 == -1073741789 )
    {
      LODWORD(Size) = 8 * *(unsigned __int8 *)(*a1 + 530) + 8;
      v68 = sub_14001E870((_DWORD)a1, a2, v44, (unsigned int)&Size, (__int64)&v74);
      v27 = v74;
      v22 = v68;
    }
    if ( v22 < 0 )
      return (unsigned int)v22;
    v5 = v78;
  }
  memset_0(v5, 0, 0xFFuLL);
  v45 = (unsigned int)(v27[3] | ((v27[2] | ((v27[1] | (*v27 << 8)) << 8)) << 8)) >> 3;
  sub_14001B870(*a1);
  if ( v45 )
  {
    v69 = v27 + 9;
    v70 = v45;
    do
    {
      v71 = _byteswap_ushort(*(_WORD *)(v69 - 1)) & 0x3FFF;
      if ( v71 < 0xFFu )
      {
        v5[v71] = 1;
      }
      else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
      {
        if ( (HIDWORD(off_140168120->Timer) & 0x4000) != 0 && BYTE1(off_140168120->Timer) >= 3u )
          sub_140067FD4(off_140168120->AttachedDevice, 17LL, &unk_14014B290, *a1, v71);
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
          && BYTE1(off_140168120->Timer) >= 3u )
        {
          sub_140055BD4(off_140168120->AttachedDevice, 18LL, &unk_14014B290, v71);
        }
      }
      v69 += 8;
      --v70;
    }
    while ( v70 );
    v4 = 0;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
  {
    if ( (HIDWORD(off_140168120->Timer) & 0x4000) != 0 && BYTE1(off_140168120->Timer) >= 4u )
      sub_140055C18(off_140168120->AttachedDevice, 19LL, &unk_14014B290, *a1);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
      && BYTE1(off_140168120->Timer) >= 5u )
    {
      sub_140055930(off_140168120->AttachedDevice, 20LL, &unk_14014B290);
    }
  }
  do
  {
    if ( *v5
      && off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
      && BYTE1(off_140168120->Timer) >= 5u )
    {
      sub_140055BD4(off_140168120->AttachedDevice, 21LL, &unk_14014B290, v4);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0xFFu );
  return 0LL;
}
