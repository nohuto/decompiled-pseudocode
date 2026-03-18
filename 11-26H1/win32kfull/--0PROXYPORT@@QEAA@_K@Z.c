/*
 * XREFs of ??0PROXYPORT@@QEAA@_K@Z @ 0x14013FBDC
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8368 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x140140020 (-SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@P.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v6; // rdi
  int v7; // r14d
  NTSTATUS v8; // esi
  int v9; // eax
  int v10; // edi
  void *v12; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+28h] [rbp-D8h]
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h]
  unsigned __int8 EffectiveOnly; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 CopyOnOpen[3]; // [rsp+41h] [rbp-BFh] BYREF
  PVOID TokenInformation; // [rsp+44h] [rbp-BCh] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  _LUID AuthenticationId; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  struct _PORT_VIEW SectionHandle; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v28; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Dst[264]; // [rsp+100h] [rbp+0h] BYREF

  v23 = 0LL;
  v20 = 0;
  *(_WORD *)(&v28.EffectiveOnly + 1) = 0;
  HIDWORD(TokenInformation) = 0;
  memset(&SectionHandle, 0, sizeof(SectionHandle));
  DestinationString = 0LL;
  memset_0(Dst, 0, 0x208uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)this = 0LL;
  if ( ZwQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessSessionInformation,
         (char *)&TokenInformation + 4,
         4u,
         0LL) >= 0 )
  {
    v2 = HIDWORD(TokenInformation);
    v28.Length = 0;
    v28.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v28.ContextTrackingMode = 257;
    v3 = Win32AllocPoolZInit(80LL, 1953525831LL);
    *(_QWORD *)this = v3;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 76) = 0;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
      **(_QWORD **)this = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 64LL) = 0LL;
      MaximumSize.QuadPart = 0x400000LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateSection(&SectionHandle.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
        goto LABEL_21;
      P = 0LL;
      AuthenticationId = 0LL;
      LODWORD(TokenInformation) = 0;
      if ( !(unsigned __int8)PsIsThreadImpersonating(KeGetCurrentThread())
        || (CopyOnOpen[0] = 0,
            EffectiveOnly = 0,
            ImpersonationLevel = SecurityAnonymous,
            v7 = 1,
            (v6 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0LL) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v4);
        v6 = PsReferencePrimaryToken(CurrentProcess);
        v7 = 0;
      }
      v8 = SeQueryAuthenticationIdToken(v6, &AuthenticationId);
      if ( v8 >= 0 )
      {
        v8 = SeQueryInformationToken(v6, TokenIntegrityLevel, &TokenInformation);
        if ( v8 >= 0 )
          v8 = SeQueryInformationToken(v6, TokenUser, &P);
      }
      if ( v7 )
        PsDereferenceImpersonationToken(v6);
      else
        PsDereferencePrimaryToken(v6);
      if ( v8 < 0 )
        goto LABEL_21;
      v9 = (int)TokenInformation;
      SectionHandle.Length = 48;
      SectionHandle.SectionOffset = 0;
      SectionHandle.ViewSize = 0x400000LL;
      *(_OWORD *)&SectionHandle.ViewBase = 0LL;
      if ( (unsigned int)TokenInformation < 0x2000 )
      {
        v9 = 0x2000;
        LODWORD(TokenInformation) = 0x2000;
      }
      LODWORD(FileHandle) = AuthenticationId.HighPart;
      AllocationAttributes[0] = AuthenticationId.LowPart;
      LODWORD(ReturnLength) = v2;
      swprintf_s(
        Dst,
        0x104uLL,
        L"%s_%x_%x_%x_%x",
        L"\\RPC Control\\UmpdProxy",
        ReturnLength,
        *(_QWORD *)AllocationAttributes,
        FileHandle,
        v9);
      RtlInitUnicodeString(&DestinationString, Dst);
      v10 = PROXYPORT::SecureConnectPort(
              *(void ***)this,
              &DestinationString,
              &v28,
              &SectionHandle,
              &v23,
              *(void **)P,
              &v20);
      if ( v10 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL) = SectionHandle.SectionHandle;
        *(_QWORD *)(*(_QWORD *)this + 16LL) = v23;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = SectionHandle.ViewBase;
        *(_QWORD *)(*(_QWORD *)this + 48LL) = SectionHandle.ViewSize;
        *(_QWORD *)(*(_QWORD *)this + 56LL) = SectionHandle.ViewRemoteBase;
        *(_QWORD *)(*(_QWORD *)this + 64LL) = *(_QWORD *)(*(_QWORD *)this + 40LL) - *(_QWORD *)(*(_QWORD *)this + 56LL);
        *(_DWORD *)(*(_QWORD *)this + 76LL) = 1;
      }
      ExFreePoolWithTag(P, 0);
      if ( v10 < 0 )
      {
LABEL_21:
        if ( SectionHandle.SectionHandle )
          ZwClose(SectionHandle.SectionHandle);
        v12 = **(void ***)this;
        if ( v12 )
          ObfDereferenceObject(v12);
        Win32FreePool(*(void **)this);
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
