/*
 * XREFs of RtlpCopyAces @ 0x1408EA440
 * Callers:
 *     RtlpComputeMergedAcl2 @ 0x14080A094 (RtlpComputeMergedAcl2.c)
 *     RtlpInheritAcl2 @ 0x1408E9740 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x1408EA910 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  PACL v14; // rdi
  char v15; // si
  int v16; // r12d
  __int64 v17; // r9
  __int64 v18; // r8
  PACL v19; // rbx
  unsigned int v20; // r10d
  ACL *v21; // rcx
  bool v22; // cc
  _BYTE *v23; // r10
  int v24; // ecx
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  unsigned int v27; // eax
  signed __int64 v28; // r12
  UCHAR AclRevision; // al
  int v31; // ecx
  bool v32; // r8
  char v33; // r8
  char v34; // al
  int v35; // edx
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  int v39; // r8d
  bool v40; // [rsp+88h] [rbp-41h]
  char v41; // [rsp+89h] [rbp-40h] BYREF
  __int64 v42; // [rsp+8Ch] [rbp-3Dh] BYREF
  unsigned __int16 v43; // [rsp+94h] [rbp-35h]
  _BYTE *v44; // [rsp+98h] [rbp-31h]
  void *v45; // [rsp+A0h] [rbp-29h] BYREF

  v14 = Acl;
  v15 = 0;
  v16 = a3;
  v17 = (__int64)a2;
  v18 = a1;
  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u )
    return 3221225560LL;
  v19 = Acl + 1;
  v20 = 0;
  v21 = (PACL)((char *)Acl + Acl->AclSize);
  while ( v20 < Acl->AceCount )
  {
    if ( v19 >= v21 )
      return 3221225597LL;
    ++v20;
    v19 = (PACL)((char *)v19 + v19->AclSize);
  }
  v22 = v19 <= v21;
  v23 = (_BYTE *)(v18 + 8);
  v24 = a12;
  v25 = 0;
  if ( !v22 )
    v19 = 0LL;
  v26 = 0;
  while ( 1 )
  {
    v27 = *(unsigned __int16 *)(v18 + 4);
    v44 = v23;
    if ( v26 >= v27 )
      break;
    if ( *v23 != 17 )
    {
      if ( v24 == 3 )
        goto LABEL_23;
LABEL_10:
      if ( v16 != 2 )
      {
        if ( v16 )
        {
          if ( v16 != 1 )
            goto LABEL_22;
          v34 = ~(v23[1] >> 4);
        }
        else
        {
          v34 = v23[1] >> 4;
        }
        if ( (v34 & 1) != 0 )
          goto LABEL_11;
LABEL_22:
        v24 = a12;
        goto LABEL_23;
      }
LABEL_11:
      if ( !a5 )
      {
        v28 = *((unsigned __int16 *)v23 + 1);
        if ( v19 && v28 <= (__int64)v14 + v14->AclSize - (_QWORD)v19 )
        {
          if ( !v15 )
          {
            memmove(v19, v23, *((unsigned __int16 *)v23 + 1));
            AclRevision = v19->AclRevision;
            if ( (v19->AclRevision <= 8u || AclRevision <= 0xAu || (unsigned __int8)(AclRevision - 13) <= 1u)
              && (v19->Sbz1 & 8) == 0 )
            {
              v36 = *(_DWORD *)&v19->AceCount;
              if ( v36 < 0 )
                v36 |= *a2;
              if ( (v36 & 0x40000000) != 0 )
                v36 |= a2[1];
              if ( (v36 & 0x20000000) != 0 )
                v36 |= a2[2];
              if ( (v36 & 0x10000000) != 0 )
                v36 |= a2[3];
              *(_DWORD *)&v19->AceCount = v36 & 0xFFFFFFF;
              v37 = v19->AclRevision;
              if ( !(_BYTE)v37 || (unsigned __int8)v37 <= 0xAu && (v39 = 1650, _bittest(&v39, v37)) )
                v38 = v36 & a2[3] & 0xFFFFFFF;
              else
                v38 = v36 & (a2[3] & 0xEFFFFFF | 0x1000000);
              *(_DWORD *)&v19->AceCount = v38;
            }
            v19->Sbz1 &= ~a4;
LABEL_19:
            ++v14->AceCount;
LABEL_20:
            v19 = (PACL)((char *)v19 + (unsigned int)v28);
LABEL_21:
            v23 = v44;
            v25 += v28;
            v16 = a3;
            goto LABEL_22;
          }
LABEL_37:
          v19 = (PACL)((char *)v14 + v14->AclSize);
          goto LABEL_21;
        }
LABEL_36:
        v15 = 1;
        goto LABEL_37;
      }
      v31 = 0;
      LODWORD(v42) = 0;
      LODWORD(v28) = 0;
      v41 = 0;
      v45 = v19;
      v32 = a10 && (v23[1] & 3) != 0;
      v40 = v32;
      if ( (v23[1] & 8) != 0 )
      {
LABEL_34:
        v33 = a4;
      }
      else
      {
        LOBYTE(Acl) = 0;
        if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                 v23,
                                 a7,
                                 a8,
                                 a9,
                                 v17,
                                 0LL,
                                 0,
                                 (__int64)&v45,
                                 (__int64)&v42,
                                 (__int64)v14,
                                 0LL,
                                 (__int64)&v41,
                                 (__int64)&Acl) )
          return 3221225597LL;
        v31 = v42;
        LODWORD(v28) = v42;
        v23 = v44;
        if ( (_BYTE)Acl )
        {
          v15 = 1;
          goto LABEL_34;
        }
        v33 = a4;
        if ( !v15 && (_DWORD)v42 )
        {
          v19->Sbz1 &= ~a4;
          v31 = v42;
        }
      }
      if ( !v40 )
        goto LABEL_49;
      v35 = *(_DWORD *)(v23 + 10);
      HIDWORD(v42) = 0;
      v43 = 768;
      if ( !v35 )
        v35 = *((unsigned __int16 *)v23 + 7) - v43;
      if ( v31 && !v41 )
      {
        if ( !v15 )
        {
          v19->Sbz1 = ~v33 & (v19->Sbz1 | v23[1] & 0x1F);
          goto LABEL_20;
        }
        goto LABEL_37;
      }
      if ( *v23 <= 8u && !*((_DWORD *)v23 + 1) && v35 )
      {
LABEL_49:
        if ( !v15 )
          goto LABEL_20;
        v19 = (PACL)((char *)v14 + v14->AclSize);
        goto LABEL_21;
      }
      LODWORD(v28) = *((unsigned __int16 *)v23 + 1) + (_DWORD)v28;
      if ( (unsigned int)v28 > 0xFFFF )
        return 3221225597LL;
      if ( *((unsigned __int16 *)v23 + 1) <= (__int64)v14 + v14->AclSize - (_QWORD)v45 )
      {
        if ( !v15 )
        {
          memmove(v45, v23, *((unsigned __int16 *)v23 + 1));
          *((_BYTE *)v45 + 1) |= 8u;
          *((_BYTE *)v45 + 1) &= ~a4;
          goto LABEL_19;
        }
        goto LABEL_37;
      }
      goto LABEL_36;
    }
    if ( v24 == 3 )
    {
      if ( RtlFindAceByType(v14, 0x11u, 0LL) )
        break;
      v23 = v44;
      v17 = (__int64)a2;
      goto LABEL_10;
    }
LABEL_23:
    ++v26;
    v18 = a1;
    v23 += *((unsigned __int16 *)v23 + 1);
    v17 = (__int64)a2;
  }
  if ( v25 <= 0xFFFF )
  {
    *a13 = v25;
    return v15 != 0 ? 0xC0000023 : 0;
  }
  return 3221225597LL;
}
