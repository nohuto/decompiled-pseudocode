/*
 * XREFs of RIMInitOneCoreEditionData @ 0x14005E0D4
 * Callers:
 *     RIMInitialize @ 0x14005E170 (RIMInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMInitOneCoreEditionData(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  v8 = 0;
  DestinationString = 0LL;
  v7 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36);
  RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
  result = ZwQueryLicenseValue(&DestinationString, &v9, &v7, 4LL, &v8);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    result = W32GetUserSessionState(v4, v3);
    *(_DWORD *)(result + 36) = v5;
  }
  return result;
}
