/*
 * XREFs of RtlpCreateUserThreadEx @ 0x140A94C5C
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14030DCFC (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x140806790 (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1407298E0 (ZwCreateThreadEx.c)
 */

NTSTATUS __fastcall RtlpCreateUserThreadEx(
        HANDLE ProcessHandle,
        void *a2,
        int a3,
        unsigned int a4,
        SIZE_T MaximumStackSize,
        SIZE_T StackSize,
        int a7,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        HANDLE *a10,
        _OWORD *a11)
{
  SIZE_T ZeroBits; // rsi
  char v14; // r9
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  ULONG CreateFlags; // ecx
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int128 v23; // [rsp+98h] [rbp-68h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]

  ZeroBits = a4;
  v14 = a3;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  v23 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return -1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = a3 & 1 | 2;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  if ( (a3 & 2) == 0 )
    v15 = a3 & 1;
  AttributeList.Attributes[0].Value = (ULONG_PTR)&v23;
  ObjectAttributes.SecurityDescriptor = a2;
  v16 = v15 | 4;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.TotalLength = 40LL;
  if ( (a3 & 4) == 0 )
    v16 = v15;
  v17 = v16 | 0x10;
  if ( (a3 & 0x10) == 0 )
    v17 = v16;
  v18 = v17 | 0x20;
  if ( (v14 & 0x20) == 0 )
    v18 = v17;
  CreateFlags = v18 | 0x40;
  if ( (v14 & 0x40) == 0 )
    CreateFlags = v18;
  result = ZwCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             StartRoutine,
             Argument,
             CreateFlags,
             ZeroBits,
             StackSize,
             MaximumStackSize,
             &AttributeList);
  if ( result >= 0 )
  {
    if ( a10 )
      *a10 = ThreadHandle;
    else
      ZwClose(ThreadHandle);
    if ( a11 )
      *a11 = v23;
    return 0;
  }
  return result;
}
