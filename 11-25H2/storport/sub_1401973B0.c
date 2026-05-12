/*
 * XREFs of sub_1401973B0 @ 0x1401973B0
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140195E90 @ 0x140195E90 (sub_140195E90.c)
 *     sub_140195ED0 @ 0x140195ED0 (sub_140195ED0.c)
 *     sub_140196914 @ 0x140196914 (sub_140196914.c)
 *     sub_140196E08 @ 0x140196E08 (sub_140196E08.c)
 *     sub_1401971CC @ 0x1401971CC (sub_1401971CC.c)
 */

__int64 __fastcall sub_1401973B0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v5; // rsi
  int v6; // r15d
  _BYTE *v7; // rsi
  __int64 v8; // rsi
  int v9; // eax
  char *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r10
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  PVOID v19; // r12
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned __int64 v25; // rdx
  char v26; // r13
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char v29; // si
  char v30; // r14
  char v31; // r11
  char *v32; // r11
  unsigned int v33; // r12d
  unsigned __int64 v34; // r14
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // r8
  _BYTE *v39; // rax
  unsigned int v40; // eax
  char v41; // al
  __int64 v43; // [rsp+20h] [rbp-49h]
  __int64 v44; // [rsp+28h] [rbp-41h]
  __int64 v45; // [rsp+30h] [rbp-39h]
  char v46; // [rsp+60h] [rbp-9h] BYREF
  char v47; // [rsp+61h] [rbp-8h] BYREF
  char v48; // [rsp+62h] [rbp-7h]
  char *v49; // [rsp+68h] [rbp-1h] BYREF
  PVOID v50; // [rsp+70h] [rbp+7h] BYREF
  GUID v51; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v50 = 0LL;
  *(_QWORD *)&v51.Data1 = 0LL;
  v49 = 0LL;
  v46 = 0;
  v47 = 0;
  DbgPrintEx(0x59u, 2u, "\n*\n* NvmeNativeDumpStorageGetDumpInfoIoctl\n*\n\n");
  v5 = (__int64 *)(a2 + 184);
  if ( !dword_140168DF8 )
  {
    v7 = (_BYTE *)*v5;
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( *(_BYTE *)(a2 + 64) )
    {
      v6 = -1073741790;
LABEL_5:
      v5 = (__int64 *)(a2 + 184);
      goto LABEL_30;
    }
    if ( *((_DWORD *)v7 + 4) < 0x48u )
    {
      v6 = -1073741789;
      goto LABEL_5;
    }
    v8 = *((_QWORD *)v7 + 4);
    if ( *(_DWORD *)v8 != 72 )
    {
      v6 = -1073741811;
      goto LABEL_5;
    }
    v6 = sub_140196E08(a1, &v51);
    if ( v6 >= 0 )
    {
      v9 = sub_140196914(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL), a1, v8, &v50, &v46, &v49, &v47);
      v10 = v49;
      v6 = v9;
      if ( v9 < 0 )
      {
        v19 = v50;
      }
      else
      {
        if ( !v47 )
        {
          v11 = *(_QWORD **)(v8 + 64);
          v12 = v49 + 8;
          if ( *v11 != v8 + 56 )
            goto LABEL_19;
          *v12 = v8 + 56;
          *((_QWORD *)v10 + 2) = v11;
          *v11 = v12;
          *(_QWORD *)(v8 + 64) = v12;
        }
        v13 = *(_QWORD **)&v51.Data1;
        v14 = v50;
        v49 = 0LL;
        *(_QWORD *)(*(_QWORD *)&v51.Data1 + 64LL) = v10;
        v10 = 0LL;
        if ( !v46 )
        {
          v15 = *(_QWORD **)(v8 + 48);
          v16 = v14 + 1;
          if ( *v15 != v8 + 40 )
            goto LABEL_19;
          *v16 = v8 + 40;
          v14[2] = v15;
          *v15 = v16;
          *(_QWORD *)(v8 + 48) = v16;
        }
        v13[7] = v14;
        v17 = *(_QWORD **)(v8 + 32);
        v18 = v13 + 1;
        v19 = 0LL;
        v50 = 0LL;
        if ( *v17 != v8 + 24 )
LABEL_19:
          __fastfail(3u);
        *v18 = v8 + 24;
        v13[2] = v17;
        *v17 = v18;
        *(_QWORD *)(v8 + 32) = v18;
        *(_QWORD *)(v8 + 16) = v13;
        *(_QWORD *)&v51.Data1 = 0LL;
      }
      if ( !v47 && v10 )
        sub_140195ED0((PVOID *)&v49);
      if ( !v46 && v19 )
        sub_1401971CC(&v50);
    }
    v5 = (__int64 *)(a2 + 184);
    if ( *(_QWORD *)&v51.Data1 )
      sub_140195E90((PVOID *)&v51);
    goto LABEL_30;
  }
  v6 = -1073741637;
LABEL_30:
  v20 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v20 )
    goto LABEL_96;
  v51 = 0LL;
  IoGetActivityIdIrp(a2, &v51);
  v22 = *v5;
  if ( *(_BYTE *)*v5 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_96;
    v24 = &stru_140148B18;
    goto LABEL_95;
  }
  if ( *(_BYTE *)*v5 != 15 )
  {
    if ( *(_BYTE *)*v5 != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v2 = *v23;
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        LODWORD(v43) = v2;
        sub_140056AB0(v21, v22, &v51, a2, v43, v44);
      }
      goto LABEL_96;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_96;
    v24 = &stru_140149FE8;
LABEL_95:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v21, v24, &v51, a2, v43);
    goto LABEL_96;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_96;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0;
  v27 = 0LL;
  v46 = 0;
  v28 = 0;
  v47 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v25 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v25 + 72);
    v27 = *(_BYTE **)(v25 + 32);
    v28 = *(_BYTE *)(v25 + 11);
    v26 = *(_BYTE *)(v25 + 4);
    if ( !*(_BYTE *)(v25 + 2) )
      goto LABEL_71;
    goto LABEL_96;
  }
  v32 = 0LL;
  v48 = 0;
  if ( *(_DWORD *)(v25 + 20) )
    goto LABEL_96;
  v33 = 0;
  LODWORD(v49) = *(_DWORD *)(v25 + 56);
  if ( !(_DWORD)v49 )
    goto LABEL_68;
  while ( 1 )
  {
    v21 = *(unsigned int *)(v25 + 4LL * v33 + 120);
    if ( (unsigned int)v21 >= 0x80 )
    {
      v34 = *(unsigned int *)(v25 + 16);
      if ( (unsigned int)v21 < (unsigned int)v34 )
        break;
    }
LABEL_61:
    if ( ++v33 >= (unsigned int)v49 )
      goto LABEL_67;
  }
  v35 = (unsigned int)v21;
  v36 = *(_DWORD *)(v21 + v25) - 64;
  if ( v36 )
  {
    v21 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)v21 == 1 )
      {
        v21 = v35 + 40;
        if ( v35 + 40 <= v34 )
        {
          if ( *(_DWORD *)(v35 + v25 + 12) )
            v32 = (char *)(v35 + v25 + 32);
          v27 = *(_BYTE **)(v35 + v25 + 24);
          goto LABEL_66;
        }
      }
    }
    else
    {
      v21 = v35 + 56;
      if ( v35 + 56 <= v34 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v35 + v25 + 10) )
          v32 = (char *)(v35 + v25 + 24);
        v26 = *(_BYTE *)(v35 + v25 + 8);
        v27 = *(_BYTE **)(v35 + v25 + 16);
        v28 = *(_BYTE *)(v35 + v25 + 9);
      }
    }
    goto LABEL_60;
  }
  v21 = v35 + 40;
  if ( v35 + 40 > v34 )
  {
LABEL_60:
    if ( v48 )
      goto LABEL_67;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v35 + v25 + 10) )
    v32 = (char *)(v35 + v25 + 24);
  v27 = *(_BYTE **)(v35 + v25 + 16);
LABEL_66:
  v28 = *(_BYTE *)(v35 + v25 + 9);
  v26 = *(_BYTE *)(v35 + v25 + 8);
LABEL_67:
  v30 = 0;
LABEL_68:
  if ( v32 )
  {
    v37 = *v32;
    v31 = 0;
LABEL_71:
    LOBYTE(v21) = v37 - 8;
    if ( (v21 & 0x5D) == 0 )
    {
      v38 = *(_BYTE *)(v25 + 3);
      if ( v38 == 1 || !v27 || !v28 )
        goto LABEL_91;
      LOBYTE(v25) = 0;
      v21 = (unsigned __int64)&v27[v28];
      v39 = v27 + 8;
      if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          LOBYTE(v25) = 1;
          v30 = v27[2];
          v29 = v27[1] & 0xF;
          v31 = v27[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          v29 = v27[2] & 0xF;
          v40 = v28;
          if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
            v40 = (unsigned __int8)v27[7] + 8;
          v21 = (unsigned __int64)(v27 + 13);
          v25 = (unsigned __int64)&v27[v40];
          if ( (unsigned __int64)(v27 + 13) > v25 )
            v46 = 0;
          else
            v46 = v27[12];
          if ( (unsigned __int64)(v27 + 14) > v25 )
            v47 = 0;
          else
            v47 = *(_BYTE *)v21;
          LOBYTE(v25) = 1;
        }
        v31 = v47;
        v30 = v46;
      }
      if ( (_BYTE)v25 )
      {
        LOBYTE(v2) = v30;
        v41 = v31;
      }
      else
      {
LABEL_91:
        v29 = 0;
        v41 = 0;
      }
      LOBYTE(v45) = v26;
      LOBYTE(v44) = v38;
      LODWORD(v43) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v21, v25, &v51, a2, v43, v44, v45, v29, v2, v41, a2);
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
