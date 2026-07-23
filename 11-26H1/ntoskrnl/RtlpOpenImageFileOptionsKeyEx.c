/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x140AB60E8
 * Callers:
 *     RtlOpenImageFileOptionsKey @ 0x140AB60D0 (RtlOpenImageFileOptionsKey.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140B5CD50 (SepCheckAndSetAuditModeForProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140AB6238 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140AB62AC (RtlpProcessIFEOKeyFilter.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  int v4; // edx
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  bool v11; // r14
  __int64 result; // rax
  HANDLE v13; // rdi
  ULONG v14; // edx
  bool v15; // zf
  __int64 v16; // rdx
  NTSTATUS v17; // ebx
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  *a4 = 0LL;
  v4 = *a1;
  v6 = *a1;
  KeyHandle = 0LL;
  v8 = v4;
  v9 = *((_QWORD *)a1 + 1) + v6;
  v18 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  while ( v8 && *(_WORD *)(v9 - 2) != 92 )
  {
    v9 -= 2LL;
    v8 -= 2;
  }
  v10 = v4 - v8;
  *((_QWORD *)&v18 + 1) = v9;
  LOWORD(v18) = v10;
  if ( (unsigned __int16)v10 != v10 )
    return 3221225507LL;
  v11 = RtlpDisableIFEOCaching != 0;
  result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( (int)result >= 0 )
  {
    v13 = Handle;
    v14 = 1600;
    v15 = KeGetCurrentThread()->PreviousMode == 1;
    ObjectAttributes.Length = 48;
    if ( !v15 )
      v14 = 576;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = v14;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v11 )
      ZwClose(v13);
    if ( v17 >= 0 )
    {
      Handle = KeyHandle;
      v17 = RtlpProcessIFEOKeyFilter(&Handle, v16, a1);
      if ( v17 >= 0 )
      {
        *a4 = Handle;
      }
      else if ( Handle )
      {
        ZwClose(Handle);
      }
    }
    return (unsigned int)v17;
  }
  return result;
}
