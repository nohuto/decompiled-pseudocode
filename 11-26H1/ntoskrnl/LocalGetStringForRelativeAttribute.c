/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x140A6CA38
 * Callers:
 *     LocalGetAceCondition @ 0x140A6E49C (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     _i64tow_s @ 0x14053D940 (_i64tow_s.c)
 *     _ui64tow_s @ 0x14053D9E0 (_ui64tow_s.c)
 *     _ultow_s @ 0x14053DA00 (_ultow_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EncodeAttributeName @ 0x14081EA38 (EncodeAttributeName.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     LocalGetStringForSid @ 0x140A6F670 (LocalGetStringForSid.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7)
{
  unsigned int v9; // esi
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // rax
  unsigned __int16 *v13; // r11
  unsigned int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // rax
  int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int k; // edx
  __int64 v23; // r8
  int v24; // ecx
  unsigned int v25; // r8d
  unsigned __int64 v26; // rax
  unsigned int j; // r12d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  __int64 v30; // rcx
  unsigned int v31; // edx
  _BYTE *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r11d
  unsigned int n; // r12d
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int i; // r12d
  __int64 v40; // rcx
  __int64 v41; // rax
  _DWORD *v42; // rax
  unsigned __int64 v43; // rbx
  _DWORD *v44; // rdi
  void *v45; // rdx
  size_t v46; // r8
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  char *v49; // rdi
  size_t v50; // rbx
  char *v51; // rdi
  int v52; // r15d
  int v53; // r15d
  int v54; // r15d
  int v55; // r15d
  int v56; // r15d
  __int64 v57; // r12
  unsigned int *v58; // r8
  __int64 v59; // rax
  unsigned int v60; // ecx
  unsigned __int8 *v61; // rdx
  __int64 v62; // r9
  unsigned int v63; // ecx
  unsigned int m; // r15d
  char *v65; // rdi
  __int64 v66; // rax
  size_t v67; // rbx
  __int64 v68; // r12
  unsigned int *v69; // r15
  _WORD *v70; // rdx
  __int64 v71; // rax
  size_t v72; // rbx
  __int64 v73; // r12
  unsigned int *v74; // r15
  char *v75; // rdi
  __int64 v76; // rax
  size_t v77; // rbx
  __int64 v78; // r12
  unsigned int *v79; // r15
  char *v80; // rdi
  __int64 v81; // rax
  size_t v82; // rbx
  _QWORD *v83; // rcx
  size_t v84; // rax
  int v86; // [rsp+20h] [rbp-E0h]
  unsigned int v87; // [rsp+30h] [rbp-D0h]
  size_t pcbLength; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int StringForSid; // [rsp+48h] [rbp-B8h]
  __int64 v90; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h]
  __int64 v93; // [rsp+68h] [rbp-98h]
  __int64 v94; // [rsp+70h] [rbp-90h]
  wchar_t v95[72]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t DstBuf[40]; // [rsp+110h] [rbp+10h] BYREF

  v93 = a3;
  v94 = a7;
  Src = 0LL;
  memset_0(DstBuf, 0, 0x46uLL);
  memset_0(v95, 0, 0x8CuLL);
  pcbLength = 0LL;
  if ( a1 && a2 && a7 )
  {
    if ( a2 < 0x14 )
      return 1336;
    v10 = a1[3];
    v11 = *((unsigned __int16 *)a1 + 2);
    v87 = v10;
    if ( !(_DWORD)v10 )
      return 1336;
    ultow_s(a1[2], DstBuf, 0x23uLL, 16);
    v12 = *a1;
    if ( a2 < (unsigned int)v12
      || a2 - (unsigned int)v12 < 4
      || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v12), a2 - (unsigned int)v12, &pcbLength) < 0
      || !(_DWORD)pcbLength )
    {
      return 1336;
    }
    v14 = EncodeAttributeName(v13, pcbLength, (__int64 *)&Src);
    v15 = 0;
    StringForSid = v14;
    v9 = v14;
    if ( !v14 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)Src + v16) );
      v17 = 2 * v16;
      v90 = v10;
      LODWORD(Size) = 2 * v16;
      if ( (unsigned __int64)(2 * v10) > 0xFFFFFFFF )
        goto LABEL_129;
      v18 = 2 * v10 + 24;
      if ( v18 < 0x18 )
        goto LABEL_129;
      v19 = v18 + v17;
      if ( v19 < v18 )
        goto LABEL_129;
      v20 = -1LL;
      do
        ++v20;
      while ( DstBuf[v20] );
      v21 = v19 + 2 * v20;
      if ( v21 < v19 || (unsigned __int64)(4 * v10) > 0xFFFFFFFF )
      {
LABEL_129:
        v9 = 534;
        goto LABEL_131;
      }
      if ( a2 - 16 < 4 * (int)v10 )
      {
LABEL_28:
        v9 = 1336;
        goto LABEL_131;
      }
      if ( v11 == 1 )
      {
        for ( i = 0; i < v87; ++i )
        {
          v40 = a1[i + 4];
          if ( a2 < (unsigned int)v40 || a2 - (unsigned int)v40 < 8 )
            goto LABEL_28;
          i64tow_s(*(_QWORD *)((char *)a1 + v40), v95, 0x46uLL, 10);
          v41 = -1LL;
          do
            ++v41;
          while ( v95[v41] );
          if ( v21 + 2 * (_DWORD)v41 < v21 )
            goto LABEL_129;
          v21 += 2 * v41;
        }
        goto LABEL_73;
      }
      if ( v11 != 2 )
      {
        if ( v11 == 3 )
        {
          while ( v15 < (unsigned int)v10 )
          {
            v34 = a1[v15 + 4];
            if ( a2 < (unsigned int)v34
              || a2 - (unsigned int)v34 < 2
              || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v34), a2 - (unsigned int)v34, &pcbLength) < 0 )
            {
              goto LABEL_28;
            }
            if ( v21 + (_DWORD)pcbLength + 4 < v21 )
              goto LABEL_129;
            v21 += pcbLength + 4;
            v15 = v35 + 1;
          }
          goto LABEL_74;
        }
        if ( v11 == 5 )
        {
          for ( j = 0; j < v87; ++j )
          {
            v28 = a1[j + 4];
            if ( a2 < (unsigned int)v28 )
              goto LABEL_28;
            if ( a2 - (unsigned int)v28 < 4 )
              goto LABEL_28;
            v29 = *(unsigned int *)((char *)a1 + v28);
            v30 = (unsigned int)(v28 + 4);
            if ( !v29 )
              goto LABEL_28;
            v31 = a2 - v30;
            if ( a2 - (unsigned int)v30 < v29 )
              goto LABEL_28;
            if ( v31 < 8 )
              goto LABEL_28;
            v32 = (char *)a1 + v30;
            if ( !v32[1] || v31 - 8 < 4 * (unsigned __int64)(unsigned __int8)v32[1] )
              goto LABEL_28;
            StringForSid = LocalGetStringForSid(v32, v86, a6);
            v9 = StringForSid;
            if ( StringForSid )
              goto LABEL_131;
            v33 = -1LL;
            do
              ++v33;
            while ( *(_WORD *)(2 * v33) );
            if ( v21 + 2 * (_DWORD)v33 < v21 )
              goto LABEL_129;
            v21 += 2 * v33;
          }
          goto LABEL_73;
        }
        if ( v11 != 6 )
        {
          if ( v11 != 16 )
            goto LABEL_28;
          for ( k = 0; k < (unsigned int)v10; ++k )
          {
            v23 = a1[k + 4];
            if ( a2 < (unsigned int)v23 )
              goto LABEL_28;
            v24 = a2 - v23;
            if ( a2 - (unsigned int)v23 < 4 )
              goto LABEL_28;
            v25 = *(unsigned int *)((char *)a1 + v23);
            if ( v24 - 4 < v25 )
              goto LABEL_28;
            v26 = 4LL * v25;
            if ( v26 > 0xFFFFFFFF || (unsigned int)v26 + v21 < v21 )
              goto LABEL_129;
            v21 += v26;
          }
LABEL_74:
          if ( v21 + 3 >= v21 )
          {
            v42 = (_DWORD *)SddlpAlloc((v21 + 3) & 0xFFFFFFFC);
            pcbLength = (size_t)v42;
            if ( !v42 )
            {
              v9 = 8;
              goto LABEL_131;
            }
            v43 = (unsigned int)Size;
            v44 = v42 + 1;
            v45 = Src;
            v46 = (unsigned int)Size;
            *v42 = 2228264;
            memmove(v42 + 1, v45, v46);
            v47 = v43 >> 1;
            *(_DWORD *)((char *)v44 + 2 * v47) = 2883618;
            switch ( v11 )
            {
              case 1:
                *(_DWORD *)((char *)v44 + 2 * v47 + 4) = 4784212;
                break;
              case 2:
                *(_DWORD *)((char *)v44 + 2 * v47 + 4) = 5570644;
                break;
              case 3:
                *(_DWORD *)((char *)v44 + 2 * v47 + 4) = 5439572;
                break;
              case 5:
                *(_DWORD *)((char *)v44 + 2 * v47 + 4) = 4456532;
                break;
              case 6:
                *(_DWORD *)((char *)v44 + 2 * v47 + 4) = 4325460;
                break;
              default:
                *(_DWORD *)((char *)v44 + 2 * v47 + 4) = 5767252;
                break;
            }
            v48 = -1LL;
            *((_WORD *)v44 + v47 + 4) = 44;
            do
              ++v48;
            while ( DstBuf[v48] );
            *(_DWORD *)((char *)v44 + 2 * v47 + 10) = 7864368;
            v49 = (char *)v44 + 2 * v47 + 14;
            v50 = 2LL * (unsigned int)v48;
            memmove(v49, DstBuf, v50);
            v51 = &v49[v50];
            v52 = v11 - 1;
            if ( !v52 )
            {
              if ( (_DWORD)v10 )
              {
                v78 = v90;
                v79 = a1 + 4;
                do
                {
                  *(_WORD *)v51 = 44;
                  v80 = v51 + 2;
                  i64tow_s(*(_QWORD *)((char *)a1 + *v79), v95, 0x46uLL, 10);
                  v81 = -1LL;
                  do
                    ++v81;
                  while ( v95[v81] );
                  v82 = 2LL * (unsigned int)v81;
                  memmove(v80, v95, v82);
                  v51 = &v80[v82];
                  ++v79;
                  --v78;
                }
                while ( v78 );
              }
              goto LABEL_128;
            }
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( !v54 )
              {
                if ( (_DWORD)v10 )
                {
                  v68 = v90;
                  v69 = a1 + 4;
                  do
                  {
                    *(_DWORD *)v51 = 2228268;
                    v70 = (_WORD *)((char *)a1 + *v69);
                    v71 = -1LL;
                    do
                      ++v71;
                    while ( v70[v71] );
                    v72 = 2LL * (unsigned int)v71;
                    memmove(v51 + 4, v70, v72);
                    *(_WORD *)&v51[v72 + 4] = 34;
                    ++v69;
                    v51 += v72 + 6;
                    --v68;
                  }
                  while ( v68 );
                  v9 = StringForSid;
                }
                goto LABEL_128;
              }
              v55 = v54 - 2;
              if ( !v55 )
              {
                for ( m = 0; m < (unsigned int)v10; ++m )
                {
                  *(_WORD *)v51 = 44;
                  v65 = v51 + 2;
                  v9 = LocalGetStringForSid((char *)a1 + a1[m + 4] + 4, v86, a6);
                  if ( v9 )
                    goto LABEL_84;
                  v66 = -1LL;
                  do
                    ++v66;
                  while ( *(_WORD *)(2 * v66) );
                  v67 = 2LL * (unsigned int)v66;
                  memmove(v65, 0LL, v67);
                  v51 = &v65[v67];
                }
                goto LABEL_128;
              }
              v56 = v55 - 1;
              if ( v56 )
              {
                if ( v56 != 10 )
                {
                  v9 = 1336;
LABEL_84:
                  SddlpFree((void *)pcbLength);
                  goto LABEL_131;
                }
                if ( (_DWORD)v10 )
                {
                  v57 = v90;
                  v58 = a1 + 4;
                  do
                  {
                    *(_WORD *)v51 = 44;
                    v51 += 2;
                    v59 = *v58;
                    v60 = *(unsigned int *)((char *)a1 + v59);
                    v61 = (unsigned __int8 *)a1 + (unsigned int)(v59 + 4);
                    if ( v60 )
                    {
                      v62 = v60;
                      do
                      {
                        v63 = *v61++;
                        *(_WORD *)v51 = a0123456789abcd_0[(unsigned __int64)v63 >> 4];
                        *((_WORD *)v51 + 1) = a0123456789abcd_0[v63 & 0xF];
                        v51 += 4;
                        --v62;
                      }
                      while ( v62 );
                    }
                    ++v58;
                    --v57;
                  }
                  while ( v57 );
                }
                goto LABEL_128;
              }
            }
            if ( (_DWORD)v10 )
            {
              v73 = v90;
              v74 = a1 + 4;
              do
              {
                *(_WORD *)v51 = 44;
                v75 = v51 + 2;
                ui64tow_s(*(_QWORD *)((char *)a1 + *v74), v95, 0x46uLL, 10);
                v76 = -1LL;
                do
                  ++v76;
                while ( v95[v76] );
                v77 = 2LL * (unsigned int)v76;
                memmove(v75, v95, v77);
                v51 = &v75[v77];
                ++v74;
                --v73;
              }
              while ( v73 );
            }
LABEL_128:
            v83 = (_QWORD *)v94;
            v84 = pcbLength;
            *(_DWORD *)v51 = 41;
            *v83 = v84;
            goto LABEL_131;
          }
          goto LABEL_129;
        }
      }
      for ( n = 0; n < v87; ++n )
      {
        v37 = a1[n + 4];
        if ( a2 < (unsigned int)v37 || a2 - (unsigned int)v37 < 8 )
          goto LABEL_28;
        ui64tow_s(*(_QWORD *)((char *)a1 + v37), v95, 0x46uLL, 10);
        v38 = -1LL;
        do
          ++v38;
        while ( v95[v38] );
        if ( v21 + 2 * (_DWORD)v38 < v21 )
          goto LABEL_129;
        v21 += 2 * v38;
      }
LABEL_73:
      LODWORD(v10) = v87;
      goto LABEL_74;
    }
  }
  else
  {
    v9 = 87;
  }
LABEL_131:
  if ( Src )
    SddlpFree(Src);
  return v9;
}
