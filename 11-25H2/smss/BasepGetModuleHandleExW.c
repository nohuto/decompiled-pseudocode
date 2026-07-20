/*
 * XREFs of BasepGetModuleHandleExW @ 0x14001D250
 * Callers:
 *     GetModuleHandleW @ 0x14001D2D8 (GetModuleHandleW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 */

_BOOL8 __fastcall BasepGetModuleHandleExW(__int64 a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS v4; // eax
  NTSTATUS v5; // ebx
  PVOID v6; // rax
  struct _UNICODE_STRING DllName; // [rsp+20h] [rbp-18h] BYREF
  PVOID DllHandle; // [rsp+48h] [rbp+10h] BYREF

  DllHandle = 0LL;
  DllName = 0LL;
  RtlInitUnicodeString(&DllName, L"ntdll.dll");
  v4 = LdrGetDllHandle(0LL, 0LL, &DllName, &DllHandle);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = DllHandle;
  }
  else
  {
    BaseSetLastNTError((unsigned int)v4);
    v6 = 0LL;
  }
  if ( a3 )
    *a3 = v6;
  return v5 >= 0;
}
