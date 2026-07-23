/*
 * XREFs of PiDevCfgConfigureDeviceFilters @ 0x140B376C0
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     _PnpCtxRegCopyTree @ 0x14089C328 (_PnpCtxRegCopyTree.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceFilters(int a1, void *a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.RootDirectory = a2;
  KeyHandle = 0LL;
  v7[0] = 1048590LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  v7[1] = L"Filters";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 == -1073741772 )
  {
    v5 = 0;
  }
  else if ( v3 >= 0 )
  {
    v5 = PnpCtxRegCopyTree(v4, (int)KeyHandle, 0, a1, (__int64)L"Filters");
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
