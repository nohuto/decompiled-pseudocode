/*
 * XREFs of PopBcdSetupResumeObject @ 0x1409A3F8C
 * Callers:
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409A4BE4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdSetupResumeObject(HANDLE BcdObjectHandle)
{
  ULONG BufferSize; // ebp
  _DWORD *Pool2; // rax
  void *v4; // rdi
  BCD_FLAGS v5; // r8d
  NTSTATUS v6; // ebx
  BCD_FLAGS v7; // r8d
  BCD_FLAGS v8; // r8d
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  BufferSize = PoHiberFileRoot.Length + 22;
  DestinationString = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 2;
    memmove(Pool2 + 5, PoHiberFileRoot.Buffer, PoHiberFileRoot.Length);
    v6 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000001u, v5, v4, BufferSize);
    if ( v6 >= 0 )
    {
      v6 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x21000026u, v7, v4, BufferSize);
      if ( v6 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
        v6 = BcdSetElementDataWithFlags(
               BcdObjectHandle,
               0x22000002u,
               v8,
               DestinationString.Buffer,
               DestinationString.Length + 2);
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
