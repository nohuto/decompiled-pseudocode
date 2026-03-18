/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x140927020
 * Callers:
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SeCopyClientToken @ 0x140926AB0 (SeCopyClientToken.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14025F2B0 (RtlFindAceBySid.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlGetAce @ 0x140433010 (RtlGetAce.c)
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140905024 (ObpReferenceSecurityDescriptorSlow.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, int a2, _WORD *a3, struct _KLOCK_ENTRIES *AclSize)
{
  unsigned __int64 v6; // rcx
  ULONG_PTR v7; // rbx
  signed __int64 v8; // r15
  char v9; // dl
  signed __int64 v10; // rax
  __int64 Pool2; // r15
  unsigned int v12; // edx
  int v13; // esi
  __int16 v14; // ax
  __int64 v15; // rax
  ACL *v16; // rdi
  unsigned int v17; // ecx
  ACL *v18; // r14
  ACL *v19; // r10
  int v20; // r14d
  unsigned int AclRevision; // ebx
  ULONG v22; // esi
  unsigned __int8 *v23; // r12
  __int64 v24; // r14
  unsigned __int8 *v25; // rdi
  unsigned __int8 *v26; // rcx
  unsigned __int8 *v27; // r11
  unsigned int i; // edx
  char *v29; // r8
  unsigned __int8 v30; // al
  unsigned __int8 v31; // si
  __int64 v32; // rdx
  unsigned __int8 v33; // r13
  char *v34; // r10
  char *v35; // r9
  int v36; // ecx
  __int64 v37; // r9
  _BYTE *v38; // rax
  char *v39; // r8
  unsigned __int8 *v40; // r14
  bool v41; // cc
  unsigned __int8 v42; // bl
  unsigned int v43; // ecx
  unsigned __int8 *v44; // r8
  unsigned __int16 v45; // cx
  volatile signed __int64 *v46; // rbx
  signed __int64 v47; // rax
  signed __int64 v48; // rtt
  unsigned __int8 v50; // al
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v52; // rdi
  volatile signed __int64 **v53; // r14
  AutoBoost *v54; // rax
  void *v55; // rdx
  AutoBoost *v56; // r15
  signed __int64 v57; // rdx
  signed __int64 v58; // rdx
  volatile signed __int64 *j; // rdx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r10
  unsigned __int8 v65; // al
  char v66; // [rsp+50h] [rbp-49h]
  int v67; // [rsp+54h] [rbp-45h]
  PVOID Ace; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int64 v70; // [rsp+70h] [rbp-29h]
  __int128 v71; // [rsp+80h] [rbp-19h]
  __int128 v72; // [rsp+90h] [rbp-9h]
  unsigned __int8 *v73; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  __int64 v75; // [rsp+B0h] [rbp+17h]

  v75 = a1;
  v73 = 0LL;
  v70 = (unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v6 = *(unsigned __int8 *)(a1 - 24) ^ v70;
  Src = a3;
  v71 = 0LL;
  Ace = 0LL;
  v7 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  v72 = 0LL;
  if ( *(__int64 (__fastcall **)(__int64, int, ULONG *, struct _KLOCK_ENTRIES *, ULONG *, __int64 *, int, __int64))(v7 + 152) == SeDefaultObjectMethod )
  {
    _m_prefetchw((const void *)(a1 - 8));
    v8 = *(_QWORD *)(a1 - 8);
    v9 = v8;
    if ( (v8 & 0xF) != 0 )
    {
      do
      {
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v8 - 1, v8);
        if ( v8 == v10 )
          break;
        v8 = v10;
        v9 = v10;
      }
      while ( (v10 & 0xF) != 0 );
    }
    Pool2 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = v9 & 0xF;
    if ( v12 <= 1 && Pool2 )
      Pool2 = ObpReferenceSecurityDescriptorSlow(a1 - 48, v12, Pool2, AclSize);
    v66 = 0;
    if ( !Pool2 && ((*(_BYTE *)(v7 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
      KeBugCheckEx(0x189u, a1 - 48, v7, 1uLL, 0LL);
    v13 = 0;
    goto LABEL_9;
  }
  v67 = ObpDefaultSecurityDescriptorLength;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v13 = guard_dispatch_icall_no_overrides(a1, 1LL);
  if ( v13 == -1073741789 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ObpDefaultSecurityDescriptorLength = v67;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v13 = guard_dispatch_icall_no_overrides(a1, 1LL);
      goto LABEL_76;
    }
    return (unsigned int)-1073741670;
  }
LABEL_76:
  if ( v13 < 0 )
    goto LABEL_95;
  v66 = 1;
LABEL_9:
  if ( !Pool2 )
    return (unsigned int)v13;
  v14 = *(_WORD *)(Pool2 + 2);
  if ( (v14 & 4) != 0 )
  {
    if ( v14 >= 0 )
    {
      v16 = *(ACL **)(Pool2 + 32);
    }
    else
    {
      v15 = *(unsigned int *)(Pool2 + 16);
      if ( !(_DWORD)v15 )
        goto LABEL_61;
      v16 = (ACL *)(Pool2 + v15);
    }
    if ( v16 && !RtlFindAceBySid((__int64)v16, a3, 0LL) )
    {
      if ( (unsigned __int8)(v16->AclRevision - 2) > 2u )
      {
LABEL_68:
        v13 = -1073741811;
      }
      else
      {
        AclSize = (struct _KLOCK_ENTRIES *)v16->AclSize;
        v17 = 0;
        v18 = v16 + 1;
        v19 = (ACL *)((char *)v16 + (_QWORD)AclSize);
        while ( v17 < v16->AceCount )
        {
          if ( v18 >= v19 )
            goto LABEL_68;
          ++v17;
          v18 = (ACL *)((char *)v18 + v18->AclSize);
        }
        if ( v18 > v19 )
          v18 = 0LL;
        if ( v18 )
          v20 = (_DWORD)v18 - (_DWORD)v16;
        else
          v20 = v16->AclSize;
        AclRevision = v16->AclRevision;
        v22 = (v20 + RtlLengthSid(a3) + 11) & 0xFFFFFFFC;
        v23 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
        if ( v23 )
        {
          if ( v22 >= 8 )
          {
            if ( AclRevision - 2 > 2 || v22 > 0xFFFC )
              goto LABEL_115;
            memset_0(v23, 0, v22);
            *v23 = AclRevision;
            v23[1] = 0;
            *((_WORD *)v23 + 1) = v22;
            *((_DWORD *)v23 + 1) = 0;
            v13 = RtlGetAce(v16, 0, &Ace);
            if ( v13 < 0 )
              goto LABEL_60;
            v24 = (unsigned int)(v20 - 8);
            if ( !(unsigned __int8)RtlValidAcl(v23) )
            {
LABEL_115:
              v13 = -1073741811;
LABEL_60:
              ExFreePoolWithTag(v23, 0);
              goto LABEL_61;
            }
            v25 = v23 + 8;
            v26 = v23 + 8;
            v27 = &v23[*((unsigned __int16 *)v23 + 1)];
            for ( i = 0; i < *((unsigned __int16 *)v23 + 2); ++i )
            {
              if ( v26 >= v27 )
                goto LABEL_115;
              v26 += *((unsigned __int16 *)v26 + 1);
            }
            v29 = (char *)Ace;
            v30 = *v23;
            v31 = AclRevision;
            if ( v26 > v27 )
              v26 = 0LL;
            LODWORD(Ace) = 0;
            v32 = (unsigned int)v24;
            v33 = AclRevision;
            v34 = &v29[v24];
            if ( (unsigned __int8)AclRevision <= v30 )
              v31 = v30;
            v35 = v29;
            while ( v35 < v34 )
            {
              v50 = *v35;
              if ( (unsigned __int8)*v35 > 3u )
              {
                if ( v50 <= 4u )
                {
                  if ( AclRevision < 3 )
                  {
                    v13 = -1073741811;
                    goto LABEL_60;
                  }
                }
                else if ( v50 <= 8u )
                {
                  if ( AclRevision < 4 )
                  {
                    v13 = -1073741811;
                    goto LABEL_60;
                  }
                }
                else if ( !*((_WORD *)v35 + 1) )
                {
                  goto LABEL_115;
                }
              }
              v35 += *((unsigned __int16 *)v35 + 1);
              LODWORD(Ace) = (_DWORD)Ace + 1;
            }
            if ( v35 > v34 )
              goto LABEL_115;
            if ( v26 && &v26[v24] <= v27 )
            {
              v36 = (_DWORD)v26 - (_DWORD)v25 - 1;
              v37 = v36;
              if ( v36 >= 0 )
              {
                v64 = (unsigned int)(v36 + v24);
                do
                {
                  v65 = v25[v37--];
                  v25[v64] = v65;
                  v64 = (unsigned int)(v64 - 1);
                }
                while ( v37 >= 0 );
              }
              if ( (_DWORD)v24 )
              {
                v38 = v23 + 8;
                v39 = (char *)(v29 - (char *)v25);
                do
                {
                  *v38 = v39[(_QWORD)v38];
                  ++v38;
                  --v32;
                }
                while ( v32 );
              }
              v40 = (unsigned __int8 *)Src;
              *((_WORD *)v23 + 2) += (_WORD)Ace;
              *v23 = v31;
              if ( MmIsKernelAddress((unsigned __int64)v40) && v40 && (*v40 & 0xF) == 1 && v40[1] <= 0xFu )
              {
                if ( AclRevision > 4 || v31 > 4u )
                {
                  v13 = -1073741735;
                }
                else
                {
                  v41 = v31 <= (unsigned __int8)AclRevision;
                  v42 = v31;
                  if ( v41 )
                    v42 = v33;
                  if ( (unsigned __int8)RtlValidAcl(v23) )
                  {
                    v43 = 0;
                    v44 = &v23[*((unsigned __int16 *)v23 + 1)];
                    while ( v43 < *((unsigned __int16 *)v23 + 2) )
                    {
                      if ( v25 >= v44 )
                        goto LABEL_126;
                      ++v43;
                      v25 += *((unsigned __int16 *)v25 + 1);
                    }
                    if ( v25 > v44 )
                      v25 = 0LL;
                    v45 = 4 * (v40[1] + 4);
                    if ( v25 && &v25[v45] <= v44 )
                    {
                      *((_WORD *)v25 + 1) = v45;
                      *((_DWORD *)v25 + 1) = a2;
                      *(_WORD *)v25 = 0;
                      memmove(v25 + 8, v40, 4LL * v40[1] + 8);
                      ++*((_WORD *)v23 + 2);
                      *v23 = v42;
                      v71 = 0LL;
                      LOBYTE(v71) = 1;
                      v72 = 0LL;
                      v73 = v23;
                      WORD1(v71) = 4;
                      v13 = guard_dispatch_icall_no_overrides(v75, 0LL);
                    }
                    else
                    {
                      v13 = -1073741671;
                    }
                  }
                  else
                  {
LABEL_126:
                    v13 = -1073741705;
                  }
                }
              }
              else
              {
                v13 = -1073741704;
              }
              goto LABEL_60;
            }
          }
          v13 = -1073741789;
          goto LABEL_60;
        }
        v13 = -1073741670;
      }
    }
  }
LABEL_61:
  if ( v66 )
  {
LABEL_95:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)v13;
  }
  v46 = (volatile signed __int64 *)(Pool2 - 32);
  _m_prefetchw((const void *)(Pool2 - 32 + 8));
  v47 = *(_QWORD *)(Pool2 - 32 + 8);
  while ( v47 - 1 > 0 )
  {
    v48 = v47;
    v47 = _InterlockedCompareExchange64(v46 + 1, v47 - 1, v47);
    if ( v48 == v47 )
      return (unsigned int)v13;
  }
  if ( v47 != 1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v52 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v46[2] & 0x3FF));
  --CurrentThread->KernelApcDisable;
  v53 = (volatile signed __int64 **)(v52 + 1);
  v54 = (AutoBoost *)KeAbPreAcquire((__int64)v52, 0LL, 0LL, AclSize);
  v56 = v54;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v52, 0LL) )
    ExfAcquirePushLockExclusiveEx(v52, v54, (__int64)v52);
  if ( v56 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v56, v55);
    else
      *((_BYTE *)v56 + 10) = 1;
  }
  v57 = _InterlockedExchangeAdd64(v46 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  v41 = v57 <= 1;
  v58 = v57 - 1;
  if ( v41 )
  {
    if ( v58 )
      __fastfail(0xEu);
    for ( j = *v53; j != v46; j = (volatile signed __int64 *)*j )
      v53 = (volatile signed __int64 **)j;
    *v53 = (volatile signed __int64 *)*v46;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v52);
    KeAbPostRelease((unsigned __int64)v52);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v60, v61);
    ExFreePoolWithTag((PVOID)v46, 0x6353624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v52);
    KeAbPostRelease((unsigned __int64)v52);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v62, v63);
  }
  return (unsigned int)v13;
}
