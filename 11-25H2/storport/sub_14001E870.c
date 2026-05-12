/*
 * XREFs of sub_14001E870 @ 0x14001E870
 * Callers:
 *     sub_14001C790 @ 0x14001C790 (sub_14001C790.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_14001EC90 @ 0x14001EC90 (sub_14001EC90.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401AA8A0 @ 0x1401AA8A0 (sub_1401AA8A0.c)
 *     sub_1401ABBEC @ 0x1401ABBEC (sub_1401ABBEC.c)
 */

__int64 __fastcall sub_14001E870(int **a1, int a2, int a3, _DWORD *a4, unsigned __int8 **a5)
{
  int *v5; // r12
  _DWORD **v6; // rdi
  __int64 v7; // rbp
  int *v9; // rcx
  unsigned __int8 v11; // bl
  _DWORD *v12; // rcx
  __int64 v13; // r12
  __int64 Pool2; // rax
  struct _MDL *v15; // rcx
  unsigned int v16; // ebp
  PMDL Mdl; // rax
  _DWORD *v18; // r12
  size_t v19; // r14
  _DWORD *v20; // rsi
  int *v21; // rax
  int v22; // ecx
  __int64 v23; // r15
  _DWORD *v24; // rax
  __int64 result; // rax
  int *v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // edx
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rax
  PIRP v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  char Irp; // [rsp+20h] [rbp-68h]

  v5 = *a1;
  v6 = a1 + 8;
  v7 = (unsigned int)*a4;
  v9 = a1[10];
  v11 = a2;
  if ( v9 )
  {
    sub_1401AA8A0(v9);
  }
  else
  {
    if ( *v5 == 1314275652 )
    {
      v31 = (__int64)v5 + 274;
    }
    else if ( *v5 == 1094997074 )
    {
      v31 = (__int64)v5 + 482;
    }
    else
    {
      v31 = 98LL;
    }
    v32 = sub_140015A14(*((_QWORD *)v5 + 1), 0, *(_BYTE *)v31, 1);
    v6[2] = (_DWORD *)v32;
    if ( !v32 )
      return 3221225495LL;
  }
  if ( !v6[3] )
  {
    v36 = sub_1400143E0(64LL, 18LL, 1314087250LL, *((_QWORD *)v5 + 1));
    v6[3] = (_DWORD *)v36;
    if ( !v36 )
      return 3221225495LL;
  }
  if ( *v6 )
  {
    IoReuseIrp((PIRP)*v6, -1073741823);
  }
  else
  {
    v37 = IoAllocateIrp(1, 0);
    *v6 = &v37->Type;
    if ( !v37 )
      return 3221225495LL;
  }
  v12 = v6[4];
  if ( v12 )
    ExFreePoolWithTag(v12, 0x6C526152u);
  v13 = *((_QWORD *)v5 + 1);
  Pool2 = ExAllocatePool2(64LL, v7, 1817338194LL);
  if ( !Pool2 && v13 )
  {
    sub_14008D9B8(v13, 64, v7, 1817338194, 0x80000000);
    v6[4] = 0LL;
    return 3221225495LL;
  }
  v6[4] = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v15 = (struct _MDL *)v6[1];
  *((_DWORD *)v6 + 10) = v7;
  if ( v15 )
    IoFreeMdl(v15);
  v16 = 0;
  Mdl = IoAllocateMdl(v6[4], *((_DWORD *)v6 + 10), 0, 0, 0LL);
  v6[1] = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  v18 = v6[4];
  v19 = (unsigned int)*a4;
  v20 = v6[2];
  memset_0(v18, 0, v19);
  v21 = *a1;
  v22 = **a1;
  if ( v22 == 1314275652 )
  {
    v23 = (__int64)v21 + 274;
  }
  else if ( v22 == 1094997074 )
  {
    v23 = (__int64)v21 + 482;
  }
  else
  {
    v23 = 98LL;
  }
  sub_1401ABBEC((_DWORD)v20, v11, BYTE1(a2), BYTE2(a2), (__int64)v18, v19, *(_BYTE *)v23);
  if ( *(_BYTE *)v23 == 1 )
  {
    v20[6] |= 0x80110u;
    v33 = 0;
    v34 = v20[14];
    *((_QWORD *)v20 + 13) = 0LL;
    *((_QWORD *)v20 + 8) = v6[4];
    v20[15] = v19;
    if ( v34 )
    {
      while ( 1 )
      {
        v35 = (unsigned int)v20[v33 + 30];
        if ( (unsigned int)v35 >= 0x80 )
        {
          v38 = (unsigned int)v20[4];
          if ( (unsigned int)v35 <= (unsigned int)v38 )
          {
            v39 = (unsigned int)v20[v33 + 30];
            if ( *(_DWORD *)((char *)v20 + v35) == 64 && v35 + 40 <= v38 )
              break;
          }
        }
        if ( ++v33 >= v34 )
          goto LABEL_18;
      }
      *(_QWORD *)((char *)v20 + v39 + 16) = v6[3];
      *((_BYTE *)v20 + v39 + 9) = 18;
    }
  }
  else
  {
    *((_QWORD *)v20 + 7) = 0LL;
    *((_QWORD *)v20 + 4) = v6[3];
    *((_BYTE *)v20 + 11) = 18;
    v24 = v6[4];
    v20[3] |= 0x80110u;
    *((_QWORD *)v20 + 3) = v24;
    v20[4] = v19;
  }
LABEL_18:
  result = sub_14001EC90((_DWORD)a1, a3, (_DWORD)v6, (_DWORD)v20, Irp);
  if ( (int)result >= 0 )
  {
    v26 = *a1;
    v27 = **a1;
    if ( v27 == 1314275652 )
    {
      v28 = (__int64)v26 + 274;
    }
    else if ( v27 == 1094997074 )
    {
      v28 = (__int64)v26 + 482;
    }
    else
    {
      v28 = 98LL;
    }
    if ( *(_BYTE *)v28 == 1 )
      v29 = (unsigned __int8 *)*((_QWORD *)v20 + 8);
    else
      v29 = (unsigned __int8 *)*((_QWORD *)v20 + 3);
    v30 = v29[3] | ((v29[2] | ((v29[1] | (*v29 << 8)) << 8)) << 8);
    if ( (unsigned int)v30 >= (int)v30 + 8 )
    {
      return 3221225860LL;
    }
    else
    {
      if ( (unsigned int)*a4 < (unsigned __int64)(v30 + 8) )
      {
        *a4 = v30 + 8;
        v16 = -1073741789;
      }
      result = v16;
      *a5 = v29;
    }
  }
  else if ( (_DWORD)result == -1073741789 )
  {
    return 3221225486LL;
  }
  return result;
}
