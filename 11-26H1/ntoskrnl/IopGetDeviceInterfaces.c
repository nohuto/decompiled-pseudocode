/*
 * XREFs of IopGetDeviceInterfaces @ 0x14095FCD0
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x14095A610 (PiCMGetDeviceInterfaceList.c)
 *     IoGetDeviceInterfaces @ 0x140A30A80 (IoGetDeviceInterfaces.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14095F9BC (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(
        int *a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        __int64 a6)
{
  wchar_t *v6; // r12
  unsigned int v7; // r13d
  _WORD *v8; // r15
  int v9; // r10d
  int v10; // r11d
  int v11; // ebx
  int v12; // edi
  int v13; // esi
  int v14; // eax
  NTSTATUS v15; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  int v19; // eax
  NTSTATUS v20; // eax
  char *v21; // r14
  unsigned int v22; // eax
  ULONG v23; // esi
  int ObjectProperty; // eax
  __int64 v25; // r9
  int v26; // ebx
  wchar_t *v27; // rsi
  PCUNICODE_STRING v28; // rdi
  char v29; // r14
  unsigned int v30; // r12d
  unsigned int v31; // r13d
  int v32; // eax
  _WORD *Pool2; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  wchar_t *v36; // rax
  _DWORD *v38; // rcx
  __int64 MaximumLength; // rdx
  wchar_t *Buffer; // r8
  unsigned __int64 Length; // rcx
  void *v42; // rax
  void *v43; // rbx
  unsigned __int64 v44; // rax
  _QWORD *j; // rbx
  __int64 v46; // rax
  _WORD *v48; // rax
  __int64 v49; // rdi
  wchar_t *v50; // rbx
  __int64 v51; // r14
  __int64 v52; // rsi
  int v53; // eax
  NTSTATUS MatchingFilteredDeviceInterfaceListWorker; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  void *v58; // rax
  const WCHAR *v59; // rbx
  int v60; // ebx
  int v61; // [rsp+60h] [rbp-B0h]
  int v62; // [rsp+68h] [rbp-A8h]
  int v63; // [rsp+70h] [rbp-A0h]
  int v64; // [rsp+78h] [rbp-98h]
  int v65; // [rsp+80h] [rbp-90h]
  char v66; // [rsp+90h] [rbp-80h]
  unsigned int cchDest; // [rsp+94h] [rbp-7Ch] BYREF
  char cchDest_4; // [rsp+98h] [rbp-78h] BYREF
  char cchDest_5; // [rsp+99h] [rbp-77h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+A0h] [rbp-70h]
  char v71; // [rsp+A8h] [rbp-68h]
  int v72; // [rsp+ACh] [rbp-64h] BYREF
  ULONG v73; // [rsp+B0h] [rbp-60h] BYREF
  int i; // [rsp+B4h] [rbp-5Ch] BYREF
  HANDLE v75; // [rsp+B8h] [rbp-58h] BYREF
  PVOID P; // [rsp+C0h] [rbp-50h]
  PCUNICODE_STRING String1; // [rsp+C8h] [rbp-48h]
  __int128 v78; // [rsp+D0h] [rbp-40h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E0h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-28h] BYREF
  _QWORD *v81; // [rsp+F0h] [rbp-20h]
  __int64 v82; // [rsp+F8h] [rbp-18h]
  PVOID v83; // [rsp+100h] [rbp-10h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+108h] [rbp-8h] BYREF
  __int64 v85; // [rsp+128h] [rbp+18h]
  struct _SECURITY_SUBJECT_CONTEXT DestinationString; // [rsp+130h] [rbp+20h] BYREF
  _DWORD v87[4]; // [rsp+150h] [rbp+40h] BYREF
  __int64 v88; // [rsp+160h] [rbp+50h]
  PVOID v89; // [rsp+168h] [rbp+58h]
  HANDLE *p_Handle; // [rsp+170h] [rbp+60h]
  char (__fastcall *v91)(int, const WCHAR *, int, PCWSTR *); // [rsp+178h] [rbp+68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+180h] [rbp+70h]
  wchar_t *v93; // [rsp+188h] [rbp+78h]
  int v94; // [rsp+190h] [rbp+80h]
  unsigned int *p_cchDest; // [rsp+198h] [rbp+88h]
  int v96; // [rsp+1A0h] [rbp+90h]
  wchar_t pszDest[40]; // [rsp+1B0h] [rbp+A0h] BYREF

  v82 = a6;
  String1 = a2;
  v85 = 0LL;
  v6 = 0LL;
  *a5 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = *((unsigned __int8 *)a1 + 10);
  v10 = *((unsigned __int8 *)a1 + 9);
  v11 = *((unsigned __int8 *)a1 + 8);
  v12 = *((unsigned __int16 *)a1 + 3);
  v13 = *((unsigned __int16 *)a1 + 2);
  v65 = *((unsigned __int8 *)a1 + 15);
  v14 = *a1;
  v81 = a5;
  v64 = *((unsigned __int8 *)a1 + 14);
  v66 = 0;
  P = 0LL;
  cchDest_4 = 0;
  Handle = 0LL;
  v75 = 0LL;
  v83 = 0LL;
  cchDest = 0;
  v73 = 0;
  v72 = 0;
  ppszDestEnd = 0LL;
  v63 = *((unsigned __int8 *)a1 + 13);
  v78 = a3;
  v62 = *((unsigned __int8 *)a1 + 12);
  v71 = a4;
  v61 = *((unsigned __int8 *)a1 + 11);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *(_OWORD *)&DestinationString.ClientToken = 0LL;
  v15 = RtlStringCchPrintfExW(
          pszDest,
          0x27uLL,
          0LL,
          0LL,
          0x800u,
          L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          v14,
          v13,
          v12,
          v11,
          v10,
          v9,
          v61,
          v62,
          v63,
          v64,
          v65);
  if ( v15 < 0 )
    goto LABEL_58;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v17 = *(_QWORD *)&PiPnpRtlCtx;
  memset_0(v87, 0, 0x58uLL);
  v18 = *(_QWORD *)(v17 + 504);
  p_Handle = &Handle;
  v88 = 64LL;
  LODWORD(v89) = 983103;
  BYTE4(v89) = 0;
  if ( v18 )
  {
    v19 = guard_dispatch_icall_no_overrides(v17, (__int64)pszDest);
    if ( v19 == -1073741822 )
    {
      v18 = 0LL;
    }
    else
    {
      if ( v19 == -1073741536 )
        goto LABEL_80;
      if ( v19 )
      {
        v15 = -1073741595;
        goto LABEL_82;
      }
    }
  }
  v20 = CmOpenCommonClassRegKeyWorker(
          v17,
          (unsigned int)pszDest,
          v88,
          HIDWORD(v88),
          (_DWORD)v89,
          SBYTE4(v89),
          (__int64)p_Handle,
          (__int64)&v91);
  v15 = v20;
  if ( !v18 )
    goto LABEL_6;
  v87[0] = v20;
  v56 = guard_dispatch_icall_no_overrides(v17, (__int64)pszDest);
  if ( v56 == -1073741822 )
    goto LABEL_6;
  if ( v56 == -1073741536 )
  {
LABEL_80:
    v15 = v87[0];
    goto LABEL_6;
  }
  if ( v56 )
  {
    v15 = -1073741595;
    goto LABEL_82;
  }
LABEL_6:
  if ( v15 == -1073741772 || v15 == -1073741766 )
  {
    cchDest = 1;
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      v15 = -1073741670;
      goto LABEL_82;
    }
    *Pool2 = 0;
    v15 = 0;
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_37:
    v35 = (_DWORD *)v82;
    *v81 = v8;
    if ( v35 )
      *v35 = 2 * cchDest;
    v8 = 0LL;
    goto LABEL_40;
  }
  if ( v15 < 0 )
  {
LABEL_36:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v15 < 0 )
      goto LABEL_58;
    goto LABEL_37;
  }
  v21 = (char *)Handle;
  v22 = 1024;
  v23 = 0;
  for ( i = 1024; ; v22 = i )
  {
    if ( v22 > v23 )
    {
      v23 = v22;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x47706E50u);
      v6 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !v6 )
      {
        v15 = -1073741670;
        v6 = 0LL;
        goto LABEL_82;
      }
    }
    i = 0;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)pszDest,
                       4,
                       v21,
                       0LL,
                       (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                       &v72,
                       (__int64)v6,
                       v23,
                       (__int64)&i,
                       0);
    v26 = ObjectProperty;
    v15 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
  }
  if ( ObjectProperty < 0 )
  {
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x47706E50u);
      v6 = 0LL;
    }
    pszSrc = 0LL;
    if ( v26 != -1073741772 )
      goto LABEL_19;
LABEL_26:
    v27 = (wchar_t *)pszSrc;
    goto LABEL_21;
  }
  v7 = i;
  if ( !i && v6 )
  {
    ExFreePoolWithTag(v6, 0x47706E50u);
    v6 = 0LL;
  }
  v27 = v6;
  pszSrc = v6;
  if ( v72 != 18 )
  {
LABEL_19:
    if ( v26 == -1073741766 )
      goto LABEL_26;
    pszSrc = v6;
    v27 = v6;
    if ( v26 == -1073741275 )
    {
LABEL_21:
      v28 = String1;
      v29 = 0;
      v30 = 0;
      goto LABEL_22;
    }
    if ( v26 >= 0 )
      v15 = -1073741823;
LABEL_82:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_58;
  }
  v30 = 0;
  v57 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v27, 48, v25, 131097, 0, (__int64)&v75, 0LL);
  v28 = String1;
  if ( v57 < 0 )
  {
    v29 = 0;
    v66 = 0;
    goto LABEL_151;
  }
  if ( String1 )
  {
    v73 = 400;
    v58 = (void *)ExAllocatePool2(0x100uLL);
    v83 = v58;
    v59 = (const WCHAR *)v58;
    if ( !v58 )
    {
      v15 = -1073741670;
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v6 = v27;
      goto LABEL_58;
    }
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v27,
                3,
                (char *)v75,
                0LL,
                (__int64)&DEVPKEY_Device_InstanceId,
                &v72,
                (__int64)v58,
                v73,
                (__int64)&v73,
                0) < 0
      || v72 != 18
      || RtlInitUnicodeStringEx((PUNICODE_STRING)&DestinationString, v59) < 0
      || !RtlEqualUnicodeString(v28, (PCUNICODE_STRING)&DestinationString, 1u) )
    {
      goto LABEL_149;
    }
  }
  if ( (v78 & 1) != 0 )
  {
LABEL_145:
    cchDest_5 = 0;
    memset(&DestinationString, 0, sizeof(DestinationString));
    SeCaptureSubjectContext(&DestinationString);
    v60 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)v27,
            3,
            (__int64)v75,
            &DestinationString,
            &cchDest_5);
    SeReleaseSubjectContext(&DestinationString);
    if ( v60 >= 0 )
    {
      v29 = 1;
      v66 = 1;
      if ( cchDest_5 )
        goto LABEL_147;
    }
LABEL_149:
    v29 = 0;
    goto LABEL_150;
  }
  v29 = 0;
  v66 = 0;
  v73 = 1;
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v27,
              3,
              (char *)v75,
              0LL,
              (__int64)&DEVPKEY_DeviceInterface_Enabled,
              &v72,
              (__int64)&cchDest_4,
              1u,
              (__int64)&v73,
              0) < 0
    || v72 != 17
    || v73 != 1 )
  {
LABEL_147:
    ZwClose(v75);
    pszSrc = v27;
    if ( !v29 )
      goto LABEL_151;
    goto LABEL_22;
  }
  if ( cchDest_4 == -1 )
    goto LABEL_145;
LABEL_150:
  v66 = 0;
  ZwClose(v75);
LABEL_151:
  ExFreePoolWithTag(v27, 0);
  v27 = 0LL;
  pszSrc = 0LL;
  v7 = 0;
LABEL_22:
  if ( v28 )
  {
    MaximumLength = v28->MaximumLength;
    if ( (unsigned int)MaximumLength < 2 || (Buffer = v28->Buffer) == 0LL )
    {
      P = 0LL;
      goto LABEL_23;
    }
    Length = v28->Length;
    if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    {
      v15 = -1073741811;
      goto LABEL_57;
    }
    if ( (_WORD)Length )
    {
      if ( !*Buffer )
        goto LABEL_91;
      if ( (_WORD)Length == (_WORD)MaximumLength && !Buffer[((unsigned __int64)v28->Length >> 1) - 1] )
      {
        P = v28->Buffer;
        goto LABEL_23;
      }
      if ( Length <= MaximumLength - 2 && (!Buffer[(Length >> 1) - 1] || !Buffer[Length >> 1]) )
      {
LABEL_91:
        P = v28->Buffer;
        goto LABEL_23;
      }
      v42 = (void *)ExAllocatePool2(0x100uLL);
      v43 = v42;
      if ( v42 )
      {
        memmove(v42, v28->Buffer, v28->Length);
        v44 = (unsigned __int64)v28->Length >> 1;
        P = v43;
        *((_WORD *)v43 + v44) = 0;
        goto LABEL_23;
      }
    }
    else
    {
      if ( !*Buffer )
      {
        P = v28->Buffer;
        goto LABEL_23;
      }
      v48 = (_WORD *)ExAllocatePool2(0x100uLL);
      if ( v48 )
      {
        *v48 = 0;
        P = v48;
        goto LABEL_23;
      }
    }
    goto LABEL_85;
  }
LABEL_23:
  if ( v29 )
  {
    SubjectContext.ClientToken = v27;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
    v31 = v7 >> 1;
    cchDest = 4096;
    if ( v31 >= 0x1000 )
    {
      v32 = v31 + 1;
      goto LABEL_152;
    }
  }
  else
  {
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
    v32 = 4096;
LABEL_152:
    cchDest = v32;
  }
  v15 = -1073741789;
  while ( 2 )
  {
    if ( v15 != -1073741789 || v30 >= 5 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
      if ( v15 < 0 )
      {
LABEL_35:
        v6 = (wchar_t *)pszSrc;
        goto LABEL_36;
      }
      if ( cchDest )
      {
LABEL_34:
        if ( !v71 )
        {
          for ( j = v8; *(_WORD *)j; j = (_QWORD *)((char *)j + 2 * v46 + 2) )
          {
            v15 = CmValidateDeviceInterfaceName(v34, j);
            if ( v15 < 0 )
              goto LABEL_57;
            *j = 0x5C003F003F005CLL;
            v46 = -1LL;
            while ( *((_WORD *)j + ++v46) != 0 )
              ;
          }
        }
        goto LABEL_35;
      }
      cchDest = 1;
      if ( DWORD1(v78) || (ExFreePoolWithTag(v8, 0), (v8 = (_WORD *)ExAllocatePool2(0x100uLL)) != 0LL) )
      {
        *v8 = 0;
        goto LABEL_34;
      }
LABEL_85:
      v15 = -1073741670;
      goto LABEL_57;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    v8 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( v8 )
    {
      DWORD1(v78) = cchDest;
      v49 = cchDest;
      if ( v29 )
      {
        v15 = RtlStringCchCopyExW(v8, cchDest, v27, &ppszDestEnd, (size_t *)&v78 + 1, 0x800u);
        if ( v15 < 0 )
          goto LABEL_56;
        if ( !*((_QWORD *)&v78 + 1) )
        {
          v15 = -1073741823;
          SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
          goto LABEL_57;
        }
        v49 = *((_QWORD *)&v78 + 1) - 1LL;
        v50 = ppszDestEnd + 1;
      }
      else
      {
        v50 = v8;
      }
      v51 = *(_QWORD *)&PiPnpRtlCtx;
      *((_QWORD *)&v78 + 1) = v49;
      ppszDestEnd = v50;
      memset_0(v87, 0, 0x58uLL);
      v52 = *(_QWORD *)(v51 + 504);
      v88 = (__int64)pszDest;
      v89 = P;
      v94 = v49;
      v93 = v50;
      LODWORD(p_Handle) = (v78 & 1) == 0;
      v96 = 0;
      v91 = IopDeviceInterfaceFilterCallback;
      p_SubjectContext = &SubjectContext;
      p_cchDest = &cchDest;
      if ( v52 )
      {
        v53 = guard_dispatch_icall_no_overrides(v51, 0LL);
        if ( v53 == -1073741822 )
        {
          v52 = 0LL;
        }
        else
        {
          if ( v53 == -1073741536 )
          {
            v15 = v87[0];
LABEL_110:
            v29 = v66;
            v27 = (wchar_t *)pszSrc;
            cchDest += v50 - v8;
            ++v30;
            continue;
          }
          if ( v53 )
          {
            v15 = -1073741595;
            goto LABEL_110;
          }
        }
      }
      MatchingFilteredDeviceInterfaceListWorker = CmGetMatchingFilteredDeviceInterfaceListWorker(
                                                    v51,
                                                    v88,
                                                    v89,
                                                    (unsigned int)p_Handle,
                                                    v91,
                                                    p_SubjectContext,
                                                    v93,
                                                    v94,
                                                    p_cchDest,
                                                    v96);
      v15 = MatchingFilteredDeviceInterfaceListWorker;
      if ( v52 )
      {
        v87[0] = MatchingFilteredDeviceInterfaceListWorker;
        v55 = guard_dispatch_icall_no_overrides(v51, 0LL);
        if ( v55 != -1073741822 )
        {
          if ( v55 == -1073741536 )
          {
            v15 = v87[0];
          }
          else if ( v55 )
          {
            v15 = -1073741595;
          }
        }
      }
      goto LABEL_110;
    }
    break;
  }
  v15 = -1073741670;
LABEL_56:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
LABEL_57:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v6 = (wchar_t *)pszSrc;
LABEL_58:
  v38 = (_DWORD *)v82;
  *v81 = 0LL;
  if ( v38 )
    *v38 = 0;
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( P )
  {
    if ( String1 )
    {
      if ( String1->MaximumLength )
      {
        v36 = String1->Buffer;
        if ( v36 )
        {
          if ( v36 != P )
            ExFreePoolWithTag(P, 0);
        }
      }
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v83 )
    ExFreePoolWithTag(v83, 0);
  return (unsigned int)v15;
}
