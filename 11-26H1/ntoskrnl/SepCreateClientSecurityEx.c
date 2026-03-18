/*
 * XREFs of SepCreateClientSecurityEx @ 0x14092A140
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14063B770 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     AlpcpImpersonateMessage @ 0x1409281A0 (AlpcpImpersonateMessage.c)
 *     SeCreateClientSecurity @ 0x140929880 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140929AE0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140929D90 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140AC87D0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     SepGetAnonymousToken @ 0x1403C9F7C (SepGetAnonymousToken.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140810B24 (SepCopyClientTokenAndSetSilo.c)
 *     SeCopyClientToken @ 0x140926AB0 (SeCopyClientToken.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     SeQueryServerSiloToken @ 0x140A3B0D0 (SeQueryServerSiloToken.c)
 *     SeGetTokenControlInformation @ 0x140A5F5F0 (SeGetTokenControlInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        char a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        char a9,
        unsigned __int8 *SourceSid,
        __int64 a11)
{
  char v12; // dl
  char v13; // r14
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // rbx
  char v18; // al
  bool v19; // al
  bool IsCurrentThreadInServerSilo; // al
  int inserted; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rcx
  ULONG_PTR v24; // rax
  __int64 v25; // rcx
  void *v26; // rdi
  int AnonymousToken; // r15d
  unsigned __int8 *v28; // r15
  _QWORD *v29; // rdi
  void *v30; // r12
  void *v31; // rcx
  struct _KLOCK_ENTRIES *v32; // r9
  _QWORD *v33; // rcx
  ULONG v34; // r13d
  void *Pool2; // rax
  _WORD *v36; // r8
  int appended; // eax
  __int64 v38; // rdi
  __int64 v39; // r8
  int v40; // edi
  unsigned __int64 CurrentServerSilo; // rax
  int v42; // eax
  int Src; // [rsp+20h] [rbp-60h]
  __int64 v44; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v45[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v46; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v12 = 0;
  v44 = 0LL;
  v13 = a3;
  Object = 0LL;
  v14 = a1;
  if ( *(_BYTE *)(a2 + 8) > 1u )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 >= 4 )
    return 3221225637LL;
  if ( (_DWORD)a4 != 2 )
  {
    v17 = a11;
    *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
    goto LABEL_6;
  }
  if ( (int)v15 > (int)a6 )
  {
    if ( !a7 )
      return 3221225637LL;
    v12 = 1;
  }
  if ( a6 > 1 && (!(_BYTE)a3 || a6 == 3) )
  {
    v19 = a5 || *(_BYTE *)(a2 + 9);
    v17 = a11;
    *(_BYTE *)(a11 + 25) = v19;
    if ( !v12 )
    {
LABEL_6:
      if ( *(_BYTE *)(a2 + 8) )
      {
        *(_BYTE *)(v17 + 24) = 1;
        if ( (_BYTE)a3 )
          SeGetTokenControlInformation(a1, v17 + 28);
LABEL_9:
        *(_DWORD *)v17 = 12;
        *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 4);
        *(_BYTE *)(v17 + 8) = *(_BYTE *)(a2 + 8);
        v18 = *(_BYTE *)(a2 + 9);
LABEL_10:
        *(_QWORD *)(v17 + 16) = v14;
        *(_BYTE *)(v17 + 9) = v18;
        result = 0LL;
        *(_BYTE *)(v17 + 26) = v13;
        return result;
      }
      *(_BYTE *)(v17 + 24) = 0;
      IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
      Object = 0LL;
      if ( IsCurrentThreadInServerSilo )
      {
        v38 = *(_QWORD *)(v14 + 24);
        if ( (int)SeQueryServerSiloToken(v14, &Object) >= 0 && PsIsHostSilo((__int64)Object) && v38 == 999 )
        {
          v40 = *(_DWORD *)(a2 + 4);
          CurrentServerSilo = PsGetCurrentServerSilo();
          v42 = SepCopyClientTokenAndSetSilo(v14, v40, CurrentServerSilo, (PVOID *)&v44);
        }
        else
        {
          v42 = SeCopyClientToken(v14, *(_DWORD *)(a2 + 4), v39, 0, 0LL, (PVOID *)&v44);
        }
        v14 = v44;
        inserted = v42;
        goto LABEL_24;
      }
      v45[0] = 48LL;
      Src = *(_DWORD *)(a2 + 4);
      memset(&v45[1], 0, 24);
      v46 = 0LL;
      inserted = SepDuplicateToken(v14, (unsigned int)v45, 0, 2, Src, 0, 0, (__int64)&Object);
      if ( inserted < 0 )
        goto LABEL_23;
      if ( !a9 )
      {
LABEL_53:
        inserted = ObInsertObjectEx(Object, 0LL, 0LL, 0LL, 0, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          v33 = Object;
          if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
            || (v36 = (_WORD *)*((_QWORD *)Object + 98)) == 0LL
            || (appended = SepAppendAceToTokenObjectAcl((__int64)Object, 983551, v36, v32),
                v33 = Object,
                inserted = appended,
                appended >= 0) )
          {
            SepFinalizeTokenAcls(v33);
            v14 = (__int64)Object;
            goto LABEL_24;
          }
          ObfDereferenceObject(Object);
        }
LABEL_23:
        v14 = 0LL;
LABEL_24:
        if ( inserted < 0 )
          return (unsigned int)inserted;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v14 - 48, 1, 0x63436553u);
          ObpPushStackInfo(v14 - 48, -1, 0x746C6644u);
        }
        goto LABEL_9;
      }
      v28 = SourceSid;
      v29 = Object;
      v30 = 0LL;
      if ( SourceSid )
      {
        v34 = 4 * SourceSid[1] + 8;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v30 = Pool2;
        if ( !Pool2 )
        {
          inserted = -1073741670;
          goto LABEL_52;
        }
        RtlCopySid(v34, Pool2, v28);
      }
      v31 = (void *)v29[138];
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      v29[138] = v30;
      inserted = 0;
LABEL_52:
      if ( inserted < 0 )
        goto LABEL_23;
      goto LABEL_53;
    }
  }
  else
  {
    if ( !a7 )
      return 3221225637LL;
    v17 = a11;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    goto LABEL_62;
  if ( !a8 )
  {
    a1 = 0LL;
LABEL_62:
    AnonymousToken = SepGetAnonymousToken(a1, &Object);
    goto LABEL_40;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a8 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a8 + 544);
  v24 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u, a3, a4);
  v25 = 0LL;
  v26 = (void *)v24;
  if ( (*(_DWORD *)(v24 + 200) & 0x4000) != 0 )
    v25 = v24;
  AnonymousToken = SepGetAnonymousToken(v25, &Object);
  ObfDereferenceObject(v26);
LABEL_40:
  if ( AnonymousToken < 0 )
    return (unsigned int)AnonymousToken;
  v14 = (__int64)Object;
  result = ObInsertObjectEx(Object, 0LL, 0LL, 0LL, 0, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo(v14 - 48, 1, 0x63436553u);
      ObpPushStackInfo(v14 - 48, -1, 0x746C6644u);
    }
    *(_QWORD *)v17 = 12LL;
    *(_BYTE *)(v17 + 8) = 0;
    v18 = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(v17 + 24) = 0;
    goto LABEL_10;
  }
  return result;
}
