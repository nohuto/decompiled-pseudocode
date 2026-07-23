/*
 * XREFs of CmpInitializeHardwareConfiguration @ 0x140CF46A8
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpSetupConfigurationTree @ 0x140CF4808 (CmpSetupConfigurationTree.c)
 */

NTSTATUS __fastcall CmpInitializeHardwareConfiguration(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ForegroundLossTime;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiSystemServiceTraceCallbackLock.InGlobalForegroundList;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( result >= 0 )
    {
      CmpConfigurationData = (PVOID)ExAllocatePool2(256LL, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      if ( CmpConfigurationData )
      {
        if ( v1 )
          LODWORD(v1) = CmpSetupConfigurationTree(v1, KeyHandle, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        ExFreePoolWithTag(CmpConfigurationData, 0);
        CmpConfigurationData = 0LL;
      }
      else
      {
        LODWORD(v1) = -1073741670;
      }
      ZwClose(KeyHandle);
      return v1;
    }
  }
  return result;
}
