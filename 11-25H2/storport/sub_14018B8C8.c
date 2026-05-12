/*
 * XREFs of sub_14018B8C8 @ 0x14018B8C8
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006DACC @ 0x14006DACC (sub_14006DACC.c)
 *     sub_14006DCA4 @ 0x14006DCA4 (sub_14006DCA4.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_1400865A0 @ 0x1400865A0 (sub_1400865A0.c)
 *     sub_1400DAFAC @ 0x1400DAFAC (sub_1400DAFAC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018B8C8(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // esi
  void *v9; // r15
  void *v10; // rbx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  char v17; // r13
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // bl
  char v21; // r15
  char v22; // r11
  char *v23; // r11
  unsigned int v24; // r12d
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  char v33; // al
  void *Src; // [rsp+28h] [rbp-E0h]
  PUCHAR v36; // [rsp+30h] [rbp-D8h]
  char v37; // [rsp+68h] [rbp-A0h]
  char v38; // [rsp+69h] [rbp-9Fh]
  unsigned __int16 v39; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v40[3]; // [rsp+70h] [rbp-98h] BYREF
  UCHAR v41[256]; // [rsp+88h] [rbp-80h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v39 = 0;
  v40[0] = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5
      && *(_DWORD *)(v2 + 16) >= 0x210u
      && *(_WORD *)v5 == 1
      && *(_WORD *)(v5 + 2) >= 0x210u
      && ((*(_DWORD *)(v5 + 4) & 1) == 0 || *(_BYTE *)(v5 + 16))
      && *(_WORD *)(v5 + 8) <= 3u
      && (v6 = *(unsigned __int16 *)(v5 + 10), (unsigned __int16)v6 <= 0x100u) )
    {
      if ( (_WORD)v6 )
      {
        v7 = 0;
        while ( *(_BYTE *)(v7 + v5 + 272) == 48 )
        {
          if ( ++v7 >= (unsigned int)v6 )
            goto LABEL_15;
        }
        v9 = (void *)(v5 + 272);
        goto LABEL_18;
      }
      v9 = (void *)(v5 + 272);
      *(_WORD *)(v5 + 10) = 32;
      v8 = sub_1400865A0(0x20u, v6, (void *)(v5 + 272));
      if ( v8 >= 0 )
      {
LABEL_18:
        if ( *(_DWORD *)(v2 + 8) >= 0x210u )
        {
          if ( (*(_DWORD *)(v5 + 4) & 1) != 0 || (v8 = sub_14006E36C(0, (char *)(v5 + 16)), v8 >= 0) )
          {
            v8 = sub_14006DCA4((PUCHAR)(v5 + 16), *(_WORD *)(v5 + 10), v9, *(_WORD *)(v5 + 8), &v39, v41);
            if ( v8 >= 0 )
            {
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32, 1u);
              v8 = sub_14006DACC(*(_BYTE *)(v5 + 4) & 1, (_OWORD *)(v5 + 16), *(_WORD *)(v5 + 8), v39, v41, v40);
              if ( v8 >= 0 )
              {
                v10 = *(void **)(a2 + 24);
                memset_0(v10, 0, *(unsigned int *)(v2 + 8));
                sub_1400DAFAC(v40[0], (__int64)v10);
                *(_QWORD *)(a2 + 56) = 528LL;
              }
              ExReleaseResourceLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32);
              KeLeaveCriticalRegion();
            }
          }
        }
        else
        {
          v8 = -1073741789;
        }
      }
    }
    else
    {
LABEL_15:
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741637;
  }
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v11 )
    goto LABEL_93;
  *(_OWORD *)&v40[1] = 0LL;
  IoGetActivityIdIrp(a2, &v40[1]);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_93;
    v15 = &stru_140148B18;
    goto LABEL_92;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_93;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        LODWORD(Src) = v3;
        sub_140056AB0(v12, v13, (const GUID *)&v40[1], a2, Src, v36);
      }
      goto LABEL_93;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_93;
    v15 = &stru_140149FE8;
LABEL_92:
    LODWORD(Src) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v12, v15, (const GUID *)&v40[1], a2, Src);
    goto LABEL_93;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_93;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v37 = 0;
  v19 = 0;
  v38 = 0;
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
      goto LABEL_68;
    goto LABEL_93;
  }
  v23 = 0LL;
  LOBYTE(v39) = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_93;
  v24 = 0;
  LODWORD(v40[0]) = *(_DWORD *)(v16 + 56);
  if ( !LODWORD(v40[0]) )
    goto LABEL_65;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v25 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v25 )
        break;
    }
LABEL_58:
    if ( ++v24 >= LODWORD(v40[0]) )
      goto LABEL_64;
  }
  v26 = (unsigned int)v12;
  v27 = *(_DWORD *)(v12 + v16) - 64;
  if ( v27 )
  {
    v12 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v16 + 12) )
            v23 = (char *)(v26 + v16 + 32);
          v18 = *(_BYTE **)(v26 + v16 + 24);
          goto LABEL_63;
        }
      }
    }
    else
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        LOBYTE(v39) = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    goto LABEL_57;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_57:
    if ( (_BYTE)v39 )
      goto LABEL_64;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_63:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_64:
  v21 = 0;
LABEL_65:
  if ( v23 )
  {
    v28 = *v23;
    v22 = 0;
LABEL_68:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v16 + 3) == 1 || !v18 || !v19 )
        goto LABEL_88;
      v29 = 0;
      v12 = (unsigned __int64)&v18[v19];
      v30 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v12 )
        {
          v29 = 1;
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
          v32 = (unsigned __int64)&v18[v31];
          if ( (unsigned __int64)(v18 + 13) > v32 )
            v37 = 0;
          else
            v37 = v18[12];
          if ( (unsigned __int64)(v18 + 14) > v32 )
            v38 = 0;
          else
            v38 = *(_BYTE *)v12;
          v29 = 1;
        }
        v22 = v38;
        v21 = v37;
      }
      if ( v29 )
      {
        LOBYTE(v3) = v21;
        v33 = v22;
      }
      else
      {
LABEL_88:
        v20 = 0;
        v33 = 0;
      }
      LOBYTE(v36) = *(_BYTE *)(v16 + 3);
      LODWORD(Src) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v12, v16, (const GUID *)&v40[1], a2, Src, v36, v17, v20, v3, v33, a2);
    }
  }
LABEL_93:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
