/*
 * XREFs of SepNormalAccessCheckEx @ 0x1402AF210
 * Callers:
 *     SepAccessCheckEx @ 0x1402AE5D0 (SepAccessCheckEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x1402ACF50 (AuthzBasepAddAccessTypeList.c)
 *     SepMatchCapability @ 0x1402AFC18 (SepMatchCapability.c)
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     SepIsCapabilitySid @ 0x1402B0010 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x1402B0080 (SepIsPackageSid.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402B2370 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x140468CC0 (SepMatchPackage.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 */

__int64 __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 j,
        __int64 a5,
        _QWORD *a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        __int64 a14)
{
  __int64 result; // rax
  unsigned int v15; // esi
  unsigned int v16; // ebx
  int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // r11
  __int64 v20; // rbp
  int v22; // r13d
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned int v25; // edi
  int v26; // ecx
  char v27; // al
  int v28; // edx
  _DWORD *v29; // rbx
  int v30; // eax
  char CanTokenMatchAllPackageSid; // al
  int v32; // eax
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // r8
  unsigned int i; // r8d
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // r11
  __int64 v43; // rbp
  __int64 v44; // r11
  __int64 v45; // r10
  int v46; // edx
  int v47; // r9d
  unsigned int v48; // r8d
  int v49; // eax
  int v50; // edx
  __int64 v51; // r9
  BOOLEAN v52; // al
  int v53; // eax
  unsigned int v54; // ebx
  _QWORD *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 v59; // r11
  int v60; // edx
  __int64 v61; // r9
  int v62; // eax
  _DWORD *v63; // r8
  _DWORD *v64; // rbx
  int v65; // eax
  int v66; // [rsp+20h] [rbp-88h]
  int v67; // [rsp+28h] [rbp-80h]
  int v68; // [rsp+60h] [rbp-48h]
  int v69; // [rsp+60h] [rbp-48h]
  unsigned int v70; // [rsp+60h] [rbp-48h]
  int v71; // [rsp+64h] [rbp-44h]
  unsigned int v72; // [rsp+68h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  unsigned int v76; // [rsp+C8h] [rbp+20h]

  result = (__int64)&retaddr;
  v15 = 0;
  v16 = a8;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  v18 = *(unsigned __int16 *)(j + 4);
  v19 = a2;
  v20 = a9;
  a7 = 0;
  v22 = 0;
  if ( a8 )
  {
    result = a9 + 24;
    v23 = a8;
    do
    {
      *(_DWORD *)result = a1;
      result += 48LL;
      --v23;
    }
    while ( v23 );
  }
  if ( !v17 && !a11 )
    v22 = *(_DWORD *)a14 | a1;
  v76 = v22;
  v24 = j + 8;
  v71 = v22;
  v25 = 0;
  while ( v25 < v18 )
  {
    v26 = *(_DWORD *)(v20 + 24);
    if ( !v26 && !v22 )
      return result;
    if ( (*(_BYTE *)(v24 + 1) & 8) == 0 && (v26 || !*(_BYTE *)v24 || *(_BYTE *)v24 == 9) )
    {
      v27 = *(_BYTE *)v24;
      if ( *(_BYTE *)v24 )
      {
        switch ( v27 )
        {
          case 5:
            v62 = *(_DWORD *)(v24 + 8);
            if ( (v62 & 1) == 0 || v24 == -12 )
            {
              v33 = v19;
              v35 = v24 + ((8LL * (v62 & 2)) | 0xC) + 16LL * (v62 & 1);
              LOBYTE(v67) = a12;
              v34 = a11;
              goto LABEL_32;
            }
            if ( a10 )
            {
              LOBYTE(v67) = a12;
              LOBYTE(v66) = a11;
              if ( (unsigned __int8)SepSidInToken(
                                      v19,
                                      0LL,
                                      v24 + ((8LL * (v62 & 2)) | 0xC) + 16LL * (v62 & 1),
                                      0LL,
                                      v66,
                                      v67) )
              {
                for ( i = 0; i < v16; ++i )
                {
                  if ( *(_DWORD *)(v24 + 12) == *(_DWORD *)(v20 + 48LL * i + 4)
                    && *(_DWORD *)(v24 + 16) == *(_DWORD *)(v20 + 48LL * i + 8)
                    && *(_DWORD *)(v24 + 20) == *(_DWORD *)(v20 + 48LL * i + 12)
                    && *(_DWORD *)(v24 + 24) == *(_DWORD *)(v20 + 48LL * i + 16) )
                  {
                    goto LABEL_34;
                  }
                }
              }
            }
            break;
          case 4:
            LOBYTE(v67) = a12;
            LOBYTE(v66) = a11;
            if ( !(unsigned __int8)SepSidInToken(
                                     v19,
                                     0LL,
                                     v24 + 4 * (*(unsigned __int8 *)(v24 + 13) + 5LL),
                                     0LL,
                                     v66,
                                     v67) )
              break;
            v35 = v24 + 12;
            v33 = a3;
            LOBYTE(v67) = a12;
            v34 = a11;
            goto LABEL_32;
          case 1:
            LOBYTE(v67) = a12;
            LOBYTE(j) = 1;
            LOBYTE(v66) = a11;
            if ( (unsigned __int8)SepSidInToken(v19, 0LL, v24 + 8, j, v66, v67) )
            {
              v50 = *(_DWORD *)(v20 + 24) & *(_DWORD *)(v24 + 4);
              if ( v50 )
              {
                v51 = *(_QWORD *)(v20 + 40);
                result = 1LL;
                if ( v51 )
                {
                  while ( (_DWORD)result )
                  {
                    if ( ((unsigned int)result & v50) != 0 && !*(_DWORD *)(v51 + 4LL * v15) )
                      *(_DWORD *)(v51 + 4LL * v15) = v25 | 0x20000;
                    ++v15;
                    result = (unsigned int)(2 * result);
                  }
                }
                return result;
              }
            }
            break;
          case 6:
            LOBYTE(j) = 1;
            v72 = *(_DWORD *)(v24 + 8) & 1;
            LOBYTE(v67) = a12;
            LOBYTE(v66) = a11;
            if ( (unsigned __int8)SepSidInToken(
                                    v19,
                                    0LL,
                                    v24 + ((8LL * (*(_DWORD *)(v24 + 8) & 2)) | 0xC) + 16LL * v72,
                                    j,
                                    v66,
                                    v67) )
            {
              if ( v72 && v24 != -12 && a10 )
              {
                for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
                {
                  v63 = (_DWORD *)(v20 + 48LL * (unsigned int)j);
                  if ( *(_DWORD *)(v24 + 12) == v63[1]
                    && *(_DWORD *)(v24 + 16) == v63[2]
                    && *(_DWORD *)(v24 + 20) == v63[3]
                    && *(_DWORD *)(v24 + 24) == v63[4] )
                  {
                    result = *(unsigned int *)(v24 + 4);
                    if ( ((unsigned int)result & v63[6]) != 0 )
                      return result;
                    goto LABEL_13;
                  }
                }
              }
              else
              {
                result = *(unsigned int *)(v24 + 4);
                if ( ((unsigned int)result & *(_DWORD *)(v20 + 24)) != 0 )
                  return result;
              }
            }
            break;
          case 9:
            v37 = 4 * (unsigned int)*(unsigned __int8 *)(v24 + 9) + 8;
            v70 = 4 * *(unsigned __int8 *)(v24 + 9) + 8;
            if ( *(unsigned __int16 *)(v24 + 2) - (_DWORD)v37 == 8 )
              break;
            if ( a5 && !*a6 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
              v37 = v70;
              v19 = a2;
            }
            v38 = *(_QWORD **)(v19 + 1096);
            if ( v38 )
            {
              v39 = v38[75];
              v40 = v38[73];
              v41 = v38[74];
              v42 = v38[72];
            }
            else
            {
              v39 = 0LL;
              v40 = 0LL;
              v41 = 0LL;
              LODWORD(v42) = 0;
            }
            AuthzBasepEvaluateAceCondition(
              a2,
              *(_QWORD *)(a2 + 776),
              *a6,
              v42,
              v41,
              v40,
              v39,
              v24 + v37 + 8,
              *(unsigned __int16 *)(v24 + 2) - (_DWORD)v37 - 8,
              0,
              a11,
              (__int64)&a7);
            if ( a7 != 1 )
              break;
            v34 = a11;
            if ( !v17 && !a11 && v22 )
            {
              if ( (unsigned __int8)SepIsPackageSid(v24 + 8) )
              {
                v64 = (_DWORD *)(a14 + 4);
                SepMatchPackage(
                  a2,
                  v76,
                  v24 + 8,
                  *(unsigned int *)(v24 + 4),
                  a14 + 21,
                  a14 + 4,
                  a14 + 20,
                  a14 + 16,
                  a14 + 24);
                goto LABEL_123;
              }
              if ( (unsigned __int8)SepIsCapabilitySid(v24 + 8) )
                goto LABEL_122;
              v34 = a11;
            }
            if ( !*(_DWORD *)(v20 + 24) )
              break;
            LOBYTE(v67) = a12;
            v33 = a2;
            goto LABEL_31;
          default:
            if ( a13 )
            {
              if ( v27 == 10 && KeGetCurrentIrql() < 2u )
              {
                v54 = 4 * *(unsigned __int8 *)(v24 + 9) + 8;
                if ( *(unsigned __int16 *)(v24 + 2) - v54 != 8 )
                {
                  if ( a5 && !*a6 )
                  {
                    AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
                    v19 = a2;
                  }
                  v55 = *(_QWORD **)(v19 + 1096);
                  if ( v55 )
                  {
                    v56 = v55[75];
                    v57 = v55[73];
                    v58 = v55[74];
                    v59 = v55[72];
                  }
                  else
                  {
                    v56 = 0LL;
                    v57 = 0LL;
                    v58 = 0LL;
                    LODWORD(v59) = 0;
                  }
                  AuthzBasepEvaluateAceCondition(
                    a2,
                    *(_QWORD *)(a2 + 776),
                    *a6,
                    v59,
                    v58,
                    v57,
                    v56,
                    v24 + v54 + 8LL,
                    *(unsigned __int16 *)(v24 + 2) - v54 - 8,
                    1,
                    a11,
                    (__int64)&a7);
                  if ( ((a7 + 1) & 0xFFFFFFFD) == 0 )
                  {
                    LOBYTE(v67) = a12;
                    LOBYTE(j) = 1;
                    LOBYTE(v66) = a11;
                    if ( (unsigned __int8)SepSidInToken(a2, 0LL, v24 + 8, j, v66, v67) )
                    {
                      v60 = *(_DWORD *)(v20 + 24) & *(_DWORD *)(v24 + 4);
                      if ( v60 )
                      {
                        v61 = *(_QWORD *)(v20 + 40);
                        result = 1LL;
                        if ( v61 )
                        {
                          while ( (_DWORD)result )
                          {
                            if ( ((unsigned int)result & v60) != 0 && !*(_DWORD *)(v61 + 4LL * v15) )
                              *(_DWORD *)(v61 + 4LL * v15) = v25 | 0x20000;
                            ++v15;
                            result = (unsigned int)(2 * result);
                          }
                        }
                        return result;
                      }
                    }
                  }
                }
              }
            }
            break;
        }
      }
      else
      {
        if ( v17 || a11 || !v22 )
          goto LABEL_12;
        if ( !(unsigned __int8)SepIsPackageSid(v24 + 8) )
        {
          if ( (unsigned __int8)SepIsCapabilitySid(v24 + 8) )
          {
LABEL_122:
            v64 = (_DWORD *)(a14 + 8);
            SepMatchCapability(a2, v76, v24 + 8, *(_DWORD *)(v24 + 4), a14 + 22, a14 + 8);
LABEL_123:
            v65 = ~*v64;
            v22 &= v65;
            *(_DWORD *)a14 &= v65;
            goto LABEL_13;
          }
          v16 = a8;
          v19 = a2;
LABEL_12:
          if ( !*(_DWORD *)(v20 + 24) )
            goto LABEL_13;
          v33 = v19;
          LOBYTE(v67) = a12;
          v34 = a11;
LABEL_31:
          v35 = v24 + 8;
LABEL_32:
          LOBYTE(v66) = v34;
          if ( (unsigned __int8)SepSidInToken(v33, 0LL, v35, 0LL, v66, v67) )
          {
            i = 0;
LABEL_34:
            AuthzBasepAddAccessTypeList(v20, v16, i, v25, *(_DWORD *)(v24 + 4), 0);
          }
          goto LABEL_13;
        }
        j = a14;
        v28 = *(_DWORD *)(v24 + 4);
        v68 = v28;
        v29 = (_DWORD *)(a14 + 4);
        if ( *(_DWORD *)(v24 + 16) == 2 && *(_BYTE *)(v24 + 9) == 2 )
        {
          v30 = *(_DWORD *)(v24 + 20);
          if ( v30 == 1 )
          {
            v69 = v28 & v71;
            CanTokenMatchAllPackageSid = SepCanTokenMatchAllPackageSid(a2);
            j = a14;
            if ( CanTokenMatchAllPackageSid )
            {
              *v29 |= v69;
              *(_BYTE *)(j + 21) = 1;
            }
            else
            {
              *(_DWORD *)(a14 + 16) |= v69;
              *(_BYTE *)(j + 24) = 1;
            }
            v29 = (_DWORD *)(j + 4);
LABEL_27:
            v32 = ~*v29;
            v22 &= v32;
            *(_DWORD *)j &= v32;
            goto LABEL_13;
          }
          if ( v30 != 2 )
            goto LABEL_27;
          *v29 |= v76 & v28;
          *(_BYTE *)(j + 21) = 1;
          v49 = ~*v29;
          v22 &= v49;
          *(_DWORD *)j &= v49;
        }
        else
        {
          *(_BYTE *)(a14 + 20) = 1;
          if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
            goto LABEL_27;
          v52 = RtlEqualSid(*(PSID *)(a2 + 784), (PSID)(v24 + 8));
          j = a14;
          if ( !v52 )
            goto LABEL_27;
          *v29 |= v76 & v68;
          *(_BYTE *)(j + 21) = 1;
          v53 = ~*v29;
          v22 &= v53;
          *(_DWORD *)j &= v53;
        }
      }
    }
LABEL_13:
    result = *(unsigned __int16 *)(v24 + 2);
    ++v25;
    v16 = a8;
    v24 += result;
    v19 = a2;
  }
  if ( v25 == v18 )
  {
    v43 = v20 + 24;
    if ( *(_DWORD *)v43 )
    {
      if ( v16 )
      {
        v44 = v16;
        result = 1LL;
        do
        {
          v45 = *(_QWORD *)(v43 + 16);
          v46 = 1;
          v47 = *(_DWORD *)v43;
          v48 = 0;
          if ( v45 )
          {
            while ( v46 )
            {
              if ( (v46 & v47) != 0 && !*(_DWORD *)(v45 + 4LL * v48) )
                *(_DWORD *)(v45 + 4LL * v48) = 0x800000;
              ++v48;
              v46 *= 2;
            }
          }
          v43 += 48LL;
          --v44;
        }
        while ( v44 );
      }
    }
  }
  return result;
}
