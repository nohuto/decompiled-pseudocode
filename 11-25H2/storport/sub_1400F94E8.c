/*
 * XREFs of sub_1400F94E8 @ 0x1400F94E8
 * Callers:
 *     sub_14010A138 @ 0x14010A138 (sub_14010A138.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400F94E8(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebx
  char v9; // al
  unsigned int v10; // ebp
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r14
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r15
  char *v23; // r11
  unsigned int v24; // r13d
  unsigned int *v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  int v34; // [rsp+20h] [rbp-B8h]
  char v35; // [rsp+60h] [rbp-78h]
  char v36; // [rsp+61h] [rbp-77h]
  unsigned int v37; // [rsp+64h] [rbp-74h]
  unsigned int v38; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  GUID v40; // [rsp+88h] [rbp-50h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 13, &LockHandle);
  v6 = a1[14];
  if ( (v6 & 8) != 0 )
  {
    v8 = 0;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      *(_QWORD *)(a2 + 64) = 0LL;
      *(_DWORD *)(a2 + 44) = -2147483631;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_DWORD *)(a2 + 64) = -2147483631;
    }
    v10 = -2147483631;
    v9 = 48;
  }
  else
  {
    a1[14] = v6 | 8;
    v7 = a1[1];
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_QWORD *)(a2 + 64) = v7;
    else
      *(_QWORD *)(a2 + 24) = v7;
    v8 = 0;
    v9 = 1;
    v10 = 0;
  }
  v37 = v10;
  *(_BYTE *)(a2 + 3) = v9;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v10;
  if ( v11 )
    goto LABEL_76;
  v40 = 0LL;
  IoGetActivityIdIrp(a3, &v40);
  v13 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_76;
    v34 = *(_DWORD *)(a3 + 48);
    v15 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = *(int **)(a3 + 56);
        if ( v14 )
          v8 = *v14;
        sub_140056AB0(v12, v13, &v40, a3, v8, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_76;
    v15 = &stru_140149FE8;
    v34 = *(_DWORD *)(a3 + 48);
LABEL_75:
    sub_140052F3C(v12, v15, &v40, a3, v34);
    goto LABEL_76;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_76;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v35 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v23 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_76;
  v24 = 0;
  v38 = *(_DWORD *)(v16 + 56);
  if ( !v38 )
    goto LABEL_49;
  v25 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_42:
    ++v24;
    ++v25;
    if ( v24 >= v38 )
      goto LABEL_48;
  }
  if ( *(_DWORD *)(v26 + v16) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v26 + v16) - 65);
    if ( *(_DWORD *)(v26 + v16) == 65 )
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v16) == 66 )
    {
      v12 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v16 + 12) )
          v23 = (char *)(v26 + v16 + 32);
        v18 = *(_BYTE **)(v26 + v16 + 24);
        goto LABEL_47;
      }
    }
    goto LABEL_41;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_41:
    if ( v36 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_47:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_48:
  v10 = v37;
LABEL_49:
  if ( v23 )
  {
    v28 = *v23;
    v21 = 0;
LABEL_52:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v18 || !v19 )
        goto LABEL_71;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v30 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v31 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v31 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v31];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v35 = 0;
          else
            v35 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v35;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v8) = v21;
        v32 = v22;
      }
      else
      {
LABEL_71:
        v20 = 0;
        v32 = 0;
      }
      sub_140052E64(v12, v16, &v40, a3, *(_DWORD *)(a3 + 48), v29, v17, v20, v8, v32, a3);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a3, 0);
  return v10;
}
