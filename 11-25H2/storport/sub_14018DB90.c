/*
 * XREFs of sub_14018DB90 @ 0x14018DB90
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 *     sub_1400DAFAC @ 0x1400DAFAC (sub_1400DAFAC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018DB90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  int v3; // ebx
  _QWORD *v4; // rdi
  int v5; // r12d
  char v6; // r13
  unsigned int v7; // esi
  __int64 v8; // r14
  int v9; // r8d
  __int64 v10; // r9
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // rax
  char *v17; // rcx
  __int128 v18; // xmm1
  unsigned int v19; // eax
  _DWORD *v20; // r14
  const char *v21; // r15
  int v22; // edi
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // r12
  _BYTE *v26; // r9
  unsigned __int8 v27; // r10
  char v28; // r11
  char v29; // r15
  char v30; // r14
  char *v31; // r14
  unsigned int v32; // r13d
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  int v35; // ecx
  char v36; // cl
  char v37; // r8
  _BYTE *v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // r8
  char v41; // al
  char v43; // [rsp+68h] [rbp-A0h]
  char v44; // [rsp+69h] [rbp-9Fh]
  char v45; // [rsp+6Ah] [rbp-9Eh]
  unsigned int v46; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v47; // [rsp+6Ch] [rbp-9Ch]
  int v48; // [rsp+70h] [rbp-98h]
  int v49; // [rsp+74h] [rbp-94h]
  PVOID RestartKey; // [rsp+78h] [rbp-90h] BYREF
  GUID RestartKey_8; // [rsp+80h] [rbp-88h] BYREF
  char Str2[256]; // [rsp+98h] [rbp-70h] BYREF

  v2 = a2[23];
  v3 = 0;
  a2[7] = 0LL;
  v4 = a2;
  *(_QWORD *)&RestartKey_8.Data1 = a2;
  v5 = 0;
  v6 = 0;
  RestartKey = 0LL;
  v48 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(a1 + 144) & 1) == 0 || !*(_QWORD *)(a1 + 592) )
  {
    v7 = -1073741637;
    goto LABEL_10;
  }
  v8 = a2[3];
  if ( v8
    && *(_DWORD *)(v2 + 16) >= 0x110u
    && *(_WORD *)v8 == 1
    && *(_WORD *)(v8 + 2) >= 0x110u
    && ((v9 = *(_DWORD *)(v8 + 4), v10 = 2LL, (v9 & 2) == 0) || *(_BYTE *)(v8 + 16))
    && (v15 = *(unsigned int *)(v8 + 8), (_DWORD)v15) )
  {
    if ( *(unsigned int *)(v2 + 8) >= (unsigned __int64)(528 * v15 + 8) )
    {
      if ( (v9 & 1) != 0 )
      {
        v6 = 1;
        v48 = sub_14006E36C(0, Str2);
        v7 = v48;
        if ( v48 < 0 )
          goto LABEL_10;
      }
      else if ( (*(_DWORD *)(v8 + 4) & 2) != 0 )
      {
        v6 = 1;
        v16 = (_OWORD *)(v8 + 16);
        v17 = Str2;
        do
        {
          *(_OWORD *)v17 = *v16;
          *((_OWORD *)v17 + 1) = v16[1];
          *((_OWORD *)v17 + 2) = v16[2];
          *((_OWORD *)v17 + 3) = v16[3];
          *((_OWORD *)v17 + 4) = v16[4];
          *((_OWORD *)v17 + 5) = v16[5];
          *((_OWORD *)v17 + 6) = v16[6];
          v17 += 128;
          v18 = v16[7];
          v16 += 8;
          *((_OWORD *)v17 - 1) = v18;
          --v10;
        }
        while ( v10 );
      }
      v49 = *(_DWORD *)(v8 + 8);
      v19 = *(_DWORD *)(v8 + 12);
      v20 = (_DWORD *)v4[3];
      v46 = v19;
      memset_0(v20, 0, *(unsigned int *)(v2 + 8));
      *v20 = 524289;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32, 1u);
      v21 = (const char *)RtlEnumerateGenericTableWithoutSplaying(&Table, &RestartKey);
      if ( v21 )
      {
        v22 = v49;
        do
        {
          if ( (!v6 || !strnicmp(v21 + 20, Str2, 0x100uLL)) && ++v5 > v46 )
          {
            sub_1400DAFAC((__int64)v21, (__int64)&v20[132 * (v5 - v46) - 130]);
            ++v20[1];
            *((_WORD *)v20 + 1) += 528;
            if ( !--v22 )
              break;
          }
          v21 = (const char *)RtlEnumerateGenericTableWithoutSplaying(&Table, &RestartKey);
        }
        while ( v21 );
        v4 = *(_QWORD **)&RestartKey_8.Data1;
        v7 = v48;
      }
      ExReleaseResourceLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32);
      KeLeaveCriticalRegion();
      v4[7] = *((unsigned __int16 *)v20 + 1);
      goto LABEL_10;
    }
    v7 = -1073741789;
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_10:
  v11 = byte_140168DAA == 0;
  *((_BYTE *)v4 + 141) = -84;
  *((_DWORD *)v4 + 12) = v7;
  if ( v11 )
    goto LABEL_95;
  RestartKey_8 = 0LL;
  IoGetActivityIdIrp(v4, &RestartKey_8);
  v13 = v4[23];
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_95;
    v23 = &stru_140148B18;
    goto LABEL_94;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_95;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = (int *)v4[7];
        if ( v14 )
          v3 = *v14;
        sub_140056AB0(v12, v13, &RestartKey_8, v4, v3, *((_DWORD *)v4 + 12));
      }
      goto LABEL_95;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_95;
    v23 = &stru_140149FE8;
LABEL_94:
    sub_140052F3C(v12, v23, &RestartKey_8, v4, *((_DWORD *)v4 + 12));
    goto LABEL_95;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_95;
  v24 = *(_QWORD *)(v13 + 8);
  v25 = 0;
  v26 = 0LL;
  v43 = 0;
  v27 = 0;
  v44 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( *(_BYTE *)(v24 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v24 + 72);
    v26 = *(_BYTE **)(v24 + 32);
    v27 = *(_BYTE *)(v24 + 11);
    v25 = *(_BYTE *)(v24 + 4);
    if ( !*(_BYTE *)(v24 + 2) )
      goto LABEL_70;
    goto LABEL_95;
  }
  v31 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v24 + 20) )
    goto LABEL_95;
  v32 = 0;
  v47 = *(_DWORD *)(v24 + 56);
  if ( !v47 )
    goto LABEL_67;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v24 + 4LL * v32 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v33 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v12 < (unsigned int)v33 )
        break;
    }
LABEL_60:
    if ( ++v32 >= v47 )
      goto LABEL_66;
  }
  v34 = (unsigned int)v12;
  v35 = *(_DWORD *)(v12 + v24) - 64;
  if ( v35 )
  {
    v12 = (unsigned int)(v35 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v34 + 40;
        if ( v34 + 40 <= v33 )
        {
          if ( *(_DWORD *)(v34 + v24 + 12) )
            v31 = (char *)(v34 + v24 + 32);
          v26 = *(_BYTE **)(v34 + v24 + 24);
          goto LABEL_65;
        }
      }
    }
    else
    {
      v12 = v34 + 56;
      if ( v34 + 56 <= v33 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v34 + v24 + 10) )
          v31 = (char *)(v34 + v24 + 24);
        v25 = *(_BYTE *)(v34 + v24 + 8);
        v26 = *(_BYTE **)(v34 + v24 + 16);
        v27 = *(_BYTE *)(v34 + v24 + 9);
      }
    }
    goto LABEL_59;
  }
  v12 = v34 + 40;
  if ( v34 + 40 > v33 )
  {
LABEL_59:
    if ( v45 )
      goto LABEL_66;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v34 + v24 + 10) )
    v31 = (char *)(v34 + v24 + 24);
  v26 = *(_BYTE **)(v34 + v24 + 16);
LABEL_65:
  v27 = *(_BYTE *)(v34 + v24 + 9);
  v25 = *(_BYTE *)(v34 + v24 + 8);
LABEL_66:
  v29 = 0;
LABEL_67:
  if ( v31 )
  {
    v36 = *v31;
    v30 = 0;
LABEL_70:
    LOBYTE(v12) = v36 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v24 + 3) == 1 || !v26 || !v27 )
        goto LABEL_90;
      v37 = 0;
      v12 = (unsigned __int64)&v26[v27];
      v38 = v26 + 8;
      if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v38 <= v12 )
        {
          v37 = 1;
          v29 = v26[2];
          v28 = v26[1] & 0xF;
          v30 = v26[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v38 <= v12 )
        {
          v28 = v26[2] & 0xF;
          v39 = v27;
          if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
            v39 = (unsigned __int8)v26[7] + 8;
          v12 = (unsigned __int64)(v26 + 13);
          v40 = (unsigned __int64)&v26[v39];
          if ( (unsigned __int64)(v26 + 13) > v40 )
            v43 = 0;
          else
            v43 = v26[12];
          if ( (unsigned __int64)(v26 + 14) > v40 )
            v44 = 0;
          else
            v44 = *(_BYTE *)v12;
          v37 = 1;
        }
        v30 = v44;
        v29 = v43;
      }
      if ( v37 )
      {
        LOBYTE(v3) = v29;
        v41 = v30;
      }
      else
      {
LABEL_90:
        v28 = 0;
        v41 = 0;
      }
      sub_140052E64(v12, v24, &RestartKey_8, v4, *((_DWORD *)v4 + 12), *(_BYTE *)(v24 + 3), v25, v28, v3, v41, v4);
    }
  }
LABEL_95:
  IofCompleteRequest((PIRP)v4, 0);
  return v7;
}
