/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x140A2AEE0
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x140996CF0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14099FC70 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140A298F0 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A2AEB0 (_PnpCtxRegOpenCurrentUserKey.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A2CCFC (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlUShortAdd @ 0x140481650 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x140723810 (ZwQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x1409978F0 (_SysCtxRegOpenKey.c)
 *     _SysCtxOpenEffectiveToken @ 0x140A2CBB4 (_SysCtxOpenEffectiveToken.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x140AB0D34 (_SysCtxGetCachedContextBaseKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v5; // rdi
  int appended; // ebx
  PSID v11; // rsi
  NTSTATUS v12; // eax
  unsigned __int16 v13; // bx
  wchar_t *Pool2; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  USHORT pusResult[2]; // [rsp+30h] [rbp-99h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-8Dh] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-89h] BYREF
  int v21; // [rsp+44h] [rbp-85h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp-81h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-79h] BYREF
  __int64 v24; // [rsp+60h] [rbp-69h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE Sid[16]; // [rsp+78h] [rbp-51h] BYREF
  PSID Sid2[11]; // [rsp+88h] [rbp-41h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  TokenHandle = 0LL;
  TokenInformation = 0;
  v21 = 0;
  ReturnLength = 0;
  v5 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_OWORD *)P = 0LL;
  v24 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  pusResult[0] = 0;
  appended = SysCtxOpenEffectiveToken(a1, &TokenHandle);
  if ( appended < 0 )
    goto LABEL_2;
  appended = ZwQueryInformationToken(TokenHandle, TokenType, &TokenInformation, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_2;
  if ( TokenInformation == 2 )
  {
    appended = ZwQueryInformationToken(TokenHandle, TokenImpersonationLevel, &v21, 4u, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_2;
    if ( v21 < 2 )
    {
      appended = -1073741790;
      goto LABEL_2;
    }
  }
  else if ( TokenInformation != 1 )
  {
    goto LABEL_17;
  }
  appended = ZwQueryInformationToken(TokenHandle, TokenUser, Sid2, 0x54u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_2;
  v11 = Sid2[0];
  v12 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  appended = v12;
  if ( v12 < 0 )
    goto LABEL_2;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( RtlEqualSid(Sid, v11) )
  {
LABEL_17:
    appended = -1073741637;
    goto LABEL_2;
  }
  appended = RtlConvertSidToUnicodeString((PUNICODE_STRING)P, v11, 1u);
  if ( appended >= 0 )
  {
    appended = RtlUShortAdd((USHORT)P[0], 0x1Eu, pusResult);
    if ( appended >= 0 )
    {
      appended = RtlUShortAdd(pusResult[0], 2u, pusResult);
      if ( appended >= 0 )
      {
        v13 = pusResult[0];
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v5 = Pool2;
        if ( Pool2 )
        {
          Destination.Length = 0;
          Destination.MaximumLength = v13;
          Destination.Buffer = Pool2;
          appended = RtlAppendUnicodeStringToString(&Destination, &stru_14000F4E8);
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)P);
            if ( appended >= 0 )
            {
              appended = SysCtxGetCachedContextBaseKey(a1, 3LL, &v24, v15);
              if ( appended >= 0 )
                appended = SysCtxRegOpenKey(v16, v24, (__int64)(Destination.Buffer + 15), a2, a3, a4);
            }
          }
        }
        else
        {
          appended = -1073741801;
        }
      }
    }
  }
LABEL_2:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( P[1] )
    ExFreePool(P[1]);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)appended;
}
