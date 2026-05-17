/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x180103380
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x18013BF5C (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x18015FB30 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x180160B10 (ZwDeleteValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlSetImageMitigationPolicy(const wchar_t *a1, int a2, char a3, _QWORD *a4, int a5)
{
  char v6; // r14
  const wchar_t *v7; // rcx
  int v10; // r12d
  size_t v11; // rax
  int inited; // ebx
  size_t v13; // rax
  int v14; // eax
  int v15; // r13d
  int v16; // eax
  int v17; // edi
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  int v53; // r10d
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  int v58; // r11d
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  int v62; // edi
  int v63; // edi
  int v64; // edi
  int v65; // edi
  int v66; // edi
  int v67; // edi
  unsigned __int64 v68; // rdx
  __int64 v69; // r10
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rcx
  int v73; // r10d
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // r9d
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  unsigned __int64 v102; // rdx
  __int64 v103; // rax
  bool v104; // cf
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // r9
  __int64 v109; // r10
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rdx
  unsigned __int64 v114; // rdx
  int v115; // r9d
  __int64 v116; // rcx
  __int64 v117; // rcx
  unsigned __int64 v118; // rcx
  int v119; // r10d
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  int v123; // edi
  int v124; // edi
  int v125; // edi
  int v126; // edi
  int v127; // edi
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // r10
  __int64 v132; // r9
  __int64 v133; // rax
  __int64 v134; // r8
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rdx
  int v138; // r10d
  __int64 v139; // rcx
  unsigned __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rcx
  int v147; // [rsp+30h] [rbp-A1h]
  HANDLE Handle; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v149[2]; // [rsp+40h] [rbp-91h] BYREF
  int v150; // [rsp+50h] [rbp-81h] BYREF
  __int128 v151; // [rsp+58h] [rbp-79h] BYREF
  __int128 v152; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v153[4]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v154; // [rsp+98h] [rbp-39h]
  __int128 v155; // [rsp+A8h] [rbp-29h] BYREF
  unsigned __int64 v156; // [rsp+B8h] [rbp-19h]
  char v157[8]; // [rsp+C0h] [rbp-11h] BYREF
  unsigned int Size; // [rsp+C8h] [rbp-9h]
  size_t Size_4; // [rsp+CCh] [rbp-5h] BYREF

  Handle = 0LL;
  v150 = 0;
  v6 = a3 & 1;
  v149[0] = 0LL;
  v7 = L"MitigationOptions";
  v147 = a3 & 2;
  v156 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v155 = 0LL;
  v10 = a3 & 8;
  if ( (a3 & 8) != 0 )
    v7 = L"MitigationAuditOptions";
  v149[1] = v7;
  v11 = wcslen(v7);
  if ( v11 > 0x7FFE )
  {
    inited = -1073741562;
  }
  else
  {
    LOWORD(v149[0]) = 2 * v11;
    inited = 0;
    WORD1(v149[0]) = 2 * v11 + 2;
  }
  if ( inited < 0 )
    goto LABEL_49;
  *((_QWORD *)&v151 + 1) = L"EAFModules";
  v13 = wcslen(L"EAFModules");
  if ( v13 > 0x7FFE )
  {
    inited = -1073741562;
    goto LABEL_49;
  }
  LOWORD(v151) = 2 * v13;
  WORD1(v151) = 2 * v13 + 2;
  if ( (v6 || v147) && (a5 || a4) )
    goto LABEL_95;
  inited = RtlInitUnicodeStringEx((__int64)&v152, a1);
  if ( inited < 0 )
    goto LABEL_49;
  if ( a1 )
  {
    v15 = v147;
    v14 = RtlpOpenImageFileOptionsKeyEx((unsigned __int16 *)&v152, 0x2000Fu, v147 == 0, &Handle);
  }
  else
  {
    v153[1] = 0LL;
    v153[2] = &unk_1801721E8;
    v153[0] = 48LL;
    v153[3] = 576LL;
    v154 = 0LL;
    v14 = NtOpenKey(&Handle, 131087LL, v153);
    v15 = v147;
  }
  inited = v14;
  if ( v14 < 0 )
    goto LABEL_49;
  if ( v15 )
  {
    inited = ZwDeleteValueKey(Handle, v149);
    if ( inited >= 0 )
    {
      if ( !v10 )
        ZwDeleteValueKey(Handle, &v151);
      RtlpDeleteEmptyImageFileOptionsKey(&v152);
    }
    goto LABEL_49;
  }
  v16 = NtQueryValueKey(Handle, v149, 2LL, v157, 40, &v150);
  inited = v16;
  if ( v16 >= 0 )
  {
    if ( Size > 0x18 )
    {
      inited = -1073741788;
      goto LABEL_49;
    }
    memmove(&v155, &Size_4, Size);
  }
  else if ( v16 != -1073741772 )
  {
    goto LABEL_49;
  }
  if ( a2 <= 9 )
  {
    if ( a2 == 9 )
    {
      if ( v6 )
      {
        v68 = 0xFFF0FFFFFFFFFFFFuLL;
        goto LABEL_116;
      }
      if ( a5 != 8 )
        goto LABEL_95;
      v102 = 0xFFF0FFFFFFFFFFFFuLL;
      v122 = *a4 & 4LL;
      if ( (*a4 & 3) == 0 )
      {
        v104 = v122 != 0;
        v105 = 0x4000000000000LL;
        goto LABEL_201;
      }
      if ( (*a4 & 3LL) == 2 )
      {
        v106 = -(__int64)(v122 != 0) & 0x4000000000000LL;
        v107 = 0x2000000000000LL;
      }
      else
      {
        v106 = -(__int64)(v122 != 0) & 0x4000000000000LL;
        if ( (*(_BYTE *)a4 & 8) != 0 )
          v107 = 0x3000000000000LL;
        else
          v107 = 0x1000000000000LL;
      }
    }
    else
    {
      if ( !a2 )
      {
        if ( v6 )
        {
          *(_QWORD *)&v155 = v155 & 0xFFFFFFFFFFFFFFF0uLL;
          goto LABEL_48;
        }
        if ( a5 != 8 )
          goto LABEL_95;
        v121 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v89 = v121 != 0 ? 6LL : 2LL;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v89 = v121 != 0 ? 7LL : 3LL;
          }
          else
          {
            v89 = v121 != 0 ? 5LL : 1LL;
          }
        }
        else
        {
          v89 = v121 != 0 ? 4 : 0;
        }
        v92 = v155 & 0xFFFFFFFFFFFFFFF0uLL;
        goto LABEL_237;
      }
      v62 = a2 - 1;
      if ( !v62 )
      {
        if ( v6 )
        {
          *(_QWORD *)&v155 = v155 & 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_48;
        }
        if ( a5 == 24 )
        {
          v108 = a4[1];
          v109 = a4[2];
          v110 = v108 & 4;
          v111 = v109 & 4;
          v112 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
            {
              v113 = (((unsigned __int128)-(__int128)(unsigned __int64)v112 >> 64) & 0x400) + 512;
            }
            else if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v113 = (((unsigned __int128)-(__int128)(unsigned __int64)v112 >> 64) & 0x400) + 768;
            }
            else
            {
              v113 = (((unsigned __int128)-(__int128)(unsigned __int64)v112 >> 64) & 0x400) + 256;
            }
          }
          else
          {
            v113 = ((unsigned __int128)-(__int128)(unsigned __int64)v112 >> 64) & 0x400;
          }
          v114 = v155 & 0xFFFFFFFFFFFFF0FFuLL | v113;
          v115 = v108 & 3;
          if ( v115 )
          {
            if ( v115 == 2LL )
              v117 = v110 != 0 ? 6LL : 2LL;
            else
              v117 = v110 != 0 ? 5LL : 1LL;
            v116 = v117 << 16;
          }
          else
          {
            v116 = v110 != 0 ? 0x40000 : 0;
          }
          v118 = v114 & 0xFFFFFFFFFFF0FFFFuLL | v116;
          v119 = v109 & 3;
          if ( v119 )
          {
            if ( v119 == 2LL )
              v120 = v111 != 0 ? 6LL : 2LL;
            else
              v120 = v111 != 0 ? 5LL : 1LL;
            v60 = v120 << 20;
          }
          else
          {
            v60 = v111 != 0 ? 0x400000 : 0;
          }
          v61 = v118 & 0xFFFFFFFFFF0FFFFFuLL;
LABEL_67:
          *(_QWORD *)&v155 = v61 | v60;
LABEL_48:
          inited = ZwSetValueKey(Handle, v149, 0LL, 3LL, &v155, 24);
          goto LABEL_49;
        }
        goto LABEL_95;
      }
      v63 = v62 - 1;
      if ( v63 )
      {
        v64 = v63 - 1;
        if ( !v64 )
        {
          if ( v6 )
          {
            *(_QWORD *)&v155 = v155 & 0xFFFFFFFFF0FFFFFFuLL;
            goto LABEL_48;
          }
          if ( a5 != 8 )
            goto LABEL_95;
          v100 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
              v101 = v100 != 0 ? 6LL : 2LL;
            else
              v101 = v100 != 0 ? 5LL : 1LL;
            v89 = v101 << 24;
          }
          else
          {
            v89 = v100 != 0 ? 0x4000000 : 0;
          }
          v92 = v155 & 0xFFFFFFFFF0FFFFFFuLL;
          goto LABEL_237;
        }
        v65 = v64 - 1;
        if ( !v65 )
        {
          if ( v6 )
          {
            *(_QWORD *)&v155 = v155 & 0xFFFFFFFF0FFFFFFFuLL;
            v156 &= 0xFFFFFFFF0FFFFFFFuLL;
            goto LABEL_48;
          }
          if ( a5 != 16 )
            goto LABEL_95;
          v93 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            if ( (*a4 & 3LL) == 2 )
              v95 = v93 != 0 ? 6LL : 2LL;
            else
              v95 = v93 != 0 ? 5LL : 1LL;
            v94 = v95 << 28;
          }
          else
          {
            v94 = -(__int64)(v93 != 0) & 0x40000000;
          }
          *(_QWORD *)&v155 = v155 & 0xFFFFFFFF0FFFFFFFuLL | v94;
          v96 = a4[1] & 4LL;
          if ( (a4[1] & 3) != 0 )
          {
            if ( (a4[1] & 3LL) == 2 )
              v98 = v96 != 0 ? 6LL : 2LL;
            else
              v98 = v96 != 0 ? 5LL : 1LL;
            v97 = v98 << 28;
          }
          else
          {
            v97 = -(__int64)(v96 != 0) & 0x40000000;
          }
          v99 = v156 & 0xFFFFFFFF0FFFFFFFuLL;
          goto LABEL_177;
        }
        v66 = v65 - 2;
        if ( !v66 )
        {
          if ( v6 )
          {
            *(_QWORD *)&v155 = v155 & 0xFFFFFFF0FFFFFFFFuLL;
            goto LABEL_48;
          }
          if ( a5 != 8 )
            goto LABEL_95;
          v88 = *a4 & 4LL;
          if ( (*a4 & 3) != 0 )
          {
            v90 = -(__int64)(v88 != 0) & 0x400000000LL;
            if ( (*a4 & 3LL) == 2 )
              v91 = 0x200000000LL;
            else
              v91 = 0x100000000LL;
            v89 = v91 + v90;
          }
          else
          {
            v89 = -(__int64)(v88 != 0) & 0x400000000LL;
          }
          v92 = v155 & 0xFFFFFFF0FFFFFFFFuLL;
          goto LABEL_237;
        }
        v67 = v66 - 1;
        if ( v67 )
        {
          if ( v67 != 1 )
            goto LABEL_49;
          if ( !v6 )
          {
            if ( a5 != 16 )
              goto LABEL_95;
            v69 = a4[1];
            v70 = v69 & 4;
            v71 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
              {
                v72 = (-(__int64)(v71 != 0) & 0x400000000000LL) + 0x200000000000LL;
              }
              else if ( (*(_BYTE *)a4 & 8) != 0 )
              {
                v72 = (-(__int64)(v71 != 0) & 0x400000000000LL) + 0x300000000000LL;
              }
              else
              {
                v72 = (-(__int64)(v71 != 0) & 0x400000000000LL) + 0x100000000000LL;
              }
            }
            else
            {
              v72 = -(__int64)(v71 != 0) & 0x400000000000LL;
            }
            *(_QWORD *)&v155 = v155 & 0xFFFF0FFFFFFFFFFFuLL | v72;
            v73 = v69 & 3;
            if ( v73 )
            {
              if ( v73 == 2LL )
              {
                v74 = (v70 != 0 ? 96LL : 32LL) & 0xFFFF0FFFFFFFFFFFuLL;
                v75 = (-(__int64)(v70 != 0) & 0x400000000000LL) + 0x200000000000LL;
              }
              else
              {
                v74 = (v70 != 0 ? 80LL : 16LL) & 0xFFFF0FFFFFFFFFFFuLL;
                v75 = (-(__int64)(v70 != 0) & 0x400000000000LL) + 0x100000000000LL;
              }
            }
            else
            {
              v74 = v70 != 0 ? 0x40uLL : 0;
              v75 = -(__int64)(v70 != 0) & 0x400000000000LL;
            }
            v76 = v75 | v74;
            v77 = 0xFFFF0FFFFFFFFF0FuLL;
            goto LABEL_133;
          }
          v68 = 0xFFFF0FFFFFFFFFFFuLL;
LABEL_116:
          *(_QWORD *)&v155 = v68 & v155;
          goto LABEL_48;
        }
        if ( v6 )
        {
          v155 &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
          goto LABEL_48;
        }
        if ( a5 != 16 )
          goto LABEL_95;
        v80 = a4[1];
        v81 = v80 & 4;
        v82 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v85 = (-(__int64)(v82 != 0) & 0x40000000000LL) + 0x20000000000LL;
            v84 = *((_QWORD *)&v155 + 1);
            *(_QWORD *)&v155 = v155 & 0xFFFFF0FFFFFFFFFFuLL | v85;
            v76 = v81 != 0 ? 1536LL : 512LL;
            goto LABEL_134;
          }
          if ( (*(_BYTE *)a4 & 8) != 0 )
            v86 = (-(__int64)(v82 != 0) & 0x40000000000LL) + 0x30000000000LL;
          else
            v86 = (-(__int64)(v82 != 0) & 0x40000000000LL) + 0x10000000000LL;
          v84 = *((_QWORD *)&v155 + 1);
          *(_QWORD *)&v155 = v155 & 0xFFFFF0FFFFFFFFFFuLL | v86;
          v87 = v80 & 3;
          if ( v87 )
          {
            if ( v87 != 2LL )
            {
              v76 = v81 != 0 ? 1280LL : 256LL;
              goto LABEL_134;
            }
            goto LABEL_141;
          }
        }
        else
        {
          v83 = v155 & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v82 != 0) & 0x40000000000LL;
          v84 = *((_QWORD *)&v155 + 1);
          *(_QWORD *)&v155 = v83;
          if ( (v80 & 3) == 2 )
          {
LABEL_141:
            v76 = v81 != 0 ? 1536LL : 512LL;
LABEL_134:
            v79 = v84 & 0xFFFFFFFFFFFFF0FFuLL;
            goto LABEL_135;
          }
        }
        v76 = v81 != 0 ? 0x400 : 0;
        goto LABEL_134;
      }
      if ( v6 )
      {
        v68 = 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_116;
      }
      if ( a5 != 8 )
        goto LABEL_95;
      v102 = 0xFFFFFF0FFFFFFFFFuLL;
      v103 = *a4 & 4LL;
      if ( (*a4 & 3) == 0 )
      {
        v104 = v103 != 0;
        v105 = 0x4000000000LL;
LABEL_201:
        v89 = v105 & -(__int64)v104;
        goto LABEL_202;
      }
      if ( (*a4 & 3LL) == 2 )
      {
        v106 = -(__int64)(v103 != 0) & 0x4000000000LL;
        v107 = 0x2000000000LL;
      }
      else
      {
        v106 = -(__int64)(v103 != 0) & 0x4000000000LL;
        if ( (*(_BYTE *)a4 & 8) != 0 )
          v107 = 0x3000000000LL;
        else
          v107 = 0x1000000000LL;
      }
    }
    v89 = v107 + v106;
LABEL_202:
    v92 = v102 & v155;
    goto LABEL_237;
  }
  v17 = a2 - 10;
  if ( !v17 )
  {
    if ( v6 )
    {
      *(_QWORD *)&v155 = v155 & 0xFFFFFFFFFFFFFLL;
      goto LABEL_48;
    }
    if ( a5 == 24 )
    {
      v18 = a4[1];
      v19 = a4[2];
      v20 = *a4 & 4LL;
      v21 = v18 & 4;
      v22 = v19 & 4;
      if ( (*a4 & 3) != 0 )
      {
        v23 = -(__int64)(v20 != 0) & 0x40000000000000LL;
        if ( (*a4 & 3LL) == 2 )
          v24 = 0x20000000000000LL;
        else
          v24 = 0x10000000000000LL;
        v51 = v24 + v23;
      }
      else
      {
        v51 = -(__int64)(v20 != 0) & 0x40000000000000LL;
      }
      v52 = v155 & 0xFF0FFFFFFFFFFFFFuLL | v51;
      v53 = v18 & 3;
      if ( v53 )
      {
        v54 = -(__int64)(v21 != 0) & 0x400000000000000LL;
        if ( v53 == 2LL )
          v55 = 0x200000000000000LL;
        else
          v55 = 0x100000000000000LL;
        v56 = v55 + v54;
      }
      else
      {
        v56 = -(__int64)(v21 != 0) & 0x400000000000000LL;
      }
      v57 = v52 & 0xF0FFFFFFFFFFFFFFuLL | v56;
      v58 = v19 & 3;
      if ( v58 )
      {
        if ( v58 == 2LL )
          v59 = 0x2000000000000000LL;
        else
          v59 = 0x1000000000000000LL;
        v60 = v59 + (-(__int64)(v22 != 0) & 0x4000000000000000LL);
      }
      else
      {
        v60 = -(__int64)(v22 != 0) & 0x4000000000000000LL;
      }
      v61 = v57 & 0xFFFFFFFFFFFFFFFLL;
      goto LABEL_67;
    }
    goto LABEL_95;
  }
  v25 = v17 - 1;
  if ( v25 )
  {
    v123 = v25 - 1;
    if ( v123 )
    {
      v124 = v123 - 1;
      if ( v124 )
      {
        v125 = v124 - 1;
        if ( v125 )
        {
          v126 = v125 - 1;
          if ( v126 )
          {
            v127 = v126 - 1;
            if ( v127 )
            {
              if ( v127 != 1 )
                goto LABEL_49;
              if ( v6 )
              {
                v156 &= 0xFFFFFFFFFFFF0FFFuLL;
                goto LABEL_48;
              }
              if ( a5 == 8 )
              {
                v128 = *a4 & 4LL;
                if ( (*a4 & 3) != 0 )
                {
                  if ( (*a4 & 3LL) == 2 )
                    v97 = v128 != 0 ? 24576LL : 0x2000LL;
                  else
                    v97 = v128 != 0 ? 20480LL : 4096LL;
                }
                else
                {
                  v97 = v128 != 0 ? 0x4000 : 0;
                }
                v99 = v156 & 0xFFFFFFFFFFFF0FFFuLL;
                goto LABEL_177;
              }
LABEL_95:
              inited = -1073741811;
              goto LABEL_49;
            }
            if ( v6 )
            {
              v156 &= 0xFFFFFFFFFF0FFFFFuLL;
              goto LABEL_48;
            }
            if ( a5 != 8 )
              goto LABEL_95;
            v129 = *a4 & 4LL;
            if ( (*a4 & 3) != 0 )
            {
              if ( (*a4 & 3LL) == 2 )
                v130 = v129 != 0 ? 6LL : 2LL;
              else
                v130 = v129 != 0 ? 5LL : 1LL;
              v97 = v130 << 20;
            }
            else
            {
              v97 = v129 != 0 ? 0x400000 : 0;
            }
            v99 = v156 & 0xFFFFFFFFFF0FFFFFuLL;
LABEL_177:
            v156 = v99 | v97;
            goto LABEL_48;
          }
          if ( v6 )
          {
            *((_QWORD *)&v155 + 1) &= 0xFFFFFFFFFFFFFFFuLL;
            v156 &= 0xFFFFFFFFFFFFFF00uLL;
            goto LABEL_48;
          }
          if ( a5 != 24 )
            goto LABEL_95;
          v131 = a4[1];
          v132 = v131 & 4;
          v133 = *a4 & 4LL;
          v134 = a4[2] & 4LL;
          if ( (*a4 & 3) == 0 )
          {
            v135 = -(__int64)(v133 != 0) & 0x4000000000000000LL;
LABEL_279:
            *((_QWORD *)&v155 + 1) = *((_QWORD *)&v155 + 1) & 0xFFFFFFFFFFFFFFFLL | v135;
            v138 = v131 & 3;
            if ( v138 )
            {
              if ( v138 == 2LL )
                v139 = v132 != 0 ? 6LL : 2LL;
              else
                v139 = v132 != 0 ? 5LL : 1LL;
            }
            else
            {
              v139 = v132 != 0 ? 4 : 0;
            }
            v140 = v156 & 0xFFFFFFFFFFFFFFF0uLL | v139;
            if ( (a4[2] & 3) != 0 )
            {
              if ( (a4[2] & 3LL) == 2 )
              {
                v141 = v134 != 0 ? 96LL : 32LL;
              }
              else if ( (a4[2] & 8) != 0 )
              {
                v141 = v134 != 0 ? 112LL : 48LL;
              }
              else
              {
                v141 = v134 != 0 ? 80LL : 16LL;
              }
            }
            else
            {
              v141 = v134 != 0 ? 0x40 : 0;
            }
            v156 = v140 & 0xFFFFFFFFFFFFFF0FuLL | v141;
            goto LABEL_48;
          }
          if ( (*a4 & 3LL) == 2 )
          {
            v136 = -(__int64)(v133 != 0) & 0x4000000000000000LL;
            v137 = 0x2000000000000000LL;
          }
          else
          {
            if ( (*(_BYTE *)a4 & 8) != 0 )
            {
              v135 = (-(__int64)(v133 != 0) & 0x4000000000000000LL) + 0x3000000000000000LL;
              goto LABEL_279;
            }
            v136 = -(__int64)(v133 != 0) & 0x4000000000000000LL;
            v137 = 0x1000000000000000LL;
          }
          v135 = v137 + v136;
          goto LABEL_279;
        }
        if ( v6 )
        {
          *(_QWORD *)&v155 = v155 & 0xFFFFFFFFFFFF0FFFuLL;
          goto LABEL_48;
        }
        if ( a5 != 8 )
          goto LABEL_95;
        v142 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
            v89 = v142 != 0 ? 24576LL : 0x2000LL;
          else
            v89 = v142 != 0 ? 20480LL : 4096LL;
        }
        else
        {
          v89 = v142 != 0 ? 0x4000 : 0;
        }
        v92 = v155 & 0xFFFFFFFFFFFF0FFFuLL;
      }
      else
      {
        if ( v6 )
        {
          *(_QWORD *)&v155 = v155 & 0xFFFFFFFFFFFFFF0FuLL;
          goto LABEL_48;
        }
        if ( a5 != 8 )
          goto LABEL_95;
        v143 = *a4 & 4LL;
        if ( (*a4 & 3) != 0 )
        {
          if ( (*a4 & 3LL) == 2 )
          {
            v89 = v143 != 0 ? 96LL : 32LL;
          }
          else if ( (*(_BYTE *)a4 & 8) != 0 )
          {
            v89 = v143 != 0 ? 112LL : 48LL;
          }
          else
          {
            v89 = v143 != 0 ? 80LL : 16LL;
          }
        }
        else
        {
          v89 = v143 != 0 ? 0x40 : 0;
        }
        v92 = v155 & 0xFFFFFFFFFFFFFF0FuLL;
      }
LABEL_237:
      *(_QWORD *)&v155 = v92 | v89;
      goto LABEL_48;
    }
    if ( v6 )
    {
      *((_QWORD *)&v155 + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
      goto LABEL_48;
    }
    if ( a5 != 8 )
      goto LABEL_95;
    v144 = *a4 & 4LL;
    if ( (*a4 & 3) != 0 )
    {
      if ( (*a4 & 3LL) != 2 )
      {
        v77 = 0xFFFFFF0FFFFFFFFFuLL;
        v145 = -(__int64)(v144 != 0) & 0x4000000000LL;
        if ( (*(_BYTE *)a4 & 8) != 0 )
          v78 = 0x3000000000LL;
        else
          v78 = 0x1000000000LL;
        v76 = v78 + v145;
        goto LABEL_133;
      }
      v76 = (-(__int64)(v144 != 0) & 0x4000000000LL) + 0x2000000000LL;
    }
    else
    {
      v76 = -(__int64)(v144 != 0) & 0x4000000000LL;
    }
    v77 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_133:
    v79 = v77 & *((_QWORD *)&v155 + 1);
LABEL_135:
    *((_QWORD *)&v155 + 1) = v79 | v76;
    goto LABEL_48;
  }
  if ( v6 )
  {
    *((_QWORD *)&v155 + 1) &= 0xFFFFF0F00000FFFFuLL;
    if ( !v10 )
      ZwDeleteValueKey(Handle, &v151);
    goto LABEL_48;
  }
  if ( a5 != 1072 )
    goto LABEL_95;
  if ( v10 || (inited = ZwSetValueKey(Handle, &v151, 0LL, 1LL, a4 + 6, 1024), inited >= 0) )
  {
    v26 = a4[3] & 4LL;
    if ( (a4[3] & 3) != 0 )
    {
      if ( (a4[3] & 3LL) == 2 )
        v146 = v26 != 0 ? 6LL : 2LL;
      else
        v146 = v26 != 0 ? 5LL : 1LL;
      v27 = v146 << 16;
    }
    else
    {
      v27 = v26 != 0 ? 0x40000 : 0;
    }
    v28 = *((_QWORD *)&v155 + 1) & 0xFFFFFFFFFFF0FFFFuLL | v27;
    v29 = a4[4] & 4LL;
    if ( (a4[4] & 3) != 0 )
    {
      if ( (a4[4] & 3LL) == 2 )
        v50 = (((unsigned __int128)-(__int128)(unsigned __int64)v29 >> 64) & 4) + 2;
      else
        v50 = (((unsigned __int128)-(__int128)(unsigned __int64)v29 >> 64) & 4) + 1;
      v30 = v50 << 20;
    }
    else
    {
      v30 = ((unsigned __int128)-(__int128)(unsigned __int64)v29 >> 64) & 0x400000;
    }
    v31 = v28 & 0xFFFFFFFFFF0FFFFFuLL | v30;
    v32 = a4[5] & 4LL;
    if ( (a4[5] & 3) != 0 )
    {
      if ( (a4[5] & 3LL) == 2 )
        v33 = v32 != 0 ? 6LL : 2LL;
      else
        v33 = v32 != 0 ? 5LL : 1LL;
      v34 = v33 << 24;
    }
    else
    {
      v34 = v32 != 0 ? 0x4000000 : 0;
    }
    v35 = v31 & 0xFFFFFFFFF0FFFFFFuLL | v34;
    v36 = *a4 & 4LL;
    if ( (*a4 & 3) != 0 )
    {
      if ( (*a4 & 3LL) == 2 )
        v37 = v36 != 0 ? 6LL : 2LL;
      else
        v37 = v36 != 0 ? 5LL : 1LL;
      v38 = v37 << 28;
    }
    else
    {
      v38 = -(__int64)(v36 != 0) & 0x40000000;
    }
    v39 = v35 & 0xFFFFFFFF0FFFFFFFuLL | v38;
    v40 = a4[1] & 4LL;
    if ( (a4[1] & 3) != 0 )
    {
      v41 = -(__int64)(v40 != 0) & 0x400000000LL;
      if ( (a4[1] & 3LL) == 2 )
        v42 = 0x200000000LL;
      else
        v42 = 0x100000000LL;
      v43 = v42 + v41;
    }
    else
    {
      v43 = -(__int64)(v40 != 0) & 0x400000000LL;
    }
    v44 = v39 & 0xFFFFFFF0FFFFFFFFuLL | v43;
    v45 = a4[2] & 4LL;
    if ( (a4[2] & 3) != 0 )
    {
      v46 = -(__int64)(v45 != 0) & 0x40000000000LL;
      if ( (a4[2] & 3LL) == 2 )
        v47 = 0x20000000000LL;
      else
        v47 = 0x10000000000LL;
      v48 = v47 + v46;
    }
    else
    {
      v48 = -(__int64)(v45 != 0) & 0x40000000000LL;
    }
    *((_QWORD *)&v155 + 1) = v44 & 0xFFFFF0FFFFFFFFFFuLL | v48;
    goto LABEL_48;
  }
LABEL_49:
  if ( Handle )
    NtClose(Handle);
  if ( inited == -1073741772 && v147 )
    return 0;
  return (unsigned int)inited;
}
