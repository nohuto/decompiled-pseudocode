/*
 * XREFs of sub_14000A824 @ 0x14000A824
 * Callers:
 *     sub_14000923C @ 0x14000923C (sub_14000923C.c)
 * Callees:
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000A824(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // ebp
  bool v7; // zf
  char *v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  void *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r14
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r13
  char v18; // r15
  char *v19; // r11
  unsigned int *v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  char v23; // cl
  char v24; // r8
  char *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // [rsp+60h] [rbp-68h]
  int v32; // [rsp+64h] [rbp-64h]
  int v33; // [rsp+68h] [rbp-60h]
  unsigned int v34; // [rsp+6Ch] [rbp-5Ch]
  __int128 v35; // [rsp+70h] [rbp-58h] BYREF

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 33LL, &unk_14014C778, a1, a2);
  }
  v4 = sub_140033D74(a1);
  LOBYTE(v5) = 0;
  v32 = v4;
  v6 = v4;
  if ( v4 >= 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v29 = *(_QWORD *)(a2 + 184);
    *(_OWORD *)(v29 - 72) = *(_OWORD *)v29;
    *(_OWORD *)(v29 - 56) = *(_OWORD *)(v29 + 16);
    *(_OWORD *)(v29 - 40) = *(_OWORD *)(v29 + 32);
    *(_QWORD *)(v29 - 24) = *(_QWORD *)(v29 + 48);
    *(_BYTE *)(v29 - 69) = 0;
    v30 = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(v30 - 16) = &sub_14000BAE0;
    *(_QWORD *)(v30 - 8) = 0LL;
    *(_BYTE *)(v30 - 69) = -32;
    PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 4) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_1400556F8(off_140168120->AttachedDevice, 34LL, &unk_14014C778, a1, a2, 259);
    }
    return 259LL;
  }
  else
  {
    v7 = byte_140168DAA == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v4;
    if ( v7 )
      goto LABEL_71;
    v35 = 0LL;
    IoGetActivityIdIrp(a2, &v35);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_71;
      v11 = &unk_140148B18;
      goto LABEL_70;
    }
    if ( *(_BYTE *)v9 != 15 )
    {
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_71;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v10 = *(int **)(a2 + 56);
          if ( v10 )
            v5 = *v10;
          sub_140056AB0((_DWORD)v8, v9, (unsigned int)&v35, a2, v5, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_71;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_71;
      v11 = &unk_140149FE8;
LABEL_70:
      sub_140052F3C(v8, v11, &v35, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_71;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_71;
    v12 = *(_QWORD *)(v9 + 8);
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( *(_BYTE *)(v12 + 2) == 40 )
    {
      v19 = 0LL;
      v31 = 0;
      if ( *(_DWORD *)(v12 + 20) )
        goto LABEL_71;
      LODWORD(v8) = 0;
      v33 = 0;
      v34 = *(_DWORD *)(v12 + 56);
      if ( !v34 )
        goto LABEL_46;
      v20 = (unsigned int *)(v12 + 120);
      while ( 1 )
      {
        v21 = *v20;
        if ( (unsigned int)v21 >= 0x80 )
        {
          v22 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v21 < (unsigned int)v22 )
          {
            if ( *(_DWORD *)(v21 + v12) == 64 )
            {
              LODWORD(v8) = v21 + 40;
              if ( v21 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v21 + v12 + 10) )
                  v19 = (char *)(v21 + v12 + 24);
                v14 = *(_BYTE **)(v21 + v12 + 16);
LABEL_44:
                v15 = *(_BYTE *)(v21 + v12 + 9);
                v13 = *(_BYTE *)(v21 + v12 + 8);
LABEL_45:
                v6 = v32;
LABEL_46:
                if ( v19 )
                {
                  v23 = *v19;
                  goto LABEL_49;
                }
                goto LABEL_71;
              }
            }
            else
            {
              LODWORD(v8) = *(_DWORD *)(v21 + v12) - 65;
              if ( *(_DWORD *)(v21 + v12) == 65 )
              {
                LODWORD(v8) = v21 + 56;
                if ( v21 + 56 <= v22 )
                {
                  v31 = 1;
                  if ( *(_BYTE *)(v21 + v12 + 10) )
                    v19 = (char *)(v21 + v12 + 24);
                  v13 = *(_BYTE *)(v21 + v12 + 8);
                  v14 = *(_BYTE **)(v21 + v12 + 16);
                  v15 = *(_BYTE *)(v21 + v12 + 9);
                }
              }
              else if ( *(_DWORD *)(v21 + v12) == 66 )
              {
                LODWORD(v8) = v21 + 40;
                if ( v21 + 40 <= v22 )
                {
                  if ( *(_DWORD *)(v21 + v12 + 12) )
                    v19 = (char *)(v21 + v12 + 32);
                  v14 = *(_BYTE **)(v21 + v12 + 24);
                  goto LABEL_44;
                }
              }
            }
            if ( v31 )
              goto LABEL_45;
            LODWORD(v8) = v33;
          }
        }
        LODWORD(v8) = (_DWORD)v8 + 1;
        ++v20;
        v33 = (int)v8;
        if ( (unsigned int)v8 >= v34 )
          goto LABEL_45;
      }
    }
    v23 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_71;
LABEL_49:
    LOBYTE(v8) = v23 - 8;
    if ( ((unsigned __int8)v8 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v12 + 3);
      if ( v24 == 1 || !v14 || !v15 )
        goto LABEL_66;
      LOBYTE(v12) = 0;
      v8 = &v14[v15];
      v25 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( v25 > v8 )
          goto LABEL_64;
        v17 = v14[2];
        v16 = v14[1] & 0xF;
        v18 = v14[3];
      }
      else
      {
        if ( v25 > v8 )
          goto LABEL_64;
        v16 = v14[2] & 0xF;
        v26 = v15;
        if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
          v26 = (unsigned __int8)v14[7] + 8;
        v8 = v14 + 13;
        v12 = (unsigned __int64)&v14[v26];
        if ( (unsigned __int64)(v14 + 13) <= v12 )
          v17 = v14[12];
        if ( (unsigned __int64)(v14 + 14) <= v12 )
          v18 = *v8;
      }
      LOBYTE(v12) = 1;
LABEL_64:
      if ( (_BYTE)v12 )
      {
        LOBYTE(v5) = v17;
        v27 = v18;
LABEL_67:
        sub_140052E64((_DWORD)v8, v12, (unsigned int)&v35, a2, *(_DWORD *)(a2 + 48), v24, v13, v16, v5, v27, a2);
        goto LABEL_71;
      }
LABEL_66:
      v16 = 0;
      v27 = 0;
      goto LABEL_67;
    }
LABEL_71:
    IofCompleteRequest((PIRP)a2, 0);
    return v6;
  }
}
