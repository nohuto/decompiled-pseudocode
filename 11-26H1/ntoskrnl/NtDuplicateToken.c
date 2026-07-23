/*
 * XREFs of NtDuplicateToken @ 0x1408F1E80
 * Callers:
 *     DifNtDuplicateTokenWrapper @ 0x14067A510 (DifNtDuplicateTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1404066BC (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityQos @ 0x1408F2220 (SeCaptureSecurityQos.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A95C5C (SepNewTokenAsRestrictedAsProcessToken.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  BOOLEAN v6; // si
  ACCESS_MASK v8; // r12d
  char PreviousMode; // r15
  NTSTATUS result; // eax
  int v12; // r8d
  PERESOURCE *PrimaryToken; // rsi
  char v14; // bl
  PACCESS_TOKEN ClientToken; // rcx
  ACCESS_MASK GrantedAccess; // edi
  PERESOURCE *v17; // rbx
  NTSTATUS inserted; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v20; // eax
  PVOID TokenInformation; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Token; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v23; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp-A0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-98h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v28; // [rsp+90h] [rbp-78h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h] BYREF
  int v30; // [rsp+B8h] [rbp-50h]

  v6 = EffectiveOnly;
  BYTE4(TokenInformation) = EffectiveOnly;
  v8 = DesiredAccess;
  v26 = NewTokenHandle;
  v29 = 0LL;
  v30 = 0;
  BYTE3(TokenInformation) = 0;
  v25 = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *(_WORD *)((char *)&TokenInformation + 1) = 0;
  v28.ClientToken = 0LL;
  *(_QWORD *)&v28.ImpersonationLevel = 0LL;
  v28.ProcessAuditId = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (unsigned int)(TokenType - 1) > 1 )
    return -1073741811;
  LOBYTE(DesiredAccess) = PreviousMode;
  result = SeCaptureSecurityQos(ObjectAttributes, DesiredAccess, (char *)&TokenInformation + 2, &v29);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent(
               (__int64)ObjectAttributes,
               PreviousMode,
               (_BYTE *)&TokenInformation + 3);
    if ( result >= 0 )
    {
      Token = 0LL;
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( v8 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
          v28.PrimaryToken = SubjectContext.PrimaryToken;
          v14 = 0;
          LOBYTE(TokenInformation) = 0;
          if ( !PreviousMode )
            goto LABEL_14;
          ClientToken = SubjectContext.PrimaryToken;
          if ( SubjectContext.ClientToken )
            ClientToken = SubjectContext.ClientToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsSandboxed, &TokenInformation) >= 0
            && !(_BYTE)TokenInformation )
          {
            v14 = 1;
          }
          if ( v14 != 1 && (unsigned __int8)RtlIsSandboxedToken(&v28) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
            v17 = (PERESOURCE *)Token;
            v20 = SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken);
            if ( v17 == PrimaryToken || v20 >= 0 && BYTE1(TokenInformation) )
              GrantedAccess = v8;
            else
              GrantedAccess = v8 & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(PrimaryToken[6]);
            KeLeaveCriticalRegion();
          }
          else
          {
LABEL_14:
            GrantedAccess = v8;
            v17 = (PERESOURCE *)Token;
          }
          SeReleaseSubjectContext(&SubjectContext);
          v6 = BYTE4(TokenInformation);
        }
        else
        {
          GrantedAccess = HandleInformation.GrantedAccess;
          v17 = (PERESOURCE *)Token;
        }
        if ( !BYTE2(TokenInformation) )
          HIDWORD(v29) = *((_DWORD *)v17 + 49);
        if ( *((_DWORD *)v17 + 48) == 2
          && (TokenType == TokenImpersonation && SHIDWORD(v29) > *((_DWORD *)v17 + 49)
           || TokenType == TokenPrimary && *((int *)v17 + 49) < 2) )
        {
          ObfDereferenceObject(v17);
          return -1073741659;
        }
        else
        {
          v23 = 0LL;
          LOBYTE(v12) = v6;
          inserted = SepDuplicateToken(
                       (_DWORD)v17,
                       (_DWORD)ObjectAttributes,
                       v12,
                       TokenType,
                       HIDWORD(v29),
                       PreviousMode,
                       0,
                       (__int64)&v23);
          if ( inserted >= 0 )
          {
            inserted = ObInsertObjectEx(v23, 0LL, GrantedAccess, 1LL, 0, 0LL, &v25);
            if ( inserted >= 0 )
            {
              if ( !BYTE3(TokenInformation) )
                SepFinalizeTokenAcls(v23);
              ObfDereferenceObject(v23);
            }
          }
          ObfDereferenceObject(v17);
          if ( inserted >= 0 )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser(v26, v25);
            else
              *v26 = v25;
          }
          return inserted;
        }
      }
    }
  }
  return result;
}
