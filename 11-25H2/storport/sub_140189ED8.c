/*
 * XREFs of sub_140189ED8 @ 0x140189ED8
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BCC38 @ 0x1400BCC38 (sub_1400BCC38.c)
 *     sub_1400CBA00 @ 0x1400CBA00 (sub_1400CBA00.c)
 *     sub_1400CDB80 @ 0x1400CDB80 (sub_1400CDB80.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140189ED8(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v6; // rbp
  unsigned __int16 v7; // cx
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r14
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  unsigned __int16 v15; // cx
  __int64 v16; // rbp
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _DWORD *v19; // r14
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v21; // rdx
  char v22; // r12
  _BYTE *v23; // r9
  unsigned __int8 v24; // r10
  char v25; // r11
  char v26; // bp
  char v27; // r13
  char *v28; // r14
  unsigned int v29; // r15d
  unsigned __int64 v30; // rbp
  __int64 v31; // r8
  int v32; // ecx
  char v33; // cl
  char v34; // r8
  _BYTE *v35; // rax
  unsigned int v36; // eax
  char v37; // al
  __int64 v39; // [rsp+20h] [rbp-A8h]
  char v40; // [rsp+60h] [rbp-68h]
  char v41; // [rsp+61h] [rbp-67h]
  __int64 v42; // [rsp+68h] [rbp-60h] BYREF
  GUID v43; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v42 = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6
      && *(_DWORD *)(v2 + 16) >= 0x38u
      && *(_WORD *)v6 == 1
      && *(_WORD *)(v6 + 2) >= 0x38u
      && *(_WORD *)(v6 + 16) <= 0xFFEFu
      && (v7 = *(_WORD *)(v6 + 18), (unsigned __int16)(v7 - 1) > 0x1Eu)
      && v7 < 0x1001u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 0x20u )
      {
        v9 = sub_1400CDB80(a1, *(_QWORD *)(v6 + 8) ^ a1, 0, 0LL);
        v10 = v9;
        if ( v9 )
        {
          if ( (*(_BYTE *)(v9 + 32) & 4) != 0 )
          {
            v8 = -1073741637;
          }
          else
          {
            v8 = sub_1400CBA00(v9, *(_WORD *)(v6 + 16), 1u, (int)v6 + 20, &v42);
            if ( v8 >= 0 )
            {
              v15 = *(_WORD *)(v6 + 18);
              v16 = v42;
              if ( v15 )
              {
                if ( v15 >= *(_WORD *)(v42 + 6) )
                  v15 = *(_WORD *)(v42 + 6);
                *(_WORD *)(v42 + 6) = v15;
              }
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 632), 1u);
              v17 = *(_QWORD **)(v10 + 616);
              v18 = (_QWORD *)(v16 + 64);
              if ( *v17 != v10 + 608 )
                __fastfail(3u);
              *(_QWORD *)(v16 + 72) = v17;
              *v18 = v10 + 608;
              *v17 = v18;
              *(_QWORD *)(v10 + 616) = v18;
              ++*(_DWORD *)(v10 + 624);
              ExReleaseResourceLite((PERESOURCE)(v10 + 632));
              KeLeaveCriticalRegion();
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 40));
              v19 = *(_DWORD **)(a2 + 24);
              memset_0(v19, 0, *(unsigned int *)(v2 + 8));
              v8 = sub_1400BCC38(v16);
              if ( v8 >= 0 )
              {
                *v19 = 2097153;
                if ( (*(_BYTE *)(v16 + 136) & 4) != 0 )
                  v19[1] |= 8u;
                *((_QWORD *)v19 + 1) = v16 ^ a1;
                *((_WORD *)v19 + 8) = *(_WORD *)(v16 + 4);
                v19[5] = *(_DWORD *)(v16 + 572);
                if ( *(_DWORD *)(v16 + 572) == 1 )
                {
                  *((_WORD *)v19 + 12) = *(_WORD *)(v16 + 20);
                  *((_WORD *)v19 + 13) = *(_WORD *)(v16 + 8);
                }
                ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v16 + 552));
                *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v19 + 1);
              }
              goto LABEL_14;
            }
          }
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 40));
        }
        else
        {
          v8 = -1073741275;
        }
      }
      else
      {
        v8 = -1073741789;
      }
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741637;
  }
LABEL_14:
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v11 )
    goto LABEL_97;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_97;
    v20 = &stru_140148B18;
    goto LABEL_96;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_97;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        LODWORD(v39) = v3;
        sub_140056AB0(v12, v13, &v43, a2, v39, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_97;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_97;
    v20 = &stru_140149FE8;
LABEL_96:
    LODWORD(v39) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v12, v20, &v43, a2, v39);
    goto LABEL_97;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_97;
  v21 = *(_QWORD *)(v13 + 8);
  v22 = 0;
  v23 = 0LL;
  v40 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v21 + 72);
    v23 = *(_BYTE **)(v21 + 32);
    v24 = *(_BYTE *)(v21 + 11);
    v22 = *(_BYTE *)(v21 + 4);
    if ( !*(_BYTE *)(v21 + 2) )
      goto LABEL_73;
    goto LABEL_97;
  }
  v28 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_97;
  v29 = 0;
  LODWORD(v42) = *(_DWORD *)(v21 + 56);
  if ( !(_DWORD)v42 )
    goto LABEL_70;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v21 + 4LL * v29 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v30 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v12 < (unsigned int)v30 )
        break;
    }
LABEL_63:
    if ( ++v29 >= (unsigned int)v42 )
      goto LABEL_69;
  }
  v31 = (unsigned int)v12;
  v32 = *(_DWORD *)(v12 + v21) - 64;
  if ( v32 )
  {
    v12 = (unsigned int)(v32 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v31 + 40;
        if ( v31 + 40 <= v30 )
        {
          if ( *(_DWORD *)(v31 + v21 + 12) )
            v28 = (char *)(v31 + v21 + 32);
          v23 = *(_BYTE **)(v31 + v21 + 24);
          goto LABEL_68;
        }
      }
    }
    else
    {
      v12 = v31 + 56;
      if ( v31 + 56 <= v30 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v31 + v21 + 10) )
          v28 = (char *)(v31 + v21 + 24);
        v22 = *(_BYTE *)(v31 + v21 + 8);
        v23 = *(_BYTE **)(v31 + v21 + 16);
        v24 = *(_BYTE *)(v31 + v21 + 9);
      }
    }
    goto LABEL_62;
  }
  v12 = v31 + 40;
  if ( v31 + 40 > v30 )
  {
LABEL_62:
    if ( v41 )
      goto LABEL_69;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(v31 + v21 + 10) )
    v28 = (char *)(v31 + v21 + 24);
  v23 = *(_BYTE **)(v31 + v21 + 16);
LABEL_68:
  v24 = *(_BYTE *)(v31 + v21 + 9);
  v22 = *(_BYTE *)(v31 + v21 + 8);
LABEL_69:
  v26 = 0;
LABEL_70:
  if ( v28 )
  {
    v33 = *v28;
LABEL_73:
    LOBYTE(v12) = v33 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v34 = *(_BYTE *)(v21 + 3);
      if ( v34 == 1 || !v23 || !v24 )
        goto LABEL_92;
      LOBYTE(v21) = 0;
      v12 = (unsigned __int64)&v23[v24];
      v35 = v23 + 8;
      if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v35 <= v12 )
        {
          LOBYTE(v21) = 1;
          v26 = v23[2];
          v25 = v23[1] & 0xF;
          v27 = v23[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v35 <= v12 )
        {
          v25 = v23[2] & 0xF;
          v36 = v24;
          if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
            v36 = (unsigned __int8)v23[7] + 8;
          v12 = (unsigned __int64)(v23 + 13);
          v21 = (unsigned __int64)&v23[v36];
          if ( (unsigned __int64)(v23 + 13) > v21 )
            v40 = 0;
          else
            v40 = v23[12];
          if ( (unsigned __int64)(v23 + 14) <= v21 )
            v27 = *(_BYTE *)v12;
          LOBYTE(v21) = 1;
        }
        v26 = v40;
      }
      if ( (_BYTE)v21 )
      {
        LOBYTE(v3) = v26;
        v37 = v27;
      }
      else
      {
LABEL_92:
        v25 = 0;
        v37 = 0;
      }
      LODWORD(v39) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v12, v21, &v43, a2, v39, v34, v22, v25, v3, v37, a2);
    }
  }
LABEL_97:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
