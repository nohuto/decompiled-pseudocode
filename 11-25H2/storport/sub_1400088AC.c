/*
 * XREFs of sub_1400088AC @ 0x1400088AC
 * Callers:
 *     sub_140008510 @ 0x140008510 (sub_140008510.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400B3E8C @ 0x1400B3E8C (sub_1400B3E8C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400088AC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  POWER_STATE v6; // ebx
  int v7; // edi
  int v8; // edx
  char v9; // cl
  REQUEST_POWER_COMPLETE *v10; // r14
  void *Context; // r15
  NTSTATUS v12; // r14d
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  bool v16; // zf
  char *v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  void *v20; // rdx
  unsigned __int64 v21; // rdx
  char v22; // bl
  char v23; // r12
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char v26; // r15
  char v27; // r11
  char *v28; // r11
  unsigned int *v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  char v32; // cl
  char v33; // r8
  char *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  char v38; // [rsp+60h] [rbp-68h]
  char v39; // [rsp+61h] [rbp-67h]
  char v40; // [rsp+62h] [rbp-66h]
  int v41; // [rsp+64h] [rbp-64h]
  unsigned int v42; // [rsp+68h] [rbp-60h]
  __int128 v43; // [rsp+70h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(int *)(v4 + 24);
  v6.SystemState = (SYSTEM_POWER_STATE)stru_140148968[v5];
  if ( (*(_DWORD *)(v4 + 8) & 0x400000) != 0 && (_DWORD)v5 == 6 && v6.SystemState == PowerSystemSleeping3 )
    *(_DWORD *)(a1 + 3612) |= 1u;
  LOBYTE(v7) = 0;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
  if ( (_DWORD)v5 == 1 || (v9 = 1, *(_DWORD *)(a1 + 544) >= (int)v5) )
    v9 = 0;
  *(_BYTE *)(a1 + 556) = v9;
  *(_DWORD *)(a1 + 544) = v5;
  *(_DWORD *)(a1 + 552) = v8;
  if ( v9 )
  {
    if ( (_DWORD)v5 == 5 )
      sub_1400B3E8C(a1);
    v10 = CompletionFunction;
    Context = (void *)a2;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
  else
  {
    v10 = sub_140042610;
    Context = (void *)a1;
  }
  sub_1400066C0(a1, a2, 1);
  v12 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, v6, v10, Context, 0LL);
  if ( v12 == 259 )
  {
    if ( v6.SystemState == PowerSystemWorking )
      *(_BYTE *)(a1 + 504) |= 0x80u;
    else
      *(_BYTE *)(a1 + 505) |= 1u;
    v12 = 0;
  }
  if ( *(_BYTE *)(a1 + 556) && v12 >= 0 )
  {
    v12 = 259;
    goto LABEL_96;
  }
  v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v14 = *(_DWORD *)(v13 + *(_QWORD *)(a1 + 40));
  while ( (v14 & 1) == 0 )
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(a1 + 40)), v14 - 2, v14);
    if ( v15 == v14 )
      goto LABEL_27;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_27:
  v16 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v12;
  if ( v16 )
    goto LABEL_95;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_95;
    v20 = &unk_140148B18;
    goto LABEL_94;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_95;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v7 = *v19;
        sub_140056AB0((_DWORD)v17, v18, (unsigned int)&v43, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_95;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_95;
    v20 = &unk_140149FE8;
LABEL_94:
    sub_140052F3C(v17, v20, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_95;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_95;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0;
  v38 = 0;
  v24 = 0LL;
  v39 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v21 + 72);
    v24 = *(_BYTE **)(v21 + 32);
    v25 = *(_BYTE *)(v21 + 11);
    v23 = *(_BYTE *)(v21 + 4);
    if ( !*(_BYTE *)(v21 + 2) )
      goto LABEL_70;
    goto LABEL_95;
  }
  v28 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_95;
  LODWORD(v17) = 0;
  v41 = 0;
  v42 = *(_DWORD *)(v21 + 56);
  if ( !v42 )
    goto LABEL_67;
  v29 = (unsigned int *)(v21 + 120);
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_60:
    LODWORD(v17) = (_DWORD)v17 + 1;
    ++v29;
    v41 = (int)v17;
    if ( (unsigned int)v17 >= v42 )
      goto LABEL_66;
  }
  if ( *(_DWORD *)(v30 + v21) != 64 )
  {
    LODWORD(v17) = *(_DWORD *)(v30 + v21) - 65;
    if ( *(_DWORD *)(v30 + v21) == 65 )
    {
      LODWORD(v17) = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v30 + v21 + 10) )
          v28 = (char *)(v30 + v21 + 24);
        v23 = *(_BYTE *)(v30 + v21 + 8);
        v24 = *(_BYTE **)(v30 + v21 + 16);
        v25 = *(_BYTE *)(v30 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + v21) == 66 )
    {
      LODWORD(v17) = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + v21 + 12) )
          v28 = (char *)(v30 + v21 + 32);
        v24 = *(_BYTE **)(v30 + v21 + 24);
        goto LABEL_65;
      }
    }
    goto LABEL_58;
  }
  LODWORD(v17) = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_58:
    if ( v40 )
      goto LABEL_66;
    LODWORD(v17) = v41;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v30 + v21 + 10) )
    v28 = (char *)(v30 + v21 + 24);
  v24 = *(_BYTE **)(v30 + v21 + 16);
LABEL_65:
  v25 = *(_BYTE *)(v30 + v21 + 9);
  v23 = *(_BYTE *)(v30 + v21 + 8);
LABEL_66:
  v22 = 0;
LABEL_67:
  if ( v28 )
  {
    v32 = *v28;
    v27 = 0;
LABEL_70:
    LOBYTE(v17) = v32 - 8;
    if ( ((unsigned __int8)v17 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(v21 + 3);
      if ( v33 == 1 || !v24 || !v25 )
        goto LABEL_90;
      LOBYTE(v21) = 0;
      v17 = &v24[v25];
      v34 = v24 + 8;
      if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
      {
        if ( v34 <= v17 )
        {
          LOBYTE(v21) = 1;
          v22 = v24[2];
          v26 = v24[1] & 0xF;
          v27 = v24[3];
        }
      }
      else
      {
        if ( v34 <= v17 )
        {
          v26 = v24[2] & 0xF;
          v35 = v25;
          if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
            v35 = (unsigned __int8)v24[7] + 8;
          v17 = v24 + 13;
          v21 = (unsigned __int64)&v24[v35];
          if ( (unsigned __int64)(v24 + 13) > v21 )
            v38 = 0;
          else
            v38 = v24[12];
          if ( (unsigned __int64)(v24 + 14) > v21 )
            v39 = 0;
          else
            v39 = *v17;
          LOBYTE(v21) = 1;
        }
        v27 = v39;
        v22 = v38;
      }
      if ( (_BYTE)v21 )
      {
        LOBYTE(v7) = v22;
        v36 = v27;
      }
      else
      {
LABEL_90:
        v26 = 0;
        v36 = 0;
      }
      sub_140052E64((_DWORD)v17, v21, (unsigned int)&v43, a2, *(_DWORD *)(a2 + 48), v33, v23, v26, v7, v36, a2);
    }
  }
LABEL_95:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_96:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 58LL, &unk_14014C778, a1, a2, v12);
  }
  return (unsigned int)v12;
}
