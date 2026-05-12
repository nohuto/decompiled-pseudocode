/*
 * XREFs of sub_14018BE30 @ 0x14018BE30
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_14006FDFC @ 0x14006FDFC (sub_14006FDFC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14018BE30(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rbp
  int v5; // esi
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // rdx
  char v12; // r12
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // bp
  char v16; // r11
  char v17; // r13
  char *v18; // r11
  unsigned int v19; // r15d
  unsigned __int64 v20; // r14
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  char v28; // al
  char v30; // [rsp+60h] [rbp-48h]
  char v31; // [rsp+61h] [rbp-47h]
  unsigned int v32; // [rsp+64h] [rbp-44h]
  GUID v33; // [rsp+68h] [rbp-40h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4
      && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x20Cu
      && *(_WORD *)v4 == 1
      && *(_WORD *)(v4 + 2) >= 0x20Cu
      && ((*(_DWORD *)(v4 + 4) & 1) == 0 || *(_BYTE *)(v4 + 12))
      && (unsigned __int16)(*(_WORD *)(v4 + 8) - 1) <= 0xFFu )
    {
      if ( (*(_DWORD *)(v4 + 4) & 1) != 0 || (v5 = sub_14006E36C(0, (char *)(v4 + 12)), v5 >= 0) )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32, 1u);
        v5 = sub_14006FDFC((char *)(v4 + 12), *(_WORD *)(v4 + 8), (const void *)(v4 + 268));
        ExReleaseResourceLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  v6 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_79;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_79;
    v10 = &stru_140148B18;
    goto LABEL_78;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_79;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v2 = *v9;
        sub_140056AB0(v7, v8, &v33, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_79;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_79;
    v10 = &stru_140149FE8;
LABEL_78:
    sub_140052F3C(v7, v10, &v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_79;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_79;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v30 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_55;
    goto LABEL_79;
  }
  v18 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_79;
  v19 = 0;
  v32 = *(_DWORD *)(v11 + 56);
  if ( !v32 )
    goto LABEL_52;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v11 + 4LL * v19 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v20 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v7 < (unsigned int)v20 )
        break;
    }
LABEL_46:
    if ( ++v19 >= v32 )
      goto LABEL_52;
  }
  v21 = (unsigned int)v7;
  v22 = *(_DWORD *)(v7 + v11) - 64;
  if ( v22 )
  {
    v7 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v7 = v21 + 40;
        if ( v21 + 40 <= v20 )
        {
          if ( *(_DWORD *)(v21 + v11 + 12) )
            v18 = (char *)(v21 + v11 + 32);
          v13 = *(_BYTE **)(v21 + v11 + 24);
          goto LABEL_51;
        }
      }
    }
    else
    {
      v7 = v21 + 56;
      if ( v21 + 56 <= v20 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v21 + v11 + 10) )
          v18 = (char *)(v21 + v11 + 24);
        v12 = *(_BYTE *)(v21 + v11 + 8);
        v13 = *(_BYTE **)(v21 + v11 + 16);
        v14 = *(_BYTE *)(v21 + v11 + 9);
      }
    }
    goto LABEL_45;
  }
  v7 = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_45:
    if ( v31 )
      goto LABEL_52;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(v21 + v11 + 10) )
    v18 = (char *)(v21 + v11 + 24);
  v13 = *(_BYTE **)(v21 + v11 + 16);
LABEL_51:
  v14 = *(_BYTE *)(v21 + v11 + 9);
  v12 = *(_BYTE *)(v21 + v11 + 8);
LABEL_52:
  if ( v18 )
  {
    v23 = *v18;
    v16 = 0;
LABEL_55:
    LOBYTE(v7) = v23 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v11 + 3) == 1 || !v13 || !v14 )
        goto LABEL_74;
      v24 = 0;
      v7 = (unsigned __int64)&v13[v14];
      v25 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          v24 = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v26 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v26 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          v27 = (unsigned __int64)&v13[v26];
          if ( (unsigned __int64)(v13 + 13) > v27 )
            v30 = 0;
          else
            v30 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v27 )
            v17 = *(_BYTE *)v7;
          v24 = 1;
        }
        v16 = v30;
      }
      if ( v24 )
      {
        LOBYTE(v2) = v16;
        v28 = v17;
      }
      else
      {
LABEL_74:
        v15 = 0;
        v28 = 0;
      }
      sub_140052E64(v7, v11, &v33, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v11 + 3), v12, v15, v2, v28, a2);
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v5;
}
