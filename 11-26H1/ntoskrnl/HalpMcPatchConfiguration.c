/*
 * XREFs of HalpMcPatchConfiguration @ 0x14059384C
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405931E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 */

__int64 HalpMcPatchConfiguration()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  v3[0] = 9437326LL;
  v3[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\MCUpdate\\PatchConfig";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v1 = v0;
  if ( v0 == -1073741772 )
  {
    v1 = 0;
  }
  else if ( v0 >= 0 )
  {
    v1 = HalpMcEnumerateAndSetPatchConfig(KeyHandle, 0LL, 0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v1;
}
