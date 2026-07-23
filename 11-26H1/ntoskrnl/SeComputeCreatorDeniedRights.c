/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x1403C7CA0
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14090D710 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SepGetScopedPolicySid @ 0x1403C8280 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403C82D8 (SepRmReferenceFindCap.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        int a3,
        unsigned int *a4)
{
  unsigned int *v5; // r14
  __int16 v6; // r15
  __int64 v7; // rax
  char *v8; // rcx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  _DWORD *StackBase; // rdx
  char *ClientToken; // rbp
  __int64 v13; // rax
  unsigned __int8 *v14; // rsi
  unsigned int *v15; // r15
  __int64 v16; // rax
  __int16 v17; // r8
  unsigned int v18; // r9d
  unsigned __int64 v19; // rdi
  unsigned __int8 j; // cl
  int v21; // ebx
  __int64 v22; // r12
  int v23; // r13d
  __int64 v24; // r14
  __int64 v25; // rax
  char *v26; // rcx
  _WORD *SeOwnerRightsSid; // rbp
  unsigned int v28; // esi
  char *v29; // rbx
  unsigned int i; // edi
  unsigned __int8 v31; // cl
  char *v32; // rcx
  bool v33; // al
  unsigned int v35; // ebx
  unsigned int k; // edi
  PSECURITY_DESCRIPTOR v37; // rbx
  unsigned int v38; // ebp
  char *v39; // rbp
  __int64 v40; // rax
  __int16 v41; // r8
  unsigned int v42; // r13d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int8 v45; // r14
  int v46; // edi
  int v47; // r12d
  __int64 v48; // r15
  unsigned int v49; // ebx
  unsigned int m; // edi
  unsigned __int8 v51; // [rsp+50h] [rbp-68h]
  __int16 v52; // [rsp+52h] [rbp-66h]
  __int16 v53; // [rsp+52h] [rbp-66h]
  unsigned int v54; // [rsp+58h] [rbp-60h]
  NTSTATUS AccessStatus; // [rsp+64h] [rbp-54h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-48h]

  AccessStatus = 0;
  GrantedAccess = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v5 = *(unsigned int **)(*(_QWORD *)(a2 + 72) + 48LL);
  SecurityDescriptor = v5;
  if ( !v5 )
  {
    SecurityDescriptor = a4;
    v5 = a4;
    if ( !a4 )
    {
      v5 = *(unsigned int **)(a2 + 64);
      SecurityDescriptor = v5;
      if ( !v5 )
        return 0LL;
    }
  }
  v6 = *((_WORD *)v5 + 1);
  if ( (v6 & 4) != 0 )
  {
    if ( v6 >= 0 )
    {
      v26 = (char *)*((_QWORD *)v5 + 4);
    }
    else
    {
      v25 = v5[4];
      if ( !(_DWORD)v25 )
        goto LABEL_6;
      v26 = (char *)v5 + v25;
    }
    SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
    if ( !v26 )
      goto LABEL_6;
    v28 = *((unsigned __int16 *)v26 + 2);
    v29 = v26 + 8;
    for ( i = 0; ; ++i )
    {
      if ( i >= v28 )
        goto LABEL_6;
      if ( (v29[1] & 8) == 0 )
        break;
LABEL_47:
      v29 += *((unsigned __int16 *)v29 + 1);
    }
    v31 = *v29;
    if ( ((unsigned __int8)*v29 < 5u || v31 > 8u) && (unsigned __int8)(v31 - 11) > 1u )
    {
      if ( v31 < 0xFu )
      {
        if ( v31 == 4 )
        {
          v32 = v29 + 12;
          goto LABEL_44;
        }
        if ( v31 < 0xBu )
        {
LABEL_43:
          v32 = v29 + 8;
LABEL_44:
          if ( v32
            && *(_WORD *)v32 == *SeOwnerRightsSid
            && !memcmp(v32, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v32 >> 8) + 8) )
          {
            goto LABEL_16;
          }
          goto LABEL_47;
        }
LABEL_99:
        if ( (unsigned __int8)(v31 - 13) > 1u )
          goto LABEL_47;
        goto LABEL_43;
      }
      if ( v31 > 0x10u )
        goto LABEL_99;
    }
    v32 = &v29[16 * (*((_DWORD *)v29 + 2) & 1) + ((8LL * (*((_DWORD *)v29 + 2) & 2)) | 0xC)];
    goto LABEL_44;
  }
LABEL_6:
  if ( (v6 & 0x10) != 0 )
  {
    if ( v6 >= 0 )
    {
      v8 = (char *)*((_QWORD *)v5 + 3);
    }
    else
    {
      v7 = v5[3];
      if ( (_DWORD)v7 )
        v8 = (char *)v5 + v7;
      else
        v8 = 0LL;
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( SepRmEnforceCap )
  {
    if ( v8 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v8);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid);
        StackBase = 0LL;
        if ( Cap < 0 )
          StackBase = ExpPlatformBinaryLock.StackBase;
        if ( (StackBase[14] & 1) != 0 )
        {
LABEL_16:
          ClientToken = (char *)a1->ClientToken;
          if ( !a1->ClientToken )
            ClientToken = (char *)a1->PrimaryToken;
          if ( *((__int16 *)v5 + 1) >= 0 )
          {
            v14 = (unsigned __int8 *)*((_QWORD *)v5 + 1);
          }
          else
          {
            v13 = v5[1];
            if ( (_DWORD)v13 )
              v14 = (unsigned __int8 *)v5 + v13;
            else
              v14 = 0LL;
          }
          v15 = (unsigned int *)(ClientToken + 232);
          if ( ClientToken != (char *)-232LL && v14 )
          {
            v16 = v14[1];
            v17 = *(_WORD *)v14;
            v52 = *(_WORD *)v14;
            v18 = 4 * v16 + 8;
            v54 = v18;
            v19 = *(_QWORD *)&v15[2 * (v14[4 * v16 + 4] & 0xF) + 4] & *(_QWORD *)&v15[2
                                                                                    * ((unsigned __int64)v14[4 * v16 + 4] >> 4)
                                                                                    + 36];
            for ( j = 0; ; j += 8 )
            {
              v51 = j;
              if ( !v19 )
                break;
              LOBYTE(v21) = v19;
              while ( (_BYTE)v21 )
              {
                v22 = *((_QWORD *)ClientToken + 30);
                v23 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v21);
                v24 = v22 + 16LL * (v23 + (unsigned int)j);
                if ( **(_WORD **)v24 == v17 )
                {
                  if ( !memcmp(v14, *(const void **)v24, v18) )
                    goto LABEL_58;
                  v17 = v52;
                  v18 = v54;
                }
                j = v51;
                v21 = (unsigned __int8)v21 ^ (1 << v23);
              }
              v19 >>= 8;
            }
            v35 = *v15;
            if ( *v15 > 0x40 )
            {
              for ( k = 64; k < v35; ++k )
              {
                v22 = *((_QWORD *)ClientToken + 30);
                v24 = v22 + 16LL * k;
                if ( **(_WORD **)v24 == v17 )
                {
                  if ( !memcmp(v14, *(const void **)v24, v18) )
                  {
LABEL_58:
                    if ( v24 && (v24 == v22 && (*(_DWORD *)(v24 + 8) & 0x10) == 0 || (*(_DWORD *)(v24 + 8) & 4) != 0) )
                    {
                      if ( !*((_DWORD *)ClientToken + 32) )
                        goto LABEL_62;
                      v39 = ClientToken + 504;
                      if ( v39 )
                      {
                        v40 = v14[1];
                        v41 = *(_WORD *)v14;
                        v53 = *(_WORD *)v14;
                        v42 = 4 * v40 + 8;
                        v43 = v14[4 * v40 + 4];
                        v44 = *(_QWORD *)&v39[8 * (v43 & 0xF) + 16] & *(_QWORD *)&v39[8 * (v43 >> 4) + 144];
                        v45 = 0;
                        while ( v44 )
                        {
                          LOBYTE(v46) = v44;
                          while ( (_BYTE)v46 )
                          {
                            v47 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v46);
                            v48 = *((_QWORD *)v39 + 1) + 16LL * (v47 + (unsigned int)v45);
                            if ( **(_WORD **)v48 == v41 )
                            {
                              if ( !memcmp(v14, *(const void **)v48, v42) )
                                goto LABEL_48;
                              v41 = v53;
                            }
                            v46 = (unsigned __int8)v46 ^ (1 << v47);
                          }
                          v45 += 8;
                          v44 >>= 8;
                        }
                        v49 = *(_DWORD *)v39;
                        if ( *(_DWORD *)v39 > 0x40u )
                        {
                          for ( m = 64; m < v49; ++m )
                          {
                            v48 = *((_QWORD *)v39 + 1) + 16LL * m;
                            if ( **(_WORD **)v48 == v41 )
                            {
                              if ( !memcmp(v14, *(const void **)v48, v42) )
                              {
LABEL_48:
                                if ( !v48 )
                                  break;
                                v33 = (*(_BYTE *)(v48 + 8) & 4) != 0;
                                goto LABEL_50;
                              }
                              v41 = v53;
                            }
                          }
                        }
                      }
                      v33 = 0;
LABEL_50:
                      if ( v33 )
                      {
LABEL_62:
                        v37 = SecurityDescriptor;
                        if ( (a3 & 0x40000) != 0 )
                        {
                          v38 = 0;
                          if ( !SeAccessCheck(
                                  SecurityDescriptor,
                                  a1,
                                  1u,
                                  0x40000u,
                                  0,
                                  0LL,
                                  (PGENERIC_MAPPING)&StandardBitMapping,
                                  KeGetCurrentThread()->PreviousMode,
                                  &GrantedAccess,
                                  &AccessStatus) )
                            v38 = 0x40000;
                        }
                        else
                        {
                          v38 = 0;
                        }
                        if ( (a3 & 0x80000) != 0
                          && !SeAccessCheck(
                                v37,
                                a1,
                                1u,
                                0x80000u,
                                0,
                                0LL,
                                (PGENERIC_MAPPING)&StandardBitMapping,
                                KeGetCurrentThread()->PreviousMode,
                                &GrantedAccess,
                                &AccessStatus) )
                        {
                          v38 |= 0x80000u;
                        }
                        return v38;
                      }
                    }
                    return 0LL;
                  }
                  v17 = v52;
                  v18 = v54;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
