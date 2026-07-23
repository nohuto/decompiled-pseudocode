/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x1402FBC90
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403AF970 (SepVerifyDesktopAppxPackageName.c)
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140A60770 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 * Callees:
 *     AuthzBasepEvaluateExpression @ 0x1402FB3B8 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402FB550 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepSupportSetOperation @ 0x1402FBA2C (AuthzBasepSupportSetOperation.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAttribute @ 0x1402FCEDC (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402FD210 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403B1CA0 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepResetOperands @ 0x140462C30 (AuthzBasepResetOperands.c)
 *     AuthzBasepIsValidExpression @ 0x140472080 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepMemberOf @ 0x140511550 (AuthzBasepMemberOf.c)
 *     AuthzBasepDeviceMemberOf @ 0x14051165C (AuthzBasepDeviceMemberOf.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14052C4B4 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeBitwise @ 0x140719FC4 (AuthzBasepComputeBitwise.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        _DWORD *a1,
        void *a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        _DWORD *a12)
{
  unsigned int v12; // r15d
  unsigned int v14; // ebx
  int SecurityAttributeAndValues; // esi
  char v16; // r14
  _DWORD *v17; // r9
  unsigned int v18; // edx
  int v19; // r14d
  PVOID *v20; // rdi
  __int64 v21; // r13
  __int64 v22; // r11
  unsigned __int8 *v23; // rbx
  int v24; // r12d
  int v25; // r10d
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned __int8 *v30; // rax
  __int64 v31; // r13
  size_t v32; // r14
  unsigned int v33; // r13d
  _BYTE *v34; // rdi
  char *v35; // rbx
  __int64 v36; // r15
  ULONG_PTR v37; // rcx
  void *Pool2; // rax
  PVOID *v39; // rdi
  void *v40; // rax
  _DWORD *v41; // r12
  PVOID *v42; // rbx
  __int64 v43; // rbx
  int v44; // eax
  char v45; // r10
  int v46; // esi
  char v47; // r10
  __int64 v48; // rbx
  __int64 v49; // rbx
  int v50; // ecx
  __int64 v51; // rbx
  _DWORD *v52; // rdi
  PVOID v53; // rbx
  unsigned int i; // edx
  int v56; // ecx
  unsigned int j; // edx
  int v58; // ecx
  int v59; // r8d
  unsigned int v60; // r10d
  int v61; // ecx
  __int64 v62; // r12
  bool v63; // zf
  void *v64; // r12
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  char v68; // r12
  unsigned int v69; // ebx
  unsigned int v70; // ebx
  int v71; // r10d
  int v72; // eax
  int v73; // ecx
  int v74; // eax
  unsigned int v75; // edx
  __int64 v76; // xmm1_8
  char v77; // al
  char v78; // al
  int v79; // eax
  int v80; // eax
  unsigned int v81; // edx
  __int64 v82; // xmm1_8
  __int16 v83; // bx
  int v84; // ecx
  unsigned int v85; // ebx
  int v86; // eax
  char v87; // al
  char v88; // al
  unsigned int v89; // edx
  __int64 v90; // rax
  char v91; // [rsp+30h] [rbp-D0h]
  _WORD v92[2]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v93[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v94; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v95; // [rsp+40h] [rbp-C0h]
  _DWORD *v96; // [rsp+48h] [rbp-B8h]
  char v97; // [rsp+50h] [rbp-B0h] BYREF
  char v98; // [rsp+51h] [rbp-AFh]
  unsigned int v99; // [rsp+54h] [rbp-ACh]
  char v100; // [rsp+58h] [rbp-A8h]
  __int128 v101; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v102; // [rsp+70h] [rbp-90h]
  __int64 v103; // [rsp+78h] [rbp-88h]
  __int64 v104; // [rsp+80h] [rbp-80h]
  __int128 v105; // [rsp+88h] [rbp-78h]
  __int128 v106; // [rsp+98h] [rbp-68h]
  __int64 v107; // [rsp+A8h] [rbp-58h]
  _DWORD *v108; // [rsp+B0h] [rbp-50h]
  _DWORD *v109; // [rsp+B8h] [rbp-48h]
  void *v110; // [rsp+C0h] [rbp-40h]
  PVOID v111; // [rsp+C8h] [rbp-38h] BYREF
  void *v112; // [rsp+D0h] [rbp-30h]
  void *v113; // [rsp+D8h] [rbp-28h]
  __int64 CurrentIrql; // [rsp+E0h] [rbp-20h]
  PVOID *v115; // [rsp+E8h] [rbp-18h]
  __int128 v116; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v118; // [rsp+110h] [rbp+10h]
  __int128 v119; // [rsp+120h] [rbp+20h]
  __int64 v120; // [rsp+130h] [rbp+30h]
  __int128 v121; // [rsp+138h] [rbp+38h] BYREF
  __int128 v122; // [rsp+148h] [rbp+48h]
  __int128 v123; // [rsp+158h] [rbp+58h]
  __int128 v124; // [rsp+168h] [rbp+68h]
  __int64 v125; // [rsp+178h] [rbp+78h]
  _DWORD v126[256]; // [rsp+180h] [rbp+80h]

  v12 = 0;
  v113 = a3;
  v14 = 0;
  v110 = a2;
  v109 = a1;
  v95 = 0;
  v112 = a4;
  SecurityAttributeAndValues = 0;
  v108 = a8;
  v96 = a12;
  LODWORD(v116) = 0;
  *((_QWORD *)&v116 + 1) = 0LL;
  memset_0(P, 0, 0x80uLL);
  *(_WORD *)((char *)&v101 + 5) = 0;
  BYTE7(v101) = 0;
  memset_0((char *)&v101 + 8, 0, 0x48uLL);
  v94 = -1;
  v16 = 0;
  v92[0] = 0;
  v98 = 0;
  v97 = 0;
  v93[0] = 0;
  v100 = 0;
  v91 = 0;
  v111 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  *((_QWORD *)&v122 + 1) = 0LL;
  if ( !a1 || (v17 = v108) == 0LL )
  {
    SecurityAttributeAndValues = -1073741811;
    v52 = a12;
    goto LABEL_68;
  }
  v18 = a9;
  CurrentIrql = KeGetCurrentIrql();
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v52 = a12;
    goto LABEL_68;
  }
  if ( *v108 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v52 = a12;
    goto LABEL_68;
  }
  BYTE4(v101) = 0;
  LOWORD(v101) = 0;
  v19 = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v20 = 0LL;
  v102 = 0LL;
  LODWORD(v21) = 4;
  LODWORD(v103) = 0;
  v104 = 0LL;
  LOWORD(v105) = 0;
  *((_QWORD *)&v105 + 1) = 0LL;
  *(_QWORD *)&v106 = 0LL;
  DWORD2(v106) = 0;
  v107 = 0LL;
  v99 = 0;
  BYTE4(v105) = 0;
LABEL_6:
  v22 = 0x7000FFFC3LL;
  while ( 1 )
  {
    if ( (unsigned int)v21 >= v18 )
    {
      if ( v14 == 1 )
      {
        v52 = v96;
        v16 = v91;
        *v96 = v126[0];
        goto LABEL_68;
      }
      if ( !v14 && v12 == 1 )
      {
        v79 = AuthzBasepEvaluateAttribute(v20);
        v52 = v96;
        v16 = v91;
        *v96 = v79;
        goto LABEL_68;
      }
LABEL_115:
      v52 = v96;
      v16 = v91;
      goto LABEL_68;
    }
    v23 = (unsigned __int8 *)v17 + (unsigned int)v21;
    v24 = *v23;
    if ( v24 == 252 )
      break;
    if ( v24 == 162 )
    {
      LODWORD(v21) = v21 + 1;
      v93[0] = 0;
      for ( i = 0; i < v12; ++i )
      {
        v56 = *((_DWORD *)&v101 + 10 * i + 3);
        if ( !v56
          || ((unsigned __int8)(v24 + 0x80) > 0x22u || !_bittest64(&v22, (unsigned __int8)(v24 + 0x80)))
          && v56 != 1
          && *((_DWORD *)&v101 + 10 * i + 1) > 1u )
        {
          goto LABEL_114;
        }
      }
      if ( AuthzBasepSupportSetOperation((unsigned __int8)v24) )
        goto LABEL_48;
      if ( v12 == 2 )
      {
        if ( (v101 & 0xFFFB) == 0 || HIDWORD(v105) != 1 || BYTE4(v105) != v45 )
          goto LABEL_114;
LABEL_48:
        if ( v12 == 2 )
          goto LABEL_114;
      }
      if ( v12 == 1 )
      {
        if ( v19 == 1 )
          goto LABEL_114;
        v46 = AuthzBasepEvaluateAttribute(v20);
        v94 = v46;
        if ( LOBYTE(v92[0]) != v47 )
        {
          _mm_lfence();
          ExFreePoolWithTag(v20[3], 0);
          v20[3] = 0LL;
          LOBYTE(v92[0]) = 0;
        }
        v20 = 0LL;
        if ( HIBYTE(v92[0]) )
        {
          _mm_lfence();
          v48 = v106;
          ExFreePoolWithTag(*(PVOID *)(v106 + 24), 0);
          *(_QWORD *)(v48 + 24) = 0LL;
          HIBYTE(v92[0]) = 0;
        }
        LODWORD(v49) = v95;
        *(_QWORD *)&v106 = 0LL;
      }
      else
      {
        if ( !v95 )
          goto LABEL_114;
        v49 = v95 - 1;
        v46 = v126[v49];
        v94 = v46;
      }
      if ( v46 == -1 )
        v50 = -1;
      else
        v50 = v46 == 0;
      if ( (unsigned int)v49 >= 0x100 )
        goto LABEL_131;
      v126[(unsigned int)v49] = v50;
LABEL_60:
      v14 = v49 + 1;
      *((_QWORD *)&v101 + 1) = 0LL;
      v19 = 0;
      BYTE4(v101) = 0;
      SecurityAttributeAndValues = 0;
      LOWORD(v101) = 0;
      v95 = v14;
      if ( LOBYTE(v92[0]) )
      {
        _mm_lfence();
        ExFreePoolWithTag(v20[3], 0);
        v20[3] = 0LL;
        LOBYTE(v92[0]) = 0;
      }
      v20 = 0LL;
      v102 = 0LL;
      LODWORD(v103) = 0;
      v104 = 0LL;
      LOWORD(v105) = 0;
      BYTE4(v105) = 0;
      *((_QWORD *)&v105 + 1) = 0LL;
      if ( HIBYTE(v92[0]) )
      {
        _mm_lfence();
        v51 = v106;
        ExFreePoolWithTag(*(PVOID *)(v106 + 24), 0);
        *(_QWORD *)(v51 + 24) = 0LL;
        v14 = v95;
        HIBYTE(v92[0]) = 0;
      }
      *(_QWORD *)&v106 = 0LL;
      v12 = 0;
      DWORD2(v106) = 0;
      v107 = 0LL;
      v99 = 0;
LABEL_65:
      v18 = a9;
      v17 = v108;
      goto LABEL_6;
    }
    if ( v24 == 142 )
    {
LABEL_84:
      LODWORD(v21) = v21 + 1;
      v93[0] = 0;
      for ( j = 0; j < v12; ++j )
      {
        v58 = *((_DWORD *)&v101 + 10 * j + 3);
        if ( !v58 )
          goto LABEL_114;
        if ( ((unsigned __int8)(v24 + 0x80) > 0x22u || !_bittest64(&v22, (unsigned __int8)(v24 + 0x80)))
          && v58 != 1
          && *((_DWORD *)&v101 + 10 * j + 1) > 1u )
        {
LABEL_242:
          v61 = -1;
          v93[0] = 1;
          v94 = -1;
          goto LABEL_97;
        }
      }
      if ( !AuthzBasepSupportSetOperation((unsigned __int8)v24)
        && v12 == 2
        && (v101 & 0xFFFB) != 0
        && BYTE4(v105) != (_BYTE)v60
        && HIDWORD(v105) == 1 )
      {
        goto LABEL_114;
      }
      if ( v59 == 163 )
      {
LABEL_92:
        if ( v19 == 1
          || v12 != 2
          || ((_BYTE)v24 == 0x8F || (_BYTE)v24 == 0x88) && BYTE4(v105) == (_BYTE)v60 && HIDWORD(v105) == 1 )
        {
          goto LABEL_114;
        }
      }
      else
      {
        switch ( v59 )
        {
          case 128:
          case 129:
          case 130:
          case 131:
          case 132:
          case 133:
          case 134:
          case 136:
          case 142:
          case 143:
            goto LABEL_92;
          case 135:
          case 141:
            if ( v19 != 1 && v12 == 1 && ((v19 - 3) & 0xFFFFFFFD) != 0 )
              goto LABEL_96;
            goto LABEL_114;
          case 137:
          case 138:
          case 139:
          case 140:
          case 144:
          case 145:
          case 146:
          case 147:
            if ( v12 != 1 )
              goto LABEL_114;
            if ( (_WORD)v101 != 5 && v19 != 1 )
              goto LABEL_242;
            goto LABEL_96;
          case 160:
          case 161:
            v89 = v60;
            break;
          default:
            goto LABEL_96;
        }
        while ( v89 < v12 )
        {
          if ( *((_DWORD *)&v101 + 10 * v89 + 3) == 1 )
            goto LABEL_114;
          ++v89;
        }
      }
LABEL_96:
      AuthzBasepEvaluateExpression(v24, (__int64)&v101, &v94);
      v61 = v94;
      v20 = v102;
      if ( (unsigned __int8)(v24 + 114) <= 1u && v94 != -1 )
      {
        v61 = v94 == 0;
        v94 = v61;
      }
LABEL_97:
      LODWORD(v49) = v95;
      if ( v95 >= 0x100 )
      {
LABEL_131:
        v52 = v96;
        SecurityAttributeAndValues = -1073740791;
        v16 = v91;
        goto LABEL_68;
      }
      v126[v95] = v61;
      goto LABEL_60;
    }
    if ( v24 != 81 )
    {
      switch ( *v23 )
      {
        case 0u:
          while ( 1 )
          {
            v21 = (unsigned int)(v21 + 1);
            v63 = (_DWORD)v21 == v18;
            if ( (unsigned int)v21 >= v18 )
              break;
            if ( *((_BYTE *)v17 + v21) )
            {
              v63 = (_DWORD)v21 == v18;
              break;
            }
          }
          if ( !v63 )
            goto LABEL_114;
          v14 = v95;
          continue;
        case 1u:
        case 2u:
        case 3u:
        case 4u:
        case 0x10u:
        case 0x18u:
        case 0x50u:
          goto LABEL_12;
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
        case 0x84u:
        case 0x85u:
        case 0x86u:
        case 0x88u:
        case 0x8Fu:
          goto LABEL_84;
        case 0x87u:
        case 0x8Du:
          LODWORD(v21) = v21 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v24, &v101, v12, v93) )
            goto LABEL_114;
          v66 = v20 != 0LL;
          v94 = v66;
          if ( (_BYTE)v24 == 0x8D )
          {
            v66 = v20 == 0LL;
            v94 = v66;
          }
          goto LABEL_139;
        case 0x89u:
        case 0x8Bu:
        case 0x90u:
        case 0x92u:
          LODWORD(v21) = v21 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v24, &v101, v12, v93) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v93[0] )
              goto LABEL_115;
LABEL_204:
            v66 = -1;
            v67 = -1;
LABEL_205:
            v68 = v24 + 112;
            goto LABEL_138;
          }
          if ( v93[0] )
          {
            v87 = v98;
          }
          else
          {
            v77 = (_BYTE)v24 == 0x89 || (_BYTE)v24 == 0x90;
            SecurityAttributeAndValues = AuthzBasepMemberOf(
                                           (unsigned int)&v101,
                                           (_DWORD)v109,
                                           a10,
                                           a11,
                                           v77,
                                           (__int64)&v97);
            v87 = v97;
            v98 = v97;
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_204;
          if ( !v87 )
          {
            v66 = 0;
            v67 = 0;
            goto LABEL_205;
          }
          v66 = 1;
          v68 = v24 + 112;
          v67 = 1;
LABEL_138:
          v94 = v66;
          if ( (v68 & 0xFD) == 0 && v67 != -1 )
          {
            v66 = v67 == 0;
            v94 = v66;
          }
LABEL_139:
          v69 = v95;
          if ( v95 >= 0x100 )
            goto LABEL_131;
          v126[v95] = v66;
          goto LABEL_141;
        case 0x8Au:
        case 0x8Cu:
        case 0x91u:
        case 0x93u:
          LODWORD(v21) = v21 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v24, &v101, v12, v93) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v93[0] )
              goto LABEL_115;
LABEL_136:
            v66 = -1;
            v67 = -1;
            goto LABEL_137;
          }
          if ( v93[0] )
          {
            v88 = v98;
          }
          else
          {
            v78 = (_BYTE)v24 == 0x8A || (_BYTE)v24 == 0x91;
            SecurityAttributeAndValues = AuthzBasepDeviceMemberOf(
                                           (unsigned int)&v101,
                                           (_DWORD)v109,
                                           a10,
                                           a11,
                                           v78,
                                           (__int64)&v97);
            v88 = v97;
            v98 = v97;
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_136;
          if ( v88 )
          {
            v66 = 1;
            v67 = 1;
          }
          else
          {
            v66 = 0;
            v67 = 0;
          }
LABEL_137:
          v68 = v24 + 111;
          goto LABEL_138;
        case 0xA0u:
        case 0xA1u:
          LODWORD(v21) = v21 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v24, &v101, v12, v93) )
            goto LABEL_114;
          if ( v12 == 2 )
          {
            AuthzBasepEvaluateAttribute(v20);
            v72 = AuthzBasepEvaluateAttribute(v106);
            v69 = v95;
          }
          else
          {
            if ( v12 == 1 )
            {
              v86 = AuthzBasepEvaluateAttribute(v20);
              v70 = v95;
              v71 = v86;
            }
            else
            {
              if ( !v95 )
                goto LABEL_114;
              v70 = v95 - 1;
              v71 = v126[v95 - 1];
            }
            if ( !v70 )
            {
LABEL_114:
              SecurityAttributeAndValues = -1073741406;
              goto LABEL_115;
            }
            v69 = v70 - 1;
            v72 = v126[v69];
          }
          if ( (_BYTE)v24 == 0xA0 )
          {
            if ( !v71 || !v72 )
              goto LABEL_220;
            if ( v71 == -1 || v72 == -1 )
            {
LABEL_154:
              v73 = -1;
              goto LABEL_155;
            }
          }
          else if ( v71 != 1 )
          {
            if ( v72 == -1 )
              goto LABEL_154;
            if ( v72 != 1 )
            {
              if ( v71 == -1 )
                goto LABEL_154;
LABEL_220:
              v73 = 0;
              goto LABEL_155;
            }
          }
          v73 = 1;
LABEL_155:
          v94 = v73;
          if ( v69 >= 0x100 )
            goto LABEL_131;
          v126[v69] = v73;
LABEL_141:
          v14 = v69 + 1;
          v95 = v14;
          SecurityAttributeAndValues = 0;
          AuthzBasepResetOperands(&v101, v92);
          v19 = HIDWORD(v101);
          v12 = 0;
          v20 = v102;
          v99 = 0;
          break;
        case 0xA3u:
          LODWORD(v21) = v21 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v24, &v101, v12, v93) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v93[0] )
              goto LABEL_115;
LABEL_251:
            v84 = -1;
            goto LABEL_212;
          }
          if ( v93[0] )
            goto LABEL_251;
          v83 = v101;
          if ( v19 == 1 )
            v83 = v105;
          if ( !AuthzBasepOperandValueTypesCompatible((__int16 *)&v101) || (_BYTE)v24 != 0xA3 || v83 != 2 )
          {
LABEL_211:
            v84 = 0;
            goto LABEL_212;
          }
          v90 = AuthzBasepComputeBitwise(163LL, &v101);
          if ( v90 == -1 )
            goto LABEL_251;
          if ( !v90 )
            goto LABEL_211;
          v84 = 1;
LABEL_212:
          v85 = v95;
          v94 = v84;
          if ( v95 >= 0x100 )
            goto LABEL_131;
          v126[v95] = v84;
          v14 = v85 + 1;
          v95 = v14;
          SecurityAttributeAndValues = 0;
          AuthzBasepResetOperands(&v101, v92);
          v19 = HIDWORD(v101);
          v20 = v102;
          goto LABEL_65;
        case 0xF8u:
        case 0xF9u:
        case 0xFAu:
        case 0xFBu:
          goto LABEL_21;
        default:
          goto LABEL_114;
      }
      goto LABEL_65;
    }
LABEL_12:
    if ( v12 == 2 )
    {
      if ( v19 == 1 )
        goto LABEL_114;
      v80 = AuthzBasepEvaluateAttribute(v20);
      v81 = v95;
      v94 = v80;
      if ( v95 >= 0x100 )
        goto LABEL_131;
      v126[v95] = v80;
      v95 = v81 + 1;
      if ( LOBYTE(v92[0]) )
        ExFreePoolWithTag(v20[3], 0);
      v116 = v121;
      *(_OWORD *)P = v122;
      v118 = v123;
      v120 = v125;
      v119 = v124;
      v103 = *((_QWORD *)&v106 + 1);
      v102 = (PVOID *)&v116;
      v92[0] = HIBYTE(v92[0]);
      v101 = v105;
      v82 = v107;
      v107 = 0LL;
      v104 = v82;
      v105 = 0LL;
      v106 = 0LL;
      memset_0(&v121, 0, 0x48uLL);
      v22 = 0x7000FFFC3LL;
      v12 = 1;
    }
    v25 = *v23;
    v26 = a9 - v21;
    v27 = 1;
    v28 = 40LL * v12;
    *(_WORD *)((char *)&v101 + v28) = 0;
    *((_BYTE *)&v101 + v28 + 4) = 0;
    *(_DWORD *)((char *)&v101 + v28 + 8) = 0;
    *(_DWORD *)((char *)&v101 + v28 + 12) = 1;
    (&v102)[(unsigned __int64)v28 / 8] = 0LL;
    *(_DWORD *)((char *)&v103 + v28) = 0;
    *(__int64 *)((char *)&v104 + v28) = 0LL;
    if ( (_BYTE)v25 == 81 )
    {
LABEL_14:
      if ( (unsigned int)(v26 - 1) < 4 )
        goto LABEL_114;
      if ( (_BYTE)v25 == 16 )
      {
        *((_WORD *)&v101 + 20 * v12) = 3;
      }
      else
      {
        *((_WORD *)&v101 + 20 * v12) = 16;
        if ( (_BYTE)v25 == 80 )
          *((_BYTE *)&v101 + 40 * v12 + 4) = 1;
      }
      v29 = *(_DWORD *)(v23 + 1);
      *((_DWORD *)&v103 + 10 * v12) = v29;
      if ( v26 - 5 < v29 )
        goto LABEL_114;
      v30 = v23 + 5;
      v27 = v29 + 5;
    }
    else
    {
      switch ( v25 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
          if ( (unsigned int)(v26 - 1) < 0xA )
            goto LABEL_114;
          *((_DWORD *)&v103 + 10 * v12) = 10;
          *((_WORD *)&v101 + 20 * v12) = 2;
          v27 = 11;
          v30 = v23 + 1;
          break;
        case 16:
        case 24:
        case 80:
          goto LABEL_14;
        default:
          goto LABEL_20;
      }
    }
    *(&v104 + 5 * v12) = (__int64)v30;
LABEL_20:
    v20 = v102;
    ++v12;
    v19 = HIDWORD(v101);
    LODWORD(v21) = v27 + v21;
    v17 = v108;
    SecurityAttributeAndValues = 0;
    v18 = a9;
    v14 = v95;
    v99 = v12;
  }
LABEL_21:
  v31 = (unsigned int)(v21 + 1);
  if ( v12 == 2 )
  {
    if ( v19 == 1 )
      goto LABEL_114;
    v74 = AuthzBasepEvaluateAttribute(v20);
    v75 = v95;
    v94 = v74;
    if ( v95 >= 0x100 )
      goto LABEL_131;
    v126[v95] = v74;
    v95 = v75 + 1;
    if ( LOBYTE(v92[0]) )
      ExFreePoolWithTag(v20[3], 0);
    v116 = v121;
    *(_OWORD *)P = v122;
    v118 = v123;
    v120 = v125;
    v119 = v124;
    v103 = *((_QWORD *)&v106 + 1);
    v102 = (PVOID *)&v116;
    v92[0] = HIBYTE(v92[0]);
    v101 = v105;
    v76 = v107;
    v107 = 0LL;
    v104 = v76;
    v105 = 0LL;
    v106 = 0LL;
    memset_0(&v121, 0, 0x48uLL);
    v18 = a9;
    v12 = 1;
    v17 = v108;
    v99 = 1;
  }
  if ( v18 - (unsigned int)v31 < 4 )
    goto LABEL_114;
  v32 = *(unsigned int *)((char *)v17 + v31);
  v33 = v31 + 4;
  if ( v18 - v33 < (unsigned int)v32 )
    goto LABEL_114;
  if ( (unsigned int)v32 <= 0xFFFE )
  {
    v34 = (char *)v92 + v12;
    v35 = (char *)v17 + v33;
    v36 = 9LL * v12;
    *v34 = 0;
    WORD1(P[v36]) = v32;
    v115 = &P[v36 + 1];
    LOWORD(P[v36]) = v32;
    P[v36 + 1] = v35;
    if ( !(_WORD)v32 || !v35 )
      goto LABEL_114;
    if ( ((unsigned __int8)v35 & 1) != 0 )
    {
      v37 = 256LL;
      if ( KeGetCurrentIrql() >= 2u )
        v37 = 64LL;
      Pool2 = (void *)ExAllocatePool2(v37);
      P[v36 + 1] = Pool2;
      if ( !Pool2 )
      {
        v52 = v96;
        SecurityAttributeAndValues = -1073741801;
        v16 = v91;
        goto LABEL_68;
      }
      memmove(Pool2, v35, v32);
      *v34 = 1;
    }
    v39 = &P[v36 - 2];
    switch ( (_BYTE)v24 )
    {
      case 0xF9:
        v40 = a5;
        if ( !a11 )
          v40 = v112;
        *(_DWORD *)v39 = 3;
        break;
      case 0xFB:
        v40 = a7;
        if ( !a11 )
          v40 = a6;
        *(_DWORD *)v39 = 5;
        break;
      case 0xFA:
        v40 = v113;
        *(_DWORD *)v39 = 4;
        break;
      case 0xFC:
        v41 = v109;
        v40 = v109;
        *(_DWORD *)v39 = 6;
LABEL_38:
        P[v36 - 1] = v40;
        v42 = &P[v36 - 1];
        *(_QWORD *)((char *)&v119 + v36 * 8 + 8) = 0LL;
        *(__int64 *)((char *)&v120 + v36 * 8) = 0LL;
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(&P[v36 - 2]);
        if ( SecurityAttributeAndValues == -1073741275 )
        {
          if ( *(_DWORD *)v39 != 2
            || (SepSingletonGlobal[4] & 1) == 0
            || (v41[50] & 0x20000) != 0
            || !(unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)v39 + 1)
            || v100 )
          {
            goto LABEL_41;
          }
          v64 = v110;
          if ( !v91 )
          {
            v65 = SepValidateAndCopyGlobalEntry(v110, &v111);
            SecurityAttributeAndValues = v65;
            if ( v65 < 0 )
            {
              v100 = 1;
              if ( v65 != -1073741275 )
              {
LABEL_102:
                if ( SecurityAttributeAndValues != -1073741275 )
                  goto LABEL_115;
                goto LABEL_103;
              }
              goto LABEL_41;
            }
            v91 = 1;
          }
          *v42 = v111;
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(&P[v36 - 2]);
          if ( SecurityAttributeAndValues == -1073741275 )
          {
            *v42 = v64;
LABEL_41:
            if ( (unsigned __int8)CurrentIrql >= 2u || *(_DWORD *)v39 != 2 )
            {
LABEL_103:
              v62 = v99;
              SecurityAttributeAndValues = 0;
              v43 = 40LL * v99;
              *(_WORD *)((char *)&v101 + v43) = 0;
              *(_DWORD *)((char *)&v101 + v43 + 4) = 0;
              (&v102)[(unsigned __int64)v43 / 8] = 0LL;
              if ( *((_BYTE *)v92 + v62) )
              {
                ExFreePoolWithTag(*v115, 0);
                if ( (unsigned int)v62 >= 2 )
                  _report_rangecheckfailure();
                *((_BYTE *)v92 + v62) = 0;
              }
              goto LABEL_46;
            }
            *(_DWORD *)v39 = 7;
            *v42 = 0LL;
            SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(&P[v36 - 2]);
          }
        }
        if ( SecurityAttributeAndValues >= 0 )
        {
          v43 = 40LL * v99;
          *(_WORD *)((char *)&v101 + v43) = *(_WORD *)((char *)&v118 + v36 * 8);
          *(_DWORD *)((char *)&v101 + v43 + 4) = *(_DWORD *)((char *)&v118 + v36 * 8 + 8);
          (&v102)[(unsigned __int64)v43 / 8] = v39;
LABEL_46:
          v44 = *(_DWORD *)v39;
          v12 = v99 + 1;
          *(_DWORD *)((char *)&v103 + v43) = 0;
          LODWORD(v21) = v32 + v33;
          *(__int64 *)((char *)&v104 + v43) = 0LL;
          *(_DWORD *)((char *)&v101 + v43 + 8) = 0;
          *(_DWORD *)((char *)&v101 + v43 + 12) = v44;
          v19 = HIDWORD(v101);
          v14 = v95;
          v20 = v102;
          v99 = v12;
          goto LABEL_65;
        }
        goto LABEL_102;
      default:
        v40 = v110;
        *(_DWORD *)v39 = 2;
        break;
    }
    v41 = v109;
    goto LABEL_38;
  }
  v52 = v96;
  SecurityAttributeAndValues = -1073741562;
  v16 = v91;
LABEL_68:
  if ( LOBYTE(v92[0]) )
    ExFreePoolWithTag(P[1], 0);
  if ( HIBYTE(v92[0]) )
    ExFreePoolWithTag(*((PVOID *)&v122 + 1), 0);
  if ( v16 )
  {
    v53 = v111;
    if ( v111 )
    {
      AuthzBasepFreeSecurityAttributesList(v111);
      ExFreePoolWithTag(v53, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v52 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
