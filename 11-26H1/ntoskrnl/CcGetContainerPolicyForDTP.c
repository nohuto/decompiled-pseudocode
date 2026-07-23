/*
 * XREFs of CcGetContainerPolicyForDTP @ 0x1405B2EE4
 * Callers:
 *     CcContainerRestoreCallBack @ 0x1405B2E70 (CcContainerRestoreCallBack.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 */

__int64 __fastcall CcGetContainerPolicyForDTP(_DWORD *a1)
{
  NTSTATUS v2; // ebx
  HANDLE v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  v5[0] = 20316468LL;
  v5[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Containers\\Policy\\5A3AA949-2A66-4A95-8"
           "107-DAC51D328213\\E08898D5-8D02-40E9-9A8B-50265E087620";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v3 = KeyHandle;
    *a1 = 1;
    ZwClose(v3);
  }
  return (unsigned int)v2;
}
