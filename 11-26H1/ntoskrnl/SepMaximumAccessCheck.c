/*
 * XREFs of SepMaximumAccessCheck @ 0x1402B1890
 * Callers:
 *     SepAccessCheck @ 0x1402B00F0 (SepAccessCheck.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x1402ACF50 (AuthzBasepAddAccessTypeList.c)
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     RtlSidHashLookup @ 0x1402AFED0 (RtlSidHashLookup.c)
 *     SepIsCapabilitySid @ 0x1402B0010 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x1402B0080 (SepIsPackageSid.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402B2370 (SepCanTokenMatchAllPackageSid.c)
 *     SepSidInTokenSidHash @ 0x1403C06B0 (SepSidInTokenSidHash.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int8 *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned int v13; // r11d
  int v14; // edi
  __int64 v15; // r13
  char v16; // r15
  __int64 result; // rax
  char *v18; // rsi
  unsigned int v19; // r12d
  unsigned __int8 *v20; // rdx
  __int64 v21; // rbp
  unsigned int *v22; // r14
  char v23; // al
  bool v24; // zf
  __int64 v25; // rdi
  unsigned __int8 *v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rax
  __int16 v29; // r9
  size_t v30; // r8
  unsigned __int64 v31; // rbp
  unsigned __int8 i; // cl
  int v33; // ebx
  __int64 v34; // r13
  int v35; // r12d
  __int64 v36; // r14
  unsigned int v37; // ebx
  int v38; // eax
  unsigned __int16 v39; // cx
  unsigned int v40; // ebx
  _QWORD *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // r11
  int v46; // edi
  int v47; // eax
  int v48; // eax
  _DWORD *v49; // rcx
  unsigned int j; // ebp
  int v51; // ecx
  bool v52; // al
  unsigned int v53; // ebx
  __int64 m; // r8
  BOOLEAN v55; // al
  bool v56; // al
  bool v57; // al
  __int64 k; // r8
  __int64 v59; // rdx
  unsigned int *v60; // rcx
  int v61; // edi
  const void **v62; // rax
  _DWORD *v63; // rcx
  __int64 v64; // rdx
  int v65; // [rsp+20h] [rbp-B8h]
  int v66; // [rsp+28h] [rbp-B0h]
  __int16 v67; // [rsp+60h] [rbp-78h]
  int v68; // [rsp+64h] [rbp-74h]
  unsigned int v69; // [rsp+68h] [rbp-70h]
  unsigned int v70; // [rsp+6Ch] [rbp-6Ch]
  int v71; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v72; // [rsp+74h] [rbp-64h]
  __int64 v73; // [rsp+78h] [rbp-60h]
  unsigned int *v74; // [rsp+80h] [rbp-58h]
  unsigned __int8 v77; // [rsp+F0h] [rbp+18h]
  __int64 v78; // [rsp+F8h] [rbp+20h]

  v78 = a4;
  v13 = a7;
  v14 = *(_DWORD *)(a1 + 200) & 0x2000;
  v15 = a1;
  v16 = a11;
  v68 = v14;
  v71 = -1;
  if ( a11 && a7 )
  {
    v59 = a7;
    v60 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v60 - 1) = *v60;
      v60 += 12;
      --v59;
    }
    while ( v59 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v18 = (char *)(a3 + 8);
  v19 = 0;
  v72 = result;
  v69 = 0;
  if ( (_DWORD)result )
  {
    v20 = a6;
    v21 = a3 + 16;
    v22 = (unsigned int *)(a3 + 12);
    v74 = (unsigned int *)(a3 + 12);
    v73 = a3 + 16;
    while ( (v18[1] & 8) != 0 )
    {
LABEL_28:
      result = *((unsigned __int16 *)v18 + 1);
      ++v19;
      v15 = a1;
      v21 += result;
      v22 = (unsigned int *)((char *)v22 + result);
      v69 = v19;
      v18 += result;
      v73 = v21;
      v74 = v22;
      if ( v19 >= v72 )
        goto LABEL_29;
    }
    v23 = *v18;
    if ( !*v18 )
    {
      if ( !v14 && !v16 )
      {
        if ( SepIsPackageSid(v21) )
          goto LABEL_61;
        if ( SepIsCapabilitySid((__int64)(v18 + 8)) )
        {
          v61 = *((_DWORD *)v18 + 1);
          v62 = RtlSidHashLookup(v15 + 808, (unsigned __int8 *)v18 + 8);
          if ( v62 && ((_DWORD)v62[1] & 4) != 0 )
          {
            *(_DWORD *)(a13 + 8) |= v61;
            *(_BYTE *)(a13 + 22) = 1;
          }
          *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
          goto LABEL_25;
        }
        v20 = a6;
      }
      v24 = v16 == 0;
      v25 = 504LL;
      v26 = (unsigned __int8 *)(v18 + 8);
      if ( v24 )
        v25 = 232LL;
      v27 = v15 + v25;
      if ( v20
        && *(_WORD *)RtlpBootStatHandleLock.WaitBlock[2].SparePtr == *(_WORD *)v26
        && !memcmp(
              RtlpBootStatHandleLock.WaitBlock[2].SparePtr,
              v18 + 8,
              4 * ((unsigned __int64)*(unsigned __int16 *)RtlpBootStatHandleLock.WaitBlock[2].SparePtr >> 8) + 8) )
      {
        v26 = a6;
      }
      if ( a12
        && RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink == (struct _LIST_ENTRY *)*(_WORD *)v26
        && !memcmp(
              RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink,
              v26,
              4
            * ((unsigned __int64)(unsigned __int16)RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink >> 8)
            + 8) )
      {
        v16 = a11;
LABEL_35:
        v13 = a7;
        if ( a7 == 1 )
        {
          v14 = v68;
          *(_DWORD *)(a8 + 28) |= *v22 & ~*(_DWORD *)(a8 + 32);
          goto LABEL_27;
        }
        AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *v22, 1);
      }
      else
      {
        if ( v27 && v26 )
        {
          v28 = v26[1];
          v29 = *(_WORD *)v26;
          v67 = *(_WORD *)v26;
          v30 = (unsigned int)(4 * v28 + 8);
          v70 = 4 * v28 + 8;
          v31 = *(_QWORD *)(v27 + 8LL * (v26[4 * v28 + 4] & 0xF) + 16) & *(_QWORD *)(v27
                                                                                   + 8
                                                                                   * ((unsigned __int64)v26[4 * v28 + 4] >> 4)
                                                                                   + 144);
          for ( i = 0; ; i += 8 )
          {
            v77 = i;
            if ( !v31 )
              break;
            LOBYTE(v33) = v31;
            while ( (_BYTE)v33 )
            {
              v34 = *(_QWORD *)(v27 + 8);
              v35 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v33);
              v36 = v34 + 16LL * (v35 + (unsigned int)i);
              if ( **(_WORD **)v36 == v29 )
              {
                if ( !memcmp(v26, *(const void **)v36, v30) )
                  goto LABEL_31;
                v30 = v70;
                v29 = v67;
              }
              i = v77;
              v33 = (unsigned __int8)v33 ^ (1 << v35);
            }
            v31 >>= 8;
          }
          v37 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 > 0x40u )
          {
            for ( j = 64; j < v37; ++j )
            {
              v34 = *(_QWORD *)(v27 + 8);
              v36 = v34 + 16LL * j;
              if ( **(_WORD **)v36 == v29 )
              {
                if ( !memcmp(v26, *(const void **)v36, v30) )
                {
LABEL_31:
                  v16 = a11;
                  if ( !v36 )
                  {
                    v19 = v69;
                    v22 = v74;
                    v21 = v73;
                    goto LABEL_25;
                  }
                  if ( a11 || v36 != v34 || (*(_DWORD *)(v36 + 8) & 0x10) != 0 )
                  {
                    v38 = *(_DWORD *)(v36 + 8);
                    v19 = v69;
                    v22 = v74;
                    v21 = v73;
                    if ( (v38 & 4) == 0 )
                      goto LABEL_25;
                  }
                  else
                  {
                    v19 = v69;
                    v22 = v74;
                    v21 = v73;
                  }
                  goto LABEL_35;
                }
                v30 = v70;
                v29 = v67;
              }
            }
          }
          v19 = v69;
          v22 = v74;
          v21 = v73;
        }
        v16 = a11;
      }
      goto LABEL_25;
    }
    if ( v23 == 5 )
    {
      v51 = *((_DWORD *)v18 + 2);
      if ( (v51 & 1) != 0 && v18 != (char *)-12LL )
      {
        if ( !a9 )
          goto LABEL_28;
        v57 = SepSidInToken(v15, v20, (unsigned __int8 *)&v18[16 * (v51 & 1) + ((8LL * (v51 & 2)) | 0xC)], 0, v16, a12);
        v13 = a7;
        if ( v57 )
        {
          for ( k = 0LL; (unsigned int)k < a7; k = (unsigned int)(k + 1) )
          {
            if ( *((_DWORD *)v18 + 3) == *(_DWORD *)(a8 + 48 * k + 4)
              && *((_DWORD *)v18 + 4) == *(_DWORD *)(a8 + 48 * k + 8)
              && *((_DWORD *)v18 + 5) == *(_DWORD *)(a8 + 48 * k + 12)
              && *((_DWORD *)v18 + 6) == *(_DWORD *)(a8 + 48 * k + 16) )
            {
              AuthzBasepAddAccessTypeList(a8, a7, k, v19, *((_DWORD *)v18 + 1), 1);
              goto LABEL_26;
            }
          }
        }
        goto LABEL_27;
      }
      v52 = SepSidInToken(v15, v20, (unsigned __int8 *)&v18[16 * (v51 & 1) + ((8LL * (v51 & 2)) | 0xC)], 0, v16, a12);
    }
    else
    {
      if ( v23 != 4 )
      {
        switch ( v23 )
        {
          case 1:
            v56 = SepSidInToken(v15, v20, (unsigned __int8 *)v18 + 8, 1, v16, a12);
            v13 = a7;
            if ( !v56 )
              goto LABEL_27;
            if ( a7 == 1 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_27;
            }
            break;
          case 6:
            v53 = *((_DWORD *)v18 + 2) & 1;
            if ( !SepSidInToken(
                    v15,
                    v20,
                    (unsigned __int8 *)&v18[16 * v53 + ((8LL * (*((_DWORD *)v18 + 2) & 2)) | 0xC)],
                    1,
                    v16,
                    a12) )
              goto LABEL_26;
            if ( v53 && v18 != (char *)-12LL )
            {
              v13 = a7;
              if ( a9 )
              {
                for ( m = 0LL; (unsigned int)m < a7; m = (unsigned int)(m + 1) )
                {
                  if ( *((_DWORD *)v18 + 3) == *(_DWORD *)(a8 + 48 * m + 4)
                    && *((_DWORD *)v18 + 4) == *(_DWORD *)(a8 + 48 * m + 8)
                    && *((_DWORD *)v18 + 5) == *(_DWORD *)(a8 + 48 * m + 12)
                    && *((_DWORD *)v18 + 6) == *(_DWORD *)(a8 + 48 * m + 16) )
                  {
                    AuthzBasepAddAccessTypeList(a8, a7, m, v19, *((_DWORD *)v18 + 1), 2);
                    goto LABEL_26;
                  }
                }
              }
              else
              {
                *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
              }
              goto LABEL_27;
            }
            v13 = a7;
            if ( a7 == 1 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_27;
            }
            break;
          case 9:
            v39 = *((_WORD *)v18 + 1);
            v40 = 4 * (unsigned __int8)v18[9] + 8;
            if ( (int)(v39 - v40 - 8) <= 0 )
              goto LABEL_28;
            if ( a4 && !*a5 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
              v39 = *((_WORD *)v18 + 1);
            }
            v41 = *(_QWORD **)(v15 + 1096);
            if ( v41 )
            {
              v42 = v41[75];
              v43 = v41[73];
              v44 = v41[74];
              v45 = v41[72];
            }
            else
            {
              v42 = 0LL;
              v43 = 0LL;
              v44 = 0LL;
              LODWORD(v45) = 0;
            }
            AuthzBasepEvaluateAceCondition(
              v15,
              *(_QWORD *)(v15 + 776),
              *a5,
              v45,
              v44,
              v43,
              v42,
              (__int64)&v18[v40 + 8],
              v39 - v40 - 8,
              0,
              v16,
              (__int64)&v71);
            if ( v71 != 1 )
              goto LABEL_26;
            if ( !v14 && !v16 )
            {
              if ( SepIsPackageSid((__int64)(v18 + 8)) )
              {
LABEL_61:
                v46 = *((_DWORD *)v18 + 1);
                if ( *((_DWORD *)v18 + 4) == 2 && v18[9] == 2 )
                {
                  v47 = *((_DWORD *)v18 + 5);
                  if ( v47 == 1 )
                  {
                    if ( (unsigned __int8)SepCanTokenMatchAllPackageSid(v15) )
                    {
                      *(_DWORD *)(a13 + 4) |= v46;
                      *(_BYTE *)(a13 + 21) = 1;
                      v48 = ~*(_DWORD *)(a13 + 4);
                    }
                    else
                    {
                      *(_DWORD *)(a13 + 16) |= v46;
                      v48 = ~*(_DWORD *)(a13 + 4);
                      *(_BYTE *)(a13 + 24) = 1;
                    }
                    *(_DWORD *)a13 &= v48;
                    goto LABEL_25;
                  }
                  v49 = (_DWORD *)a13;
                  if ( v47 == 2 )
                  {
                    *(_DWORD *)(a13 + 4) |= v46;
                    *(_BYTE *)(a13 + 21) = 1;
                    *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
                    goto LABEL_25;
                  }
                }
                else
                {
                  *(_BYTE *)(a13 + 20) = 1;
                  if ( (*(_DWORD *)(v15 + 200) & 0x4000) != 0 )
                  {
                    v55 = RtlEqualSid(*(PSID *)(v15 + 784), v18 + 8);
                    v49 = (_DWORD *)a13;
                    if ( v55 )
                    {
                      *(_DWORD *)(a13 + 4) |= v46;
                      *(_BYTE *)(a13 + 21) = 1;
                      *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
                      goto LABEL_25;
                    }
                  }
                  else
                  {
                    v49 = (_DWORD *)a13;
                  }
                }
                *v49 &= ~v49[1];
LABEL_25:
                v14 = v68;
LABEL_26:
                v13 = a7;
LABEL_27:
                a4 = v78;
                v20 = a6;
                goto LABEL_28;
              }
              if ( SepIsCapabilitySid((__int64)(v18 + 8)) )
              {
                LOBYTE(v66) = 0;
                LOBYTE(v65) = 1;
                if ( (unsigned __int8)SepSidInTokenSidHash(v15 + 808, 0LL, v18 + 8, 0LL, v65, v66) )
                {
                  *(_DWORD *)(a13 + 8) |= *((_DWORD *)v18 + 1);
                  *(_BYTE *)(a13 + 22) = 1;
                }
                *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
                goto LABEL_26;
              }
            }
            if ( !SepSidInToken(v15, a6, (unsigned __int8 *)v18 + 8, 0, v16, a12) )
              goto LABEL_26;
LABEL_79:
            AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *((_DWORD *)v18 + 1), 1);
            goto LABEL_26;
          default:
            goto LABEL_28;
        }
        AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *((_DWORD *)v18 + 1), 2);
        goto LABEL_26;
      }
      if ( !SepSidInToken(v15, v20, (unsigned __int8 *)&v18[4 * (unsigned __int8)v18[13] + 20], 0, v16, a12) )
        goto LABEL_26;
      v52 = SepSidInToken(a2, 0LL, (unsigned __int8 *)v18 + 12, 0, 0, a12);
    }
    v13 = a7;
    if ( !v52 )
      goto LABEL_27;
    if ( a7 == 1 )
    {
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 32);
      goto LABEL_27;
    }
    goto LABEL_79;
  }
LABEL_29:
  if ( v16 && v13 )
  {
    v63 = (_DWORD *)(a8 + 28);
    v64 = v13;
    do
    {
      result = *(v63 - 1) & (*v63 | (unsigned int)~a10);
      *v63 = result;
      v63 += 12;
      --v64;
    }
    while ( v64 );
  }
  return result;
}
