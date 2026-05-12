/*
 * XREFs of sub_14017869C @ 0x14017869C
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140039168 @ 0x140039168 (sub_140039168.c)
 *     sub_14003FC20 @ 0x14003FC20 (sub_14003FC20.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056650 @ 0x140056650 (sub_140056650.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140065560 @ 0x140065560 (sub_140065560.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_1400893AC @ 0x1400893AC (sub_1400893AC.c)
 *     sub_14008B5C8 @ 0x14008B5C8 (sub_14008B5C8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14017869C(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // edi
  size_t v6; // r12
  unsigned int *v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r12
  unsigned int *v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  int *v29; // rax
  const EVENT_DESCRIPTOR *v30; // rdx
  __int64 v31; // rdx
  char v32; // r12
  _BYTE *v33; // r9
  unsigned __int8 v34; // r10
  char v35; // r11
  char v36; // r15
  char v37; // r14
  char *v38; // r14
  unsigned int v39; // r13d
  unsigned __int64 v40; // r15
  __int64 v41; // r8
  int v42; // ecx
  char v43; // cl
  char v44; // r8
  _BYTE *v45; // rax
  unsigned int v46; // eax
  unsigned __int64 v47; // r8
  char v48; // al
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-59h]
  char v51; // [rsp+60h] [rbp-19h]
  char v52; // [rsp+61h] [rbp-18h]
  char v53; // [rsp+62h] [rbp-17h]
  _DWORD Size[3]; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-9h] BYREF
  unsigned int *v56; // [rsp+78h] [rbp-1h]
  __int64 v57; // [rsp+80h] [rbp+7h]
  GUID v58; // [rsp+88h] [rbp+Fh] BYREF

  v2 = 0;
  v57 = *(_QWORD *)(a2 + 184);
  v56 = 0LL;
  v5 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v6 = *(unsigned int *)(v57 + 8);
  v7 = 0LL;
  Size[0] = *(_DWORD *)(v57 + 8);
  v55 = 0;
  if ( (unsigned int)sub_140056650() )
  {
    if ( !sub_14008B5C8() || *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
    {
      v5 = -1073741790;
      goto LABEL_73;
    }
    v56 = *(unsigned int **)&Size[1];
  }
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    if ( *(_DWORD *)(v57 + 16) < 0x14u || (unsigned int)v6 < 0x24 )
    {
      v5 = -1073741811;
      goto LABEL_65;
    }
    if ( *(_DWORD *)v8 != 20 )
      goto LABEL_6;
    if ( *(_DWORD *)(v8 + 4) != 20 )
      goto LABEL_6;
    v9 = *(_DWORD *)(v8 + 12);
    if ( !v9 || v9 >= 4 || *(int *)(v8 + 16) >= 1 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      memset_0(*(void **)(a2 + 24), 0, v6);
      *(_DWORD *)v8 = 36;
      *(_OWORD *)(v8 + 8) = xmmword_14014AD98;
      if ( (unsigned int)v6 >= 0x1200038 )
      {
        *(_DWORD *)(v8 + 32) = 18874392;
        *(_DWORD *)(v8 + 36) = 2;
        *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 4932);
        *(_DWORD *)(v8 + 44) = *(_DWORD *)(a1 + 4928);
        memmove((void *)(v8 + 48), *(const void **)(a1 + 4936), 48LL * *(unsigned int *)(a1 + 4932));
        *(_DWORD *)(v8 + 18874416) = *(_DWORD *)(a1 + 5656);
        *(_DWORD *)(v8 + 18874420) = *(_DWORD *)(a1 + 5660);
        *(_DWORD *)(v8 + 24) = 18874392;
        *(_DWORD *)(v8 + 4) = 18874424;
        *(_QWORD *)(a2 + 56) = 18874424LL;
      }
      else
      {
        *(_DWORD *)(v8 + 24) = 18874392;
        v5 = -2147483643;
        *(_DWORD *)(v8 + 4) = 36;
        *(_QWORD *)(a2 + 56) = 36LL;
      }
      goto LABEL_73;
    }
    if ( (unsigned int)(v9 - 2) > 1 )
    {
      v5 = -1073741637;
      goto LABEL_73;
    }
    v5 = sub_1400893AC(*(_QWORD *)(a1 + 8), a2, v6, &Size[1], &v55);
    if ( v5 >= 0 )
    {
      v7 = (unsigned int *)sub_140015A14(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 482), 0);
      if ( v7 )
      {
        v12 = 316LL;
        if ( *(_DWORD *)a1 != 1314275652 )
          v12 = 524LL;
        v13 = sub_14002285C(((*(_DWORD *)(v12 + a1) + 7) & 0xFFFFFFF8) + 1184, v10, (_QWORD *)a1);
        v57 = v13;
        v15 = v13;
        if ( v13 )
        {
          v16 = v13 + 48;
          sub_140017C40(v13 + 48, v14, 0, 0LL);
          v17 = *(unsigned int **)&Size[1];
          *(_QWORD *)(v16 + 184) = *(_QWORD *)&Size[1];
          *(_QWORD *)(v16 + 176) = a2;
          *(_QWORD *)(v16 + 168) = v7;
          v18 = *(_BYTE *)(a1 + 482) == 1;
          v56 = v17;
          if ( v18 )
          {
            *((_QWORD *)v7 + 8) = v17;
            v7[15] = v55;
            *((_QWORD *)v7 + 12) = v16;
            *((_QWORD *)v7 + 10) = a2;
            v7[5] = 2;
            v7[6] = 256;
            v7[10] = *(_DWORD *)(a1 + 4124);
            v19 = v7[13];
            *(_WORD *)((char *)v7 + v19 + 8) = 0;
            *((_BYTE *)v7 + v19 + 10) = 0;
          }
          else
          {
            *((_QWORD *)v7 + 3) = v17;
            v7[4] = v55;
            *((_QWORD *)v7 + 6) = v16;
            *((_BYTE *)v7 + 2) = 2;
            *(_WORD *)v7 = 88;
            v7[3] = 256;
            v7[5] = *(_DWORD *)(a1 + 4124);
            *(_WORD *)((char *)v7 + 5) = 0;
            *((_BYTE *)v7 + 7) = 0;
          }
          sub_1400161E0((int *)a1, (__int64)v7, v15 + 1184);
          KeInitializeEvent((PRKEVENT)(v16 + 664), NotificationEvent, 0);
          sub_14003FC20(v16, (__int64)sub_140038660);
          if ( *(_DWORD *)(v8 + 12) == 2 )
            *(_BYTE *)(v16 + 17) |= 8u;
          if ( *(_DWORD *)(v8 + 12) == 3 && *(_QWORD *)(a1 + 4960) )
            sub_1400212C0(a1, 0LL, 1LL);
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
            && (HIDWORD(off_140168120->Timer) & 0x100) != 0
            && BYTE1(off_140168120->Timer) )
          {
            sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x47u, (__int64)&unk_14014A2D8, v16, v7);
          }
          if ( *(_BYTE *)(a1 + 4370) )
            v20 = sub_140017D90(a1, (_QWORD *)v16);
          else
            v20 = sub_1400184D0(a1, v16);
          v5 = v20;
          if ( v20 >= 0 )
          {
            KeWaitForSingleObject((PVOID)(v16 + 664), Executive, 0, 0, 0LL);
            v5 = sub_1400229C8(*((_BYTE *)v7 + 3));
          }
          if ( *(_DWORD *)(v8 + 12) == 3 )
          {
            if ( (*(_BYTE *)(v16 + 17) & 1) != 0 )
            {
              sub_14001F93C(a1, *(unsigned int *)(v16 + 748));
              *(_BYTE *)(v16 + 17) &= ~1u;
            }
            if ( *(_QWORD *)(a1 + 4960) )
              sub_140021110(a1, 0LL, 0LL);
          }
          if ( v5 < 0 )
          {
            v26 = 0LL;
          }
          else
          {
            *(_QWORD *)&Size[1] = (char *)v56 + *v56;
            memset_0((void *)v8, 0, Size[0]);
            v21 = v56[5];
            if ( v21 == 6 )
            {
              v22 = *(_QWORD *)&Size[1];
              v5 = -2147483643;
              *(_DWORD *)v8 = 36;
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v22 + 32);
              v23 = *(_OWORD *)(v22 + 16);
              *(_DWORD *)(v8 + 4) = 36;
              *(_OWORD *)(v8 + 8) = v23;
              *(_QWORD *)(a2 + 56) = 36LL;
LABEL_63:
              sub_140017A20(v16, 0);
              sub_140016754(a1, v57);
LABEL_65:
              v11 = v56;
              goto LABEL_66;
            }
            if ( v21 )
            {
              v5 = sub_140065560(v21);
              *(_QWORD *)(a2 + 56) = 0LL;
              goto LABEL_63;
            }
            v24 = *(_QWORD *)&Size[1];
            *(_DWORD *)v8 = 36;
            v25 = *(_DWORD *)(v24 + 32);
            if ( v25 >= Size[0] - 32 )
              v25 = Size[0] - 32;
            *(_DWORD *)(v8 + 4) = v25 + 32;
            *(_DWORD *)(v8 + 24) = v25;
            *(_OWORD *)(v8 + 8) = *(_OWORD *)(v24 + 16);
            memmove((void *)(v8 + 32), (const void *)(v24 + 40), v25);
            v26 = *(unsigned int *)(v8 + 4);
          }
          *(_QWORD *)(a2 + 56) = v26;
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
            && (HIDWORD(off_140168120->Timer) & 0x100) != 0
            && BYTE1(off_140168120->Timer) )
          {
            LODWORD(Timeout) = *((unsigned __int8 *)v7 + 3);
            sub_140067F28((__int64)off_140168120->AttachedDevice, 0x48u, (__int64)&unk_14014A2D8, v5, Timeout);
          }
          goto LABEL_63;
        }
      }
      v5 = -1073741670;
    }
    v11 = *(void **)&Size[1];
LABEL_66:
    if ( v11 )
      ExFreePoolWithTag(v11, 0x72536152u);
    if ( v7 )
    {
      if ( *(_BYTE *)(a1 + 482) == 1 )
      {
        *((_QWORD *)v7 + 10) = 0LL;
        *((_QWORD *)v7 + 13) = 0LL;
      }
      else
      {
        *((_QWORD *)v7 + 6) = 0LL;
        *((_QWORD *)v7 + 7) = 0LL;
      }
      sub_140039168(v7);
    }
    goto LABEL_73;
  }
LABEL_6:
  v5 = -1073741811;
LABEL_73:
  v18 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v18 )
    goto LABEL_139;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v28 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v28 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_139;
    v30 = &stru_140148B18;
    goto LABEL_138;
  }
  if ( *(_BYTE *)v28 != 15 )
  {
    if ( *(_BYTE *)v28 != 27 )
      goto LABEL_139;
    if ( *(_BYTE *)(v28 + 1) == 7 && !*(_DWORD *)(v28 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v29 = *(int **)(a2 + 56);
        if ( v29 )
          v2 = *v29;
        LODWORD(Timeout) = v2;
        sub_140056AB0(v27, v28, &v58, a2, Timeout, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_139;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_139;
    v30 = &stru_140149FE8;
LABEL_138:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v27, v30, &v58, a2, Timeout);
    goto LABEL_139;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_139;
  v31 = *(_QWORD *)(v28 + 8);
  v32 = 0;
  v33 = 0LL;
  v51 = 0;
  v34 = 0;
  v52 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( *(_BYTE *)(v31 + 2) != 40 )
  {
    v43 = *(_BYTE *)(v31 + 72);
    v33 = *(_BYTE **)(v31 + 32);
    v34 = *(_BYTE *)(v31 + 11);
    v32 = *(_BYTE *)(v31 + 4);
    if ( !*(_BYTE *)(v31 + 2) )
      goto LABEL_114;
    goto LABEL_139;
  }
  v38 = 0LL;
  v53 = 0;
  if ( *(_DWORD *)(v31 + 20) )
    goto LABEL_139;
  v39 = 0;
  Size[0] = *(_DWORD *)(v31 + 56);
  if ( !Size[0] )
    goto LABEL_111;
  while ( 1 )
  {
    v27 = *(unsigned int *)(v31 + 4LL * v39 + 120);
    if ( (unsigned int)v27 >= 0x80 )
    {
      v40 = *(unsigned int *)(v31 + 16);
      if ( (unsigned int)v27 < (unsigned int)v40 )
        break;
    }
LABEL_104:
    if ( ++v39 >= Size[0] )
      goto LABEL_110;
  }
  v41 = (unsigned int)v27;
  v42 = *(_DWORD *)(v27 + v31) - 64;
  if ( v42 )
  {
    v27 = (unsigned int)(v42 - 1);
    if ( (_DWORD)v27 )
    {
      if ( (_DWORD)v27 == 1 )
      {
        v27 = v41 + 40;
        if ( v41 + 40 <= v40 )
        {
          if ( *(_DWORD *)(v41 + v31 + 12) )
            v38 = (char *)(v41 + v31 + 32);
          v33 = *(_BYTE **)(v41 + v31 + 24);
          goto LABEL_109;
        }
      }
    }
    else
    {
      v27 = v41 + 56;
      if ( v41 + 56 <= v40 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v41 + v31 + 10) )
          v38 = (char *)(v41 + v31 + 24);
        v32 = *(_BYTE *)(v41 + v31 + 8);
        v33 = *(_BYTE **)(v41 + v31 + 16);
        v34 = *(_BYTE *)(v41 + v31 + 9);
      }
    }
    goto LABEL_103;
  }
  v27 = v41 + 40;
  if ( v41 + 40 > v40 )
  {
LABEL_103:
    if ( v53 )
      goto LABEL_110;
    goto LABEL_104;
  }
  if ( *(_BYTE *)(v41 + v31 + 10) )
    v38 = (char *)(v41 + v31 + 24);
  v33 = *(_BYTE **)(v41 + v31 + 16);
LABEL_109:
  v34 = *(_BYTE *)(v41 + v31 + 9);
  v32 = *(_BYTE *)(v41 + v31 + 8);
LABEL_110:
  v36 = 0;
LABEL_111:
  if ( v38 )
  {
    v43 = *v38;
    v37 = 0;
LABEL_114:
    LOBYTE(v27) = v43 - 8;
    if ( (v27 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v31 + 3) == 1 || !v33 || !v34 )
        goto LABEL_134;
      v44 = 0;
      v27 = (unsigned __int64)&v33[v34];
      v45 = v33 + 8;
      if ( (unsigned __int8)((*v33 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v45 <= v27 )
        {
          v44 = 1;
          v36 = v33[2];
          v35 = v33[1] & 0xF;
          v37 = v33[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v45 <= v27 )
        {
          v35 = v33[2] & 0xF;
          v46 = v34;
          if ( (unsigned int)(unsigned __int8)v33[7] + 8 <= v34 )
            v46 = (unsigned __int8)v33[7] + 8;
          v27 = (unsigned __int64)(v33 + 13);
          v47 = (unsigned __int64)&v33[v46];
          if ( (unsigned __int64)(v33 + 13) > v47 )
            v51 = 0;
          else
            v51 = v33[12];
          if ( (unsigned __int64)(v33 + 14) > v47 )
            v52 = 0;
          else
            v52 = *(_BYTE *)v27;
          v44 = 1;
        }
        v37 = v52;
        v36 = v51;
      }
      if ( v44 )
      {
        LOBYTE(v2) = v36;
        v48 = v37;
      }
      else
      {
LABEL_134:
        v35 = 0;
        v48 = 0;
      }
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v27, v31, &v58, a2, Timeout, *(_BYTE *)(v31 + 3), v32, v35, v2, v48, a2);
    }
  }
LABEL_139:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v5;
}
