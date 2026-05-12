/*
 * XREFs of sub_1400DA840 @ 0x1400DA840
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C93A0 @ 0x1400C93A0 (sub_1400C93A0.c)
 *     sub_1400C9524 @ 0x1400C9524 (sub_1400C9524.c)
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400DA840(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  PVOID DeviceExtension; // rsi
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r12
  char *v22; // r11
  char v23; // r13
  unsigned int v24; // r14d
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  __int64 v33; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h]
  char v37; // [rsp+60h] [rbp-58h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (__int64)Context[1];
  sub_1400CA35C((__int64)DeviceExtension);
  v5 = 0;
  if ( (unsigned int)sub_1400C93A0() )
    v6 = sub_1400D629C((__int64)DeviceExtension, v4);
  else
    v6 = sub_1400D5D7C((__int64)DeviceExtension, v4);
  v7 = v6;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 19));
  if ( v7 < 0 && (byte_1401694FA & 1) != 0 )
    sub_1400C9524(
      v8,
      &stru_14014A490,
      v9,
      *((_DWORD *)DeviceExtension + 14),
      (__int64)DeviceExtension + 1032,
      *((const wchar_t **)DeviceExtension + 127),
      v7,
      *((_DWORD *)DeviceExtension + 253));
  IoUninitializeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = v7;
  if ( v10 )
    goto LABEL_71;
  v39 = 0LL;
  IoGetActivityIdIrp(v4, &v39);
  v12 = *(_QWORD *)(v4 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_71;
    v14 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(v4 + 56);
        if ( v13 )
          v5 = *v13;
        LODWORD(v34) = *(_DWORD *)(v4 + 48);
        LODWORD(v33) = v5;
        sub_140056AB0(v11, v12, &v39, v4, v33, v34);
      }
      goto LABEL_71;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_71;
    v14 = &stru_140149FE8;
LABEL_70:
    LODWORD(v33) = *(_DWORD *)(v4 + 48);
    sub_140052F3C(v11, v14, &v39, v4, v33);
    goto LABEL_71;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_71;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v37 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_47;
    goto LABEL_71;
  }
  v22 = 0LL;
  v23 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_71;
  v24 = 0;
  v38 = *(_DWORD *)(v15 + 56);
  if ( !v38 )
    goto LABEL_44;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v24 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v25 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v25 )
        break;
    }
LABEL_38:
    if ( ++v24 >= v38 )
      goto LABEL_44;
  }
  v26 = (unsigned int)v11;
  v27 = *(_DWORD *)(v11 + v15) - 64;
  if ( v27 )
  {
    v11 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v15 + 12) )
            v22 = (char *)(v26 + v15 + 32);
          v17 = *(_BYTE **)(v26 + v15 + 24);
          goto LABEL_43;
        }
      }
    }
    else
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v23 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v22 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    goto LABEL_37;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_37:
    if ( v23 )
      goto LABEL_44;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v22 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_43:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_44:
  if ( v22 )
  {
    v28 = *v22;
    v20 = 0;
LABEL_47:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v15 + 3);
      if ( v29 == 1 || !v17 || !v18 )
        goto LABEL_66;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v30 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v31 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v31 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v31];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v37 = 0;
          else
            v37 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v37;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v5) = v20;
        v32 = v21;
      }
      else
      {
LABEL_66:
        v19 = 0;
        v32 = 0;
      }
      LOBYTE(v36) = v19;
      LOBYTE(v35) = v16;
      LOBYTE(v34) = v29;
      LODWORD(v33) = *(_DWORD *)(v4 + 48);
      sub_140052E64(v11, v15, &v39, v4, v33, v34, v35, v36, v5, v32, v4);
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)v4, 0);
}
