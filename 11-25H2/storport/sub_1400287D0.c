/*
 * XREFs of sub_1400287D0 @ 0x1400287D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140028AF8 @ 0x140028AF8 (sub_140028AF8.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400563D0 @ 0x1400563D0 (sub_1400563D0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400287D0(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  char *DeviceExtension; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // edi
  int v7; // edx
  char v8; // al
  bool v9; // zf
  __int64 v10; // rbx
  char *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  void *v16; // rdx
  int *v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // rax
  char v20; // si
  unsigned int v21; // eax
  char v22; // r12
  char v23; // r11
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // r15
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char *v31; // r11
  unsigned int *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rbp
  char v35; // cl
  char v36; // r8
  char v37; // [rsp+60h] [rbp-68h]
  char v38; // [rsp+61h] [rbp-67h]
  int v39; // [rsp+64h] [rbp-64h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  __int128 v41; // [rsp+70h] [rbp-58h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v4 = MEMORY[0xFFFFF78000000014];
  v5 = *(_QWORD *)(*(_QWORD *)(Context[1] + 184LL) + 8LL);
  LOBYTE(v6) = 0;
  v7 = sub_140028AF8(DeviceExtension + 720, *(unsigned int *)(v5 + 20));
  if ( v7 != 258 )
  {
    v25 = *(unsigned int *)(v5 + 20);
    if ( (_DWORD)v25 )
    {
      v26 = (MEMORY[0xFFFFF78000000014] - v4) / 10000;
      if ( v26 >= 1000 * v25 )
        v27 = 1LL;
      else
        v27 = 1000 * v25 - v26;
    }
    else
    {
      v27 = 0LL;
    }
    v7 = sub_1400563D0(DeviceExtension, v27);
  }
  v8 = 9;
  if ( v7 != 258 )
    v8 = 1;
  *(_BYTE *)(v5 + 3) = v8;
  v9 = byte_140168DAA == 0;
  v10 = Context[1];
  *(_BYTE *)(v10 + 141) = -84;
  *(_DWORD *)(v10 + 48) = v7;
  if ( v9 )
    goto LABEL_8;
  v41 = 0LL;
  IoGetActivityIdIrp(v10, &v41);
  v12 = *(_QWORD *)(v10 + 184);
  switch ( *(_BYTE *)v12 )
  {
    case 0xE:
      if ( (byte_1401694F2 & 8) == 0 )
        break;
      v16 = &unk_140148B18;
LABEL_14:
      sub_140052F3C(v11, v16, &v41, v10, *(_DWORD *)(v10 + 48));
      break;
    case 0xF:
      if ( byte_1401694F1 >= 0 )
        break;
      v18 = *(_QWORD *)(v12 + 8);
      v28 = 0;
      v29 = 0LL;
      v37 = 0;
      v30 = 0;
      v20 = 0;
      v23 = 0;
      v22 = 0;
      if ( *(_BYTE *)(v18 + 2) != 40 )
      {
        v35 = *(_BYTE *)(v18 + 72);
        v29 = *(_BYTE **)(v18 + 32);
        v30 = *(_BYTE *)(v18 + 11);
        v28 = *(_BYTE *)(v18 + 4);
        if ( !*(_BYTE *)(v18 + 2) )
          goto LABEL_80;
        break;
      }
      v31 = 0LL;
      v38 = 0;
      if ( *(_DWORD *)(v18 + 20) )
        break;
      LODWORD(v11) = 0;
      v39 = 0;
      v40 = *(_DWORD *)(v18 + 56);
      if ( !v40 )
        goto LABEL_77;
      v32 = (unsigned int *)(v18 + 120);
      while ( 1 )
      {
        v33 = *v32;
        if ( (unsigned int)v33 >= 0x80 )
        {
          v34 = *(unsigned int *)(v18 + 16);
          if ( (unsigned int)v33 < (unsigned int)v34 )
          {
            if ( *(_DWORD *)(v33 + v18) == 64 )
            {
              LODWORD(v11) = v33 + 40;
              if ( v33 + 40 <= v34 )
              {
                if ( *(_BYTE *)(v33 + v18 + 10) )
                  v31 = (char *)(v33 + v18 + 24);
                v29 = *(_BYTE **)(v33 + v18 + 16);
LABEL_76:
                v30 = *(_BYTE *)(v33 + v18 + 9);
                v28 = *(_BYTE *)(v33 + v18 + 8);
LABEL_77:
                if ( v31 )
                {
                  v35 = *v31;
                  v23 = 0;
LABEL_80:
                  LOBYTE(v11) = v35 - 8;
                  if ( ((unsigned __int8)v11 & 0x5D) == 0 )
                  {
                    v36 = *(_BYTE *)(v18 + 3);
                    if ( v36 == 1 || !v29 || !v30 )
                      goto LABEL_37;
                    LOBYTE(v18) = 0;
                    v11 = &v29[v30];
                    v19 = v29 + 8;
                    if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
                    {
                      if ( v19 <= v11 )
                      {
                        LOBYTE(v18) = 1;
                        v23 = v29[2];
                        v20 = v29[1] & 0xF;
                        v22 = v29[3];
                      }
                    }
                    else
                    {
                      if ( v19 <= v11 )
                      {
                        v20 = v29[2] & 0xF;
                        v21 = v30;
                        if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
                          v21 = (unsigned __int8)v29[7] + 8;
                        v11 = v29 + 13;
                        v18 = (unsigned __int64)&v29[v21];
                        if ( (unsigned __int64)(v29 + 13) > v18 )
                          v37 = 0;
                        else
                          v37 = v29[12];
                        if ( (unsigned __int64)(v29 + 14) <= v18 )
                          v22 = *v11;
                        LOBYTE(v18) = 1;
                      }
                      v23 = v37;
                    }
                    if ( (_BYTE)v18 )
                    {
                      LOBYTE(v6) = v23;
                      v24 = v22;
                    }
                    else
                    {
LABEL_37:
                      v20 = 0;
                      v24 = 0;
                    }
                    sub_140052E64(
                      (_DWORD)v11,
                      v18,
                      (unsigned int)&v41,
                      v10,
                      *(_DWORD *)(v10 + 48),
                      v36,
                      v28,
                      v20,
                      v6,
                      v24,
                      v10);
                  }
                }
                goto LABEL_8;
              }
            }
            else
            {
              LODWORD(v11) = *(_DWORD *)(v33 + v18) - 65;
              if ( *(_DWORD *)(v33 + v18) == 65 )
              {
                LODWORD(v11) = v33 + 56;
                if ( v33 + 56 <= v34 )
                {
                  v38 = 1;
                  if ( *(_BYTE *)(v33 + v18 + 10) )
                    v31 = (char *)(v33 + v18 + 24);
                  v28 = *(_BYTE *)(v33 + v18 + 8);
                  v29 = *(_BYTE **)(v33 + v18 + 16);
                  v30 = *(_BYTE *)(v33 + v18 + 9);
                }
              }
              else if ( *(_DWORD *)(v33 + v18) == 66 )
              {
                LODWORD(v11) = v33 + 40;
                if ( v33 + 40 <= v34 )
                {
                  if ( *(_DWORD *)(v33 + v18 + 12) )
                    v31 = (char *)(v33 + v18 + 32);
                  v29 = *(_BYTE **)(v33 + v18 + 24);
                  goto LABEL_76;
                }
              }
            }
            if ( v38 )
              goto LABEL_77;
            LODWORD(v11) = v39;
          }
        }
        LODWORD(v11) = (_DWORD)v11 + 1;
        ++v32;
        v39 = (int)v11;
        if ( (unsigned int)v11 >= v40 )
          goto LABEL_77;
      }
    case 0x1B:
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v17 = *(int **)(v10 + 56);
          if ( v17 )
            v6 = *v17;
          sub_140056AB0((_DWORD)v11, v12, (unsigned int)&v41, v10, v6, *(_DWORD *)(v10 + 48));
        }
        break;
      }
      if ( (byte_1401694F2 & 0x20) != 0 )
      {
        v16 = &unk_140149FE8;
        goto LABEL_14;
      }
      break;
  }
LABEL_8:
  IofCompleteRequest((PIRP)v10, 0);
  v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v14 = *(_DWORD *)(v13 + *((_QWORD *)DeviceExtension + 5));
  while ( (v14 & 1) == 0 )
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *((_QWORD *)DeviceExtension + 5)), v14 - 2, v14);
    if ( v15 == v14 )
      return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
}
