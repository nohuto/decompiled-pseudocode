/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x14016BA00
 * Callers:
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400EB9F4 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x14016BEBC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v5; // rax
  const char *v6; // rdx
  void *v7; // rdi
  NTSTATUS v8; // eax
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 UserSessionState; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r10
  PSID v17; // r14
  ULONG v18; // r15d
  void *v19; // rax
  void *v20; // rbx
  __int64 v21; // rax
  unsigned int v23; // r8d
  int v24; // ecx
  ULONG ReturnLength; // [rsp+30h] [rbp-59h] BYREF
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-51h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v28; // [rsp+48h] [rbp-41h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-39h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1);
  v5 = PsReferencePrimaryToken(CurrentProcess);
  v7 = v5;
  if ( !v5 )
  {
    v12 = -1073741700;
    v23 = 655;
LABEL_16:
    v24 = v12;
LABEL_17:
    CitpLogFailureWorker(v24, v6, v23);
    goto LABEL_10;
  }
  v8 = SeQueryAuthenticationIdToken(v5, &AuthenticationId);
  v12 = v8;
  if ( v8 < 0 )
  {
    v23 = 662;
    goto LABEL_20;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    UserSessionState = W32GetUserSessionState(v9, (_DWORD)v6, v10);
    CitpParametersCompute((struct _CIT_PARAMETERS *)(*(_QWORD *)(UserSessionState + 18952) + 4LL));
    if ( *(_BYTE *)(v16 + 24) )
    {
      v8 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v12 = v8;
      if ( v8 < 0 )
      {
        v23 = 693;
      }
      else
      {
        ReturnLength = 0;
        v8 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        v12 = v8;
        if ( v8 >= 0 )
        {
          v17 = TokenInformation[0];
          v18 = RtlLengthSid(TokenInformation[0]);
          v19 = (void *)Win32AllocPoolZInitImpl(256LL, v18, 0x49637355u);
          v20 = v19;
          if ( v19 )
          {
            memmove(v19, v17, v18);
            v21 = (__int64)*a2;
            *((_QWORD *)a1 + 12) = v20;
            v12 = 0;
            *((_QWORD *)a1 + 13) = v21;
            goto LABEL_10;
          }
          v12 = -1073741670;
          v23 = 723;
          goto LABEL_16;
        }
        v23 = 709;
      }
LABEL_20:
      v24 = v8;
      goto LABEL_17;
    }
    CitpCleanupGlobalImpactContext(&v28, v14, v15);
    v12 = -1073741637;
  }
  else
  {
    v12 = -1073741587;
  }
LABEL_10:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v7 )
    PsDereferencePrimaryToken(v7);
  GreDeleteFastMutex(0LL, (__int64)v6, v10, v11);
  return v12;
}
