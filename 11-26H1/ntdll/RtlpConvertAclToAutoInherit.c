/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x180124828
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013D6AC (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpCompareAces @ 0x180043BE0 (RtlpCompareAces.c)
 *     RtlCreateAcl @ 0x180047A70 (RtlCreateAcl.c)
 *     RtlpInheritAcl @ 0x18004BBA0 (RtlpInheritAcl.c)
 *     RtlInitializeSid @ 0x1800CB220 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        ACL *a1,
        ACL *a2,
        __int64 a3,
        unsigned __int8 a4,
        void *a5,
        void *a6,
        _DWORD *a7,
        PVOID *a8,
        _DWORD *a9)
{
  _DWORD *v10; // r14
  PVOID *v11; // r12
  _DWORD *v12; // rdi
  unsigned __int16 *v13; // r15
  void *ProcessHeap; // rsi
  int v15; // ebx
  ACL *v16; // rbx
  int *Heap_0; // rax
  int v18; // r11d
  int v19; // esi
  ACL *v20; // rbx
  int *v21; // r8
  int v22; // ecx
  int v23; // edx
  char v24; // cl
  int v25; // r10d
  int v26; // eax
  int v27; // eax
  unsigned __int16 *v28; // rax
  ACL *v29; // r11
  int v30; // r10d
  char *v31; // r15
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  char v35; // cl
  ACL *v36; // r12
  int v37; // r8d
  int v38; // r9d
  int v39; // ebx
  int v40; // edi
  _DWORD *v41; // rsi
  int v42; // r14d
  int AceCount; // eax
  ACL *v44; // rcx
  _DWORD *v45; // r8
  char v46; // dl
  char v47; // r11
  int v48; // esi
  int i; // r10d
  __int64 v50; // rax
  __int64 AclRevision; // rax
  bool v52; // zf
  int v53; // eax
  SIZE_T v54; // r8
  ACL *v55; // rax
  ACL *v56; // r9
  PVOID v57; // r8
  unsigned __int8 v59; // al
  ACL *v60; // rsi
  _BYTE *v61; // r14
  int v62; // r12d
  _DWORD *v63; // rdi
  _DWORD *v64; // r15
  int v65; // ebx
  _BYTE *v66; // rdx
  int v67; // ecx
  int j; // ebx
  int v69; // eax
  int v70; // eax
  PVOID v71; // rax
  char v72; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v73; // [rsp+91h] [rbp-7Fh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+94h] [rbp-7Ch] BYREF
  PVOID HeapHandle; // [rsp+A0h] [rbp-70h]
  int v76; // [rsp+A8h] [rbp-68h]
  int v77; // [rsp+ACh] [rbp-64h]
  PVOID *v78; // [rsp+B0h] [rbp-60h]
  PVOID BaseAddress; // [rsp+B8h] [rbp-58h]
  unsigned __int16 *v80; // [rsp+C0h] [rbp-50h]
  PVOID v81; // [rsp+C8h] [rbp-48h] BYREF
  int v82; // [rsp+D0h] [rbp-40h]
  int v83; // [rsp+D4h] [rbp-3Ch]
  int v84; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+E0h] [rbp-30h] BYREF
  int v86; // [rsp+E8h] [rbp-28h]
  int v87; // [rsp+ECh] [rbp-24h]
  unsigned __int16 *v88; // [rsp+F0h] [rbp-20h] BYREF
  void *v89; // [rsp+F8h] [rbp-18h]
  void *v90; // [rsp+100h] [rbp-10h]
  PACL Acl; // [rsp+108h] [rbp-8h]
  _DWORD *v92; // [rsp+110h] [rbp+0h]
  _DWORD *v93; // [rsp+118h] [rbp+8h]
  int v94; // [rsp+120h] [rbp+10h] BYREF
  __int64 v95; // [rsp+124h] [rbp+14h]
  char Sid[8]; // [rsp+150h] [rbp+40h] BYREF
  int v97; // [rsp+158h] [rbp+48h]

  v10 = a7;
  v11 = a8;
  v12 = a9;
  v85 = a3;
  v90 = a5;
  Acl = a1;
  v89 = a6;
  v13 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v88 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v72 = 0;
  v84 = 0;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  HeapHandle = ProcessHeap;
  v73 = a4;
  v92 = a7;
  v78 = a8;
  v93 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v94 = 257;
  v95 = 50331648LL;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = Acl;
  *a9 = 1024;
  v97 = 1;
  *a8 = 0LL;
  if ( v16 && !RtlValidAcl(v16) || !RtlValidAcl(a2) )
    return (unsigned int)-1073741705;
  v15 = RtlpInheritAcl(
          (unsigned __int8 *)v16,
          0LL,
          0,
          v73,
          1u,
          0,
          (__int64)&v94,
          (__int64)Sid,
          (__int64)&v94,
          (__int64)Sid,
          (__int64)a7,
          2,
          (unsigned __int64)&v85 & -(__int64)(v85 != 0),
          v85 != 0,
          &v81,
          &v72,
          &v84);
  if ( v15 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_111;
  }
  if ( v15 < 0 )
    goto LABEL_81;
  Heap_0 = (int *)RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, 24LL * a2->AceCount);
  v18 = 0;
  BaseAddress = Heap_0;
  if ( !Heap_0 )
  {
    v15 = -1073741801;
    goto LABEL_81;
  }
  v19 = 0;
  v20 = a2 + 1;
  v21 = Heap_0 + 1;
  while ( v19 < a2->AceCount )
  {
    if ( v20->AclRevision > 8u || v20->AclRevision == 4 )
      goto LABEL_33;
    v22 = *(_DWORD *)&v20->AceCount;
    if ( v22 < 0 )
      v22 |= *a7;
    if ( (v22 & 0x40000000) != 0 )
      v22 |= a7[1];
    if ( (v22 & 0x20000000) != 0 )
      v22 |= a7[2];
    if ( (v22 & 0x10000000) != 0 )
      v22 |= a7[3];
    if ( (unsigned __int8)(v20->AclRevision - 2) <= 2u || v20->AclRevision >= 7u )
      v23 = v22 & (a7[3] & 0xEFFFFFF | 0x1000000);
    else
      v23 = v22 & a7[3] & 0xFFFFFFF;
    v24 = v20->Sbz1 & 3 | ~v20->Sbz1 & 8;
    if ( (v20->Sbz1 & 2) != 0 )
    {
      v25 = v23;
      v18 = v23;
    }
    else
    {
      v25 = 0;
    }
    *(v21 - 1) = v18;
    v18 = 0;
    v21[2] = v25;
    v26 = v23;
    if ( (v24 & 1) == 0 )
      v26 = 0;
    *v21 = v26;
    v21[3] = v26;
    ++v19;
    v27 = (v24 & 8) != 0 ? v23 : 0;
    v21[1] = v27;
    v21[4] = v27;
    v21 += 6;
    v20 = (ACL *)((char *)v20 + v20->AclSize);
  }
  v28 = (unsigned __int16 *)v81;
  v29 = a2 + 1;
  v30 = 0;
  v83 = 0;
  v31 = (char *)v81 + 8;
  while ( v30 < v28[2] )
  {
    if ( (unsigned __int8)*v31 > 8u || *v31 == 4 )
    {
LABEL_62:
      *v12 |= 0x1000u;
      v15 = 0;
      v11 = v78;
      v13 = v80;
      ProcessHeap = HeapHandle;
      goto LABEL_112;
    }
    v32 = *((_DWORD *)v31 + 1);
    if ( v32 < 0 )
      v32 |= *v10;
    if ( (v32 & 0x40000000) != 0 )
      v32 |= v10[1];
    if ( (v32 & 0x20000000) != 0 )
      v32 |= v10[2];
    if ( (v32 & 0x10000000) != 0 )
      v32 |= v10[3];
    if ( *v31 && (((*v31 - 1) & 0xFA) != 0 || *v31 == 2) )
      v33 = v32 & (v10[3] & 0xEFFFFFF | 0x1000000);
    else
      v33 = v32 & v10[3] & 0xFFFFFFF;
    if ( v33 )
    {
      v34 = v31[1] & 3;
      v35 = v34 | ~v31[1] & 8;
      if ( v34 | ~v31[1] & 8 )
      {
        v82 = 0;
        v36 = v29;
        v37 = (v35 & 2) != 0 ? v33 : 0;
        v87 = v37;
        v38 = (v35 & 1) != 0 ? v33 : 0;
        *(_DWORD *)IdentifierAuthority.Value = v38;
        v39 = (v35 & 8) != 0 ? v33 : 0;
        v86 = v39;
        if ( a2->AceCount )
        {
          v40 = (v35 & 2) != 0 ? v33 : 0;
          v41 = (char *)BaseAddress + 20;
          v42 = (v35 & 1) != 0 ? v33 : 0;
          do
          {
            if ( RtlpCompareAces((unsigned __int8 *)v31, (unsigned __int8 *)v36, v90, v89) )
            {
              v39 &= ~*(v41 - 3);
              v40 &= ~*(v41 - 5);
              v42 &= ~*(v41 - 4);
              *v41 &= ~v86;
              *(v41 - 2) &= ~v87;
              *(v41 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
            }
            v41 += 6;
            v36 = (ACL *)((char *)v36 + v36->AclSize);
            AceCount = a2->AceCount;
            ++v82;
          }
          while ( v82 < AceCount );
          v30 = v83;
          v29 = a2 + 1;
          v77 = v42;
          v38 = v42;
          v10 = v92;
          v76 = v40;
          v37 = v40;
          v12 = v93;
        }
        if ( v37 | v38 | v39 )
        {
          *v12 |= 0x1000u;
          v13 = v80;
          v11 = v78;
          goto LABEL_110;
        }
      }
    }
    ++v30;
    v31 += *((unsigned __int16 *)v31 + 1);
    v83 = v30;
    v28 = (unsigned __int16 *)v81;
  }
  v44 = a2 + 1;
  v45 = (char *)BaseAddress + 16;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  for ( i = 0; i < a2->AceCount; ++i )
  {
    if ( *v45 | v45[1] | *(v45 - 1) )
    {
      v48 += v44->AclSize;
      AclRevision = v44->AclRevision;
      if ( RtlBaseAceType[AclRevision] )
      {
        if ( RtlBaseAceType[AclRevision] != 1 )
          goto LABEL_75;
        v52 = v46 == 0;
      }
      else
      {
        v52 = v47 == 0;
      }
      if ( !v52 )
        goto LABEL_62;
    }
    else
    {
      v50 = v44->AclRevision;
      if ( RtlBaseAceType[v50] )
      {
        if ( RtlBaseAceType[v50] == 1 )
          v47 = 1;
      }
      else
      {
        v46 = 1;
      }
    }
LABEL_75:
    v45 += 6;
    v44 = (ACL *)((char *)v44 + v44->AclSize);
  }
  v53 = RtlpInheritAcl(
          (unsigned __int8 *)Acl,
          0LL,
          0,
          v73,
          1u,
          0,
          (__int64)v90,
          (__int64)v89,
          (__int64)v90,
          (__int64)v89,
          (__int64)v10,
          2,
          (unsigned __int64)&v85 & -(__int64)(v85 != 0),
          v85 != 0,
          (PVOID *)&v88,
          &v72,
          &v84);
  v13 = v88;
  v15 = v53;
  if ( v53 < 0 )
    goto LABEL_79;
  v54 = v48 + (unsigned int)v88[1];
  v80 = v88;
  v55 = (ACL *)RtlAllocateHeap_0(HeapHandle, NtdllBaseTag + 1310720, v54);
  v11 = v78;
  v56 = v55;
  *v78 = v55;
  if ( v55 )
  {
    v59 = *(_BYTE *)v13;
    if ( *(_BYTE *)v13 <= a2->AclRevision )
      v59 = a2->AclRevision;
    if ( RtlCreateAcl(v56, v48 + v13[1], v59) < 0 )
    {
LABEL_33:
      *v12 |= 0x1000u;
      ProcessHeap = HeapHandle;
    }
    else
    {
      v60 = a2 + 1;
      v61 = (char *)*v11 + 8;
      v62 = 0;
      if ( a2->AceCount )
      {
        v63 = v92;
        v64 = (char *)BaseAddress + 16;
        do
        {
          v65 = *v64 | v64[1] | *(v64 - 1);
          if ( v65 )
          {
            memmove(v61, v60, v60->AclSize);
            v61[1] &= ~0x10u;
            v66 = v61;
            v61 += v60->AclSize;
            ++*((_WORD *)*v78 + 2);
            v67 = 0x80000000;
            *((_DWORD *)v66 + 1) = v65 & *(_DWORD *)&v60->AceCount;
            for ( j = ~*(_DWORD *)&v60->AceCount & v65; j; v67 = (unsigned int)v67 >> 1 )
            {
              if ( (unsigned int)v67 < 0x10000000 )
                break;
              if ( (v67 & *(_DWORD *)&v60->AceCount) != 0 )
              {
                v69 = v67;
                if ( v67 < 0 )
                  v69 = *v63 | v67;
                if ( (v69 & 0x40000000) != 0 )
                  v69 |= v63[1];
                if ( (v69 & 0x20000000) != 0 )
                  v69 |= v63[2];
                if ( (v69 & 0x10000000) != 0 )
                  v69 |= v63[3];
                v70 = v69 & 0xFFFFFFF;
                if ( (v70 & j) != 0 )
                {
                  *((_DWORD *)v66 + 1) |= v67;
                  j &= ~v70;
                }
              }
            }
            *((_DWORD *)v66 + 1) |= j;
          }
          ++v62;
          v60 = (ACL *)((char *)v60 + v60->AclSize);
          v64 += 6;
        }
        while ( v62 < a2->AceCount );
        v12 = v93;
        v13 = v80;
      }
      memmove(v61, v13 + 4, (unsigned int)v13[1] - 8);
      v11 = v78;
      *((_WORD *)*v78 + 2) += v13[2];
LABEL_110:
      ProcessHeap = HeapHandle;
    }
LABEL_111:
    v15 = 0;
LABEL_112:
    if ( (*v12 & 0x1000) != 0 )
    {
      if ( *v11 )
      {
        RtlFreeHeap_0(ProcessHeap, 0, *v11);
        *v11 = 0LL;
      }
      v71 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, a2->AclSize);
      *v11 = v71;
      if ( v71 )
        memmove(v71, a2, a2->AclSize);
      else
        v15 = -1073741801;
    }
    v57 = BaseAddress;
    if ( BaseAddress )
      goto LABEL_80;
    goto LABEL_81;
  }
  v15 = -1073741801;
LABEL_79:
  v57 = BaseAddress;
  ProcessHeap = HeapHandle;
LABEL_80:
  RtlFreeHeap_0(ProcessHeap, 0, v57);
LABEL_81:
  if ( v81 )
    RtlFreeHeap_0(ProcessHeap, 0, v81);
  if ( v13 )
    RtlFreeHeap_0(ProcessHeap, 0, v13);
  return (unsigned int)v15;
}
