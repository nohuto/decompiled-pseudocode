/*
 * XREFs of sub_140192178 @ 0x140192178
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C9C4C @ 0x1400C9C4C (sub_1400C9C4C.c)
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 *     sub_1400CDB80 @ 0x1400CDB80 (sub_1400CDB80.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140192178(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  struct _ERESOURCE *v11; // r12
  __int64 v12; // r8
  _QWORD *v13; // rdx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r13
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // si
  char v24; // r15
  char v25; // r11
  char *v26; // r11
  unsigned int v27; // r12d
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-49h]
  __int64 v39; // [rsp+28h] [rbp-41h]
  __int64 v40; // [rsp+30h] [rbp-39h]
  __int64 v41; // [rsp+38h] [rbp-31h]
  __int64 v42; // [rsp+40h] [rbp-29h]
  __int64 v43; // [rsp+48h] [rbp-21h]
  char v44; // [rsp+60h] [rbp-9h]
  char v45; // [rsp+61h] [rbp-8h]
  char v46; // [rsp+62h] [rbp-7h]
  __int64 v47; // [rsp+68h] [rbp-1h] BYREF
  GUID v48; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v47 = 0LL;
  v6 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v4 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u && *(_WORD *)v4 == 1 && *(_WORD *)(v4 + 2) >= 0x10u )
  {
    v7 = sub_1400CDB80(a1, *(_QWORD *)(v4 + 8) ^ a1, 1, &v47);
    *(_QWORD *)&v48.Data1 = v7;
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 32);
      if ( (v9 & 1) != 0 )
      {
        if ( (v9 & 0x10) == 0 )
        {
          *(_QWORD *)(v8 + 32) = v9 | 0x10;
          KeEnterCriticalRegion();
          v10 = v47;
          v11 = (struct _ERESOURCE *)(v47 + 384);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v47 + 384), 1u);
          v12 = *(_QWORD *)(v8 + 8);
          if ( *(_QWORD *)(v12 + 8) != v8 + 8 || (v13 = *(_QWORD **)(v8 + 16), *v13 != v8 + 8) )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          --*(_DWORD *)(v10 + 376);
          ExReleaseResourceLite(v11);
          KeLeaveCriticalRegion();
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 40));
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v10 + 56));
          if ( (byte_1401694FA & 2) != 0 )
            sub_1400C9C4C(
              v8 + 316,
              v8 + 60,
              v10 + 72,
              *(_DWORD *)(a1 + 56),
              a1 + 1032,
              *(const wchar_t **)(a1 + 1016),
              (const char *)(v10 + 72),
              *(_WORD *)(v8 + 4),
              (const char *)(v8 + 60),
              (const char *)(v8 + 316),
              (const char *)(v8 + 572));
          ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 40));
          sub_1400CAFB4(a1, 1, (PVOID *)&v48);
          goto LABEL_19;
        }
        v6 = -2147483631;
      }
      else
      {
        v6 = -1073741637;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 40));
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v47 + 56));
    }
    else
    {
      v6 = -1073741275;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_19:
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v14 )
    goto LABEL_85;
  v48 = 0LL;
  IoGetActivityIdIrp(a2, &v48);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_85;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    v18 = &stru_140148B18;
    goto LABEL_84;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_85;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v2 = *v17;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        LODWORD(v38) = v2;
        sub_140056AB0(v15, v16, &v48, a2, v38, v39);
      }
      goto LABEL_85;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_85;
    v18 = &stru_140149FE8;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
LABEL_84:
    sub_140052F3C(v15, v18, &v48, a2, v38);
    goto LABEL_85;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_85;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v44 = 0;
  v22 = 0;
  v45 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_60;
    goto LABEL_85;
  }
  v26 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_85;
  v27 = 0;
  LODWORD(v47) = *(_DWORD *)(v19 + 56);
  if ( !(_DWORD)v47 )
    goto LABEL_57;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v15 < (unsigned int)v28 )
        break;
    }
LABEL_50:
    if ( ++v27 >= (unsigned int)v47 )
      goto LABEL_56;
  }
  v29 = (unsigned int)v15;
  v30 = *(_DWORD *)(v15 + v19) - 64;
  if ( v30 )
  {
    v15 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v19 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v29 + v19 + 24);
          goto LABEL_55;
        }
      }
    }
    else
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    goto LABEL_49;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_49:
    if ( v46 )
      goto LABEL_56;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_55:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_56:
  v24 = 0;
LABEL_57:
  if ( v26 )
  {
    v31 = *v26;
    v25 = 0;
LABEL_60:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v19 + 3) == 1 || !v21 || !v22 )
        goto LABEL_80;
      v32 = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v32 = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v35 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v35 )
            v44 = 0;
          else
            v44 = v21[12];
          if ( (unsigned __int64)(v21 + 14) > v35 )
            v45 = 0;
          else
            v45 = *(_BYTE *)v15;
          v32 = 1;
        }
        v25 = v45;
        v24 = v44;
      }
      if ( v32 )
      {
        LOBYTE(v2) = v24;
        v36 = v25;
      }
      else
      {
LABEL_80:
        v23 = 0;
        v36 = 0;
      }
      LOBYTE(v43) = v36;
      LOBYTE(v42) = v2;
      LOBYTE(v41) = v23;
      LOBYTE(v40) = v20;
      LOBYTE(v39) = *(_BYTE *)(v19 + 3);
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v15, v19, &v48, a2, v38, v39, v40, v41, v42, v43, a2);
    }
  }
LABEL_85:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
