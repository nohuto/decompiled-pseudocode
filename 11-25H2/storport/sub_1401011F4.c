/*
 * XREFs of sub_1401011F4 @ 0x1401011F4
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140104250 @ 0x140104250 (sub_140104250.c)
 *     sub_1401057BC @ 0x1401057BC (sub_1401057BC.c)
 *     sub_140105B74 @ 0x140105B74 (sub_140105B74.c)
 *     sub_140105F38 @ 0x140105F38 (sub_140105F38.c)
 *     sub_140106CC4 @ 0x140106CC4 (sub_140106CC4.c)
 *     sub_14010708C @ 0x14010708C (sub_14010708C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1401011F4(__int64 a1, __int64 a2, _BYTE *a3)
{
  int *v4; // rdx
  int v5; // ebx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  char v20; // r13
  unsigned int v21; // r14d
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  __int64 v36; // rcx
  int v37; // [rsp+20h] [rbp-98h]
  char v38; // [rsp+60h] [rbp-58h]
  unsigned int v39; // [rsp+64h] [rbp-54h]
  GUID v40; // [rsp+68h] [rbp-50h] BYREF

  *a3 = 1;
  v4 = *(int **)(a2 + 24);
  v5 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 8u )
  {
    v7 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741585;
    if ( v7 )
      goto LABEL_66;
    v40 = 0LL;
    IoGetActivityIdIrp(a2, &v40);
    v9 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v9 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_66;
        v8 = *(unsigned int *)(a2 + 48);
        v11 = &stru_140148B18;
        v37 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_66;
        v12 = *(_QWORD *)(v9 + 8);
        v13 = 0;
        v14 = 0LL;
        v38 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        if ( *(_BYTE *)(v12 + 2) != 40 )
        {
          v25 = *(_BYTE *)(v12 + 72);
          v14 = *(_BYTE **)(v12 + 32);
          v15 = *(_BYTE *)(v12 + 11);
          v13 = *(_BYTE *)(v12 + 4);
          if ( !*(_BYTE *)(v12 + 2) )
            goto LABEL_42;
          goto LABEL_66;
        }
        v19 = 0LL;
        v20 = 0;
        if ( *(_DWORD *)(v12 + 20) )
          goto LABEL_66;
        v21 = 0;
        v39 = *(_DWORD *)(v12 + 56);
        if ( !v39 )
          goto LABEL_39;
        while ( 1 )
        {
          v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v22 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v8 < (unsigned int)v22 )
            {
              v23 = (unsigned int)v8;
              v24 = *(_DWORD *)(v8 + v12) - 64;
              if ( v24 )
              {
                v8 = (unsigned int)(v24 - 1);
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    v8 = v23 + 40;
                    if ( v23 + 40 <= v22 )
                    {
                      if ( *(_DWORD *)(v23 + v12 + 12) )
                        v19 = (char *)(v23 + v12 + 32);
                      v14 = *(_BYTE **)(v23 + v12 + 24);
                      goto LABEL_38;
                    }
                  }
                }
                else
                {
                  v8 = v23 + 56;
                  if ( v23 + 56 <= v22 )
                  {
                    v20 = 1;
                    if ( *(_BYTE *)(v23 + v12 + 10) )
                      v19 = (char *)(v23 + v12 + 24);
                    v13 = *(_BYTE *)(v23 + v12 + 8);
                    v14 = *(_BYTE **)(v23 + v12 + 16);
                    v15 = *(_BYTE *)(v23 + v12 + 9);
                  }
                }
              }
              else
              {
                v8 = v23 + 40;
                if ( v23 + 40 <= v22 )
                {
                  if ( *(_BYTE *)(v23 + v12 + 10) )
                    v19 = (char *)(v23 + v12 + 24);
                  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_38:
                  v15 = *(_BYTE *)(v23 + v12 + 9);
                  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_39:
                  if ( v19 )
                  {
                    v25 = *v19;
                    v17 = 0;
LABEL_42:
                    LOBYTE(v8) = v25 - 8;
                    if ( (v8 & 0x5D) == 0 )
                    {
                      v26 = *(_BYTE *)(v12 + 3);
                      if ( v26 == 1 || !v14 || !v15 )
                        goto LABEL_61;
                      LOBYTE(v12) = 0;
                      v8 = (unsigned __int64)&v14[v15];
                      v27 = v14 + 8;
                      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v27 <= v8 )
                        {
                          LOBYTE(v12) = 1;
                          v17 = v14[2];
                          v16 = v14[1] & 0xF;
                          v18 = v14[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v27 <= v8 )
                        {
                          v16 = v14[2] & 0xF;
                          v28 = v15;
                          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
                            v28 = (unsigned __int8)v14[7] + 8;
                          v8 = (unsigned __int64)(v14 + 13);
                          v12 = (unsigned __int64)&v14[v28];
                          if ( (unsigned __int64)(v14 + 13) > v12 )
                            v38 = 0;
                          else
                            v38 = v14[12];
                          if ( (unsigned __int64)(v14 + 14) <= v12 )
                            v18 = *(_BYTE *)v8;
                          LOBYTE(v12) = 1;
                        }
                        v17 = v38;
                      }
                      if ( (_BYTE)v12 )
                      {
                        LOBYTE(v5) = v17;
                        v29 = v18;
                      }
                      else
                      {
LABEL_61:
                        v16 = 0;
                        v29 = 0;
                      }
                      sub_140052E64(v8, v12, &v40, a2, *(_DWORD *)(a2 + 48), v26, v13, v16, v5, v29, a2);
                    }
                  }
LABEL_66:
                  IofCompleteRequest((PIRP)a2, 0);
                  return -1073741585;
                }
              }
              if ( v20 )
                goto LABEL_39;
            }
          }
          if ( ++v21 >= v39 )
            goto LABEL_39;
        }
      case 0x1B:
        if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v10 = *(int **)(a2 + 56);
            if ( v10 )
              v5 = *v10;
            sub_140056AB0(v8, v9, &v40, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_66;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_66;
        v11 = &stru_140149FE8;
        v37 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_66;
    }
    sub_140052F3C(v8, v11, &v40, a2, v37);
    goto LABEL_66;
  }
  v31 = *v4;
  if ( !v31 )
    return sub_140106CC4(a1, a2);
  v32 = v31 - 1;
  if ( v32 )
  {
    v33 = v32 - 1;
    if ( !v33 )
      return sub_140105F38(a1, a2);
    v34 = v33 - 1;
    if ( !v34 )
      return sub_140105B74(a1, a2);
    v35 = v34 - 3;
    if ( !v35 )
      return sub_140104250(a1, a2);
    if ( v35 == 21 )
      return sub_14010708C(a1, a2);
  }
  else if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1728LL) == 1 )
  {
    return sub_1401057BC(a1, a2);
  }
  if ( byte_140168DAA )
  {
    v40 = 0LL;
    IoGetActivityIdIrp(a2, &v40);
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v36, &stru_140148B18, &v40, a2, *(_DWORD *)(a2 + 48));
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
}
