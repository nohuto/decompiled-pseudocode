/*
 * XREFs of SeSubProcessToken @ 0x140A2B26C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140A2B070 (PspInitializeProcessSecurity.c)
 * Callees:
 *     PsGetSessionObjectById @ 0x140215CF4 (PsGetSessionObjectById.c)
 *     SepSetTrustLevelForProcessToken @ 0x14025F118 (SepSetTrustLevelForProcessToken.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140418680 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1404859EC (SeTokenGetNoChildProcessRestricted.c)
 *     SepMandatorySubProcessToken @ 0x1405154C8 (SepMandatorySubProcessToken.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14063B910 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x14094F580 (PsReferenceEffectiveToken.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
 *     SepSetProcessUniqueAttribute @ 0x140A2B8AC (SepSetProcessUniqueAttribute.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A2BE60 (EtwTimLogProhibitChildProcessCreation.c)
 *     SepSetTokenLowboxNumber @ 0x140A2C4A4 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A2C9E4 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenBnoIsolation @ 0x140A2CC04 (SepSetTokenBnoIsolation.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140A2CF28 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepAddTokenOriginClaim @ 0x140A2D094 (SepAddTokenOriginClaim.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A8BBE8 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PVOID *a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  char v14; // si
  bool v15; // r12
  int inserted; // ebx
  _DWORD *v17; // rbx
  void *v18; // rcx
  _QWORD *v19; // rbx
  char v20; // r12
  int v21; // edi
  _DWORD *v22; // r10
  int v23; // edx
  char v24; // di
  PVOID *v25; // rcx
  _BYTE *v26; // rcx
  unsigned int v28; // edi
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  void *v31; // rcx
  ULONG_PTR v32; // rax
  void *v33; // rbx
  char v34; // [rsp+41h] [rbp-BFh] BYREF
  bool v35[6]; // [rsp+42h] [rbp-BEh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  bool v37; // [rsp+50h] [rbp-B0h] BYREF
  bool v38; // [rsp+51h] [rbp-AFh] BYREF
  char v39; // [rsp+52h] [rbp-AEh] BYREF
  char v40; // [rsp+53h] [rbp-ADh] BYREF
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+5Ch] [rbp-A4h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  char *v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  PVOID *v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  __int128 v50; // [rsp+98h] [rbp-68h]
  __int128 v51; // [rsp+A8h] [rbp-58h]
  __int128 v52; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v53; // [rsp+C8h] [rbp-38h]
  struct _LIST_ENTRY *Flink; // [rsp+D0h] [rbp-30h]
  struct _ACCESS_STATE v55; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v56[28]; // [rsp+180h] [rbp+80h] BYREF

  v46 = a8;
  v47 = a3;
  v44 = a2;
  v14 = 0;
  *(_QWORD *)&v51 = 0LL;
  DWORD2(v51) = 0;
  v43 = a4;
  v48 = a11;
  Object = 0LL;
  v49 = 0LL;
  HIDWORD(v52) = 0;
  v50 = 0LL;
  memset_0(&v55, 0, sizeof(v55));
  memset_0(v56, 0, sizeof(v56));
  *a3 = 0LL;
  v37 = 0;
  *(_WORD *)a11 = 0;
  *(_BYTE *)(a11 + 2) = 0;
  v34 = 0;
  v39 = 0;
  v40 = 0;
  v45 = 0LL;
  v38 = 0;
  v35[0] = 0;
  SeTokenGetNoChildProcessRestricted(a2, &v37, &v38, v35);
  v15 = v37;
  if ( __PAIR16__(v35[0], 0) != v37 )
  {
    v28 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v41 = 0;
      v35[0] = 0;
      v42 = 0;
      v32 = PsReferenceEffectiveToken(
              (__int64)KeGetCurrentThread(),
              0x74726853u,
              &v41,
              (struct _KLOCK_ENTRIES *)v35,
              &v42,
              0LL);
      v33 = (void *)v32;
      if ( v41 == 2 && v42 < 2 || (v28 = SeTokenIsNoChildProcessRestrictionEnforced(v32) ? 0xC000049D : 0, v41 != 1) )
      {
        if ( v33 )
          ObfDereferenceObjectWithTag(v33, 0x74726853u);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
          (ULONG_PTR)v33,
          0x74726853u);
      }
    }
    inserted = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v28;
    if ( ((*(_DWORD *)(a1 + 1532) & 1) == 0 || *(_QWORD *)(a1 + 1600))
      && inserted < 0
      && (!v38 || !*(_DWORD *)(a6 + 12)) )
    {
      EtwTimLogProhibitChildProcessCreation(
        (unsigned int)v15 + 1,
        *(_QWORD *)(a6 + 16),
        (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
        (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
      if ( v15 )
        goto LABEL_42;
    }
  }
  LODWORD(v49) = 48;
  *((_QWORD *)&v49 + 1) = 0LL;
  DWORD2(v50) = 0;
  *(_QWORD *)&v50 = 0LL;
  v51 = 0LL;
  inserted = SepDuplicateToken(v44, (__int64)&v49, 0, 1, 0, 0, 1, (char **)&Object);
  if ( inserted < 0 )
  {
LABEL_42:
    Object = 0LL;
    goto LABEL_43;
  }
  v17 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v29 = *((unsigned int *)Object + 30);
    if ( (_DWORD)v29 != a5 )
    {
      SepDereferenceLowBoxNumberEntry(v29);
      *((_QWORD *)Object + 135) = 0LL;
      v30 = Object;
      if ( *((_DWORD *)Object + 30) != a5 )
      {
        *((_DWORD *)Object + 30) = a5;
        if ( !LODWORD(ExpPlatformBinaryLock.QuantumTarget) )
        {
          v31 = (void *)v30[145];
          if ( v31 )
            ObfDereferenceObject(v31);
          v30[145] = PsGetSessionObjectById();
        }
      }
      *((_DWORD *)Object + 30) = a5;
      inserted = SepSetTokenLowboxNumber(Object, *((_QWORD *)Object + 98));
      if ( inserted < 0 )
        goto LABEL_43;
      v17 = Object;
    }
  }
  if ( v17[30] != a5 )
  {
    v17[30] = a5;
    if ( !LODWORD(ExpPlatformBinaryLock.QuantumTarget) )
    {
      v18 = (void *)*((_QWORD *)v17 + 145);
      if ( v18 )
        ObfDereferenceObject(v18);
      *((_QWORD *)v17 + 145) = PsGetSessionObjectById();
    }
    v17 = Object;
  }
  v17[30] = a5;
  *((_DWORD *)Object + 50) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    *((_DWORD *)Object + 50) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      *((_DWORD *)Object + 50) |= 0x100000u;
  }
  v19 = Object;
  if ( *((_QWORD *)Object + 144) )
  {
    SepDereferenceCachedHandlesEntryInternal((struct _KTHREAD *)(*((_QWORD *)Object + 27) + 96LL));
    v19[144] = 0LL;
    v19 = Object;
  }
  v20 = v43;
  v21 = v43 & 2;
  inserted = SepDesktopAppxSubProcessToken((__int64)v19, a1, 0LL, *(_DWORD *)(a6 + 4), &v39, &v40);
  if ( inserted < 0
    || (inserted = SepMandatorySubProcessToken((_DWORD *)(v44 & -(__int64)(v21 != 0)), (__int64)Object, a1, &v45),
        inserted < 0) )
  {
LABEL_43:
    v24 = 0;
    goto LABEL_44;
  }
  inserted = SepSetTrustLevelForProcessToken((__int64)Object, a1, &v34);
  if ( inserted < 0 )
    goto LABEL_59;
  v22 = Object;
  if ( (RtlpBootStatHandleLock.SchedulerApcFill3[60] & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute(Object);
    if ( inserted < 0 )
      goto LABEL_59;
    v22 = Object;
  }
  v23 = a7;
  if ( (v22[50] & 0x4000) != 0 && (a7 & 1) != 0 )
  {
    inserted = SepSetTokenAllApplicationPackagesPolicy(v22);
    if ( inserted < 0 )
      goto LABEL_59;
    v22 = Object;
  }
  if ( v46 )
  {
    SepAddTokenOriginClaim(v46, a9, v22, 0LL);
    v22 = Object;
  }
  if ( !a10 )
    goto LABEL_23;
  LOBYTE(v23) = *(_BYTE *)(a10 + 32);
  inserted = SepSetTokenBnoIsolation((_DWORD)v22, v23, a10, *(_DWORD *)(a10 + 16), *(_QWORD *)(a10 + 24));
  if ( inserted < 0 )
  {
LABEL_59:
    v14 = v34;
    v24 = 0;
    goto LABEL_44;
  }
  v22 = Object;
LABEL_23:
  if ( !v21 || (v14 = v34, v45) )
    v14 = 1;
  if ( v14 )
  {
    v53 = v22;
    *(_QWORD *)&v52 = 0LL;
    DWORD2(v52) = 0;
    Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    SepCreateAccessStateFromSubjectContext(&v52, &v55, v56, 0, 0LL);
  }
  else
  {
    SeCreateAccessState(&v55, v56, 0LL, 0LL);
  }
  v24 = 1;
  inserted = ObInsertObjectEx((char *)Object, &v55, 0, 0, 0, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    SepFinalizeTokenAcls(Object);
    v25 = v47;
    *((_BYTE *)Object + 204) = v20 & 1;
    *v25 = Object;
    v26 = (_BYTE *)v48;
    *(_BYTE *)(v48 + 1) = v39;
    v26[2] = v40;
    *v26 = v14;
LABEL_29:
    if ( v14 )
      SepDeleteAccessState((__int64)&v55);
    else
      SeDeleteAccessState((__int64)&v55);
    return (unsigned int)inserted;
  }
  Object = 0LL;
LABEL_44:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v24 )
    goto LABEL_29;
  return (unsigned int)inserted;
}
