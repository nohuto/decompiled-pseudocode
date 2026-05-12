/*
 * XREFs of sub_1400D8D30 @ 0x1400D8D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C6238 @ 0x1400C6238 (sub_1400C6238.c)
 *     sub_1400DB064 @ 0x1400DB064 (sub_1400DB064.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400D8D30(_QWORD *SystemArgument2, __int64 a2, unsigned __int16 *a3)
{
  int v3; // ebx
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int8 *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // edx
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  bool v25; // zf
  int v26; // ecx
  unsigned int v27; // edx
  unsigned __int8 v28; // al
  char *v29; // r9
  char v30; // al
  unsigned __int8 v31; // al
  bool v32; // zf
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  char v35; // r14
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r11
  char v39; // r13
  char v40; // r12
  char *v41; // rdi
  unsigned int v42; // r15d
  unsigned __int64 v43; // rbp
  __int64 v44; // r8
  int v45; // ecx
  char v46; // cl
  char v47; // r8
  _BYTE *v48; // rax
  unsigned int v49; // eax
  unsigned __int64 v50; // r8
  char v51; // al
  __int64 v52; // [rsp+20h] [rbp-98h]
  char v53; // [rsp+60h] [rbp-58h]
  unsigned int v54; // [rsp+64h] [rbp-54h]
  GUID v55; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  v9 = *(unsigned __int8 **)(*(_QWORD *)a2 + 4208LL);
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 4224LL);
  *(_QWORD *)(v8 + 56) = 0LL;
  if ( a3 )
  {
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) = a3[7];
    v12 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
    if ( ((v12 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 2 )
          goto LABEL_122;
        v13 = v12 >> 1;
        switch ( (unsigned __int8)v13 )
        {
          case 0x80u:
            goto LABEL_122;
          case 0x81u:
            goto LABEL_122;
          case 0x82u:
            goto LABEL_122;
          case 0x83u:
            goto LABEL_122;
          case 0x84u:
            goto LABEL_122;
        }
        v14 = (unsigned __int8)v13 - 133;
        if ( (unsigned __int8)v13 == 133 )
          goto LABEL_122;
        goto LABEL_113;
      }
      v15 = v12 >> 1;
      if ( (unsigned __int8)v15 <= 0x80u )
      {
        if ( (unsigned __int8)v15 == 128 )
          goto LABEL_28;
        if ( (unsigned __int8)v15 <= 0x11u )
        {
          if ( (unsigned __int8)v15 == 17 )
            goto LABEL_53;
          if ( (unsigned __int8)v15 <= 9u )
          {
            if ( (unsigned __int8)v15 == 9
              || !(_BYTE)v15
              || (unsigned __int8)v15 == 1
              || (unsigned __int8)v15 == 2
              || (unsigned __int8)v15 == 3 )
            {
              goto LABEL_28;
            }
            v17 = (unsigned __int8)v15 - 5;
            v16 = (unsigned __int8)v15 == 5;
LABEL_25:
            if ( v16 )
              goto LABEL_28;
            v18 = v17 - 1;
            if ( !v18 )
              goto LABEL_28;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_28;
            goto LABEL_102;
          }
          if ( (unsigned __int8)v15 != 10 )
          {
            if ( (unsigned __int8)v15 != 11 )
            {
              if ( (unsigned __int8)v15 == 12
                || (unsigned __int8)v15 == 13
                || (unsigned __int8)v15 == 14
                || (unsigned __int8)v15 == 15 )
              {
                goto LABEL_28;
              }
              if ( (unsigned __int8)v15 != 16 )
                goto LABEL_122;
            }
LABEL_53:
            v20 = -2147483210;
            goto LABEL_29;
          }
LABEL_28:
          v20 = -1073741808;
          goto LABEL_29;
        }
        if ( (unsigned __int8)v15 <= 0x1Au )
        {
          switch ( (unsigned __int8)v15 )
          {
            case 0x1Au:
            case 0x12u:
            case 0x13u:
              goto LABEL_64;
            case 0x14u:
              v20 = -1073741800;
              goto LABEL_29;
            case 0x15u:
              goto LABEL_122;
            case 0x16u:
              goto LABEL_64;
          }
          v26 = (unsigned __int8)v15 - 24;
          v25 = (unsigned __int8)v15 == 24;
          goto LABEL_62;
        }
        if ( (unsigned __int8)v15 == 27 )
        {
          v20 = -1073741637;
          goto LABEL_29;
        }
        if ( (unsigned __int8)v15 == 28 )
          goto LABEL_28;
        if ( (unsigned __int8)v15 != 30 )
        {
          v17 = (unsigned __int8)v15 - 31;
          v16 = (unsigned __int8)v15 == 31;
          goto LABEL_25;
        }
LABEL_114:
        v20 = -1073741790;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v15 == 129 )
        goto LABEL_28;
      v19 = (unsigned __int8)v15 - 130;
      if ( (unsigned __int8)v15 == 130 )
        goto LABEL_114;
LABEL_102:
      v32 = v19 == 1;
LABEL_121:
      if ( !v32 )
        goto LABEL_122;
      goto LABEL_28;
    }
    v27 = v12 >> 1;
    if ( (unsigned __int8)v27 > 0x80u )
    {
      if ( (unsigned __int8)v27 == 129 )
        goto LABEL_28;
      v19 = (unsigned __int8)v27 - 130;
      if ( (unsigned __int8)v27 == 130 )
      {
        v20 = -1073741661;
        goto LABEL_29;
      }
      goto LABEL_102;
    }
    if ( (unsigned __int8)v27 == 128 )
      goto LABEL_28;
    if ( (unsigned __int8)v27 > 0xEu )
    {
      if ( (unsigned __int8)v27 <= 0x16u )
      {
        if ( (unsigned __int8)v27 == 22
          || (unsigned __int8)v27 == 15
          || (unsigned __int8)v27 == 16
          || (unsigned __int8)v27 == 17
          || (unsigned __int8)v27 == 18
          || (unsigned __int8)v27 == 19 )
        {
          goto LABEL_28;
        }
        v14 = (unsigned __int8)v27 - 20;
        if ( (unsigned __int8)v27 != 20 )
        {
LABEL_113:
          if ( v14 == 1 )
            goto LABEL_114;
LABEL_122:
          v20 = -1073741435;
          goto LABEL_29;
        }
LABEL_64:
        v20 = -1073741436;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v27 == 24 )
        goto LABEL_28;
      if ( (unsigned __int8)v27 == 25 || (unsigned __int8)v27 == 26 )
      {
        v20 = -1073741643;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v27 != 27 )
      {
        if ( (unsigned __int8)v27 == 28 )
          goto LABEL_122;
        v32 = (unsigned __int8)v27 == 30;
        goto LABEL_121;
      }
    }
    else
    {
      if ( (unsigned __int8)v27 == 14 )
        goto LABEL_28;
      if ( (unsigned __int8)v27 > 7u )
      {
        if ( (unsigned __int8)v27 != 8 && (unsigned __int8)v27 != 9 && (unsigned __int8)v27 != 10 )
        {
          if ( (unsigned __int8)v27 == 11 )
            goto LABEL_28;
          v19 = (unsigned __int8)v27 - 12;
          if ( (unsigned __int8)v27 == 12 )
          {
            v20 = -1073740758;
            goto LABEL_29;
          }
          goto LABEL_102;
        }
      }
      else if ( (unsigned __int8)v27 != 7 )
      {
        if ( !(_BYTE)v27 )
        {
          v28 = sub_1400DB064(*a3, *((_QWORD *)v9 + 1), 2LL * v9[1], v9 + 2);
          if ( *v29 )
          {
            *(_WORD *)(v7 + 8LL * (_QWORD)a3 + 30) = v28;
            *(_BYTE *)(v7 + 8LL * (_QWORD)a3 + 33) = 1;
          }
          else
          {
            *(_WORD *)(v7 + 8LL * (_QWORD)a3 + 28) = v28;
            *(_BYTE *)(v7 + 8LL * (_QWORD)a3 + 32) = 1;
            *(_BYTE *)(v7 + 8LL * (_QWORD)a3 + 34) = 1;
          }
          if ( !*v29 && (v9[1] || *(_WORD *)(SystemArgument2[74] + 266LL)) )
          {
            v30 = 1;
          }
          else
          {
            v31 = v9[1];
            if ( v31 >= *v9 )
              goto LABEL_3;
            v9[1] = v31 + 1;
            v30 = 0;
          }
          *v29 = v30;
          *(_QWORD *)(*(_QWORD *)a2 + 4192LL) = sub_1400D8D30;
          *(_QWORD *)(*(_QWORD *)a2 + 4200LL) = a2;
          *(_QWORD *)(*(_QWORD *)a2 + 4208LL) = v9;
          sub_1400C6238(*(_QWORD *)a2 + 4096LL, v9[1], v9[2]);
          v20 = sub_140122670(SystemArgument2);
          if ( v20 >= 0 )
            return;
LABEL_29:
          *(_DWORD *)(v8 + 48) = v20;
          goto LABEL_30;
        }
        if ( (unsigned __int8)v27 == 1 || (unsigned __int8)v27 == 2 )
          goto LABEL_28;
        if ( (unsigned __int8)v27 == 3 || (unsigned __int8)v27 == 4 )
          goto LABEL_122;
        v26 = (unsigned __int8)v27 - 5;
        v25 = (unsigned __int8)v27 == 5;
LABEL_62:
        if ( !v25 && v26 != 1 )
          goto LABEL_122;
        goto LABEL_64;
      }
    }
    v20 = -1073741248;
    goto LABEL_29;
  }
  *(_DWORD *)(v8 + 48) = -1073741823;
LABEL_3:
  v11 = 16LL * *(unsigned __int16 *)(v7 + 12);
  *(_DWORD *)(v8 + 48) = v6;
  *(_QWORD *)(v8 + 56) = v11 + 24;
LABEL_30:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52436152u);
  v21 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  if ( v21 )
    sub_1400F5FEC(
      (_DWORD)SystemArgument2,
      *(_DWORD *)(*(_QWORD *)a2 + 4248LL),
      (_DWORD)a3,
      v21,
      *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  sub_140122C20(SystemArgument2, a2);
  if ( v10 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 152));
  v16 = byte_140168DAA == 0;
  *(_BYTE *)(v8 + 141) = -84;
  if ( v16 )
    goto LABEL_179;
  v55 = 0LL;
  IoGetActivityIdIrp(v8, &v55);
  v23 = *(_QWORD *)(v8 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_179;
    v33 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_178;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_179;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v24 = *(int **)(v8 + 56);
        if ( v24 )
          v3 = *v24;
        LODWORD(v52) = v3;
        sub_140056AB0(v22, v23, &v55, v8, v52, *(_DWORD *)(v8 + 48));
      }
      goto LABEL_179;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_179;
    v33 = &stru_140149FE8;
LABEL_178:
    LODWORD(v52) = *(_DWORD *)(v8 + 48);
    sub_140052F3C(v22, v33, &v55, v8, v52);
    goto LABEL_179;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_179;
  v34 = *(_QWORD *)(v23 + 8);
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( *(_BYTE *)(v34 + 2) == 40 )
  {
    v41 = 0LL;
    v53 = 0;
    if ( *(_DWORD *)(v34 + 20) )
      goto LABEL_179;
    v42 = 0;
    v54 = *(_DWORD *)(v34 + 56);
    if ( !v54 )
      goto LABEL_154;
    while ( 1 )
    {
      v22 = *(unsigned int *)(v34 + 4LL * v42 + 120);
      if ( (unsigned int)v22 >= 0x80 )
      {
        v43 = *(unsigned int *)(v34 + 16);
        if ( (unsigned int)v22 < (unsigned int)v43 )
        {
          v44 = (unsigned int)v22;
          v45 = *(_DWORD *)(v22 + v34) - 64;
          if ( v45 )
          {
            v22 = (unsigned int)(v45 - 1);
            if ( (_DWORD)v22 )
            {
              if ( (_DWORD)v22 == 1 )
              {
                v22 = v44 + 40;
                if ( v44 + 40 <= v43 )
                {
                  if ( *(_DWORD *)(v44 + v34 + 12) )
                    v41 = (char *)(v44 + v34 + 32);
                  v36 = *(_BYTE **)(v44 + v34 + 24);
                  goto LABEL_153;
                }
              }
            }
            else
            {
              v22 = v44 + 56;
              if ( v44 + 56 <= v43 )
              {
                v53 = 1;
                if ( *(_BYTE *)(v44 + v34 + 10) )
                  v41 = (char *)(v44 + v34 + 24);
                v35 = *(_BYTE *)(v44 + v34 + 8);
                v36 = *(_BYTE **)(v44 + v34 + 16);
                v37 = *(_BYTE *)(v44 + v34 + 9);
              }
            }
          }
          else
          {
            v22 = v44 + 40;
            if ( v44 + 40 <= v43 )
            {
              if ( *(_BYTE *)(v44 + v34 + 10) )
                v41 = (char *)(v44 + v34 + 24);
              v36 = *(_BYTE **)(v44 + v34 + 16);
LABEL_153:
              v37 = *(_BYTE *)(v44 + v34 + 9);
              v35 = *(_BYTE *)(v44 + v34 + 8);
LABEL_154:
              if ( v41 )
              {
                v46 = *v41;
                goto LABEL_157;
              }
              goto LABEL_179;
            }
          }
          if ( v53 )
            goto LABEL_154;
        }
      }
      if ( ++v42 >= v54 )
        goto LABEL_154;
    }
  }
  v46 = *(_BYTE *)(v34 + 72);
  v36 = *(_BYTE **)(v34 + 32);
  v37 = *(_BYTE *)(v34 + 11);
  v35 = *(_BYTE *)(v34 + 4);
  if ( *(_BYTE *)(v34 + 2) )
    goto LABEL_179;
LABEL_157:
  LOBYTE(v22) = v46 - 8;
  if ( (v22 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v34 + 3) == 1 || !v36 || !v37 )
      goto LABEL_174;
    v47 = 0;
    v22 = (unsigned __int64)&v36[v37];
    v48 = v36 + 8;
    if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v48 > v22 )
        goto LABEL_172;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      if ( (unsigned __int64)v48 > v22 )
        goto LABEL_172;
      v38 = v36[2] & 0xF;
      v49 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v49 = (unsigned __int8)v36[7] + 8;
      v22 = (unsigned __int64)(v36 + 13);
      v50 = (unsigned __int64)&v36[v49];
      if ( (unsigned __int64)(v36 + 13) <= v50 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) <= v50 )
        v40 = *(_BYTE *)v22;
    }
    v47 = 1;
LABEL_172:
    if ( v47 )
    {
      LOBYTE(v3) = v39;
      v51 = v40;
LABEL_175:
      LODWORD(v52) = *(_DWORD *)(v8 + 48);
      sub_140052E64(v22, v34, &v55, v8, v52, *(_BYTE *)(v34 + 3), v35, v38, v3, v51, v8);
      goto LABEL_179;
    }
LABEL_174:
    v38 = 0;
    v51 = 0;
    goto LABEL_175;
  }
LABEL_179:
  IofCompleteRequest((PIRP)v8, 1);
}
