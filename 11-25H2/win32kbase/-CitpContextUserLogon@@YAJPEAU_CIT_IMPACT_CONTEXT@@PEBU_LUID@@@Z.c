/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x140132BB0
 * Callers:
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x140132FC0 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140156AC8 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401A17C0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v5; // rax
  const char *v6; // rdx
  void *v7; // rdi
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 UserSessionState; // rax
  __int64 v12; // r10
  PSID v13; // r14
  ULONG v14; // r15d
  void *v15; // rax
  void *v16; // rbx
  struct _LUID v17; // rax
  unsigned int v19; // r8d
  int v20; // ecx
  ULONG ReturnLength; // [rsp+30h] [rbp-59h] BYREF
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-51h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v24; // [rsp+48h] [rbp-41h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-39h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2);
  v5 = PsReferencePrimaryToken(CurrentProcess);
  v7 = v5;
  if ( !v5 )
  {
    v10 = -1073741700;
    v19 = 655;
LABEL_16:
    v20 = v10;
LABEL_17:
    CitpLogFailureWorker(v20, v6, v19);
    goto LABEL_10;
  }
  v8 = SeQueryAuthenticationIdToken(v5, &AuthenticationId);
  v10 = v8;
  if ( v8 < 0 )
  {
    v19 = 662;
    goto LABEL_20;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    UserSessionState = W32GetUserSessionState(v9, v6);
    CitpParametersCompute((struct _CIT_PARAMETERS *)(*(_QWORD *)(UserSessionState + 18912) + 4LL));
    if ( *(_BYTE *)(v12 + 24) )
    {
      v8 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v10 = v8;
      if ( v8 < 0 )
      {
        v19 = 693;
      }
      else
      {
        ReturnLength = 0;
        v8 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        v10 = v8;
        if ( v8 >= 0 )
        {
          v13 = TokenInformation[0];
          v14 = RtlLengthSid(TokenInformation[0]);
          v15 = (void *)Win32AllocPoolZInitImpl(256LL, v14, 0x49637355u);
          v16 = v15;
          if ( v15 )
          {
            memmove(v15, v13, v14);
            v17 = *a2;
            *((_QWORD *)a1 + 12) = v16;
            v10 = 0;
            *((struct _LUID *)a1 + 13) = v17;
            goto LABEL_10;
          }
          v10 = -1073741670;
          v19 = 723;
          goto LABEL_16;
        }
        v19 = 709;
      }
LABEL_20:
      v20 = v8;
      goto LABEL_17;
    }
    CitpCleanupGlobalImpactContext(&v24);
    v10 = -1073741637;
  }
  else
  {
    v10 = -1073741587;
  }
LABEL_10:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v7 )
    PsDereferencePrimaryToken(v7);
  GreDeleteFastMutex(0LL);
  return v10;
}
