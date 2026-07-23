/*
 * XREFs of SepMaximumAccessCheckEx @ 0x14051B700
 * Callers:
 *     SepAccessCheckEx @ 0x1403AEA10 (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x1402FCF70 (SepMatchPackage.c)
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 *     SepMatchCapability @ 0x1403F1568 (SepMatchCapability.c)
 *     AuthzBasepSetAccessReasons @ 0x140447B80 (AuthzBasepSetAccessReasons.c)
 *     SepIsPackageSid @ 0x1404591B0 (SepIsPackageSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x14045EB20 (AuthzBasepAddAccessTypeList.c)
 *     SepIsCapabilitySid @ 0x140461B10 (SepIsCapabilitySid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepObjectInTypeList @ 0x140491038 (AuthzBasepObjectInTypeList.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned int a11,
        char a12,
        char a13,
        __int64 a14)
{
  int v14; // ebx
  char v16; // r15
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // r14
  int v21; // eax
  int v22; // ebx
  _DWORD *v23; // r11
  __int64 v24; // rbx
  _DWORD *v25; // r11
  int v26; // r8d
  __int64 result; // rax
  unsigned int v28; // ebp
  char *v29; // rdi
  _WORD *v30; // rcx
  char v31; // al
  _DWORD *v32; // rbx
  _DWORD *v33; // rcx
  int v34; // edx
  __int64 v35; // r8
  void *v36; // r8
  bool v37; // al
  int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // ebx
  __int64 v41; // r9
  int v42; // ecx
  unsigned int v43; // ebx
  _QWORD *v44; // rax
  void *v45; // r9
  void *v46; // r8
  void *v47; // r10
  void *v48; // r11
  __int64 v49; // rcx
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  void *v52; // r9
  void *v53; // r8
  void *v54; // r10
  void *v55; // r11
  int v56; // [rsp+28h] [rbp-90h]
  int v57; // [rsp+28h] [rbp-90h]
  int v58; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v59; // [rsp+64h] [rbp-54h]
  _WORD *v60; // [rsp+68h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp+8h]
  unsigned int v63; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v64; // [rsp+D8h] [rbp+20h]

  v64 = a4;
  v14 = *(_DWORD *)(a1 + 200);
  v16 = a11;
  v18 = a14;
  v19 = a8;
  v20 = a7;
  v63 = 0;
  v58 = 0;
  v21 = v14 & 0x4000;
  v22 = v14 & 0x2000;
  a6 = v21;
  v61 = v22;
  if ( (_BYTE)a11 && a7 )
  {
    v23 = (_DWORD *)(a8 + 28);
    v24 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*v23, 0x800000, 0, *(_QWORD *)(v23 + 3), 1);
      *(v25 - 1) = *v25;
      *v25 = v26;
      v23 = v25 + 12;
      --v24;
    }
    while ( v24 );
    v22 = v61;
    a4 = v64;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v28 = 0;
  v29 = (char *)(a3 + 8);
  v59 = result;
  a11 = 0;
  if ( (_DWORD)result )
  {
    v60 = v29 + 8;
    v30 = v29 + 8;
    while ( (v29[1] & 8) != 0 )
    {
LABEL_19:
      result = *((unsigned __int16 *)v29 + 1);
      ++a11;
      v30 = (_WORD *)((char *)v30 + result);
      v28 = a11;
      v29 += result;
      a4 = v64;
      v60 = v30;
      if ( a11 >= v59 )
        goto LABEL_20;
    }
    v31 = *v29;
    if ( !*v29 )
    {
      if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v30) )
      {
        if ( v22 && !a6 )
          goto LABEL_32;
        if ( !v16 && SepIsPackageSid((__int64)v60) )
        {
          v32 = (_DWORD *)(v18 + 4);
          SepMatchPackage(
            a1,
            -1,
            v60,
            *((_DWORD *)v29 + 1),
            (_BYTE *)(v18 + 21),
            (_DWORD *)(v18 + 4),
            (_BYTE *)(v18 + 20),
            (_DWORD *)(v18 + 16),
            (_BYTE *)(v18 + 24));
LABEL_16:
          *(_DWORD *)v18 &= ~*v32;
LABEL_17:
          v22 = v61;
LABEL_18:
          v30 = v60;
          goto LABEL_19;
        }
        if ( v22 && !a6 || v16 )
          goto LABEL_32;
        if ( SepIsCapabilitySid((__int64)(v29 + 8)) )
        {
LABEL_29:
          v36 = v29 + 8;
LABEL_30:
          v32 = (_DWORD *)(v18 + 8);
          SepMatchCapability(a1, -1, v36, *((_DWORD *)v29 + 1), (_SID_AND_ATTRIBUTES *)(v18 + 22), (_DWORD *)(v18 + 8));
          goto LABEL_16;
        }
        goto LABEL_31;
      }
      goto LABEL_36;
    }
    if ( v31 == 5 )
    {
      v38 = *((_DWORD *)v29 + 2);
      if ( (v38 & 1) != 0 && v29 != (char *)-12LL )
      {
        if ( !a9
          || !SepSidInToken(a1, 0LL, (unsigned __int8 *)&v29[16 * (v38 & 1) + ((8LL * (v38 & 2)) | 0xC)], 0, v16, a12)
          || !AuthzBasepObjectInTypeList((_DWORD *)v29 + 3, v19, v20, &v63) )
        {
          goto LABEL_17;
        }
        v57 = 1;
LABEL_49:
        v39 = v63;
LABEL_50:
        AuthzBasepAddAccessTypeList(v19, (unsigned int)v20, v39, v28, *((_DWORD *)v29 + 1), v57);
        goto LABEL_17;
      }
      if ( !SepSidInToken(a1, 0LL, (unsigned __int8 *)&v29[16 * (v38 & 1) + ((8LL * (v38 & 2)) | 0xC)], 0, v16, a12) )
        goto LABEL_17;
      v57 = 1;
    }
    else
    {
      switch ( v31 )
      {
        case 4:
          if ( !SepSidInToken(a1, 0LL, (unsigned __int8 *)&v29[4 * (unsigned __int8)v29[13] + 20], 0, v16, a12) )
            goto LABEL_18;
          v37 = SepSidInToken(a2, 0LL, (unsigned __int8 *)v29 + 12, 0, 0, a12);
          goto LABEL_33;
        case 1:
          if ( !SepSidInToken(a1, 0LL, (unsigned __int8 *)v29 + 8, 1, v16, a12) )
            goto LABEL_18;
          v56 = 2;
          goto LABEL_35;
        case 6:
          v40 = *((_DWORD *)v29 + 2) & 1;
          if ( !SepSidInToken(
                  a1,
                  0LL,
                  (unsigned __int8 *)&v29[16 * v40 + ((8LL * (*((_DWORD *)v29 + 2) & 2)) | 0xC)],
                  1,
                  v16,
                  a12) )
            goto LABEL_17;
          if ( v40 && v29 != (char *)-12LL )
          {
            if ( !a9 )
            {
              v41 = *(_QWORD *)(v19 + 40);
              v42 = *((_DWORD *)v29 + 1) & ~*(_DWORD *)(v19 + 28);
              *(_DWORD *)(v19 + 32) |= v42;
              AuthzBasepSetAccessReasons(v42, 0x20000, v28, v41, 0);
              goto LABEL_17;
            }
            if ( !AuthzBasepObjectInTypeList((_DWORD *)v29 + 3, v19, v20, &v63) )
              goto LABEL_17;
            v57 = 2;
            goto LABEL_49;
          }
          break;
        case 9:
          v43 = 4 * (unsigned __int8)v29[9] + 8;
          if ( *((unsigned __int16 *)v29 + 1) - v43 == 8 )
            goto LABEL_101;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v44 = *(_QWORD **)(a1 + 1096);
          if ( v44 )
          {
            v45 = (void *)v44[72];
            v46 = (void *)v44[74];
            v47 = (void *)v44[73];
            v48 = (void *)v44[75];
          }
          else
          {
            v45 = 0LL;
            v46 = 0LL;
            v47 = 0LL;
            v48 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)a1,
            *(void **)(a1 + 776),
            *a5,
            v45,
            v46,
            v47,
            v48,
            &v29[v43 + 8],
            *((unsigned __int16 *)v29 + 1) - v43 - 8,
            0,
            v16,
            &v58);
          if ( v58 != 1 )
            goto LABEL_17;
          v22 = v61;
          if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v49) )
          {
            if ( !v61 || a6 )
            {
              if ( !v16 && SepIsPackageSid((__int64)(v29 + 8)) )
                goto LABEL_39;
              if ( (!v61 || a6) && !v16 && SepIsCapabilitySid((__int64)(v29 + 8)) )
                goto LABEL_29;
            }
            if ( SepSidInToken(a1, 0LL, (unsigned __int8 *)v29 + 8, 0, v16, a12) )
              AuthzBasepAddAccessTypeList(v19, (unsigned int)v20, 0, a11, *((_DWORD *)v29 + 1), 1);
            goto LABEL_18;
          }
LABEL_36:
          if ( v22 || v16 )
            goto LABEL_32;
          if ( !SepIsPackageSid((__int64)(v29 + 8)) )
          {
            if ( SepIsCapabilitySid((__int64)(v29 + 8)) )
            {
              v36 = v29 + 8;
              goto LABEL_30;
            }
LABEL_31:
            v28 = a11;
LABEL_32:
            v37 = SepSidInToken(a1, 0LL, (unsigned __int8 *)v29 + 8, 0, v16, a12);
LABEL_33:
            if ( !v37 )
              goto LABEL_18;
            v56 = 1;
LABEL_35:
            AuthzBasepAddAccessTypeList(v19, (unsigned int)v20, 0, v28, *((_DWORD *)v29 + 1), v56);
            goto LABEL_18;
          }
LABEL_39:
          v32 = (_DWORD *)(v18 + 4);
          SepMatchPackage(
            a1,
            -1,
            (_WORD *)v29 + 4,
            *((_DWORD *)v29 + 1),
            (_BYTE *)(v18 + 21),
            (_DWORD *)(v18 + 4),
            (_BYTE *)(v18 + 20),
            (_DWORD *)(v18 + 16),
            (_BYTE *)(v18 + 24));
          goto LABEL_16;
        default:
          if ( !a13 || v31 != 10 || KeGetCurrentIrql() >= 2u )
            goto LABEL_19;
          v50 = 4 * (unsigned __int8)v29[9] + 8;
          if ( *((unsigned __int16 *)v29 + 1) - v50 == 8 )
          {
LABEL_101:
            v22 = v61;
            goto LABEL_19;
          }
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v51 = *(_QWORD **)(a1 + 1096);
          if ( v51 )
          {
            v52 = (void *)v51[72];
            v53 = (void *)v51[74];
            v54 = (void *)v51[73];
            v55 = (void *)v51[75];
          }
          else
          {
            v52 = 0LL;
            v53 = 0LL;
            v54 = 0LL;
            v55 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)a1,
            *(void **)(a1 + 776),
            *a5,
            v52,
            v53,
            v54,
            v55,
            &v29[v50 + 8],
            *((unsigned __int16 *)v29 + 1) - v50 - 8,
            1u,
            v16,
            &v58);
          if ( ((v58 + 1) & 0xFFFFFFFD) != 0 || !SepSidInToken(a1, 0LL, (unsigned __int8 *)v29 + 8, 1, v16, a12) )
            goto LABEL_17;
          break;
      }
      v57 = 2;
    }
    v39 = 0;
    goto LABEL_50;
  }
LABEL_20:
  if ( v16 && (_DWORD)v20 )
  {
    v33 = (_DWORD *)(v19 + 28);
    v34 = ~a10;
    v35 = v20;
    do
    {
      result = *(v33 - 1) & (*v33 | (unsigned int)v34);
      *v33 = result;
      v33 += 12;
      --v35;
    }
    while ( v35 );
  }
  return result;
}
