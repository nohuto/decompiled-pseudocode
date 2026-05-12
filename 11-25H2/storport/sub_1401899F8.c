/*
 * XREFs of sub_1401899F8 @ 0x1401899F8
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006DACC @ 0x14006DACC (sub_14006DACC.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_1400DAFAC @ 0x1400DAFAC (sub_1400DAFAC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401899F8(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // edi
  __int64 v5; // rbx
  int v6; // esi
  void *v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r12
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bl
  char v18; // r11
  char v19; // r13
  char *v20; // r11
  unsigned int v21; // r15d
  unsigned __int64 v22; // r14
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  char v30; // al
  void *Src; // [rsp+20h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-90h]
  char v34; // [rsp+60h] [rbp-58h]
  char v35; // [rsp+61h] [rbp-57h]
  __int64 v36; // [rsp+68h] [rbp-50h] BYREF
  GUID v37; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v36 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5
      && *(_DWORD *)(v2 + 16) >= 0x210u
      && *(_WORD *)v5 == 1
      && *(_WORD *)(v5 + 2) >= 0x210u
      && ((*(_DWORD *)(v5 + 4) & 1) == 0 || *(_BYTE *)(v5 + 16))
      && (unsigned __int16)(*(_WORD *)(v5 + 10) - 1) <= 0xFFu
      && *(_WORD *)(v5 + 8) <= 3u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 0x210u )
      {
        if ( (*(_DWORD *)(v5 + 4) & 1) != 0 || (v6 = sub_14006E36C(0, (char *)(v5 + 16)), v6 >= 0) )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32, 1u);
          v6 = sub_14006DACC(
                 *(_BYTE *)(v5 + 4) & 1,
                 (_OWORD *)(v5 + 16),
                 *(_WORD *)(v5 + 8),
                 *(_WORD *)(v5 + 10),
                 (void *)(v5 + 272),
                 &v36);
          if ( v6 >= 0 )
          {
            v7 = *(void **)(a2 + 24);
            memset_0(v7, 0, *(unsigned int *)(v2 + 8));
            sub_1400DAFAC(v36, (__int64)v7);
            *(_QWORD *)(a2 + 56) = 528LL;
          }
          ExReleaseResourceLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        v6 = -1073741789;
      }
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v8 )
    goto LABEL_84;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_84;
    v12 = &stru_140148B18;
    goto LABEL_83;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_84;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        LODWORD(v33) = *(_DWORD *)(a2 + 48);
        LODWORD(Src) = v3;
        sub_140056AB0(v9, v10, &v37, a2, Src, v33);
      }
      goto LABEL_84;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_84;
    v12 = &stru_140149FE8;
LABEL_83:
    LODWORD(Src) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v9, v12, &v37, a2, Src);
    goto LABEL_84;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_84;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v34 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_60;
    goto LABEL_84;
  }
  v20 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_84;
  v21 = 0;
  LODWORD(v36) = *(_DWORD *)(v13 + 56);
  if ( !(_DWORD)v36 )
    goto LABEL_57;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v22 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v22 )
        break;
    }
LABEL_51:
    if ( ++v21 >= (unsigned int)v36 )
      goto LABEL_57;
  }
  v23 = (unsigned int)v9;
  v24 = *(_DWORD *)(v9 + v13) - 64;
  if ( v24 )
  {
    v9 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v13 + 12) )
            v20 = (char *)(v23 + v13 + 32);
          v15 = *(_BYTE **)(v23 + v13 + 24);
          goto LABEL_56;
        }
      }
    }
    else
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    goto LABEL_50;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_50:
    if ( v35 )
      goto LABEL_57;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_56:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_57:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_60:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v13 + 3) == 1 || !v15 || !v16 )
        goto LABEL_79;
      v26 = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v26 = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v29 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v29 )
            v34 = 0;
          else
            v34 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v29 )
            v19 = *(_BYTE *)v9;
          v26 = 1;
        }
        v18 = v34;
      }
      if ( v26 )
      {
        LOBYTE(v3) = v18;
        v30 = v19;
      }
      else
      {
LABEL_79:
        v17 = 0;
        v30 = 0;
      }
      LOBYTE(v33) = *(_BYTE *)(v13 + 3);
      LODWORD(Src) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v9, v13, &v37, a2, Src, v33, v14, v17, v3, v30, a2);
    }
  }
LABEL_84:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
