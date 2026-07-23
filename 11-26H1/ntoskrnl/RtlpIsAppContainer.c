/*
 * XREFs of RtlpIsAppContainer @ 0x14080A3BC
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140A968F8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x1407285A0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1407285C0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x140728800 (ZwDuplicateToken.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 */

__int64 __fastcall RtlpIsAppContainer(HANDLE a1, bool *a2)
{
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp-9h] BYREF
  HANDLE Token; // [rsp+40h] [rbp-1h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+80h] [rbp+3Fh] BYREF
  int v10; // [rsp+88h] [rbp+47h]

  LODWORD(TokenInformation) = 0;
  TokenHandle = 0LL;
  Token = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v9 = 0LL;
  v10 = 0;
  *a2 = 0;
  memset(&ObjectAttributes, 0, 32);
  if ( a1 )
  {
LABEL_7:
    v3 = SeQueryInformationToken(a1, TokenIsAppContainer, &TokenInformation);
    if ( v3 >= 0 )
      *a2 = (_DWORD)TokenInformation != 0;
    goto LABEL_9;
  }
  v3 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &Token);
  if ( v3 == -1073741700 )
  {
    v3 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0x200u, &TokenHandle);
    if ( v3 < 0 )
      goto LABEL_9;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityQualityOfService = &v9;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = 0x20000000CLL;
    LOWORD(v10) = 1;
    v3 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Token);
    ZwClose(TokenHandle);
  }
  if ( v3 >= 0 )
  {
    a1 = Token;
    goto LABEL_7;
  }
LABEL_9:
  if ( Token )
    ZwClose(Token);
  return (unsigned int)v3;
}
