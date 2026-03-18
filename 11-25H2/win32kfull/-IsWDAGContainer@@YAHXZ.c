/*
 * XREFs of ?IsWDAGContainer@@YAHXZ @ 0x1401DCC04
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall IsWDAGContainer(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  NTSTATUS v6; // esi
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp+27h] BYREF
  int v12; // [rsp+8Ch] [rbp+2Bh]
  int v13; // [rsp+94h] [rbp+33h]

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = UserSessionState;
  if ( *(_DWORD *)(UserSessionState + 70704) )
    return *(unsigned int *)(UserSessionState + 70708);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Hvsi");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IsHvsiContainer");
    v6 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength);
    if ( v6 >= 0 && v12 == 4 )
      LOBYTE(v2) = v13 != 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741772 )
  {
    *(_DWORD *)(v4 + 70708) = v2;
    *(_DWORD *)(v4 + 70704) = 1;
  }
  return v2;
}
