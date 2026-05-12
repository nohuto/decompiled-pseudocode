/*
 * XREFs of sub_14009F87C @ 0x14009F87C
 * Callers:
 *     sub_14009FBD0 @ 0x14009FBD0 (sub_14009FBD0.c)
 *     sub_1400BA188 @ 0x1400BA188 (sub_1400BA188.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140014B7C @ 0x140014B7C (sub_140014B7C.c)
 *     sub_1400158A4 @ 0x1400158A4 (sub_1400158A4.c)
 *     sub_1400158F0 @ 0x1400158F0 (sub_1400158F0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 */

__int64 __fastcall sub_14009F87C(__int64 a1, __int64 a2, char a3, char a4, char *a5, _BYTE *a6)
{
  _DWORD *v6; // rax
  _BYTE *v9; // rsi
  char *v10; // r12
  __int64 v11; // r15
  _BYTE *v12; // rdi
  int Status; // ebx
  __int64 v14; // r8
  char v15; // al
  unsigned int LockArray_high; // eax
  __int64 v17; // rdx
  char *v18; // r14
  _BYTE *v19; // r13
  __int64 v20; // rcx
  char *v21; // rcx
  IRP *v22; // rax
  IRP *v23; // rbp
  unsigned int v24; // ecx
  PVOID P; // [rsp+20h] [rbp-58h]
  struct _IO_STATUS_BLOCK v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 v28; // [rsp+80h] [rbp+8h]

  v27 = 0LL;
  v6 = *(_DWORD **)(a1 + 24);
  v9 = 0LL;
  v10 = 0LL;
  if ( *v6 == 1314275652 )
  {
    v11 = (__int64)v6 + 274;
  }
  else
  {
    v11 = (__int64)v6 + 482;
    if ( *v6 != 1094997074 )
      v11 = 98LL;
  }
  v12 = (_BYTE *)sub_140015A14(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)v11, 1);
  if ( !v12 )
    return (unsigned int)-1073741801;
  P = (PVOID)sub_1400143E0(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
  if ( P )
  {
    v15 = *(_BYTE *)v11;
    v12[3] = 0;
    if ( v15 == 1 )
    {
      *((_DWORD *)v12 + 5) = 0;
      v9 = v12;
      *((_DWORD *)v12 + 6) = 524626;
      v14 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v14 == 1094997074 && (*(_BYTE *)(v14 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v14 + 6168) + 8LL * LockArray_high));
        v17 = **(_QWORD **)(*(_QWORD *)(v14 + 6168) + 8LL * LockArray_high);
        *((_DWORD *)v12 + 11) = HIDWORD(v17);
      }
      else
      {
        LODWORD(v17) = -1;
      }
      v18 = a5;
      v19 = a6;
      *((_DWORD *)v12 + 8) = v17;
      v20 = *((unsigned int *)v12 + 13);
      *((_QWORD *)v12 + 8) = a6;
      *((_DWORD *)v12 + 15) = *(_DWORD *)a5;
      *((_QWORD *)v12 + 10) = a2;
      *((_DWORD *)v12 + 10) = *(_DWORD *)(a1 + 1392);
      v12[v20 + 8] = *(_BYTE *)(a1 + 104);
      v12[v20 + 9] = *(_BYTE *)(a1 + 105);
      v12[v20 + 10] = *(_BYTE *)(a1 + 106);
      v10 = &v12[*((unsigned int *)v12 + 30)];
      *(_DWORD *)v10 = 64;
      v21 = v10 + 24;
      *((_DWORD *)v10 + 1) = 32;
      *((_WORD *)v10 + 4) = -256;
      *((_QWORD *)v10 + 2) = P;
      v10[10] = 10;
    }
    else
    {
      v19 = a6;
      v21 = v12 + 72;
      v12[2] = 0;
      v18 = a5;
      *(_WORD *)v12 = 88;
      *((_DWORD *)v12 + 3) = 524626;
      v12[5] = *(_BYTE *)(a1 + 104);
      v12[6] = *(_BYTE *)(a1 + 105);
      v12[7] = *(_BYTE *)(a1 + 106);
      v12[8] = -1;
      *((_QWORD *)v12 + 3) = a6;
      *((_DWORD *)v12 + 4) = *(_DWORD *)a5;
      *((_QWORD *)v12 + 6) = a2;
      *((_DWORD *)v12 + 5) = *(_DWORD *)(a1 + 1392);
      *((_WORD *)v12 + 5) = -246;
      *((_QWORD *)v12 + 4) = P;
    }
    if ( v12[2] == 40 )
      *((_WORD *)v12 + 19) = 32;
    else
      v12[9] = 32;
    *(_WORD *)(v21 + 5) = 0;
    v21[3] = a4;
    *v21 = 77;
    v21[2] = a3 & 0x3F;
    v21[8] = *v18;
    v21[7] = v18[1];
    v22 = sub_140014B7C(*(_QWORD *)(a1 + 8), (ULONG_PTR)v12, v14, &v27);
    v23 = v22;
    if ( !v22 )
    {
      Status = -1073741801;
LABEL_34:
      ExFreePoolWithTag(P, 0x4E536152u);
      goto LABEL_35;
    }
    Status = sub_140018E30(*(PDEVICE_OBJECT *)(a1 + 8), v22);
    if ( Status >= 0 )
    {
      Status = v23->IoStatus.Status;
      if ( Status >= 0 )
        Status = sub_1400158F0(v12[3]);
    }
    if ( Status == -2147483643 )
    {
      if ( *((_DWORD *)v12 + 4) <= *(_DWORD *)v18 )
      {
        Status = 0;
        v12[3] = 1;
      }
    }
    else if ( Status < 0 )
    {
LABEL_33:
      sub_1400158A4(v23);
      goto LABEL_34;
    }
    if ( *((_DWORD *)v12 + 4) >= 4u && (HIBYTE(v28) = v19[2], LOBYTE(v28) = v19[3], v24 = v28 + 4, (*v19 & 0x3F) == a3) )
    {
      if ( v24 < *(_DWORD *)v18 )
        *(_DWORD *)v18 = v24;
    }
    else
    {
      Status = -1073741668;
    }
    goto LABEL_33;
  }
  Status = -1073741801;
LABEL_35:
  if ( *(_BYTE *)v11 == 1 )
  {
    if ( !v9 )
      v9 = v12;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 13) = 0LL;
    if ( v10 )
      *((_QWORD *)v10 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 7) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
  }
  ExFreePoolWithTag(v12, 0x72536152u);
  return (unsigned int)Status;
}
