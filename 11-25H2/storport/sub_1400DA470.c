/*
 * XREFs of sub_1400DA470 @ 0x1400DA470
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C9524 @ 0x1400C9524 (sub_1400C9524.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400DA470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 *v4; // rsi
  int v5; // ebx
  int v7; // ebp
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // si
  char v18; // r13
  char v19; // r12
  char *v20; // r11
  unsigned int v21; // r14d
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  char v30; // al
  __int64 v32; // [rsp+20h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-90h]
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  char v36; // [rsp+60h] [rbp-58h]
  unsigned int v37; // [rsp+64h] [rbp-54h]
  GUID v38; // [rsp+68h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a3 + 16);
  v4 = (__int64 *)(a2 + 184);
  v5 = 0;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*v4 + 3) |= 1u;
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 < 0 )
  {
    *(_DWORD *)(v3 + 1012) = 1;
    if ( (byte_1401694FA & 1) != 0 )
      sub_1400C9524(
        v3 + 1032,
        &stru_14014A490,
        a3,
        *(_DWORD *)(v3 + 56),
        v3 + 1032,
        *(const wchar_t **)(v3 + 1016),
        v7,
        1);
    v8 = byte_140168DAA == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v7;
    if ( v8 )
      goto LABEL_69;
    v38 = 0LL;
    IoGetActivityIdIrp(a2, &v38);
    v10 = *v4;
    if ( *(_BYTE *)*v4 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_69;
      v12 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_68;
    }
    if ( *(_BYTE *)*v4 != 15 )
    {
      if ( *(_BYTE *)*v4 != 27 )
        goto LABEL_69;
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v11 = *(int **)(a2 + 56);
          if ( v11 )
            v5 = *v11;
          LODWORD(v33) = *(_DWORD *)(a2 + 48);
          LODWORD(v32) = v5;
          sub_140056AB0(v9, v10, &v38, a2, v32, v33);
        }
        goto LABEL_69;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_69;
      v12 = &stru_140149FE8;
LABEL_68:
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      sub_140052F3C(v9, v12, &v38, a2, v32);
      goto LABEL_69;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_69;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( *(_BYTE *)(v13 + 2) == 40 )
    {
      v20 = 0LL;
      v36 = 0;
      if ( *(_DWORD *)(v13 + 20) )
        goto LABEL_69;
      v21 = 0;
      v37 = *(_DWORD *)(v13 + 56);
      if ( !v37 )
        goto LABEL_44;
      while ( 1 )
      {
        v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v22 = *(unsigned int *)(v13 + 16);
          if ( (unsigned int)v9 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v9;
            v24 = *(_DWORD *)(v9 + v13) - 64;
            if ( v24 )
            {
              v9 = (unsigned int)(v24 - 1);
              if ( (_DWORD)v9 )
              {
                if ( (_DWORD)v9 == 1 )
                {
                  v9 = v23 + 40;
                  if ( v23 + 40 <= v22 )
                  {
                    if ( *(_DWORD *)(v23 + v13 + 12) )
                      v20 = (char *)(v23 + v13 + 32);
                    v15 = *(_BYTE **)(v23 + v13 + 24);
                    goto LABEL_43;
                  }
                }
              }
              else
              {
                v9 = v23 + 56;
                if ( v23 + 56 <= v22 )
                {
                  v36 = 1;
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE *)(v23 + v13 + 8);
                  v15 = *(_BYTE **)(v23 + v13 + 16);
                  v16 = *(_BYTE *)(v23 + v13 + 9);
                }
              }
            }
            else
            {
              v9 = v23 + 40;
              if ( v23 + 40 <= v22 )
              {
                if ( *(_BYTE *)(v23 + v13 + 10) )
                  v20 = (char *)(v23 + v13 + 24);
                v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_43:
                v16 = *(_BYTE *)(v23 + v13 + 9);
                v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_44:
                if ( v20 )
                {
                  v25 = *v20;
                  goto LABEL_47;
                }
                goto LABEL_69;
              }
            }
            if ( v36 )
              goto LABEL_44;
          }
        }
        if ( ++v21 >= v37 )
          goto LABEL_44;
      }
    }
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_69;
LABEL_47:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) != 0 )
    {
LABEL_69:
      IofCompleteRequest((PIRP)a2, 0);
      return 3221225494LL;
    }
    if ( *(_BYTE *)(v13 + 3) == 1 || !v15 || !v16 )
      goto LABEL_64;
    v26 = 0;
    v9 = (unsigned __int64)&v15[v16];
    v27 = v15 + 8;
    if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v27 > v9 )
        goto LABEL_62;
      v18 = v15[2];
      v17 = v15[1] & 0xF;
      v19 = v15[3];
    }
    else
    {
      if ( (unsigned __int64)v27 > v9 )
        goto LABEL_62;
      v17 = v15[2] & 0xF;
      v28 = v16;
      if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
        v28 = (unsigned __int8)v15[7] + 8;
      v9 = (unsigned __int64)(v15 + 13);
      v29 = (unsigned __int64)&v15[v28];
      if ( (unsigned __int64)(v15 + 13) <= v29 )
        v18 = v15[12];
      if ( (unsigned __int64)(v15 + 14) <= v29 )
        v19 = *(_BYTE *)v9;
    }
    v26 = 1;
LABEL_62:
    if ( v26 )
    {
      LOBYTE(v5) = v18;
      v30 = v19;
LABEL_65:
      LOBYTE(v35) = v17;
      LOBYTE(v34) = v14;
      LOBYTE(v33) = *(_BYTE *)(v13 + 3);
      LODWORD(v32) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v9, v13, &v38, a2, v32, v33, v34, v35, v5, v30, a2);
      goto LABEL_69;
    }
LABEL_64:
    v17 = 0;
    v30 = 0;
    goto LABEL_65;
  }
  IoQueueWorkItem(*(PIO_WORKITEM *)a3, sub_1400DA840, HyperCriticalWorkQueue, (PVOID)a3);
  return 3221225494LL;
}
