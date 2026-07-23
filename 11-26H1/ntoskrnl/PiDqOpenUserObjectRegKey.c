/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x140952B4C
 * Callers:
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1409522D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqOpenObjectRegKey @ 0x140952ACC (PiDqOpenObjectRegKey.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14095E124 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x140AB592C (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     _PnpValidateObjectName @ 0x140952EDC (_PnpValidateObjectName.c)
 *     PnpConcatPWSTR @ 0x140953094 (PnpConcatPWSTR.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140953200 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        ACCESS_MASK a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        PHANDLE KeyHandle)
{
  char v6; // r13
  PVOID v9; // r14
  wchar_t *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  NTSTATUS RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // rsi
  NTSTATUS v16; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v18; // rdx
  unsigned int v19; // eax
  wchar_t *Buffer; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-A0h]
  ULONG v30; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  int v35[2]; // [rsp+90h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Sid[80]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = 0;
  v29 = a2;
  *(_QWORD *)v35 = a1;
  TokenInformation = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  pszSrc = 0LL;
  UnicodeString = 0LL;
  v30 = 0;
  memset_0(Sid, 0, 0x44uLL);
  v11 = v29;
  *KeyHandle = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(v12, a1, v11);
  if ( RelativeObjectRegPath < 0 )
    goto LABEL_37;
  if ( !a5 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
  }
  p_SubjectContext = &SubjectContext;
  if ( a5 )
    p_SubjectContext = a5;
  ClientToken = p_SubjectContext->ClientToken;
  if ( !p_SubjectContext->ClientToken )
    ClientToken = p_SubjectContext->PrimaryToken;
  v16 = SeQueryInformationToken(ClientToken, TokenImpersonationLevel, &TokenInformation);
  RelativeObjectRegPath = v16;
  if ( v16 >= 0 )
  {
    if ( *(int *)TokenInformation < 2 )
    {
      Buffer = UnicodeString.Buffer;
      RelativeObjectRegPath = -1073741790;
      goto LABEL_26;
    }
  }
  else if ( v16 != -1073741821 )
  {
    goto LABEL_37;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
  v18 = (unsigned __int8 *)**((_QWORD **)ClientToken + 19);
  v19 = 4 * v18[1] + 8;
  if ( v19 <= 0x44 )
    memmove(Sid, v18, v19);
  ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
  KeLeaveCriticalRegion();
  RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( RelativeObjectRegPath >= 0 )
  {
    Buffer = UnicodeString.Buffer;
    RelativeObjectRegPath = PnpConcatPWSTR(
                              0x7FFFFFFFLL,
                              1483763280LL,
                              &P,
                              2LL,
                              L"\\REGISTRY\\USER\\",
                              UnicodeString.Buffer);
    if ( RelativeObjectRegPath < 0 )
    {
      v9 = P;
    }
    else
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && (v21 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v22 = *(_QWORD *)(v21 + 8);
      else
        v22 = 0LL;
      v9 = P;
      RelativeObjectRegPath = RegRtlOpenKeyTransacted(0LL, P, 0LL, 4LL, &Handle, v22);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v35[0]);
        if ( RelativeObjectRegPath < 0 )
        {
          v10 = (wchar_t *)pszSrc;
        }
        else
        {
          if ( a4 )
          {
            if ( *(_QWORD *)&PiPnpRtlCtx && (v25 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
              v26 = *(_QWORD *)(v25 + 8);
            else
              v26 = 0LL;
            v10 = (wchar_t *)pszSrc;
            v23 = RegRtlCreateTreeTransacted(Handle, pszSrc, 0, a3, 0LL, 0, KeyHandle, &v30, v26);
          }
          else
          {
            v10 = (wchar_t *)pszSrc;
            v30 = 2;
            v23 = PnpCtxRegOpenKey(PiPnpRtlCtx, (_DWORD)Handle, (_DWORD)pszSrc, 0, a3, (__int64)KeyHandle);
          }
          RelativeObjectRegPath = v23;
        }
      }
    }
    goto LABEL_22;
  }
LABEL_37:
  Buffer = UnicodeString.Buffer;
LABEL_22:
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned int)RelativeObjectRegPath;
}
