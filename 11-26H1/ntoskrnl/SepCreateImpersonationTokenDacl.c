/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x1409033E0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, ACL **a3)
{
  unsigned __int8 *v3; // r15
  unsigned __int8 *v4; // r12
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r14
  unsigned int v8; // edi
  ACL *Pool2; // rbx
  char AclRevision; // di
  __int64 AclSize; // r10
  ACL *v12; // rdx
  unsigned int v13; // ecx
  ACL *v14; // r9
  USHORT v15; // r8
  char v16; // di
  __int64 v17; // r10
  ACL *v18; // rdx
  unsigned int v19; // ecx
  ACL *v20; // r9
  USHORT v21; // r8
  unsigned __int8 *v22; // rdi
  char v23; // si
  __int64 v24; // r10
  ACL *v25; // rdx
  unsigned int v26; // ecx
  ACL *v27; // r9
  USHORT v28; // r8
  unsigned __int8 *v29; // rdi
  char v30; // si
  __int64 v31; // r10
  ACL *v32; // rdx
  unsigned int v33; // ecx
  ACL *v34; // r9
  USHORT v35; // r8
  char v36; // di
  __int64 v37; // r10
  ACL *v38; // rdx
  unsigned int v39; // ecx
  ACL *v40; // r9
  USHORT v41; // r8
  char v42; // di
  __int64 v43; // r9
  ACL *v44; // rdx
  unsigned int v45; // ecx
  ACL *v46; // r10
  USHORT v47; // r8

  v3 = 0LL;
  v4 = 0LL;
  v6 = **(unsigned __int8 ***)(a2 + 152);
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    v4 = *(unsigned __int8 **)(a2 + 784);
  v7 = **(unsigned __int8 ***)(a1 + 152);
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    v3 = *(unsigned __int8 **)(a1 + 784);
  v8 = 4
     * (v6[1]
      + *(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeRestrictedSid + 1)
      + v7[1])
     + 88;
  if ( v3 )
    v8 += 4 * v3[1] + 16;
  if ( v4 )
  {
    if ( v3 && RtlEqualSid(v4, v3) )
      v4 = 0LL;
    else
      v8 += 4 * v4[1] + 16;
  }
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    if ( v8 - 8 <= 0xFFF4 )
    {
      memset_0(Pool2, 0, v8);
      *(_WORD *)&Pool2->AclRevision = 2;
      *(_DWORD *)&Pool2->AceCount = 0;
      Pool2->AclSize = v8;
    }
    if ( MmIsKernelAddress((unsigned __int64)v6) && v6 && (*v6 & 0xF) == 1 && v6[1] <= 0xFu && Pool2->AclRevision <= 4u )
    {
      AclRevision = 2;
      if ( Pool2->AclRevision > 2u )
        AclRevision = Pool2->AclRevision;
      if ( RtlValidAcl(Pool2) )
      {
        AclSize = Pool2->AclSize;
        v12 = Pool2 + 1;
        v13 = 0;
        v14 = (ACL *)((char *)Pool2 + AclSize);
        while ( v13 < Pool2->AceCount )
        {
          if ( v12 >= v14 )
            goto LABEL_26;
          ++v13;
          v12 = (ACL *)((char *)v12 + v12->AclSize);
        }
        if ( v12 > v14 )
          v12 = 0LL;
        v15 = 4 * (v6[1] + 4);
        if ( v12 && (char *)v12 + v15 <= (char *)Pool2 + AclSize )
        {
          v12->AclSize = v15;
          *(_WORD *)&v12->AclRevision = 0;
          *(_DWORD *)&v12->AceCount = 983551;
          memmove(&v12[1], v6, 4LL * v6[1] + 8);
          ++Pool2->AceCount;
          Pool2->AclRevision = AclRevision;
        }
      }
    }
LABEL_26:
    if ( MmIsKernelAddress((unsigned __int64)v7) && v7 && (*v7 & 0xF) == 1 && v7[1] <= 0xFu && Pool2->AclRevision <= 4u )
    {
      v16 = 2;
      if ( Pool2->AclRevision > 2u )
        v16 = Pool2->AclRevision;
      if ( RtlValidAcl(Pool2) )
      {
        v17 = Pool2->AclSize;
        v18 = Pool2 + 1;
        v19 = 0;
        v20 = (ACL *)((char *)Pool2 + v17);
        while ( v19 < Pool2->AceCount )
        {
          if ( v18 >= v20 )
            goto LABEL_41;
          ++v19;
          v18 = (ACL *)((char *)v18 + v18->AclSize);
        }
        if ( v18 > v20 )
          v18 = 0LL;
        v21 = 4 * (v7[1] + 4);
        if ( v18 && (char *)v18 + v21 <= (char *)Pool2 + v17 )
        {
          v18->AclSize = v21;
          *(_WORD *)&v18->AclRevision = 0;
          *(_DWORD *)&v18->AceCount = 983551;
          memmove(&v18[1], v7, 4LL * v7[1] + 8);
          ++Pool2->AceCount;
          Pool2->AclRevision = v16;
        }
      }
    }
LABEL_41:
    v22 = (unsigned __int8 *)SeAliasAdminsSid;
    if ( MmIsKernelAddress((unsigned __int64)SeAliasAdminsSid)
      && v22
      && (*v22 & 0xF) == 1
      && v22[1] <= 0xFu
      && Pool2->AclRevision <= 4u )
    {
      v23 = 2;
      if ( Pool2->AclRevision > 2u )
        v23 = Pool2->AclRevision;
      if ( RtlValidAcl(Pool2) )
      {
        v24 = Pool2->AclSize;
        v25 = Pool2 + 1;
        v26 = 0;
        v27 = (ACL *)((char *)Pool2 + v24);
        while ( v26 < Pool2->AceCount )
        {
          if ( v25 >= v27 )
            goto LABEL_56;
          ++v26;
          v25 = (ACL *)((char *)v25 + v25->AclSize);
        }
        if ( v25 > v27 )
          v25 = 0LL;
        v28 = 4 * (v22[1] + 4);
        if ( v25 && (char *)v25 + v28 <= (char *)Pool2 + v24 )
        {
          v25->AclSize = v28;
          *(_WORD *)&v25->AclRevision = 0;
          *(_DWORD *)&v25->AceCount = 983551;
          memmove(&v25[1], v22, 4LL * v22[1] + 8);
          ++Pool2->AceCount;
          Pool2->AclRevision = v23;
        }
      }
    }
LABEL_56:
    v29 = *(unsigned __int8 **)((char *)&RtlpBootStatHandleLock.116 + 4);
    if ( MmIsKernelAddress(*(unsigned __int64 *)((char *)&RtlpBootStatHandleLock.116 + 4))
      && v29
      && (*v29 & 0xF) == 1
      && v29[1] <= 0xFu
      && Pool2->AclRevision <= 4u )
    {
      v30 = 2;
      if ( Pool2->AclRevision > 2u )
        v30 = Pool2->AclRevision;
      if ( RtlValidAcl(Pool2) )
      {
        v31 = Pool2->AclSize;
        v32 = Pool2 + 1;
        v33 = 0;
        v34 = (ACL *)((char *)Pool2 + v31);
        while ( v33 < Pool2->AceCount )
        {
          if ( v32 >= v34 )
            goto LABEL_71;
          ++v33;
          v32 = (ACL *)((char *)v32 + v32->AclSize);
        }
        if ( v32 > v34 )
          v32 = 0LL;
        v35 = 4 * (v29[1] + 4);
        if ( v32 && (char *)v32 + v35 <= (char *)Pool2 + v31 )
        {
          v32->AclSize = v35;
          *(_WORD *)&v32->AclRevision = 0;
          *(_DWORD *)&v32->AceCount = 983551;
          memmove(&v32[1], v29, 4LL * v29[1] + 8);
          ++Pool2->AceCount;
          Pool2->AclRevision = v30;
        }
      }
    }
LABEL_71:
    if ( v3 && MmIsKernelAddress((unsigned __int64)v3) && (*v3 & 0xF) == 1 && v3[1] <= 0xFu && Pool2->AclRevision <= 4u )
    {
      v36 = 2;
      if ( Pool2->AclRevision > 2u )
        v36 = Pool2->AclRevision;
      if ( RtlValidAcl(Pool2) )
      {
        v37 = Pool2->AclSize;
        v38 = Pool2 + 1;
        v39 = 0;
        v40 = (ACL *)((char *)Pool2 + v37);
        while ( v39 < Pool2->AceCount )
        {
          if ( v38 >= v40 )
            goto LABEL_86;
          ++v39;
          v38 = (ACL *)((char *)v38 + v38->AclSize);
        }
        if ( v38 > v40 )
          v38 = 0LL;
        v41 = 4 * (v3[1] + 4);
        if ( v38 && (char *)v38 + v41 <= (char *)Pool2 + v37 )
        {
          v38->AclSize = v41;
          *(_WORD *)&v38->AclRevision = 0;
          *(_DWORD *)&v38->AceCount = 983551;
          memmove(&v38[1], v3, 4LL * v3[1] + 8);
          ++Pool2->AceCount;
          Pool2->AclRevision = v36;
        }
      }
    }
LABEL_86:
    if ( v4 && MmIsKernelAddress((unsigned __int64)v4) && (*v4 & 0xF) == 1 && v4[1] <= 0xFu && Pool2->AclRevision <= 4u )
    {
      v42 = 2;
      if ( Pool2->AclRevision > 2u )
        v42 = Pool2->AclRevision;
      if ( RtlValidAcl(Pool2) )
      {
        v43 = Pool2->AclSize;
        v44 = Pool2 + 1;
        v45 = 0;
        v46 = (ACL *)((char *)Pool2 + v43);
        while ( v45 < Pool2->AceCount )
        {
          if ( v44 >= v46 )
            goto LABEL_101;
          ++v45;
          v44 = (ACL *)((char *)v44 + v44->AclSize);
        }
        if ( v44 > v46 )
          v44 = 0LL;
        v47 = 4 * (v4[1] + 4);
        if ( v44 && (char *)v44 + v47 <= (char *)Pool2 + v43 )
        {
          v44->AclSize = v47;
          *(_WORD *)&v44->AclRevision = 0;
          *(_DWORD *)&v44->AceCount = 983551;
          memmove(&v44[1], v4, 4LL * v4[1] + 8);
          ++Pool2->AceCount;
          Pool2->AclRevision = v42;
        }
      }
    }
LABEL_101:
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      RtlpAddKnownAce((int)Pool2, 2, 0, 983551, SeRestrictedSid, 0);
    *a3 = Pool2;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
