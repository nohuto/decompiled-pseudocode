/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x140B63510
 * Callers:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140AB6238 (RtlpOpenBaseImageFileOptionsKey.c)
 * Callees:
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKeyEx(HANDLE *a1)
{
  ULONG v2; // edx
  bool v3; // zf
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = 1600;
  v3 = KeGetCurrentThread()->PreviousMode == 1;
  ObjectAttributes.Length = 48;
  if ( !v3 )
    v2 = 576;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = v2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140005A08;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    *a1 = KeyHandle;
    return 0;
  }
  return result;
}
