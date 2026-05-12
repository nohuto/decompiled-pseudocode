/*
 * XREFs of sub_1401B0790 @ 0x1401B0790
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 * Callees:
 *     sub_140018DDC @ 0x140018DDC (sub_140018DDC.c)
 *     sub_1400401B0 @ 0x1400401B0 (sub_1400401B0.c)
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140053214 @ 0x140053214 (sub_140053214.c)
 *     sub_1400560B0 @ 0x1400560B0 (sub_1400560B0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14005A210 @ 0x14005A210 (sub_14005A210.c)
 *     sub_14005A248 @ 0x14005A248 (sub_14005A248.c)
 *     sub_14005A2EC @ 0x14005A2EC (sub_14005A2EC.c)
 *     sub_14006672C @ 0x14006672C (sub_14006672C.c)
 *     sub_140089EE8 @ 0x140089EE8 (sub_140089EE8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 */

__int64 __fastcall sub_1401B0790(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // r15
  struct _DEVICE_OBJECT *v5; // rbp
  int v6; // ebx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r14
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int v20; // r13d
  unsigned int *v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  char v30; // [rsp+60h] [rbp-78h]
  char v31; // [rsp+61h] [rbp-77h]
  struct _DEVICE_OBJECT *v32; // [rsp+68h] [rbp-70h]
  struct _DEVICE_OBJECT *v33; // [rsp+70h] [rbp-68h]
  unsigned int v34; // [rsp+78h] [rbp-60h]
  GUID v35; // [rsp+80h] [rbp-58h] BYREF

  sub_1400560B0(a1 + 376, *(_BYTE *)(a1 + 4370));
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  v33 = v4;
  v32 = v5;
  if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(a1 + 88), 6) - 5) > 1 )
  {
    sub_1400401B0(a1);
    sub_14005A210(a1);
    sub_14005A248((struct _UNICODE_STRING *)a1);
    sub_14005A2EC(a1);
    sub_14006672C(a1);
    sub_1401B2A00(a1, a2);
  }
  if ( (*(_DWORD *)(a1 + 6008) & 1) != 0 )
    sub_140089EE8(a1);
  sub_140053214(a1);
  sub_140045574(a1);
  sub_140018DDC(v5, (IRP *)a2);
  v6 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v7 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v7 )
    goto LABEL_71;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_71;
    v11 = &stru_140148B18;
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
          v6 = *v10;
        sub_140056AB0(v8, v9, &v35, a2, v6, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_71;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_71;
    v11 = &stru_140149FE8;
LABEL_70:
    sub_140052F3C(v8, v11, &v35, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_71;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_71;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v30 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_47;
    goto LABEL_71;
  }
  v19 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_71;
  v20 = 0;
  v34 = *(_DWORD *)(v12 + 56);
  if ( !v34 )
    goto LABEL_44;
  v21 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_37:
    ++v20;
    ++v21;
    if ( v20 >= v34 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v8 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v8 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_36;
  }
  v8 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_36:
    if ( v31 )
      goto LABEL_43;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_42:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_43:
  v4 = v33;
  v5 = v32;
LABEL_44:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_47:
    LOBYTE(v8) = v24 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v12 + 3);
      if ( v25 == 1 || !v14 || !v15 )
        goto LABEL_66;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v30 = 0;
          else
            v30 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v30;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v6) = v17;
        v28 = v18;
      }
      else
      {
LABEL_66:
        v16 = 0;
        v28 = 0;
      }
      sub_140052E64(v8, v12, &v35, a2, *(_DWORD *)(a2 + 48), v25, v13, v16, v6, v28, a2);
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  IoDetachDevice(v5);
  IoDeleteDevice(v4);
  return 0LL;
}
