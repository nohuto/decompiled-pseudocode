/*
 * XREFs of sub_14005D618 @ 0x14005D618
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140077B6C @ 0x140077B6C (sub_140077B6C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401A9488 @ 0x1401A9488 (sub_1401A9488.c)
 *     sub_1401A94C8 @ 0x1401A94C8 (sub_1401A94C8.c)
 */

__int64 __fastcall sub_14005D618(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  int v9; // esi
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  char v18; // r15
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bp
  char v22; // r11
  char v23; // r12
  char *v24; // r11
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  char v33; // al
  char v35; // [rsp+60h] [rbp-68h]
  char v36; // [rsp+61h] [rbp-67h]
  int v37; // [rsp+64h] [rbp-64h]
  unsigned int v38; // [rsp+68h] [rbp-60h]
  GUID v39; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v6 = *(void **)(v2 + 8);
  if ( v6 == &unk_14014A500 || RtlCompareMemory(v6, &unk_14014A500, 0x10uLL) == 16 )
  {
    v14 = sub_1401A9488(v6, a2, *(_QWORD *)(a1 + 32));
  }
  else
  {
    v7 = *(void **)(v2 + 8);
    if ( v7 != &unk_14014AE58 && RtlCompareMemory(v7, &unk_14014AE58, 0x10uLL) != 16 )
    {
      v8 = *(void **)(v2 + 8);
      if ( v8 == &unk_14014C588 || RtlCompareMemory(v8, &unk_14014C588, 0x10uLL) == 16 )
      {
        v9 = sub_140077B6C(a1, a2);
        if ( v9 >= 0 )
          goto LABEL_8;
      }
LABEL_21:
      if ( byte_140168DAA )
      {
        v39 = 0LL;
        IoGetActivityIdIrp(a2, &v39);
        if ( (byte_1401694F2 & 0x20) != 0 )
          sub_140052F3C(v15, &stru_140149FE8, &v39, a2, *(_DWORD *)(a2 + 48));
      }
      return (unsigned int)sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
    }
    v14 = sub_1401A94C8(v7, a2, *(_QWORD *)(a1 + 4376));
  }
  v9 = v14;
  *(_DWORD *)(a2 + 48) = v14;
  if ( v14 >= 0 )
    goto LABEL_21;
LABEL_8:
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v10 )
    goto LABEL_81;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_81;
    v16 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v5 = *v13;
        sub_140056AB0(v11, v12, &v39, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_81;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_81;
    v16 = &stru_140149FE8;
LABEL_80:
    sub_140052F3C(v11, v16, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_81;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_81;
  v17 = *(_QWORD *)(v12 + 8);
  v18 = 0;
  v19 = 0LL;
  v35 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_57;
    goto LABEL_81;
  }
  v24 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_81;
  v11 = 0LL;
  v37 = 0;
  v38 = *(_DWORD *)(v17 + 56);
  if ( !v38 )
    goto LABEL_54;
  v25 = (unsigned int *)(v17 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_48:
    v11 = (unsigned int)(v11 + 1);
    ++v25;
    v37 = v11;
    if ( (unsigned int)v11 >= v38 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v26 + v17) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v26 + v17) - 65);
    if ( *(_DWORD *)(v26 + v17) == 65 )
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v26 + v17 + 10) )
          v24 = (char *)(v26 + v17 + 24);
        v18 = *(_BYTE *)(v26 + v17 + 8);
        v19 = *(_BYTE **)(v26 + v17 + 16);
        v20 = *(_BYTE *)(v26 + v17 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v17) == 66 )
    {
      v11 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v17 + 12) )
          v24 = (char *)(v26 + v17 + 32);
        v19 = *(_BYTE **)(v26 + v17 + 24);
        goto LABEL_53;
      }
    }
    goto LABEL_46;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_46:
    if ( v36 )
      goto LABEL_54;
    LODWORD(v11) = v37;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v26 + v17 + 10) )
    v24 = (char *)(v26 + v17 + 24);
  v19 = *(_BYTE **)(v26 + v17 + 16);
LABEL_53:
  v20 = *(_BYTE *)(v26 + v17 + 9);
  v18 = *(_BYTE *)(v26 + v17 + 8);
LABEL_54:
  if ( v24 )
  {
    v28 = *v24;
    v22 = 0;
LABEL_57:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v17 + 3) == 1 || !v19 || !v20 )
        goto LABEL_76;
      v29 = 0;
      v11 = (unsigned __int64)&v19[v20];
      v30 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          v29 = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          v21 = v19[2] & 0xF;
          v31 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v31 = (unsigned __int8)v19[7] + 8;
          v11 = (unsigned __int64)(v19 + 13);
          v32 = (unsigned __int64)&v19[v31];
          if ( (unsigned __int64)(v19 + 13) > v32 )
            v35 = 0;
          else
            v35 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v32 )
            v23 = *(_BYTE *)v11;
          v29 = 1;
        }
        v22 = v35;
      }
      if ( v29 )
      {
        LOBYTE(v5) = v22;
        v33 = v23;
      }
      else
      {
LABEL_76:
        v21 = 0;
        v33 = 0;
      }
      sub_140052E64(v11, v17, &v39, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v17 + 3), v18, v21, v5, v33, a2);
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v9;
}
