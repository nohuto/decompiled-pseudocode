/*
 * XREFs of SepMaximumAccessCheckEx @ 0x1402ACD9C
 * Callers:
 *     SepAccessCheckEx @ 0x1402AE5D0 (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepAddAccessTypeList @ 0x1402ACF50 (AuthzBasepAddAccessTypeList.c)
 *     SepMatchCapability @ 0x1402AFC18 (SepMatchCapability.c)
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     SepIsCapabilitySid @ 0x1402B0010 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x1402B0080 (SepIsPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepSetAccessReasons @ 0x14044FA50 (AuthzBasepSetAccessReasons.c)
 *     SepMatchPackage @ 0x140468CC0 (SepMatchPackage.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepObjectInTypeList @ 0x1404974E8 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _DWORD *a14)
{
  char v14; // bl
  __int64 v17; // rbp
  int v18; // ecx
  __int64 v19; // rsi
  __int64 result; // rax
  unsigned int v21; // r12d
  char *v22; // rdi
  _DWORD *v23; // r13
  char v24; // al
  __int64 v25; // r8
  _DWORD *v26; // r11
  __int64 v27; // rbx
  _DWORD *v28; // rbx
  _DWORD *v29; // rcx
  int v30; // edx
  __int64 v31; // r8
  _DWORD *v32; // r11
  int v33; // r8d
  int v34; // r8d
  int v35; // eax
  int v36; // r8d
  char v37; // r14
  unsigned int v38; // r14d
  __int64 v39; // r9
  int v40; // ecx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r10
  __int64 v46; // r11
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r10
  __int64 v52; // r11
  int v53; // [rsp+20h] [rbp-98h]
  int v54; // [rsp+28h] [rbp-90h]
  unsigned int v55; // [rsp+60h] [rbp-58h]
  unsigned int v56; // [rsp+60h] [rbp-58h]
  unsigned int v57; // [rsp+64h] [rbp-54h]
  char *v58; // [rsp+68h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v60; // [rsp+C8h] [rbp+10h]
  int v61; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v62; // [rsp+D8h] [rbp+20h]

  v62 = a4;
  v60 = a2;
  v14 = a11;
  v17 = a8;
  v18 = *(_DWORD *)(a1 + 200) & 0x2000;
  v19 = a7;
  v59 = 0;
  v61 = 0;
  a6 = v18;
  if ( a11 && a7 )
  {
    v26 = (_DWORD *)(a8 + 28);
    v27 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*v26, 0x800000, 0, *(_QWORD *)(v26 + 3), 1);
      *(v32 - 1) = *v32;
      *v32 = v33;
      v26 = v32 + 12;
      --v27;
    }
    while ( v27 );
    v14 = a11;
    v18 = a6;
    a4 = v62;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v21 = 0;
  v22 = (char *)(a3 + 8);
  v57 = result;
  if ( (_DWORD)result )
  {
    v23 = a14;
    v58 = v22 + 8;
    while ( 1 )
    {
      if ( (v22[1] & 8) != 0 )
        goto LABEL_10;
      v24 = *v22;
      if ( !*v22 )
      {
        if ( v18 || v14 )
        {
LABEL_7:
          v25 = (__int64)(v22 + 8);
          LOBYTE(v54) = a12;
          goto LABEL_8;
        }
        if ( !(unsigned __int8)SepIsPackageSid(v58) )
        {
          if ( !(unsigned __int8)SepIsCapabilitySid(v22 + 8) )
            goto LABEL_7;
          v34 = (_DWORD)v22 + 8;
          goto LABEL_23;
        }
        v28 = v23 + 1;
        SepMatchPackage(
          a1,
          0xFFFFFFFFLL,
          v58,
          *((unsigned int *)v22 + 1),
          (char *)v23 + 21,
          v23 + 1,
          v23 + 5,
          v23 + 4,
          v23 + 6);
LABEL_24:
        *v23 &= ~*v28;
        goto LABEL_25;
      }
      switch ( v24 )
      {
        case 5:
          v35 = *((_DWORD *)v22 + 2);
          if ( (v35 & 1) == 0 )
            goto LABEL_37;
          if ( v22 == (char *)-12LL )
          {
            v14 = a11;
LABEL_37:
            v25 = (__int64)&v22[16 * (v35 & 1) + ((8LL * (v35 & 2)) | 0xC)];
LABEL_68:
            LOBYTE(v54) = a12;
LABEL_8:
            LOBYTE(v53) = v14;
            if ( (unsigned __int8)SepSidInToken(a1, 0LL, v25, 0LL, v53, v54) )
              AuthzBasepAddAccessTypeList(v17, v19, 0, v21, *((_DWORD *)v22 + 1), 1);
            goto LABEL_10;
          }
          if ( a9 )
          {
            LOBYTE(v54) = a12;
            LOBYTE(v53) = a11;
            if ( (unsigned __int8)SepSidInToken(
                                    a1,
                                    0LL,
                                    &v22[16 * (v35 & 1) + ((8LL * (v35 & 2)) | 0xC)],
                                    0LL,
                                    v53,
                                    v54) )
            {
              if ( (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, v17, (unsigned int)v19, &v59) )
              {
                v36 = v59;
                goto LABEL_35;
              }
            }
          }
          goto LABEL_25;
        case 4:
          v37 = a12;
          LOBYTE(v54) = a12;
          LOBYTE(v53) = a11;
          if ( (unsigned __int8)SepSidInToken(a1, 0LL, &v22[4 * (unsigned __int8)v22[13] + 20], 0LL, v53, v54) )
          {
            LOBYTE(v54) = v37;
            LOBYTE(v53) = 0;
            if ( (unsigned __int8)SepSidInToken(v60, 0LL, v22 + 12, 0LL, v53, v54) )
            {
              v36 = 0;
LABEL_35:
              AuthzBasepAddAccessTypeList(v17, v19, v36, v21, *((_DWORD *)v22 + 1), 1);
            }
          }
LABEL_25:
          v14 = a11;
          goto LABEL_10;
        case 1:
          goto LABEL_49;
      }
      if ( v24 != 6 )
        break;
      LOBYTE(a4) = 1;
      v38 = *((_DWORD *)v22 + 2) & 1;
      LOBYTE(v54) = a12;
      LOBYTE(v53) = v14;
      if ( (unsigned __int8)SepSidInToken(
                              a1,
                              0LL,
                              &v22[16 * v38 + ((8LL * (*((_DWORD *)v22 + 2) & 2)) | 0xC)],
                              a4,
                              v53,
                              v54) )
      {
        if ( v38 && v22 != (char *)-12LL )
        {
          if ( a9 )
          {
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, v17, (unsigned int)v19, &v59) )
              AuthzBasepAddAccessTypeList(v17, v19, v59, v21, *((_DWORD *)v22 + 1), 2);
          }
          else
          {
            v39 = *(_QWORD *)(v17 + 40);
            v40 = *((_DWORD *)v22 + 1) & ~*(_DWORD *)(v17 + 28);
            *(_DWORD *)(v17 + 32) |= v40;
            AuthzBasepSetAccessReasons(v40, 0x20000, v21, v39, 0);
          }
          goto LABEL_10;
        }
LABEL_50:
        AuthzBasepAddAccessTypeList(v17, v19, 0, v21, *((_DWORD *)v22 + 1), 2);
      }
LABEL_10:
      result = *((unsigned __int16 *)v22 + 1);
      ++v21;
      v58 += result;
      v22 += result;
      v18 = a6;
      a4 = v62;
      if ( v21 >= v57 )
        goto LABEL_11;
    }
    if ( v24 == 9 )
    {
      v41 = 4 * (unsigned int)(unsigned __int8)v22[9] + 8;
      v55 = 4 * (unsigned __int8)v22[9] + 8;
      if ( *((unsigned __int16 *)v22 + 1) - (_DWORD)v41 == 8 )
        goto LABEL_10;
      if ( a4 && !*a5 )
      {
        AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
        v41 = v55;
      }
      v42 = *(_QWORD **)(a1 + 1096);
      if ( v42 )
      {
        v43 = v42[72];
        v44 = v42[74];
        v45 = v42[73];
        v46 = v42[75];
      }
      else
      {
        LODWORD(v43) = 0;
        v44 = 0LL;
        v45 = 0LL;
        v46 = 0LL;
      }
      AuthzBasepEvaluateAceCondition(
        a1,
        *(_QWORD *)(a1 + 776),
        *a5,
        v43,
        v44,
        v45,
        v46,
        (__int64)&v22[v41 + 8],
        *((unsigned __int16 *)v22 + 1) - (_DWORD)v41 - 8,
        0,
        v14,
        (__int64)&v61);
      if ( v61 != 1 )
        goto LABEL_10;
      if ( a6 || v14 )
      {
LABEL_67:
        v25 = (__int64)(v22 + 8);
        goto LABEL_68;
      }
      if ( (unsigned __int8)SepIsPackageSid(v22 + 8) )
      {
        v28 = v23 + 1;
        SepMatchPackage(
          a1,
          0xFFFFFFFFLL,
          v22 + 8,
          *((unsigned int *)v22 + 1),
          (char *)v23 + 21,
          v23 + 1,
          v23 + 5,
          v23 + 4,
          v23 + 6);
      }
      else
      {
        if ( !(unsigned __int8)SepIsCapabilitySid(v22 + 8) )
          goto LABEL_67;
        v34 = (_DWORD)v22 + 8;
LABEL_23:
        v28 = v23 + 2;
        SepMatchCapability(a1, -1, v34, *((_DWORD *)v22 + 1), (__int64)v23 + 22, (__int64)(v23 + 2));
      }
      goto LABEL_24;
    }
    if ( !a13 )
      goto LABEL_10;
    if ( v24 != 10 )
      goto LABEL_10;
    if ( KeGetCurrentIrql() >= 2u )
      goto LABEL_10;
    v47 = 4 * (unsigned int)(unsigned __int8)v22[9] + 8;
    v56 = 4 * (unsigned __int8)v22[9] + 8;
    if ( *((unsigned __int16 *)v22 + 1) - (_DWORD)v47 == 8 )
      goto LABEL_10;
    if ( a4 && !*a5 )
    {
      AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
      v47 = v56;
    }
    v48 = *(_QWORD **)(a1 + 1096);
    if ( v48 )
    {
      v49 = v48[72];
      v50 = v48[74];
      v51 = v48[73];
      v52 = v48[75];
    }
    else
    {
      LODWORD(v49) = 0;
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
    }
    AuthzBasepEvaluateAceCondition(
      a1,
      *(_QWORD *)(a1 + 776),
      *a5,
      v49,
      v50,
      v51,
      v52,
      (__int64)&v22[v47 + 8],
      *((unsigned __int16 *)v22 + 1) - (_DWORD)v47 - 8,
      1,
      v14,
      (__int64)&v61);
    if ( ((v61 + 1) & 0xFFFFFFFD) != 0 )
      goto LABEL_10;
LABEL_49:
    LOBYTE(v54) = a12;
    LOBYTE(a4) = 1;
    LOBYTE(v53) = v14;
    if ( (unsigned __int8)SepSidInToken(a1, 0LL, v22 + 8, a4, v53, v54) )
      goto LABEL_50;
    goto LABEL_10;
  }
LABEL_11:
  if ( v14 && (_DWORD)v19 )
  {
    v29 = (_DWORD *)(v17 + 28);
    v30 = ~a10;
    v31 = v19;
    do
    {
      result = *(v29 - 1) & (*v29 | (unsigned int)v30);
      *v29 = result;
      v29 += 12;
      --v31;
    }
    while ( v31 );
  }
  return result;
}
