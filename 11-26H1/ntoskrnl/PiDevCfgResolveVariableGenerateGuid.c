/*
 * XREFs of PiDevCfgResolveVariableGenerateGuid @ 0x1407AE5B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgResolveVariableGenerateGuid(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v4; // ebx
  unsigned int v5; // r14d
  void *Pool2; // rax
  void *v7; // rsi
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-20h] BYREF

  Uuid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v4 = ExUuidCreate(&Uuid);
  if ( v4 >= 0 )
  {
    v4 = RtlStringFromGUIDEx(&Uuid, &GuidString, 1u);
    if ( v4 >= 0 )
    {
      v4 = RtlUpcaseUnicodeString(&GuidString, &GuidString, 0);
      if ( v4 >= 0 )
      {
        v5 = GuidString.Length + 2;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v7 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, GuidString.Buffer, v5);
          *(_DWORD *)(a3 + 32) = 1;
          *(_DWORD *)(a3 + 36) = v5;
          *(_QWORD *)(a3 + 40) = v7;
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
  }
  RtlFreeAnsiString(&GuidString);
  return (unsigned int)v4;
}
