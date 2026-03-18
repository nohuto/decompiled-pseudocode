/*
 * XREFs of RIMInitOneCoreEditionData @ 0x14010FB88
 * Callers:
 *     RIMInitialize @ 0x14010F990 (RIMInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMInitOneCoreEditionData(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  DestinationString = 0LL;
  v10 = 0;
  v9 = *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 36);
  RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
  result = ZwQueryLicenseValue(&DestinationString, &v11, &v9, 4LL, &v10);
  if ( (int)result >= 0 )
  {
    v7 = v9;
    result = W32GetUserSessionState(v5, v4, v6);
    *(_DWORD *)(result + 36) = v7;
  }
  return result;
}
