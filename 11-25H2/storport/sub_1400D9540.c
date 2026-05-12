/*
 * XREFs of sub_1400D9540 @ 0x1400D9540
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C6238 @ 0x1400C6238 (sub_1400C6238.c)
 *     sub_1400DB064 @ 0x1400DB064 (sub_1400DB064.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400D9540(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rbx
  void *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  bool v14; // zf
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  bool v22; // zf
  int v23; // ecx
  unsigned int v24; // edx
  char *v25; // r14
  __int16 v26; // bp
  __int64 v27; // r15
  _WORD *v28; // rax
  unsigned __int16 v29; // bp
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned __int8 v33; // al
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // al
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int8 v40; // al
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int8 v43; // al
  unsigned __int16 *v44; // r9
  __int64 v45; // rdx
  unsigned __int16 v46; // bx
  char *v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rax
  bool v51; // zf
  const EVENT_DESCRIPTOR *v52; // rdx
  __int64 v53; // rdx
  char v54; // bp
  _BYTE *v55; // r9
  unsigned __int8 v56; // r10
  char v57; // r11
  char v58; // r13
  char v59; // r12
  char *v60; // rbx
  unsigned int v61; // r15d
  unsigned __int64 v62; // r14
  __int64 v63; // r8
  int v64; // ecx
  char v65; // cl
  char v66; // r8
  _BYTE *v67; // rax
  char *v68; // r12
  unsigned int v69; // eax
  char v70; // al
  __int64 v71; // [rsp+20h] [rbp-A8h]
  char v72; // [rsp+60h] [rbp-68h]
  unsigned int SystemArgument2a; // [rsp+68h] [rbp-60h]
  GUID v75; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 4224LL);
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  *(_QWORD *)&v75.Data1 = v7;
  *(_QWORD *)(v8 + 56) = 0LL;
  if ( !a3 )
  {
    v9 = -1073741823;
    goto LABEL_28;
  }
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v10 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v10 >> 9) & 7) != 0 )
  {
    if ( ((v10 >> 9) & 7) != 1 )
    {
      if ( ((v10 >> 9) & 7) != 2 )
        goto LABEL_122;
      v11 = v10 >> 1;
      switch ( (unsigned __int8)v11 )
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
      v12 = (unsigned __int8)v11 - 133;
      if ( (unsigned __int8)v11 == 133 )
        goto LABEL_122;
      goto LABEL_113;
    }
    v13 = v10 >> 1;
    if ( (unsigned __int8)v13 > 0x80u )
    {
      if ( (unsigned __int8)v13 == 129 )
        goto LABEL_27;
      v17 = (unsigned __int8)v13 - 130;
      if ( (unsigned __int8)v13 != 130 )
        goto LABEL_102;
    }
    else
    {
      if ( (unsigned __int8)v13 == 128 )
        goto LABEL_27;
      if ( (unsigned __int8)v13 <= 0x11u )
      {
        if ( (unsigned __int8)v13 != 17 )
        {
          if ( (unsigned __int8)v13 <= 9u )
          {
            if ( (unsigned __int8)v13 == 9
              || !(_BYTE)v13
              || (unsigned __int8)v13 == 1
              || (unsigned __int8)v13 == 2
              || (unsigned __int8)v13 == 3 )
            {
              goto LABEL_27;
            }
            v15 = (unsigned __int8)v13 - 5;
            v14 = (unsigned __int8)v13 == 5;
LABEL_24:
            if ( v14 )
              goto LABEL_27;
            v16 = v15 - 1;
            if ( !v16 )
              goto LABEL_27;
            v17 = v16 - 1;
            if ( !v17 )
              goto LABEL_27;
LABEL_102:
            v51 = v17 == 1;
LABEL_121:
            if ( !v51 )
              goto LABEL_122;
LABEL_27:
            v9 = -1073741808;
            goto LABEL_28;
          }
          if ( (unsigned __int8)v13 == 10 )
            goto LABEL_27;
          if ( (unsigned __int8)v13 != 11 )
          {
            if ( (unsigned __int8)v13 == 12
              || (unsigned __int8)v13 == 13
              || (unsigned __int8)v13 == 14
              || (unsigned __int8)v13 == 15 )
            {
              goto LABEL_27;
            }
            if ( (unsigned __int8)v13 != 16 )
              goto LABEL_122;
          }
        }
        v9 = -2147483210;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v13 <= 0x1Au )
      {
        if ( (unsigned __int8)v13 != 26 && (unsigned __int8)v13 != 18 && (unsigned __int8)v13 != 19 )
        {
          if ( (unsigned __int8)v13 == 20 )
          {
            v9 = -1073741800;
            goto LABEL_28;
          }
          if ( (unsigned __int8)v13 == 21 )
            goto LABEL_122;
          if ( (unsigned __int8)v13 != 22 )
          {
            v23 = (unsigned __int8)v13 - 24;
            v22 = (unsigned __int8)v13 == 24;
LABEL_60:
            if ( !v22 && v23 != 1 )
              goto LABEL_122;
          }
        }
LABEL_62:
        v9 = -1073741436;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v13 == 27 )
      {
        v9 = -1073741637;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v13 == 28 )
        goto LABEL_27;
      if ( (unsigned __int8)v13 != 30 )
      {
        v15 = (unsigned __int8)v13 - 31;
        v14 = (unsigned __int8)v13 == 31;
        goto LABEL_24;
      }
    }
LABEL_114:
    v9 = -1073741790;
    goto LABEL_28;
  }
  v24 = v10 >> 1;
  if ( (unsigned __int8)v24 > 0x80u )
  {
    if ( (unsigned __int8)v24 == 129 )
      goto LABEL_27;
    v17 = (unsigned __int8)v24 - 130;
    if ( (unsigned __int8)v24 == 130 )
    {
      v9 = -1073741661;
      goto LABEL_28;
    }
    goto LABEL_102;
  }
  if ( (unsigned __int8)v24 == 128 )
    goto LABEL_27;
  if ( (unsigned __int8)v24 > 0xEu )
  {
    if ( (unsigned __int8)v24 <= 0x16u )
    {
      if ( (unsigned __int8)v24 == 22
        || (unsigned __int8)v24 == 15
        || (unsigned __int8)v24 == 16
        || (unsigned __int8)v24 == 17
        || (unsigned __int8)v24 == 18
        || (unsigned __int8)v24 == 19 )
      {
        goto LABEL_27;
      }
      v12 = (unsigned __int8)v24 - 20;
      if ( (unsigned __int8)v24 != 20 )
      {
LABEL_113:
        if ( v12 == 1 )
          goto LABEL_114;
LABEL_122:
        v9 = -1073741435;
        goto LABEL_28;
      }
      goto LABEL_62;
    }
    if ( (unsigned __int8)v24 == 24 )
      goto LABEL_27;
    if ( (unsigned __int8)v24 == 25 || (unsigned __int8)v24 == 26 )
    {
      v9 = -1073741643;
      goto LABEL_28;
    }
    if ( (unsigned __int8)v24 != 27 )
    {
      if ( (unsigned __int8)v24 == 28 )
        goto LABEL_122;
      v51 = (unsigned __int8)v24 == 30;
      goto LABEL_121;
    }
LABEL_104:
    v9 = -1073741248;
    goto LABEL_28;
  }
  if ( (unsigned __int8)v24 == 14 )
    goto LABEL_27;
  if ( (unsigned __int8)v24 > 7u )
  {
    if ( (unsigned __int8)v24 != 8 && (unsigned __int8)v24 != 9 && (unsigned __int8)v24 != 10 )
    {
      if ( (unsigned __int8)v24 == 11 )
        goto LABEL_27;
      v17 = (unsigned __int8)v24 - 12;
      if ( (unsigned __int8)v24 == 12 )
      {
        v9 = -1073740758;
        goto LABEL_28;
      }
      goto LABEL_102;
    }
    goto LABEL_104;
  }
  if ( (unsigned __int8)v24 == 7 )
    goto LABEL_104;
  if ( (_BYTE)v24 )
  {
    if ( (unsigned __int8)v24 == 1 || (unsigned __int8)v24 == 2 )
      goto LABEL_27;
    if ( (unsigned __int8)v24 == 3 || (unsigned __int8)v24 == 4 )
      goto LABEL_122;
    v23 = (unsigned __int8)v24 - 5;
    v22 = (unsigned __int8)v24 == 5;
    goto LABEL_60;
  }
  v25 = *(char **)(v8 + 24);
  v26 = 8;
  *(_DWORD *)(v8 + 48) = 0;
  v27 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  v28 = (_WORD *)(v27 + 214);
  do
  {
    if ( *v28 )
      break;
    --v28;
    --v26;
  }
  while ( v26 );
  v29 = v26 + 1;
  v30 = 16 * v29 + 24;
  memset_0(v25, 0, v30);
  *((_DWORD *)v25 + 1) = v30;
  v5 = a1;
  *(_DWORD *)v25 = 40;
  *((_WORD *)v25 + 6) = v29;
  a3 = *(_QWORD *)(a1 + 592);
  if ( a3 )
  {
    v33 = sub_1400DB064(*(unsigned __int16 *)(a3 + 268), v31, a3, v32);
    *((_WORD *)v25 + 4) = v33;
    v36 = sub_1400DB064(*(unsigned __int16 *)(v34 + 266), v33, v34, v35);
    *((_WORD *)v25 + 5) = v36;
    v37 = (unsigned __int16)(*(unsigned __int8 *)(v27 + 1) | (*(unsigned __int8 *)(v27 + 2) << 8));
    *((_WORD *)v25 + 12) = 0;
    v40 = sub_1400DB064(v37, v36, v38, v39);
    *((_WORD *)v25 + 13) = v40;
    v43 = sub_1400DB064(*(unsigned __int16 *)(a1 + 56), v40, v41, v42);
    v44 = (unsigned __int16 *)(v27 + 200);
    v45 = v43;
    *((_WORD *)v25 + 14) = v43;
    v46 = 1;
    *((_WORD *)v25 + 15) = 0x8000;
    if ( v29 > 1u )
    {
      v47 = v25 + 42;
      do
      {
        *((_WORD *)v47 - 1) = v46;
        LOWORD(v45) = (unsigned __int8)sub_1400DB064(*v44, v45, v47, v44);
        v44 = (unsigned __int16 *)(v48 + 2);
        ++v46;
        *(_WORD *)v49 = v45;
        *(_DWORD *)(v49 + 2) = -2147450880;
        v47 = (char *)(v49 + 16);
      }
      while ( v46 < v29 );
    }
    v50 = sub_1400143E0(64LL, 24LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
    v6 = (void *)v50;
    if ( v50 )
    {
      *(_WORD *)(v50 + 1) = 0;
      *(_BYTE *)v50 = v46 - 1;
      *(_QWORD *)(v50 + 8) = v25;
      *(_QWORD *)(v50 + 16) = a2;
      *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~2u;
      v7 = *(_QWORD *)&v75.Data1;
      *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)a2 + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)a2 + 4184LL) = v8;
      *(_QWORD *)(*(_QWORD *)a2 + 4192LL) = sub_1400D8D30;
      *(_QWORD *)(*(_QWORD *)a2 + 4200LL) = a2;
      *(_QWORD *)(*(_QWORD *)a2 + 4208LL) = v50;
      *(_QWORD *)(*(_QWORD *)a2 + 4224LL) = v7;
      sub_1400C6238(*(_QWORD *)a2 + 4096LL, *(_BYTE *)(v50 + 1), *(_BYTE *)(v50 + 2));
      v5 = a1;
      v9 = sub_140122670((PVOID)a1);
      if ( v9 >= 0 )
        return;
      goto LABEL_28;
    }
    v5 = a1;
    v9 = -1073741670;
  }
  else
  {
    v9 = -1073741823;
  }
  v7 = *(_QWORD *)&v75.Data1;
LABEL_28:
  *(_DWORD *)(v8 + 48) = v9;
  if ( v6 )
    ExFreePoolWithTag(v6, 0x52436152u);
  v18 = *(_QWORD *)(*(_QWORD *)a2 + 4160LL);
  if ( v18 )
    sub_1400F5FEC(v5, *(_DWORD *)(*(_QWORD *)a2 + 4248LL), a3, v18, *(_QWORD *)(*(_QWORD *)a2 + 4168LL));
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  sub_140122C20(v5, a2);
  if ( v7 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 152));
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(v8 + 141) = -84;
  if ( v14 )
    goto LABEL_180;
  v75 = 0LL;
  IoGetActivityIdIrp(v8, &v75);
  v20 = *(_QWORD *)(v8 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_180;
    v52 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_179;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_180;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v21 = *(int **)(v8 + 56);
        if ( v21 )
          v3 = *v21;
        LODWORD(v71) = v3;
        sub_140056AB0(v19, v20, &v75, v8, v71, *(_DWORD *)(v8 + 48));
      }
      goto LABEL_180;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_180;
    v52 = &stru_140149FE8;
LABEL_179:
    LODWORD(v71) = *(_DWORD *)(v8 + 48);
    sub_140052F3C(v19, v52, &v75, v8, v71);
    goto LABEL_180;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_180;
  v53 = *(_QWORD *)(v20 + 8);
  v54 = 0;
  v55 = 0LL;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  if ( *(_BYTE *)(v53 + 2) == 40 )
  {
    v60 = 0LL;
    v72 = 0;
    if ( *(_DWORD *)(v53 + 20) )
      goto LABEL_180;
    v61 = 0;
    SystemArgument2a = *(_DWORD *)(v53 + 56);
    if ( !SystemArgument2a )
      goto LABEL_154;
    while ( 1 )
    {
      v19 = *(unsigned int *)(v53 + 4LL * v61 + 120);
      if ( (unsigned int)v19 >= 0x80 )
      {
        v62 = *(unsigned int *)(v53 + 16);
        if ( (unsigned int)v19 < (unsigned int)v62 )
        {
          v63 = (unsigned int)v19;
          v64 = *(_DWORD *)(v19 + v53) - 64;
          if ( v64 )
          {
            v19 = (unsigned int)(v64 - 1);
            if ( (_DWORD)v19 )
            {
              if ( (_DWORD)v19 == 1 )
              {
                v19 = v63 + 40;
                if ( v63 + 40 <= v62 )
                {
                  if ( *(_DWORD *)(v63 + v53 + 12) )
                    v60 = (char *)(v63 + v53 + 32);
                  v55 = *(_BYTE **)(v63 + v53 + 24);
                  goto LABEL_153;
                }
              }
            }
            else
            {
              v19 = v63 + 56;
              if ( v63 + 56 <= v62 )
              {
                v72 = 1;
                if ( *(_BYTE *)(v63 + v53 + 10) )
                  v60 = (char *)(v63 + v53 + 24);
                v54 = *(_BYTE *)(v63 + v53 + 8);
                v55 = *(_BYTE **)(v63 + v53 + 16);
                v56 = *(_BYTE *)(v63 + v53 + 9);
              }
            }
          }
          else
          {
            v19 = v63 + 40;
            if ( v63 + 40 <= v62 )
            {
              if ( *(_BYTE *)(v63 + v53 + 10) )
                v60 = (char *)(v63 + v53 + 24);
              v55 = *(_BYTE **)(v63 + v53 + 16);
LABEL_153:
              v56 = *(_BYTE *)(v63 + v53 + 9);
              v54 = *(_BYTE *)(v63 + v53 + 8);
LABEL_154:
              if ( v60 )
              {
                v65 = *v60;
                goto LABEL_157;
              }
              goto LABEL_180;
            }
          }
          if ( v72 )
            goto LABEL_154;
        }
      }
      if ( ++v61 >= SystemArgument2a )
        goto LABEL_154;
    }
  }
  v65 = *(_BYTE *)(v53 + 72);
  v55 = *(_BYTE **)(v53 + 32);
  v56 = *(_BYTE *)(v53 + 11);
  v54 = *(_BYTE *)(v53 + 4);
  if ( *(_BYTE *)(v53 + 2) )
    goto LABEL_180;
LABEL_157:
  LOBYTE(v19) = v65 - 8;
  if ( (v19 & 0x5D) == 0 )
  {
    v66 = *(_BYTE *)(v53 + 3);
    if ( v66 == 1 || !v55 || !v56 )
      goto LABEL_175;
    LOBYTE(v53) = 0;
    v19 = (unsigned __int64)&v55[v56];
    v67 = v55 + 8;
    if ( (unsigned __int8)((*v55 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v67 > v19 )
        goto LABEL_173;
      v58 = v55[2];
      v57 = v55[1] & 0xF;
      v59 = v55[3];
    }
    else
    {
      if ( (unsigned __int64)v67 > v19 )
        goto LABEL_173;
      v68 = v55 + 13;
      v57 = v55[2] & 0xF;
      v69 = v56;
      if ( (unsigned int)(unsigned __int8)v55[7] + 8 <= v56 )
        v69 = (unsigned __int8)v55[7] + 8;
      v19 = (unsigned __int64)&v55[v69];
      if ( (unsigned __int64)v68 <= v19 )
        v58 = v55[12];
      if ( (unsigned __int64)(v55 + 14) > v19 )
        v59 = 0;
      else
        v59 = *v68;
    }
    LOBYTE(v53) = 1;
LABEL_173:
    if ( (_BYTE)v53 )
    {
      LOBYTE(v3) = v58;
      v70 = v59;
LABEL_176:
      LODWORD(v71) = *(_DWORD *)(v8 + 48);
      sub_140052E64(v19, v53, &v75, v8, v71, v66, v54, v57, v3, v70, v8);
      goto LABEL_180;
    }
LABEL_175:
    v57 = 0;
    v70 = 0;
    goto LABEL_176;
  }
LABEL_180:
  IofCompleteRequest((PIRP)v8, 1);
}
