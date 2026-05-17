/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800A39B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800D2D5C (RtlpQueryEafPlusModuleList.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryImageMitigationPolicy(__int64 a1, int a2, char a3, __int64 *a4, int a5)
{
  __int64 v6; // r12
  int v8; // r15d
  __int64 v9; // rdi
  unsigned int inited; // esi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r13
  int v14; // r14d
  int v15; // r14d
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  unsigned __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r8
  char v24; // r8
  bool v25; // zf
  const wchar_t *v26; // rcx
  size_t v27; // rax
  int v28; // eax
  int v29; // r14d
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r8
  _OWORD *v37; // rbx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  char v46; // cl
  int v47; // ecx
  bool v48; // zf
  int v50; // r14d
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  char v54; // r8
  unsigned __int64 v55; // rdx
  int v56; // r14d
  int v57; // r14d
  int v58; // r14d
  int v59; // r14d
  int v60; // r14d
  char v61; // r10
  __int64 v62; // r9
  __int64 v63; // r8
  unsigned __int64 v64; // r15
  char v65; // r8
  char v66; // r9
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  int v70; // ecx
  int v71; // ecx
  int v72; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v74[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v75; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v76[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v77; // [rsp+80h] [rbp-80h]
  __int128 v78; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v79; // [rsp+A0h] [rbp-60h]
  char v80[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp-50h]
  size_t Size_4; // [rsp+B4h] [rbp-4Ch] BYREF
  _BYTE v83[1024]; // [rsp+D0h] [rbp-30h] BYREF

  v72 = a3 & 4;
  v6 = 8LL;
  v79 = 0LL;
  v75 = 0LL;
  v8 = a3 & 8;
  v78 = 0LL;
  v9 = 0LL;
  inited = RtlInitUnicodeStringEx(&v75, a1);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  if ( v72 )
  {
    if ( (_WORD)v75 )
      return (unsigned int)-1073741811;
    if ( v8 )
      v11 = 0x2222222222222222LL;
    else
      v11 = 0x2222212222111211LL;
    v12 = *((_QWORD *)&v78 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
    v13 = 572661794LL;
  }
  else
  {
    Handle = 0LL;
    v26 = L"MitigationOptions";
    v72 = 0;
    v74[0] = 0LL;
    if ( v8 )
      v26 = L"MitigationAuditOptions";
    v74[1] = v26;
    v27 = wcslen(v26);
    if ( v27 <= 0x7FFE )
    {
      LOWORD(v74[0]) = 2 * v27;
      WORD1(v74[0]) = 2 * v27 + 2;
    }
    if ( (_WORD)v75 )
    {
      v28 = RtlpOpenImageFileOptionsKeyEx(&v75, 9LL, 0LL, &Handle);
    }
    else
    {
      v76[0] = 48LL;
      v76[2] = &unk_1801721E8;
      v76[3] = 576LL;
      v76[1] = 0LL;
      v77 = 0LL;
      v28 = NtOpenKey(&Handle, 9LL, v76);
    }
    inited = v28;
    if ( v28 < 0 )
      return inited;
    inited = NtQueryValueKey(Handle, v74, 2LL, v80, 40, &v72);
    if ( (inited & 0x80000000) == 0 && a2 == 11 )
      inited = RtlpQueryEafPlusModuleList(Handle, v83);
    NtClose(Handle);
    if ( (inited & 0x80000000) != 0 )
      return inited;
    if ( Size > 0x18 )
      return (unsigned int)-1073741788;
    memmove(&v78, &Size_4, Size);
    v11 = v78;
    v13 = v79;
    v12 = *((_QWORD *)&v78 + 1);
  }
  if ( a2 <= 9 )
  {
    if ( a2 == 9 )
    {
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v53 = HIWORD(v11);
      goto LABEL_135;
    }
    if ( !a2 )
    {
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v46 = v11;
      goto LABEL_112;
    }
    v29 = a2 - 1;
    if ( !v29 )
    {
      if ( a5 != 24 )
        return (unsigned int)-1073741811;
      v30 = 0LL;
      *(_OWORD *)a4 = 0LL;
      a4[2] = 0LL;
      v31 = 0LL;
      if ( (v11 & 0x300) == 0 )
      {
LABEL_48:
        if ( (v11 & 0x400) != 0 )
          *a4 = v31 | 4;
        v32 = 0LL;
        if ( (v11 & 0x30000) != 0 )
        {
          if ( (BYTE2(v11) & 3) == 1 )
          {
            a4[1] = 1LL;
            v32 = 1LL;
          }
          else if ( (BYTE2(v11) & 3) == 2 )
          {
            a4[1] &= ~1uLL;
            a4[1] |= 2uLL;
            v32 = a4[1];
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v11 & 0x40000) != 0 )
          a4[1] = v32 | 4;
        v24 = v11 >> 20;
        if ( (v24 & 3) == 0 )
          goto LABEL_28;
        if ( (v24 & 3) != 1 )
        {
          if ( (v24 & 3) == 2 )
          {
            a4[2] &= ~1uLL;
            a4[2] |= 2uLL;
          }
          goto LABEL_29;
        }
        goto LABEL_245;
      }
      if ( (BYTE1(v11) & 3) != 1 )
      {
        if ( (BYTE1(v11) & 3) == 2 )
        {
          *a4 = 2LL;
          v31 = 2LL;
          goto LABEL_48;
        }
        if ( (BYTE1(v11) & 3) != 3 )
          goto LABEL_48;
        v30 = 8LL;
      }
      v31 = v30 | 1;
      *a4 = v30 | 1;
      goto LABEL_48;
    }
    v56 = v29 - 1;
    if ( !v56 )
    {
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v53 = v11 >> 36;
      goto LABEL_135;
    }
    v57 = v56 - 1;
    if ( v57 )
    {
      v58 = v57 - 1;
      if ( !v58 )
      {
        if ( a5 != 16 )
          return (unsigned int)-1073741811;
        v66 = v11 >> 28;
        v67 = 0LL;
        *(_OWORD *)a4 = 0LL;
        if ( (v66 & 3) != 0 )
        {
          if ( (v66 & 3) == 1 )
          {
            *a4 = 1LL;
            v67 = 1LL;
          }
          else if ( (v66 & 3) == 2 )
          {
            *a4 = 2LL;
            v67 = 2LL;
          }
        }
        if ( (v66 & 4) != 0 )
          *a4 = v67 | 4;
        v65 = v13 >> 28;
        goto LABEL_185;
      }
      v59 = v58 - 2;
      if ( v59 )
      {
        v60 = v59 - 1;
        if ( v60 )
        {
          if ( v60 != 1 || a5 != 16 )
            return (unsigned int)-1073741811;
          v61 = v11 >> 44;
          v62 = 0LL;
          v63 = 0LL;
          *(_OWORD *)a4 = 0LL;
          if ( (v61 & 3) == 0 )
            goto LABEL_181;
          if ( (v61 & 3) != 1 )
          {
            if ( (v61 & 3) == 2 )
            {
              *a4 = 2LL;
              v63 = 2LL;
              goto LABEL_181;
            }
            if ( (v61 & 3) != 3 )
            {
LABEL_181:
              if ( (v61 & 4) != 0 )
                *a4 = v63 | 4;
              v64 = v12 >> 4;
LABEL_184:
              v65 = v64;
LABEL_185:
              if ( (v65 & 3) != 0 )
              {
                if ( (v65 & 3) == 1 )
                {
                  a4[1] = 1LL;
                  v9 = 1LL;
                }
                else if ( (v65 & 3) == 2 )
                {
                  a4[1] &= ~1uLL;
                  a4[1] |= 2uLL;
                  v9 = a4[1];
                }
              }
              else
              {
                a4[1] = 0LL;
              }
              if ( (v65 & 4) != 0 )
                a4[1] = v9 | 4;
              return inited;
            }
            v62 = 8LL;
          }
          v63 = v62 | 1;
          *a4 = v62 | 1;
          goto LABEL_181;
        }
        if ( a5 != 16 )
          return (unsigned int)-1073741811;
        v68 = 0LL;
        v69 = 0LL;
        *(_OWORD *)a4 = 0LL;
        if ( (v11 & 0x30000000000LL) != 0 )
        {
          switch ( BYTE5(v11) & 3 )
          {
            case 1:
LABEL_218:
              v69 = v68 | 1;
              *a4 = v68 | 1;
              break;
            case 2:
              *a4 = 2LL;
              v69 = 2LL;
              break;
            case 3:
              v68 = 8LL;
              goto LABEL_218;
          }
        }
        if ( (v11 & 0x40000000000LL) != 0 )
          *a4 = v69 | 4;
        v64 = v12 >> 8;
        goto LABEL_184;
      }
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v55 = HIDWORD(v11);
    }
    else
    {
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v55 = v11 >> 24;
    }
LABEL_156:
    v54 = v55;
    *a4 = 0LL;
    if ( (v55 & 3) != 0 )
    {
      if ( (v55 & 3) == 1 )
      {
        *a4 = 1LL;
        v9 = 1LL;
        goto LABEL_136;
      }
      if ( (v55 & 3) == 2 )
        goto LABEL_159;
    }
    goto LABEL_136;
  }
  v14 = a2 - 10;
  if ( !v14 )
  {
    if ( a5 == 24 )
    {
      *(_OWORD *)a4 = 0LL;
      a4[2] = 0LL;
      v33 = 0LL;
      if ( ((v11 >> 52) & 3) != 0 )
      {
        if ( ((v11 >> 52) & 3) == 1 )
        {
          *a4 = 1LL;
          v33 = 1LL;
        }
        else if ( ((v11 >> 52) & 3) == 2 )
        {
          *a4 = 2LL;
          v33 = 2LL;
        }
      }
      if ( ((v11 >> 52) & 4) != 0 )
        *a4 = v33 | 4;
      v34 = 0LL;
      if ( (v11 & 0x300000000000000LL) != 0 )
      {
        if ( (HIBYTE(v11) & 3) == 1 )
        {
          a4[1] = 1LL;
          v34 = 1LL;
        }
        else if ( (HIBYTE(v11) & 3) == 2 )
        {
          a4[1] &= ~1uLL;
          a4[1] |= 2uLL;
          v34 = a4[1];
        }
      }
      else
      {
        a4[1] = 0LL;
      }
      if ( (v11 & 0x400000000000000LL) != 0 )
        a4[1] = v34 | 4;
      v52 = v11 >> 60;
      if ( (v52 & 3) != 0 )
      {
        if ( (v52 & 3) == 1 )
        {
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
        }
        else if ( (v52 & 3) == 2 )
        {
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
        }
      }
      else
      {
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      v25 = (v52 & 4) == 0;
      goto LABEL_30;
    }
    return (unsigned int)-1073741811;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            if ( a5 == 24 )
            {
              v20 = v12 >> 60;
              v21 = 0LL;
              v22 = 0LL;
              *(_OWORD *)a4 = 0LL;
              a4[2] = 0LL;
              if ( (v20 & 3) != 0 )
              {
                if ( (v20 & 3) != 1 )
                {
                  if ( (v20 & 3) == 2 )
                  {
                    *a4 = 2LL;
                    v22 = 2LL;
                    goto LABEL_19;
                  }
                  if ( (v20 & 3) != 3 )
                    goto LABEL_19;
                  v21 = 8LL;
                }
                v22 = v21 | 1;
                *a4 = v21 | 1;
              }
LABEL_19:
              if ( (v20 & 4) != 0 )
                *a4 = v22 | 4;
              v23 = 0LL;
              if ( (v13 & 3) != 0 )
              {
                if ( (v13 & 3) == 1 )
                {
                  a4[1] = 1LL;
                  v23 = 1LL;
                }
                else if ( (v13 & 3) == 2 )
                {
                  a4[1] &= ~1uLL;
                  a4[1] |= 2uLL;
                  v23 = a4[1];
                }
              }
              else
              {
                a4[1] = 0LL;
              }
              if ( (v13 & 4) != 0 )
                a4[1] = v23 | 4;
              v24 = v13 >> 4;
              if ( (v24 & 3) == 0 )
              {
LABEL_28:
                a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
LABEL_29:
                v25 = (v24 & 4) == 0;
LABEL_30:
                if ( !v25 )
                  a4[2] |= 4uLL;
                return inited;
              }
              if ( (v24 & 3) != 1 )
              {
                if ( (v24 & 3) == 2 )
                {
                  a4[2] &= ~1uLL;
                  a4[2] |= 2uLL;
                  goto LABEL_29;
                }
                if ( (v24 & 3) != 3 )
                  goto LABEL_29;
                a4[2] |= 8uLL;
              }
LABEL_245:
              a4[2] &= ~2uLL;
              a4[2] |= 1uLL;
              goto LABEL_29;
            }
            return (unsigned int)-1073741811;
          }
          v50 = v19 - 1;
          if ( v50 )
          {
            if ( v50 != 1 || a5 != 8 )
              return (unsigned int)-1073741811;
            v51 = v13 >> 12;
          }
          else
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v51 = v13 >> 20;
          }
          LOBYTE(v11) = v51;
          *a4 = 0LL;
          switch ( v51 & 3 )
          {
            case 0uLL:
              goto LABEL_113;
            case 1uLL:
              *a4 = 1LL;
              v9 = 1LL;
              goto LABEL_113;
            case 2uLL:
              goto LABEL_124;
          }
          goto LABEL_113;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v55 = v11 >> 12;
        goto LABEL_156;
      }
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v53 = v11 >> 4;
LABEL_135:
      v54 = v53;
      *a4 = 0LL;
      if ( (v53 & 3) == 0 )
        goto LABEL_136;
      if ( (v53 & 3) != 1 )
      {
        if ( (v53 & 3) == 2 )
        {
LABEL_159:
          *a4 = 2LL;
          v9 = 2LL;
          goto LABEL_136;
        }
        if ( (v53 & 3) != 3 )
        {
LABEL_136:
          v48 = (v54 & 4) == 0;
LABEL_114:
          if ( !v48 )
            *a4 = v9 | 4;
          return inited;
        }
        v9 = 8LL;
      }
      v9 |= 1uLL;
      *a4 = v9;
      goto LABEL_136;
    }
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    LOBYTE(v11) = v12 >> 36;
    v46 = v11;
LABEL_112:
    *a4 = 0LL;
    v47 = v46 & 3;
    if ( v47 )
    {
      v70 = v47 - 1;
      if ( v70 )
      {
        v71 = v70 - 1;
        if ( !v71 )
        {
LABEL_124:
          *a4 = 2LL;
          v9 = 2LL;
          goto LABEL_113;
        }
        if ( v71 != 1 )
          goto LABEL_113;
        v9 = 8LL;
      }
      v9 |= 1uLL;
      *a4 = v9;
    }
LABEL_113:
    v48 = (v11 & 4) == 0;
    goto LABEL_114;
  }
  if ( a5 != 1072 )
    return (unsigned int)-1073741811;
  memset_thunk_772440563353939046(a4, 0, 0x430uLL);
  v35 = 0LL;
  if ( (v12 & 0x30000) != 0 )
  {
    if ( (BYTE2(v12) & 3) == 1 )
    {
      a4[3] = 1LL;
      v35 = 1LL;
    }
    else if ( (BYTE2(v12) & 3) == 2 )
    {
      a4[3] = 2LL;
      v35 = 2LL;
    }
  }
  if ( (v12 & 0x40000) != 0 )
    a4[3] = v35 | 4;
  v36 = 0LL;
  if ( ((v12 >> 20) & 3) != 0 )
  {
    if ( ((v12 >> 20) & 3) == 1 )
    {
      a4[4] = 1LL;
      v36 = 1LL;
    }
    else if ( ((v12 >> 20) & 3) == 2 )
    {
      a4[4] &= ~1uLL;
      a4[4] |= 2uLL;
      v36 = a4[4];
    }
  }
  else
  {
    a4[4] = 0LL;
  }
  if ( ((v12 >> 20) & 4) != 0 )
    a4[4] = v36 | 4;
  if ( (v12 & 0x3000000) != 0 )
  {
    if ( (BYTE3(v12) & 3) == 1 )
    {
      a4[5] &= ~2uLL;
      a4[5] |= 1uLL;
    }
    else if ( (BYTE3(v12) & 3) == 2 )
    {
      a4[5] &= ~1uLL;
      a4[5] |= 2uLL;
    }
  }
  else
  {
    a4[5] &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v12 & 0x4000000) != 0 )
    a4[5] |= 4uLL;
  if ( ((v12 >> 28) & 3) != 0 )
  {
    if ( ((v12 >> 28) & 3) == 1 )
    {
      *a4 &= ~2uLL;
      *a4 |= 1uLL;
    }
    else if ( ((v12 >> 28) & 3) == 2 )
    {
      *a4 &= ~1uLL;
      *a4 |= 2uLL;
    }
  }
  else
  {
    *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( ((v12 >> 28) & 4) != 0 )
    *a4 |= 4uLL;
  if ( (v12 & 0x300000000LL) != 0 )
  {
    if ( (BYTE4(v12) & 3) == 1 )
    {
      a4[1] &= ~2uLL;
      a4[1] |= 1uLL;
    }
    else if ( (BYTE4(v12) & 3) == 2 )
    {
      a4[1] &= ~1uLL;
      a4[1] |= 2uLL;
    }
  }
  else
  {
    a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v12 & 0x400000000LL) != 0 )
    a4[1] |= 4uLL;
  if ( (v12 & 0x30000000000LL) != 0 )
  {
    if ( (BYTE5(v12) & 3) == 1 )
    {
      a4[2] &= ~2uLL;
      a4[2] |= 1uLL;
    }
    else if ( (BYTE5(v12) & 3) == 2 )
    {
      a4[2] &= ~1uLL;
      a4[2] |= 2uLL;
    }
  }
  else
  {
    a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v12 & 0x40000000000LL) != 0 )
    a4[2] |= 4uLL;
  v37 = a4 + 6;
  v38 = v83;
  do
  {
    v39 = v38[1];
    *v37 = *v38;
    v40 = v38[2];
    v37[1] = v39;
    v41 = v38[3];
    v37[2] = v40;
    v42 = v38[4];
    v37[3] = v41;
    v43 = v38[5];
    v37[4] = v42;
    v44 = v38[6];
    v37[5] = v43;
    v45 = v38[7];
    v38 += 8;
    v37[6] = v44;
    v37 += 8;
    *(v37 - 1) = v45;
    --v6;
  }
  while ( v6 );
  return inited;
}
