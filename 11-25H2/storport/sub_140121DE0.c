/*
 * XREFs of sub_140121DE0 @ 0x140121DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140121DE0(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  int v4; // ebx
  _QWORD *v5; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r13d
  void *v9; // rdx
  __int64 v10; // r10
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r11d
  _QWORD *v15; // r8
  _QWORD *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbp
  unsigned int v19; // eax
  int v20; // edx
  int v21; // esi
  void (__fastcall *v22)(PVOID, _QWORD, _QWORD); // rax
  __int64 v23; // rdi
  bool v24; // zf
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  unsigned __int64 v29; // rdx
  char v30; // r14
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char v33; // r11
  char v34; // r13
  char v35; // r12
  char *v36; // rsi
  unsigned int v37; // r15d
  unsigned __int64 v38; // rbp
  __int64 v39; // r8
  int v40; // ecx
  char v41; // cl
  char v42; // r8
  _BYTE *v43; // rax
  unsigned int v44; // eax
  char v45; // al
  char v46; // [rsp+60h] [rbp-58h]
  unsigned int v47; // [rsp+64h] [rbp-54h]
  unsigned int v48; // [rsp+64h] [rbp-54h]
  __int64 v50; // [rsp+70h] [rbp-48h]
  PVOID SystemArgument2[2]; // [rsp+78h] [rbp-40h] BYREF

  v4 = 0;
  v5 = a4;
  v7 = 0;
  v8 = 0;
  v9 = *(void **)(*a4 + 4232LL);
  *(_QWORD *)(*a4 + 4176LL) = a3;
  v10 = *a4;
  SystemArgument2[0] = v9;
  v11 = (_QWORD *)(v10 + 4120);
  v47 = *(_DWORD *)(v10 + 4248);
  v12 = a4[1];
  v13 = 0;
  v50 = v12;
  v14 = v10 != 0 ? 513 : 2;
  if ( *a3 )
  {
    v15 = (_QWORD *)(v10 + 4128);
    v16 = (_QWORD *)(v10 + 4120);
    do
    {
      v17 = *(_QWORD *)&a3[6 * v8 + 4];
      v18 = a3[6 * v8 + 6];
      if ( v18 + v17 % 4096 > 4096 )
      {
        if ( (_DWORD)v18 )
        {
          while ( 1 )
          {
            *v11 = v17;
            v20 = v17 & 0xFFF;
            v7 += 4096 - v20;
            if ( (unsigned int)(v20 + v18) <= 0x1000 )
              break;
            LODWORD(v18) = v20 + v18 - 4096;
            v17 += (unsigned int)(4096 - v20);
            if ( v11 == v16 )
            {
              v11 = (_QWORD *)(v10 + 4128);
            }
            else if ( v11 == v15 )
            {
              if ( v10 )
                v11 = (_QWORD *)(v10 + 8);
            }
            else
            {
              ++v11;
            }
            if ( ++v13 >= v14 )
              goto LABEL_27;
            v19 = v47;
            if ( v7 >= v47 )
              goto LABEL_27;
            if ( !(_DWORD)v18 )
              goto LABEL_6;
          }
        }
      }
      else
      {
        *v11 = v17;
        v7 += a3[6 * v8 + 6];
      }
      v19 = v47;
LABEL_6:
      if ( v11 == v16 )
      {
        v11 = (_QWORD *)(v10 + 4128);
      }
      else if ( v11 == v15 )
      {
        if ( v10 )
          v11 = (_QWORD *)(v10 + 8);
      }
      else
      {
        ++v11;
      }
      if ( ++v13 >= v14 )
        break;
      if ( v7 >= v19 )
        break;
      ++v8;
    }
    while ( v8 < *a3 );
LABEL_27:
    v5 = a4;
    if ( v13 > 2 )
    {
      *(_QWORD *)v10 = *v15;
      *v15 = v50;
    }
  }
  v21 = sub_140122670(SystemArgument2[0]);
  if ( v21 < 0 )
  {
    v22 = *(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*v5 + 4192LL);
    if ( v22 )
      v22(SystemArgument2[0], *(_QWORD *)(*v5 + 4200LL), 0LL);
    v23 = *(_QWORD *)(*v5 + 4184LL);
    if ( v23 )
    {
      v24 = byte_140168DAA == 0;
      *(_BYTE *)(v23 + 141) = -84;
      *(_DWORD *)(v23 + 48) = v21;
      if ( v24 )
        goto LABEL_95;
      *(_OWORD *)SystemArgument2 = 0LL;
      IoGetActivityIdIrp(v23, SystemArgument2);
      v26 = *(_QWORD *)(v23 + 184);
      if ( *(_BYTE *)v26 == 14 )
      {
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_95;
        v28 = &stru_140148B18;
        goto LABEL_94;
      }
      if ( *(_BYTE *)v26 != 15 )
      {
        if ( *(_BYTE *)v26 != 27 )
          goto LABEL_95;
        if ( *(_BYTE *)(v26 + 1) == 7 && !*(_DWORD *)(v26 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v27 = *(int **)(v23 + 56);
            if ( v27 )
              v4 = *v27;
            sub_140056AB0(v25, v26, (const GUID *)SystemArgument2, v23, v4, *(_DWORD *)(v23 + 48));
          }
          goto LABEL_95;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_95;
        v28 = &stru_140149FE8;
LABEL_94:
        sub_140052F3C(v25, v28, (const GUID *)SystemArgument2, v23, *(_DWORD *)(v23 + 48));
        goto LABEL_95;
      }
      if ( byte_1401694F1 >= 0 )
        goto LABEL_95;
      v29 = *(_QWORD *)(v26 + 8);
      v30 = 0;
      v31 = 0LL;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      if ( *(_BYTE *)(v29 + 2) == 40 )
      {
        v36 = 0LL;
        v46 = 0;
        if ( *(_DWORD *)(v29 + 20) )
          goto LABEL_95;
        v37 = 0;
        v48 = *(_DWORD *)(v29 + 56);
        if ( !v48 )
          goto LABEL_70;
        while ( 1 )
        {
          v25 = *(unsigned int *)(v29 + 4LL * v37 + 120);
          if ( (unsigned int)v25 >= 0x80 )
          {
            v38 = *(unsigned int *)(v29 + 16);
            if ( (unsigned int)v25 < (unsigned int)v38 )
            {
              v39 = (unsigned int)v25;
              v40 = *(_DWORD *)(v25 + v29) - 64;
              if ( v40 )
              {
                v25 = (unsigned int)(v40 - 1);
                if ( (_DWORD)v25 )
                {
                  if ( (_DWORD)v25 == 1 )
                  {
                    v25 = v39 + 40;
                    if ( v39 + 40 <= v38 )
                    {
                      if ( *(_DWORD *)(v39 + v29 + 12) )
                        v36 = (char *)(v39 + v29 + 32);
                      v31 = *(_BYTE **)(v39 + v29 + 24);
                      goto LABEL_69;
                    }
                  }
                }
                else
                {
                  v25 = v39 + 56;
                  if ( v39 + 56 <= v38 )
                  {
                    v46 = 1;
                    if ( *(_BYTE *)(v39 + v29 + 10) )
                      v36 = (char *)(v39 + v29 + 24);
                    v30 = *(_BYTE *)(v39 + v29 + 8);
                    v31 = *(_BYTE **)(v39 + v29 + 16);
                    v32 = *(_BYTE *)(v39 + v29 + 9);
                  }
                }
              }
              else
              {
                v25 = v39 + 40;
                if ( v39 + 40 <= v38 )
                {
                  if ( *(_BYTE *)(v39 + v29 + 10) )
                    v36 = (char *)(v39 + v29 + 24);
                  v31 = *(_BYTE **)(v39 + v29 + 16);
LABEL_69:
                  v32 = *(_BYTE *)(v39 + v29 + 9);
                  v30 = *(_BYTE *)(v39 + v29 + 8);
LABEL_70:
                  if ( v36 )
                  {
                    v41 = *v36;
                    goto LABEL_73;
                  }
                  goto LABEL_95;
                }
              }
              if ( v46 )
                goto LABEL_70;
            }
          }
          if ( ++v37 >= v48 )
            goto LABEL_70;
        }
      }
      v41 = *(_BYTE *)(v29 + 72);
      v31 = *(_BYTE **)(v29 + 32);
      v32 = *(_BYTE *)(v29 + 11);
      v30 = *(_BYTE *)(v29 + 4);
      if ( *(_BYTE *)(v29 + 2) )
        goto LABEL_95;
LABEL_73:
      LOBYTE(v25) = v41 - 8;
      if ( (v25 & 0x5D) == 0 )
      {
        v42 = *(_BYTE *)(v29 + 3);
        if ( v42 == 1 || !v31 || !v32 )
          goto LABEL_90;
        LOBYTE(v29) = 0;
        v25 = (unsigned __int64)&v31[v32];
        v43 = v31 + 8;
        if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
        {
          if ( (unsigned __int64)v43 > v25 )
            goto LABEL_88;
          v34 = v31[2];
          v33 = v31[1] & 0xF;
          v35 = v31[3];
        }
        else
        {
          if ( (unsigned __int64)v43 > v25 )
            goto LABEL_88;
          v33 = v31[2] & 0xF;
          v44 = v32;
          if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
            v44 = (unsigned __int8)v31[7] + 8;
          v25 = (unsigned __int64)(v31 + 13);
          v29 = (unsigned __int64)&v31[v44];
          if ( (unsigned __int64)(v31 + 13) <= v29 )
            v34 = v31[12];
          if ( (unsigned __int64)(v31 + 14) <= v29 )
            v35 = *(_BYTE *)v25;
        }
        LOBYTE(v29) = 1;
LABEL_88:
        if ( (_BYTE)v29 )
        {
          LOBYTE(v4) = v34;
          v45 = v35;
LABEL_91:
          sub_140052E64(
            v25,
            v29,
            (const GUID *)SystemArgument2,
            v23,
            *(_DWORD *)(v23 + 48),
            v42,
            v30,
            v33,
            v4,
            v45,
            v23);
          goto LABEL_95;
        }
LABEL_90:
        v33 = 0;
        v45 = 0;
        goto LABEL_91;
      }
LABEL_95:
      IofCompleteRequest((PIRP)v23, 0);
    }
  }
}
