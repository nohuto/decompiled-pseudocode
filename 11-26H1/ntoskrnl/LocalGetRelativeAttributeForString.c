/*
 * XREFs of LocalGetRelativeAttributeForString @ 0x140B56E2C
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     iswspace @ 0x1405391A0 (iswspace.c)
 *     wcstoxq @ 0x14053B040 (wcstoxq.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     GetDigitFromChar @ 0x14081EBB8 (GetDigitFromChar.c)
 *     GetFlags @ 0x14081EC34 (GetFlags.c)
 *     GetValueType @ 0x14081ED44 (GetValueType.c)
 *     IsLegalAttributeChar2 @ 0x14081EEEC (IsLegalAttributeChar2.c)
 *     LocalGetSidForString @ 0x140901030 (LocalGetSidForString.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     DecodeAttributeName @ 0x140A714FC (DecodeAttributeName.c)
 */

__int64 __fastcall LocalGetRelativeAttributeForString(
        _WORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        __int16 a7,
        char a8)
{
  _WORD *v8; // r14
  _DWORD *v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // r13d
  bool v12; // zf
  unsigned int ValueType; // edi
  wint_t *i; // rdi
  unsigned __int16 *j; // rbx
  __int16 v16; // cx
  wint_t *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // r15d
  wint_t *k; // rbx
  wint_t *v22; // rsi
  PWSTR v23; // rsi
  wint_t *v24; // rbx
  wint_t v25; // ax
  wint_t ii; // cx
  unsigned int v27; // r8d
  wint_t v28; // r9
  unsigned int v29; // eax
  wint_t jj; // cx
  unsigned __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // ebx
  unsigned int v34; // ebx
  _WORD *v35; // rax
  wint_t v36; // ax
  wint_t n; // cx
  PSID v38; // r14
  wint_t *v39; // rbx
  ULONG v40; // eax
  unsigned int v41; // ecx
  wint_t v42; // ax
  _WORD *v43; // rbx
  __int16 v44; // ax
  wint_t *v45; // rbx
  unsigned __int64 v46; // rax
  unsigned int v47; // eax
  __int16 v48; // r14
  wint_t v49; // ax
  unsigned __int64 v50; // rax
  wint_t *v51; // rbx
  unsigned __int64 v52; // rax
  unsigned int v53; // ecx
  wint_t v54; // ax
  unsigned __int64 v55; // rax
  PWSTR v56; // rbx
  wint_t m; // cx
  unsigned __int64 v58; // rax
  void *v59; // rdx
  size_t v60; // r8
  int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // r13d
  unsigned __int64 *v64; // r15
  wint_t v65; // ax
  __int16 mm; // cx
  int v67; // r8d
  wint_t *v68; // r9
  unsigned int v69; // edx
  __int16 *v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r10
  __int64 v74; // r11
  _BYTE *v75; // r11
  wint_t v76; // ax
  wint_t nn; // cx
  PSID v78; // rbx
  size_t v79; // r8
  unsigned int v80; // eax
  wint_t v81; // ax
  wint_t kk; // cx
  WCHAR v83; // ax
  WCHAR *v84; // r14
  unsigned int v85; // ecx
  size_t v86; // rbx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  _QWORD *v89; // rcx
  _DWORD *v90; // [rsp+40h] [rbp-40h]
  int v91; // [rsp+48h] [rbp-38h]
  int v92; // [rsp+4Ch] [rbp-34h] BYREF
  PWSTR EndPointer; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v94; // [rsp+58h] [rbp-28h]
  int v95; // [rsp+5Ch] [rbp-24h] BYREF
  PSID Sid; // [rsp+60h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v98; // [rsp+70h] [rbp-10h]
  __int64 v99; // [rsp+78h] [rbp-8h]
  char v100; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v101; // [rsp+C8h] [rbp+48h]
  _QWORD *v102; // [rsp+D0h] [rbp+50h]
  unsigned int *v103; // [rsp+D8h] [rbp+58h]

  v103 = a4;
  v102 = a3;
  v101 = a2;
  v8 = 0LL;
  EndPointer = 0LL;
  v9 = 0LL;
  v90 = 0LL;
  v10 = 0;
  Src = 0LL;
  v11 = 0;
  a7 = 0;
  v95 = 0;
  v91 = 0;
  v100 = 0;
  a8 = 0;
  a6 = 0;
  Sid = 0LL;
  v92 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    ValueType = 87;
    goto LABEL_25;
  }
  v12 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v12 )
    return 1336;
  for ( i = a1 + 1; iswspace(*i); ++i )
    ;
  if ( *i != 34 )
    return 1336;
  for ( j = i + 1; IsLegalAttributeChar2(*j); ++j )
  {
    if ( !v16 )
      return 1336;
    if ( v10 + 1 < v10 )
      return 534;
    ++v10;
  }
  if ( v16 != 34 || !v10 )
    return 1336;
  v17 = j + 1;
  ValueType = DecodeAttributeName((__int64)(i + 1), 2 * v10, &Src);
  if ( ValueType )
    goto LABEL_24;
  v18 = -1LL;
  do
    ++v18;
  while ( *((_WORD *)Src + v18) );
  v98 = v18 + 1;
  v99 = (unsigned int)(2 * (v18 + 1));
  v19 = v99 + 20;
  LODWORD(a5) = v99 + 20;
  if ( (unsigned int)v99 < 0xFFFFFFEC )
  {
    while ( iswspace(*v17) )
      ++v17;
    if ( *v17 != 44 )
      goto LABEL_34;
    do
      ++v17;
    while ( iswspace(*v17) );
    ValueType = GetValueType(v17, &EndPointer, &a7);
    if ( ValueType )
      goto LABEL_24;
    for ( k = EndPointer; iswspace(*k); ++k )
      ;
    if ( *k != 44 )
      goto LABEL_34;
    do
      ++k;
    while ( iswspace(*k) );
    ValueType = GetFlags(k, &EndPointer, &v95);
    if ( ValueType )
      goto LABEL_24;
    v22 = EndPointer;
    if ( (v95 & 0xFFC0) != 0 )
      goto LABEL_34;
    while ( iswspace(*v22) )
      ++v22;
    if ( *v22 != 44 )
      goto LABEL_34;
    v23 = v22 + 1;
    v24 = v23;
    if ( a7 == 1 )
    {
      while ( 1 )
      {
        v54 = *v24;
        if ( !*v24 )
          break;
        v92 = 0;
        v55 = wcstoxq(0LL, v24, &EndPointer, 0, 0, &v92);
        if ( EndPointer == v24 && !v55 )
          goto LABEL_141;
        if ( v92 )
          goto LABEL_146;
        v56 = EndPointer;
        ++v11;
        for ( m = *EndPointer; iswspace(m); m = *v56 )
          ++v56;
        v54 = *v56;
        if ( *v56 != 44 )
          break;
        v24 = v56 + 1;
      }
      if ( v54 != 41 )
        goto LABEL_141;
      v58 = 8LL * v11;
      if ( v58 > 0xFFFFFFFF || (v53 = v58 + v19, (unsigned int)v58 + v19 < v19) )
      {
LABEL_146:
        ValueType = 534;
        goto LABEL_142;
      }
      goto LABEL_129;
    }
    if ( a7 != 2 )
    {
      if ( a7 == 3 )
      {
        while ( 1 )
        {
          v42 = *v24;
          if ( !*v24 )
            break;
          if ( iswspace(v42) )
          {
            do
              ++v24;
            while ( iswspace(*v24) );
            v19 = a5;
          }
          if ( *v24 != 34 )
            goto LABEL_91;
          v43 = v24 + 1;
          while ( 1 )
          {
            v44 = *v43;
            if ( *v43 == 34 || !v44 )
              break;
            ++v43;
            if ( (int)v8 + 1 < (unsigned int)v8 )
              goto LABEL_130;
            LODWORD(v8) = (_DWORD)v8 + 1;
          }
          if ( (int)v8 + 1 < (unsigned int)v8 )
            goto LABEL_130;
          LODWORD(v8) = (_DWORD)v8 + 1;
          if ( v44 != 34 )
            goto LABEL_91;
          v45 = v43 + 1;
          ++v11;
          if ( iswspace(*v45) )
          {
            do
              ++v45;
            while ( iswspace(*v45) );
            v19 = a5;
          }
          v42 = *v45;
          if ( *v45 != 44 )
            break;
          v24 = v45 + 1;
        }
        if ( v42 == 41 )
        {
          v46 = 2LL * (unsigned int)v8;
          if ( v46 <= 0xFFFFFFFF )
          {
            v47 = v19 + v46;
            if ( v47 >= v19 )
            {
              v19 = v47;
              goto LABEL_69;
            }
          }
          goto LABEL_130;
        }
LABEL_91:
        ValueType = 1336;
LABEL_131:
        v9 = v90;
        goto LABEL_25;
      }
      if ( a7 == 5 )
      {
        while ( 1 )
        {
          v36 = *v24;
          if ( !*v24 )
            break;
          for ( n = *v24; iswspace(n); n = *v24 )
            ++v24;
          ValueType = LocalGetSidForString(v24, &Sid, &EndPointer, &v100);
          if ( ValueType )
            goto LABEL_131;
          v38 = Sid;
          if ( !Sid )
            goto LABEL_75;
          v39 = EndPointer;
          ++v11;
          v40 = RtlLengthSid(Sid);
          v41 = v40 + v19;
          if ( v40 + v19 < v19 )
            goto LABEL_130;
          v19 = v41 + 4;
          if ( v41 + 4 < v41 )
            goto LABEL_130;
          if ( v100 )
          {
            SddlpFree(v38);
            Sid = 0LL;
          }
          while ( iswspace(*v39) )
            ++v39;
          v36 = *v39;
          if ( *v39 != 44 )
            break;
          v24 = v39 + 1;
        }
        if ( v36 == 41 )
          goto LABEL_69;
        goto LABEL_91;
      }
      if ( a7 != 6 )
      {
        if ( a7 == 16 )
        {
          while ( 1 )
          {
            v25 = *v24;
            if ( !*v24 )
              break;
            for ( ii = *v24; iswspace(ii); ii = *v24 )
              ++v24;
            while ( GetDigitFromChar(*v24, &a5) )
            {
              ++v24;
              if ( !v27 )
                goto LABEL_146;
            }
            ++v11;
            v29 = (v27 >> 1) + v19;
            if ( v29 < v19 )
              goto LABEL_146;
            v19 = v29 + 4;
            if ( v29 + 4 < v29 )
              goto LABEL_146;
            for ( jj = v28; iswspace(jj); jj = *v24 )
              ++v24;
            v25 = *v24;
            if ( *v24 != 44 )
              break;
            ++v24;
          }
          if ( v25 != 41 )
            goto LABEL_141;
LABEL_69:
          v31 = 4LL * (v11 - 1);
          if ( v31 <= 0xFFFFFFFF )
          {
            v32 = v31 + v19;
            if ( (unsigned int)v31 + v19 >= v19 )
            {
              v33 = v32 + 3;
              if ( v32 + 3 < v32 )
              {
                v33 = -1;
                ValueType = 534;
              }
              v34 = v33 & 0xFFFFFFFC;
              v94 = v34;
              v35 = SddlpAlloc(v34);
              v90 = v35;
              v8 = v35;
              if ( !v35 )
              {
                ValueType = 8;
LABEL_75:
                v9 = 0LL;
                goto LABEL_25;
              }
              v59 = Src;
              v60 = 2LL * v98;
              v35[2] = a7;
              v61 = v95;
              v8[3] = 0;
              *((_DWORD *)v8 + 3) = v11;
              *((_DWORD *)v8 + 2) = v61;
              v62 = 4 * v11 + 16;
              v63 = v62 + v99;
              *(_DWORD *)v8 = v62;
              memmove((char *)v8 + v62, v59, v60);
              v64 = (unsigned __int64 *)((char *)v8 + v63);
              if ( a7 == 1 )
              {
                while ( 1 )
                {
                  v65 = *v23;
                  if ( !*v23 )
                    goto LABEL_223;
                  v92 = 0;
                  v88 = wcstoxq(0LL, v23, &EndPointer, 0, 0, &v92);
                  if ( EndPointer == v23 && !v88 )
                    goto LABEL_141;
                  if ( v92 )
                    goto LABEL_146;
                  *(_DWORD *)&v8[2 * v91 + 8] = v63;
                  *v64 = v88;
                  v63 += 8;
                  v23 = EndPointer;
                  v64 = (unsigned __int64 *)((char *)v8 + v63);
                  ++v91;
                  if ( iswspace(*EndPointer) )
                  {
                    do
                      ++v23;
                    while ( iswspace(*v23) );
                    v34 = v94;
                  }
                  v65 = *v23;
                  if ( *v23 != 44 )
                    goto LABEL_223;
                  ++v23;
                }
              }
              if ( a7 == 2 )
                goto LABEL_205;
              if ( a7 == 3 )
              {
                v9 = v8;
                while ( 1 )
                {
                  v81 = *v23;
                  if ( !*v23 )
                    break;
                  for ( kk = *v23; iswspace(kk); kk = *v23 )
                    ++v23;
                  if ( *v23 != 34 )
                    goto LABEL_204;
                  v83 = v23[1];
                  v84 = v23 + 1;
                  v85 = 0;
                  while ( v83 != 34 && v83 )
                  {
                    ++v84;
                    ++v85;
                    v83 = *v84;
                  }
                  if ( *v84 != 34 )
                    goto LABEL_204;
                  v9[v91 + 4] = v63;
                  v63 += 2 * v85 + 2;
                  v86 = 2LL * v85;
                  memmove(v64, v23 + 1, v86);
                  v23 = v84 + 1;
                  *(_WORD *)((char *)v64 + v86) = 0;
                  v9 = v90;
                  v64 = (unsigned __int64 *)((char *)v90 + v63);
                  ++v91;
                  while ( iswspace(*v23) )
                    ++v23;
                  v81 = *v23;
                  if ( *v23 != 44 )
                    break;
                  ++v23;
                }
                if ( v81 != 41 )
                {
LABEL_204:
                  ValueType = 1336;
                  goto LABEL_25;
                }
                v8 = v90;
              }
              else
              {
                if ( a7 != 5 )
                {
                  if ( a7 == 6 )
                  {
LABEL_205:
                    while ( 1 )
                    {
                      v65 = *v23;
                      if ( !*v23 )
                        break;
                      v92 = 0;
                      v87 = wcstoxq(0LL, v23, &EndPointer, 0, 1, &v92);
                      if ( EndPointer == v23 && !v87 )
                        goto LABEL_141;
                      if ( v92 )
                        goto LABEL_146;
                      *(_DWORD *)&v8[2 * v91 + 8] = v63;
                      *v64 = v87;
                      v63 += 8;
                      v23 = EndPointer;
                      v64 = (unsigned __int64 *)((char *)v8 + v63);
                      ++v91;
                      if ( iswspace(*EndPointer) )
                      {
                        do
                          ++v23;
                        while ( iswspace(*v23) );
                        v34 = v94;
                      }
                      v65 = *v23;
                      if ( *v23 != 44 )
                        break;
                      ++v23;
                    }
                  }
                  else
                  {
                    if ( a7 != 16 )
                      goto LABEL_141;
                    while ( 1 )
                    {
                      v65 = *v23;
                      if ( !*v23 )
                        break;
                      if ( iswspace(v65) )
                      {
                        do
                          ++v23;
                        while ( iswspace(*v23) );
                        v34 = v94;
                      }
                      for ( mm = *v23; GetDigitFromChar(mm, &a5); mm = v68[1] )
                        ;
                      v69 = (unsigned int)(v67 + 1) >> 1;
                      v70 = (__int16 *)(v68 - 1);
                      *(_DWORD *)&v8[2 * v91 + 8] = v63;
                      v63 += v69 + 4;
                      *(_DWORD *)v64 = v69;
                      while ( v70 > (__int16 *)v23 )
                      {
                        if ( !GetDigitFromChar(*v70, &a8) || !GetDigitFromChar(*(_WORD *)(v71 - 2), &a6) )
                          goto LABEL_141;
                        v70 = (__int16 *)(v72 - 4);
                        *(_BYTE *)(v73 + v74) = a8 | (16 * a6);
                      }
                      if ( v70 == (__int16 *)v23 )
                      {
                        if ( !GetDigitFromChar(*v70, &a8) )
                          goto LABEL_141;
                        *v75 = a8;
                      }
                      v23 = v68;
                      ++v91;
                      v64 = (unsigned __int64 *)((char *)v8 + v63);
                      if ( iswspace(*v68) )
                      {
                        do
                          ++v23;
                        while ( iswspace(*v23) );
                        v34 = v94;
                      }
                      v65 = *v23;
                      if ( *v23 != 44 )
                        break;
                      ++v23;
                    }
                  }
LABEL_223:
                  if ( v65 != 41 )
                    goto LABEL_141;
                  goto LABEL_227;
                }
                while ( 1 )
                {
                  v76 = *v23;
                  if ( !*v23 )
                    break;
                  for ( nn = *v23; iswspace(nn); nn = *v23 )
                    ++v23;
                  ValueType = LocalGetSidForString(v23, &Sid, &EndPointer, &v100);
                  if ( ValueType )
                    goto LABEL_142;
                  v78 = Sid;
                  if ( !Sid )
                    goto LABEL_142;
                  v79 = RtlLengthSid(Sid);
                  *(_DWORD *)&v8[2 * v91 + 8] = v63;
                  v80 = v63 + 4;
                  v63 += 4 + v79;
                  *(_DWORD *)v64 = v79;
                  memmove((char *)v8 + v80, v78, v79);
                  ++v91;
                  v23 = EndPointer;
                  v64 = (unsigned __int64 *)((char *)v8 + v63);
                  if ( v100 )
                  {
                    SddlpFree(v78);
                    Sid = 0LL;
                  }
                  while ( iswspace(*v23) )
                    ++v23;
                  v76 = *v23;
                  if ( *v23 != 44 )
                    break;
                  ++v23;
                }
                if ( v76 != 41 )
                {
LABEL_141:
                  ValueType = 1336;
LABEL_142:
                  v9 = v8;
                  goto LABEL_25;
                }
              }
              v34 = v94;
LABEL_227:
              v89 = v101;
              *v102 = v8;
              *v103 = v34;
              *v89 = v23 + 1;
              goto LABEL_131;
            }
          }
          goto LABEL_130;
        }
LABEL_34:
        ValueType = 1336;
        goto LABEL_24;
      }
    }
    v48 = a7;
    while ( 1 )
    {
      v49 = *v24;
      if ( !*v24 )
        break;
      v92 = 0;
      v50 = wcstoxq(0LL, v24, &EndPointer, 0, 1, &v92);
      if ( EndPointer == v24 && !v50 )
      {
        ValueType = 1336;
        v9 = 0LL;
        goto LABEL_25;
      }
      if ( v92 )
        goto LABEL_130;
      if ( v48 == 6 && v50 > 1 )
        goto LABEL_91;
      v51 = EndPointer;
      ++v11;
      if ( iswspace(*EndPointer) )
      {
        do
          ++v51;
        while ( iswspace(*v51) );
        v48 = a7;
      }
      v49 = *v51;
      if ( *v51 != 44 )
        break;
      v24 = v51 + 1;
    }
    if ( v49 == 41 )
    {
      v52 = 8LL * v11;
      if ( v52 <= 0xFFFFFFFF )
      {
        v53 = v52 + v19;
        if ( (unsigned int)v52 + v19 >= v19 )
        {
LABEL_129:
          v19 = v53;
          goto LABEL_69;
        }
      }
LABEL_130:
      ValueType = 534;
      goto LABEL_131;
    }
    goto LABEL_91;
  }
  ValueType = 534;
LABEL_24:
  v9 = 0LL;
LABEL_25:
  if ( Src )
    SddlpFree(Src);
  if ( ValueType && v9 )
    SddlpFree(v9);
  return ValueType;
}
