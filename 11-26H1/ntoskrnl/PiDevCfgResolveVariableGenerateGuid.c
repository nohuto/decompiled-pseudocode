/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x1407AB590
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlUpcaseUnicodeString @ 0x1409E9B60 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v4; // ebx
  __int64 v5; // r8
  unsigned int v6; // r14d
  void *Pool2; // rax
  void *v8; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-20h] BYREF

  Uuid = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = ExUuidCreate(&Uuid);
  if ( v4 >= 0 )
  {
    LOBYTE(v5) = 1;
    v4 = RtlStringFromGUIDEx(&Uuid, &DestinationString, v5);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      if ( v4 >= 0 )
      {
        v6 = DestinationString.Length + 2;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v8 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, DestinationString.Buffer, v6);
          *(_DWORD *)(a3 + 32) = 1;
          *(_DWORD *)(a3 + 36) = v6;
          *(_QWORD *)(a3 + 40) = v8;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v4;
}
