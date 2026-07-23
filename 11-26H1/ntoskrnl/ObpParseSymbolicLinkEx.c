/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x140930290
 * Callers:
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpParseSymbolicLinkEx(
        char *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        _QWORD *a11)
{
  bool v12; // di
  struct _OBJECT_TYPE *v14; // r13
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rdi
  unsigned __int16 *v18; // r13
  unsigned int v19; // r14d
  unsigned int v20; // r12d
  char *v21; // rdi
  char *v22; // rcx
  _QWORD *v23; // rcx
  PVOID v24; // rax
  NTSTATUS v26; // eax
  int v27; // r12d
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r13
  PACCESS_TOKEN ClientToken; // rcx
  void *v30; // r12
  __int64 Pool2; // rax
  bool IsSandboxedToken; // al
  unsigned __int16 *v33; // r8
  KPROCESSOR_MODE v34; // [rsp+30h] [rbp-D0h]
  bool v35; // [rsp+31h] [rbp-CFh] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h]
  POBJECT_TYPE v38; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v41; // [rsp+68h] [rbp-98h]
  PVOID Objecta; // [rsp+70h] [rbp-90h]
  __int128 v43; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  _DWORD v49[2]; // [rsp+E8h] [rbp-18h] BYREF
  int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  POBJECT_TYPE *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  bool *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  _QWORD *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]

  v12 = 0;
  v37 = a10;
  v41 = a11;
  v14 = ObjectType;
  v15 = *((_DWORD *)Object + 7);
  v34 = a4;
  v38 = ObjectType;
  LODWORD(TokenInformation) = 0;
  Objecta = 0LL;
  v43 = 0LL;
  if ( (v15 & 2) != 0 )
  {
    IsSandboxedToken = RtlIsSandboxedToken(a3 + 1, a4);
    a4 = v34;
    v12 = !IsSandboxedToken;
  }
  if ( *((_DWORD *)Object + 9) >= 0x4000u && !v12 )
  {
    v16 = 0;
    goto LABEL_6;
  }
  p_SubjectContext = a3 + 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a4 )
  {
    if ( a3 == (struct _SECURITY_SUBJECT_CONTEXT *)-32LL )
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( !p_SubjectContext->ClientToken )
      ClientToken = p_SubjectContext->PrimaryToken;
    v27 = SeQueryInformationToken(ClientToken, TokenIntegrityLevel, &TokenInformation);
    if ( v27 < 0 )
    {
      v16 = 0;
      LODWORD(TokenInformation) = 0;
    }
    else
    {
      v16 = (unsigned int)TokenInformation;
    }
    if ( p_SubjectContext == &SubjectContext )
    {
      SeReleaseSubjectContext(p_SubjectContext);
      v16 = (unsigned int)TokenInformation;
    }
    if ( v27 < 0 )
      goto LABEL_41;
    if ( v16 < 0x4000 )
      goto LABEL_56;
  }
  else
  {
    LODWORD(TokenInformation) = 20480;
  }
  v16 = 0x4000;
LABEL_56:
  v14 = v38;
LABEL_6:
  if ( *((_DWORD *)Object + 9) < v16 || v12 )
  {
    _m_prefetchw(Object + 28);
    if ( _InterlockedOr((volatile signed __int32 *)Object + 7, 0x80000000) >= 0 )
    {
      v39[0] = 1048590LL;
      v39[1] = L"UNKNOWN";
      HIDWORD(TokenInformation) = 0;
      v30 = 0LL;
      if ( (unsigned int)ObQueryNameStringMode((__int64)Object, 0LL, 0, (_DWORD *)&TokenInformation + 1, 0) == -1073741820 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v30 = (void *)Pool2;
        if ( Pool2 )
          ObQueryNameStringMode((__int64)Object, Pool2, HIDWORD(TokenInformation), (_DWORD *)&TokenInformation + 1, 0);
      }
      if ( (unsigned int)dword_140E07360 > 5 && tlgKeywordOn((__int64)&dword_140E07360, 0x400000000000LL) )
      {
        v47 = 2LL;
        v49[1] = 0;
        v46 = v49;
        v48 = *((_QWORD *)v33 + 1);
        v49[0] = *v33;
        v40 = *((_DWORD *)Object + 9);
        v50 = &v40;
        v52 = &v38;
        v54 = &v35;
        v56 = v39;
        v51 = 4LL;
        LODWORD(v38) = v16;
        v53 = 4LL;
        v35 = v12;
        v55 = 1LL;
        v39[0] = 0x1000000LL;
        v57 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07360,
          (unsigned __int8 *)byte_14004991D,
          0LL,
          0LL,
          8u,
          &v45);
      }
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
    }
    if ( v12 )
    {
      v27 = -1073741772;
      goto LABEL_41;
    }
  }
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
    {
      v27 = -1073741788;
      goto LABEL_41;
    }
  }
  else if ( v14 == ObpSymbolicLinkObjectType && ((*((_DWORD *)Object + 7) & 1) == 0 || !PsIsCurrentThreadInServerSilo()) )
  {
    v26 = ObReferenceObjectByPointer(Object, 0, v14, v34);
    v27 = v26;
    if ( v26 >= 0 )
    {
      *v41 = Object;
      goto LABEL_41;
    }
    if ( v26 != -1073741788 )
      goto LABEL_41;
  }
  v17 = v37;
  if ( (*((_DWORD *)Object + 7) & 8) != 0 )
    *(_DWORD *)(v37 + 4) &= *((_DWORD *)Object + 8);
  if ( (*((_DWORD *)Object + 7) & 4) != 0 )
    *(_QWORD *)(v17 + 8) = HalSystemVectorDispatchEntry();
  v18 = (unsigned __int16 *)(Object + 8);
  if ( (*((_DWORD *)Object + 7) & 0x10) != 0 )
  {
    v27 = guard_dispatch_icall_no_overrides((__int64)Object, *((_QWORD *)Object + 2));
    if ( v27 < 0 )
      goto LABEL_41;
    v18 = (unsigned __int16 *)&v43;
  }
  v19 = *v18;
  if ( *v18
    && *(_WORD *)(*((_QWORD *)v18 + 1) + 2 * ((unsigned __int64)*v18 >> 1) - 2) == 92
    && *a7
    && **((_WORD **)a7 + 1) == 92 )
  {
    v19 -= 2;
  }
  v20 = v19 + *a7;
  if ( v20 > 0xFFF0 )
  {
    v27 = -1073741562;
  }
  else
  {
    if ( *(_WORD *)(a6 + 2) > (unsigned __int16)v20 )
    {
      v21 = *(char **)(a6 + 8);
      LOWORD(v37) = *(_WORD *)(a6 + 2);
LABEL_20:
      if ( *a7 )
        memmove(&v21[v19], *((const void **)a7 + 1), *a7);
      memmove(v21, *((const void **)v18 + 1), v19);
      *(_WORD *)&v21[2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)] = 0;
      v22 = *(char **)(a6 + 8);
      if ( v21 != v22 && v22 )
        ExFreePoolWithTag(v22, 0);
      v23 = v41;
      *(_WORD *)(a6 + 2) = v37;
      v24 = Objecta;
      *(_QWORD *)(a6 + 8) = v21;
      *(_WORD *)a6 = v20;
      if ( v24 )
      {
        *v23 = v24;
        return 280LL;
      }
      else
      {
        *v23 = Object;
        if ( (*((_DWORD *)Object + 7) & 1) != 0 )
          return 872LL;
        else
          return 260LL;
      }
    }
    v37 = (unsigned __int16)(v19 + *a7 + 2);
    v21 = (char *)ExAllocatePool2(0x100uLL);
    if ( v21 )
      goto LABEL_20;
    v27 = -1073741670;
  }
LABEL_41:
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  return (unsigned int)v27;
}
