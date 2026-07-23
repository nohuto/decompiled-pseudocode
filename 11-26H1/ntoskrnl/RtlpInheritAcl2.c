/*
 * XREFs of RtlpInheritAcl2 @ 0x1408E9740
 * Callers:
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpCopyAces @ 0x1408EA440 (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x1408EB060 (RtlpGenerateInheritedAce.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        _DWORD *a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  _DWORD *v18; // r13
  PACL v19; // rdi
  char v20; // r11
  unsigned int v21; // ebp
  unsigned __int8 *v22; // r10
  unsigned int v23; // ebx
  int v24; // esi
  int v25; // edx
  unsigned int v27; // r12d
  _BYTE *v29; // r9
  int *v30; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  unsigned __int8 *v35; // rcx
  unsigned int v36; // eax
  char v38; // bl
  UCHAR v39; // bp
  unsigned int v40; // edx
  __int64 v41; // rax
  unsigned __int8 *v42; // r14
  char v43; // dl
  unsigned int v44; // r8d
  unsigned int v45; // r15d
  PACL v46; // rdx
  PACL v47; // rcx
  unsigned int v48; // r9d
  ACL *v49; // r8
  int InheritedAce; // ecx
  unsigned int AceCount; // r9d
  unsigned __int16 *v52; // rcx
  __int64 AclSize; // r8
  unsigned int v54; // edx
  unsigned __int16 *v55; // r8
  char v56; // [rsp+70h] [rbp-68h]
  char v57; // [rsp+71h] [rbp-67h]
  unsigned int v58; // [rsp+74h] [rbp-64h]
  unsigned int v59; // [rsp+78h] [rbp-60h]
  unsigned int v60; // [rsp+78h] [rbp-60h]
  unsigned int v61; // [rsp+7Ch] [rbp-5Ch] BYREF
  unsigned int v62; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+84h] [rbp-54h]
  void *Src; // [rsp+88h] [rbp-50h]
  bool v67; // [rsp+F0h] [rbp+18h]
  char v69; // [rsp+100h] [rbp+28h]

  v18 = a15;
  v19 = Acl;
  v20 = 0;
  v21 = 2;
  v61 = 0;
  v22 = a2;
  v58 = 0;
  v23 = *a15;
  v24 = 0;
  LOWORD(v63) = 0;
  v25 = 2;
  Src = 0LL;
  v67 = 0;
  v27 = 0;
  v56 = 0;
  v57 = 1;
  v59 = 2;
  if ( v23 >= 8 && v23 <= 0xFFFC )
  {
    memset_0(Acl, 0, v23);
    v22 = a2;
    *(_WORD *)&v19->AclRevision = 2;
    v19->AclSize = v23 & 0xFFFC;
    v20 = 0;
    *(_DWORD *)&v19->AceCount = 0;
    v25 = 2;
  }
  v29 = a17;
  v30 = a18;
  v31 = a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  *v30 = v31;
  if ( (a3 & 8) != 0 )
    goto LABEL_21;
  if ( (a3 & 0x1000) != 0 )
  {
    v20 = 1;
    v56 = 1;
    *v30 = v31 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
    goto LABEL_21;
  if ( v22 )
  {
    v57 = 0;
    if ( *v22 >= 2u )
      v25 = *v22;
    v59 = v25;
    if ( a5 && (a3 & 0x1000) == 0 )
      v21 = 1;
    v32 = RtlpCopyAces(v22, a11, v21);
    v27 = v61;
    v67 = v32 == -1073741789;
    v58 = v61;
    v33 = 0;
    if ( v32 != -1073741789 )
      v33 = v32;
    if ( v33 < 0 )
      return (unsigned int)v33;
    if ( a6 && v61 )
    {
      AceCount = v19->AceCount;
      v52 = (unsigned __int16 *)&v19[1];
      AclSize = v19->AclSize;
      v54 = 0;
      v63 = AceCount;
      v55 = (unsigned __int16 *)((char *)v19 + AclSize);
      while ( v54 < AceCount )
      {
        if ( v52 >= v55 )
          return 3221225597LL;
        ++v54;
        v52 = (unsigned __int16 *)((char *)v52 + v52[1]);
      }
      if ( v52 <= v55 )
        Src = v52;
    }
    v22 = a2;
    v29 = a17;
    v20 = v56;
LABEL_19:
    v34 = a12;
    if ( a12 == 1 )
    {
LABEL_20:
      *v29 = 1;
      goto LABEL_21;
    }
    goto LABEL_43;
  }
  if ( !a5 )
    goto LABEL_19;
  v34 = a12;
  if ( a12 == 1 )
  {
    if ( (a3 & 0x1004) == 4 )
      return 3221225591LL;
    goto LABEL_20;
  }
LABEL_43:
  if ( v34 == 2 && (v27 || v20 || v22 && !*((_WORD *)v22 + 2)) )
    goto LABEL_20;
LABEL_21:
  if ( (a5 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!a5 || v20) || (v35 = a1) == 0LL )
  {
    v38 = v67;
    v39 = v59;
    goto LABEL_30;
  }
  v36 = *a1;
  if ( (unsigned __int8)v36 < 2u || (unsigned __int8)v36 > 4u )
    return 3221225560LL;
  v39 = v59;
  v42 = a1 + 8;
  v61 = 0;
  v62 = 0;
  if ( v59 <= v36 )
    v39 = v36;
  v43 = 0;
  v44 = 0;
  v69 = 0;
  LOBYTE(a15) = 0;
  v45 = 0;
  v60 = 0;
  LOBYTE(a18) = 0;
  while ( v45 < *((unsigned __int16 *)v35 + 2) )
  {
    if ( *v42 == 17 )
    {
      if ( a12 != 3 )
        goto LABEL_56;
      if ( RtlFindAceByType(v19, 0x11u, 0LL) )
      {
        v43 = v69;
        v44 = v60;
        break;
      }
    }
    else if ( a12 == 3 )
    {
      goto LABEL_56;
    }
    InheritedAce = RtlpGenerateInheritedAce(
                     (_DWORD)v42,
                     a4,
                     a5,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a13,
                     a14,
                     (__int64)&v61,
                     (__int64)v19,
                     (__int64)&v62,
                     (__int64)&a15);
    if ( InheritedAce == -1073741789 )
    {
      v43 = 1;
      v69 = 1;
    }
    else
    {
      v43 = v69;
      if ( InheritedAce < 0 )
        return (unsigned int)InheritedAce;
    }
    if ( (_BYTE)a15 )
      LOBYTE(a18) = 1;
    v24 += v61;
    if ( v61 > v60 || (v44 = v60 - v61, v60 = v44, v44 <= v62) )
    {
      v44 = v62;
      v60 = v62;
    }
    v35 = a1;
LABEL_56:
    ++v45;
    v42 += *((unsigned __int16 *)v42 + 1);
  }
  if ( v43 || (v38 = v67) != 0 )
  {
    v38 = 1;
    v24 += v44;
  }
  if ( !a6 || !v27 || !(_BYTE)a18 || v38 )
  {
LABEL_30:
    v40 = v58;
    goto LABEL_31;
  }
  v46 = v19 + 1;
  v47 = 0LL;
  v48 = 0;
  v49 = (PACL)((char *)v19 + v19->AclSize);
  while ( v48 < v19->AceCount )
  {
    if ( v46 >= v49 )
      return 3221225597LL;
    ++v48;
    v46 = (PACL)((char *)v46 + v46->AclSize);
  }
  if ( v46 <= v49 )
    v47 = v46;
  if ( !v47 )
    LODWORD(v47) = (_DWORD)v19 + v19->AclSize;
  memmove(&v19[1], Src, (unsigned int)((_DWORD)v47 - (_DWORD)Src));
  v19->AceCount -= v63;
  v40 = 0;
LABEL_31:
  v41 = v24 + v40;
  if ( !(_DWORD)v41 )
  {
    if ( *a17 )
    {
      if ( !v57 )
        goto LABEL_32;
      *v18 = 0;
      return 0LL;
    }
    else
    {
      *v18 = 0;
      return 2147483659LL;
    }
  }
LABEL_32:
  if ( (unsigned __int64)(v41 + 8) > 0xFFFF )
    return 3221225597LL;
  *v18 = v24 + v27 + 8;
  if ( !v38 )
  {
    v19->AclRevision = v39;
    v19->AclSize = v40 + v24 + 8;
    return 0LL;
  }
  return 3221225507LL;
}
