/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x1409278D0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, char **a3)
{
  unsigned __int8 *v3; // r15
  unsigned __int8 *v4; // r12
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r14
  unsigned int v8; // edi
  char *Pool2; // rbx
  char v10; // di
  __int64 v11; // r10
  char *v12; // rdx
  unsigned int v13; // ecx
  char *v14; // r9
  unsigned __int16 v15; // r8
  char v16; // di
  __int64 v17; // r10
  char *v18; // rdx
  unsigned int v19; // ecx
  char *v20; // r9
  unsigned __int16 v21; // r8
  unsigned __int8 *v22; // rdi
  char v23; // si
  __int64 v24; // r10
  char *v25; // rdx
  unsigned int v26; // ecx
  char *v27; // r9
  unsigned __int16 v28; // r8
  unsigned __int8 *v29; // rdi
  char v30; // si
  __int64 v31; // r10
  char *v32; // rdx
  unsigned int v33; // ecx
  char *v34; // r9
  unsigned __int16 v35; // r8
  char v36; // di
  __int64 v37; // r10
  char *v38; // rdx
  unsigned int v39; // ecx
  char *v40; // r9
  unsigned __int16 v41; // r8
  char v42; // di
  __int64 v43; // r9
  char *v44; // rdx
  unsigned int v45; // ecx
  char *v46; // r10
  unsigned __int16 v47; // r8

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
      + *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL)
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
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    if ( v8 - 8 <= 0xFFF4 )
    {
      memset_0(Pool2, 0, v8);
      *(_WORD *)Pool2 = 2;
      *((_DWORD *)Pool2 + 1) = 0;
      *((_WORD *)Pool2 + 1) = v8;
    }
    if ( MmIsKernelAddress((unsigned __int64)v6)
      && v6
      && (*v6 & 0xF) == 1
      && v6[1] <= 0xFu
      && (unsigned __int8)*Pool2 <= 4u )
    {
      v10 = 2;
      if ( (unsigned __int8)*Pool2 > 2u )
        v10 = *Pool2;
      if ( (unsigned __int8)RtlValidAcl(Pool2) )
      {
        v11 = *((unsigned __int16 *)Pool2 + 1);
        v12 = Pool2 + 8;
        v13 = 0;
        v14 = &Pool2[v11];
        while ( v13 < *((unsigned __int16 *)Pool2 + 2) )
        {
          if ( v12 >= v14 )
            goto LABEL_26;
          ++v13;
          v12 += *((unsigned __int16 *)v12 + 1);
        }
        if ( v12 > v14 )
          v12 = 0LL;
        v15 = 4 * (v6[1] + 4);
        if ( v12 && &v12[v15] <= &Pool2[v11] )
        {
          *((_WORD *)v12 + 1) = v15;
          *(_WORD *)v12 = 0;
          *((_DWORD *)v12 + 1) = 983551;
          memmove(v12 + 8, v6, 4LL * v6[1] + 8);
          ++*((_WORD *)Pool2 + 2);
          *Pool2 = v10;
        }
      }
    }
LABEL_26:
    if ( MmIsKernelAddress((unsigned __int64)v7)
      && v7
      && (*v7 & 0xF) == 1
      && v7[1] <= 0xFu
      && (unsigned __int8)*Pool2 <= 4u )
    {
      v16 = 2;
      if ( (unsigned __int8)*Pool2 > 2u )
        v16 = *Pool2;
      if ( (unsigned __int8)RtlValidAcl(Pool2) )
      {
        v17 = *((unsigned __int16 *)Pool2 + 1);
        v18 = Pool2 + 8;
        v19 = 0;
        v20 = &Pool2[v17];
        while ( v19 < *((unsigned __int16 *)Pool2 + 2) )
        {
          if ( v18 >= v20 )
            goto LABEL_41;
          ++v19;
          v18 += *((unsigned __int16 *)v18 + 1);
        }
        if ( v18 > v20 )
          v18 = 0LL;
        v21 = 4 * (v7[1] + 4);
        if ( v18 && &v18[v21] <= &Pool2[v17] )
        {
          *((_WORD *)v18 + 1) = v21;
          *(_WORD *)v18 = 0;
          *((_DWORD *)v18 + 1) = 983551;
          memmove(v18 + 8, v7, 4LL * v7[1] + 8);
          ++*((_WORD *)Pool2 + 2);
          *Pool2 = v16;
        }
      }
    }
LABEL_41:
    v22 = (unsigned __int8 *)SeAliasAdminsSid;
    if ( MmIsKernelAddress((unsigned __int64)SeAliasAdminsSid)
      && v22
      && (*v22 & 0xF) == 1
      && v22[1] <= 0xFu
      && (unsigned __int8)*Pool2 <= 4u )
    {
      v23 = 2;
      if ( (unsigned __int8)*Pool2 > 2u )
        v23 = *Pool2;
      if ( (unsigned __int8)RtlValidAcl(Pool2) )
      {
        v24 = *((unsigned __int16 *)Pool2 + 1);
        v25 = Pool2 + 8;
        v26 = 0;
        v27 = &Pool2[v24];
        while ( v26 < *((unsigned __int16 *)Pool2 + 2) )
        {
          if ( v25 >= v27 )
            goto LABEL_56;
          ++v26;
          v25 += *((unsigned __int16 *)v25 + 1);
        }
        if ( v25 > v27 )
          v25 = 0LL;
        v28 = 4 * (v22[1] + 4);
        if ( v25 && &v25[v28] <= &Pool2[v24] )
        {
          *((_WORD *)v25 + 1) = v28;
          *(_WORD *)v25 = 0;
          *((_DWORD *)v25 + 1) = 983551;
          memmove(v25 + 8, v22, 4LL * v22[1] + 8);
          ++*((_WORD *)Pool2 + 2);
          *Pool2 = v23;
        }
      }
    }
LABEL_56:
    v29 = *(unsigned __int8 **)&RtlpBootStatHandleLock.WaitRegister.Flags;
    if ( MmIsKernelAddress(*(unsigned __int64 *)&RtlpBootStatHandleLock.WaitRegister.Flags)
      && v29
      && (*v29 & 0xF) == 1
      && v29[1] <= 0xFu
      && (unsigned __int8)*Pool2 <= 4u )
    {
      v30 = 2;
      if ( (unsigned __int8)*Pool2 > 2u )
        v30 = *Pool2;
      if ( (unsigned __int8)RtlValidAcl(Pool2) )
      {
        v31 = *((unsigned __int16 *)Pool2 + 1);
        v32 = Pool2 + 8;
        v33 = 0;
        v34 = &Pool2[v31];
        while ( v33 < *((unsigned __int16 *)Pool2 + 2) )
        {
          if ( v32 >= v34 )
            goto LABEL_71;
          ++v33;
          v32 += *((unsigned __int16 *)v32 + 1);
        }
        if ( v32 > v34 )
          v32 = 0LL;
        v35 = 4 * (v29[1] + 4);
        if ( v32 && &v32[v35] <= &Pool2[v31] )
        {
          *((_WORD *)v32 + 1) = v35;
          *(_WORD *)v32 = 0;
          *((_DWORD *)v32 + 1) = 983551;
          memmove(v32 + 8, v29, 4LL * v29[1] + 8);
          ++*((_WORD *)Pool2 + 2);
          *Pool2 = v30;
        }
      }
    }
LABEL_71:
    if ( v3
      && MmIsKernelAddress((unsigned __int64)v3)
      && (*v3 & 0xF) == 1
      && v3[1] <= 0xFu
      && (unsigned __int8)*Pool2 <= 4u )
    {
      v36 = 2;
      if ( (unsigned __int8)*Pool2 > 2u )
        v36 = *Pool2;
      if ( (unsigned __int8)RtlValidAcl(Pool2) )
      {
        v37 = *((unsigned __int16 *)Pool2 + 1);
        v38 = Pool2 + 8;
        v39 = 0;
        v40 = &Pool2[v37];
        while ( v39 < *((unsigned __int16 *)Pool2 + 2) )
        {
          if ( v38 >= v40 )
            goto LABEL_86;
          ++v39;
          v38 += *((unsigned __int16 *)v38 + 1);
        }
        if ( v38 > v40 )
          v38 = 0LL;
        v41 = 4 * (v3[1] + 4);
        if ( v38 && &v38[v41] <= &Pool2[v37] )
        {
          *((_WORD *)v38 + 1) = v41;
          *(_WORD *)v38 = 0;
          *((_DWORD *)v38 + 1) = 983551;
          memmove(v38 + 8, v3, 4LL * v3[1] + 8);
          ++*((_WORD *)Pool2 + 2);
          *Pool2 = v36;
        }
      }
    }
LABEL_86:
    if ( v4
      && MmIsKernelAddress((unsigned __int64)v4)
      && (*v4 & 0xF) == 1
      && v4[1] <= 0xFu
      && (unsigned __int8)*Pool2 <= 4u )
    {
      v42 = 2;
      if ( (unsigned __int8)*Pool2 > 2u )
        v42 = *Pool2;
      if ( (unsigned __int8)RtlValidAcl(Pool2) )
      {
        v43 = *((unsigned __int16 *)Pool2 + 1);
        v44 = Pool2 + 8;
        v45 = 0;
        v46 = &Pool2[v43];
        while ( v45 < *((unsigned __int16 *)Pool2 + 2) )
        {
          if ( v44 >= v46 )
            goto LABEL_101;
          ++v45;
          v44 += *((unsigned __int16 *)v44 + 1);
        }
        if ( v44 > v46 )
          v44 = 0LL;
        v47 = 4 * (v4[1] + 4);
        if ( v44 && &v44[v47] <= &Pool2[v43] )
        {
          *((_WORD *)v44 + 1) = v47;
          *(_WORD *)v44 = 0;
          *((_DWORD *)v44 + 1) = 983551;
          memmove(v44 + 8, v4, 4LL * v4[1] + 8);
          ++*((_WORD *)Pool2 + 2);
          *Pool2 = v42;
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
