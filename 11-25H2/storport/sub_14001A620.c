/*
 * XREFs of sub_14001A620 @ 0x14001A620
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 * Callees:
 *     sub_14001AB28 @ 0x14001AB28 (sub_14001AB28.c)
 *     sub_14001ACB8 @ 0x14001ACB8 (sub_14001ACB8.c)
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140029740 @ 0x140029740 (sub_140029740.c)
 *     sub_14002B350 @ 0x14002B350 (sub_14002B350.c)
 *     sub_140037090 @ 0x140037090 (sub_140037090.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 */

__int64 __fastcall sub_14001A620(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // r13d
  bool v8; // zf
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rcx
  void *v16; // rdx
  int *v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // rax
  char v20; // r15
  unsigned int v21; // eax
  char v22; // r11
  char v23; // r14
  char v24; // al
  __int64 v25; // rcx
  unsigned __int16 *v26; // r14
  __int64 v27; // r12
  void (__fastcall *v28)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  int v29; // eax
  char v30; // r12
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char *v33; // r11
  int v34; // eax
  unsigned int *v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  char v38; // cl
  char v39; // r8
  signed __int32 v40[8]; // [rsp+0h] [rbp-99h] BYREF
  char v41; // [rsp+60h] [rbp-39h] BYREF
  char v42; // [rsp+61h] [rbp-38h]
  char v43; // [rsp+62h] [rbp-37h]
  unsigned __int16 v44; // [rsp+64h] [rbp-35h]
  unsigned int v45; // [rsp+68h] [rbp-31h] BYREF
  __int64 v46; // [rsp+70h] [rbp-29h] BYREF
  __int128 v47; // [rsp+78h] [rbp-21h] BYREF
  __int64 v48; // [rsp+88h] [rbp-11h]
  __int128 v49; // [rsp+90h] [rbp-9h] BYREF
  __int128 v50; // [rsp+A0h] [rbp+7h] BYREF

  LOBYTE(v2) = 0;
  v45 = 0;
  v48 = 0LL;
  v44 = 0;
  v47 = 0LL;
  v41 = 0;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 14LL, &unk_14014A2D8, a1, a2);
  }
  v5 = *(_QWORD *)(a2 + 184);
  v46 = 0LL;
  if ( *(_DWORD *)(v5 + 8) )
  {
    if ( byte_140168DAA )
    {
      v49 = 0LL;
      IoGetActivityIdIrp(a2, &v49);
      if ( (byte_1401694F2 & 0x20) != 0 )
        sub_140052F3C(v25, &unk_140149FE8, &v49, a2, *(_DWORD *)(a2 + 48));
    }
    return sub_14001B0D0(*(_QWORD *)(a1 + 24), a2);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4264)) > 300000000 )
    *(_BYTE *)(a1 + 106) = 1;
  v6 = a1;
  if ( *(int *)(*(_QWORD *)(a1 + 608) + 184LL) >= 0 )
  {
LABEL_5:
    v7 = sub_14001AB28(v6, &v45, &v41);
    if ( v7 < 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v14 = sub_1401ADB60(a1);
  if ( byte_140168DAA )
  {
    v50 = 0LL;
    IoGetActivityIdIrp(a2, &v50);
    if ( (byte_1401694F3 & 0x40) != 0 )
      sub_140052F3C(v15, &unk_14014A4C0, &v50, a2, v14);
  }
  if ( v14 < 0 )
  {
    v6 = a1;
    goto LABEL_5;
  }
LABEL_6:
  v7 = sub_14001ACB8(a1, &v46);
  v45 = v7;
LABEL_7:
  if ( v41 )
  {
    v26 = *(unsigned __int16 **)(a1 + 4840);
    *(_BYTE *)(a1 + 104) &= ~0x40u;
    *(_QWORD *)(a1 + 4840) = 0LL;
    if ( v26 )
      v44 = *v26;
    v27 = *(_QWORD *)(a1 + 4856);
    v28 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4848);
    *(_QWORD *)(a1 + 4856) = 0LL;
    *(_QWORD *)(a1 + 4848) = 0LL;
    *(_QWORD *)(a1 + 4828) = 0LL;
    _InterlockedOr(v40, 0);
    _InterlockedExchange((volatile __int32 *)(a1 + 4824), 0);
    if ( v28 )
    {
      sub_14002B350(a1, &v47);
      v29 = sub_140037090(v45);
      v28(*(_QWORD *)(a1 + 616) + 16LL, v27, v44, v26, v29);
      sub_140029740(a1, &v47);
    }
  }
  *(_QWORD *)(a2 + 56) = v46;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v7 >= 0 )
  {
    if ( byte_140168DAA )
    {
      v49 = 0LL;
      IoGetActivityIdIrp(a2, &v49);
      if ( (byte_1401694F2 & 0x20) != 0 )
        sub_140052F3C(v12, &unk_140149FE8, &v49, a2, v7);
    }
    v13 = *(_QWORD *)(a2 + 184);
    *(_OWORD *)(v13 - 72) = *(_OWORD *)v13;
    *(_OWORD *)(v13 - 56) = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(v13 - 40) = *(_OWORD *)(v13 + 32);
    *(_QWORD *)(v13 - 24) = *(_QWORD *)(v13 + 48);
    *(_BYTE *)(v13 - 69) = 0;
    v7 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
    goto LABEL_14;
  }
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v8 )
    goto LABEL_13;
  v49 = 0LL;
  IoGetActivityIdIrp(a2, &v49);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_13;
    v16 = &unk_140148B18;
    goto LABEL_34;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_13;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v2 = *v17;
        sub_140056AB0((_DWORD)v9, v10, (unsigned int)&v49, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_13;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_13;
    v16 = &unk_140149FE8;
LABEL_34:
    sub_140052F3C(v9, v16, &v49, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_13;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_13;
  v18 = *(_QWORD *)(v10 + 8);
  v30 = 0;
  v43 = 0;
  v31 = 0LL;
  v32 = 0;
  v41 = 0;
  v20 = 0;
  v42 = 0;
  v23 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v38 = *(_BYTE *)(v18 + 72);
    v31 = *(_BYTE **)(v18 + 32);
    v32 = *(_BYTE *)(v18 + 11);
    v30 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_103;
    goto LABEL_13;
  }
  v33 = 0LL;
  LOBYTE(v44) = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_13;
  v34 = *(_DWORD *)(v18 + 56);
  LODWORD(v9) = 0;
  v45 = 0;
  LODWORD(v46) = v34;
  if ( !v34 )
    goto LABEL_95;
  v35 = (unsigned int *)(v18 + 120);
  while ( 1 )
  {
    v36 = *v35;
    if ( (unsigned int)v36 < 0x80 )
      goto LABEL_92;
    v37 = *(unsigned int *)(v18 + 16);
    if ( (unsigned int)v36 >= (unsigned int)v37 )
      goto LABEL_92;
    if ( *(_DWORD *)(v36 + v18) != 64 )
    {
      LODWORD(v9) = *(_DWORD *)(v36 + v18) - 65;
      if ( *(_DWORD *)(v36 + v18) == 65 )
      {
        LODWORD(v9) = v36 + 56;
        if ( v36 + 56 <= v37 )
        {
          LOBYTE(v44) = 1;
          if ( *(_BYTE *)(v36 + v18 + 10) )
            v33 = (char *)((unsigned int)v36 + v18 + 24);
          v31 = *(_BYTE **)((unsigned int)v36 + v18 + 16);
          v32 = *(_BYTE *)((unsigned int)v36 + v18 + 9);
          v43 = *(_BYTE *)(v36 + v18 + 8);
        }
      }
      else if ( *(_DWORD *)(v36 + v18) == 66 )
      {
        LODWORD(v9) = v36 + 40;
        if ( v36 + 40 <= v37 )
        {
          if ( *(_DWORD *)(v36 + v18 + 12) )
            v33 = (char *)(v36 + v18 + 32);
          v31 = *(_BYTE **)(v36 + v18 + 24);
          goto LABEL_101;
        }
      }
      goto LABEL_90;
    }
    LODWORD(v9) = v36 + 40;
    if ( v36 + 40 <= v37 )
      break;
LABEL_90:
    if ( (_BYTE)v44 )
      goto LABEL_93;
    LODWORD(v9) = v45;
LABEL_92:
    LODWORD(v9) = (_DWORD)v9 + 1;
    ++v35;
    v45 = (unsigned int)v9;
    if ( (unsigned int)v9 >= (unsigned int)v46 )
    {
LABEL_93:
      v30 = v43;
      goto LABEL_94;
    }
  }
  if ( *(_BYTE *)(v36 + v18 + 10) )
    v33 = (char *)((unsigned int)v36 + v18 + 24);
  v31 = *(_BYTE **)(v36 + v18 + 16);
LABEL_101:
  v30 = *(_BYTE *)(v36 + v18 + 8);
  v32 = *(_BYTE *)(v36 + v18 + 9);
LABEL_94:
  v23 = 0;
LABEL_95:
  if ( v33 )
  {
    v38 = *v33;
    v22 = 0;
LABEL_103:
    LOBYTE(v9) = v38 - 8;
    if ( ((unsigned __int8)v9 & 0x5D) == 0 )
    {
      v39 = *(_BYTE *)(v18 + 3);
      if ( v39 == 1 || !v31 || !v32 )
        goto LABEL_55;
      LOBYTE(v18) = 0;
      v9 = &v31[v32];
      v19 = v31 + 8;
      if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
      {
        if ( v19 <= v9 )
        {
          LOBYTE(v18) = 1;
          v23 = v31[2];
          v20 = v31[1] & 0xF;
          v22 = v31[3];
        }
      }
      else
      {
        if ( v19 <= v9 )
        {
          v20 = v31[2] & 0xF;
          v21 = v32;
          if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
            v21 = (unsigned __int8)v31[7] + 8;
          v9 = v31 + 13;
          v18 = (unsigned __int64)&v31[v21];
          if ( (unsigned __int64)(v31 + 13) > v18 )
            v41 = 0;
          else
            v41 = v31[12];
          if ( (unsigned __int64)(v31 + 14) > v18 )
            v42 = 0;
          else
            v42 = *v9;
          LOBYTE(v18) = 1;
        }
        v22 = v42;
        v23 = v41;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v2) = v23;
        v24 = v22;
      }
      else
      {
LABEL_55:
        v20 = 0;
        v24 = 0;
      }
      sub_140052E64((_DWORD)v9, v18, (unsigned int)&v49, a2, *(_DWORD *)(a2 + 48), v39, v30, v20, v2, v24, a2);
    }
  }
LABEL_13:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_14:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 15LL, &unk_14014A2D8, a1, a2, v7);
  }
  return (unsigned int)v7;
}
