/*
 * XREFs of CmFcpManagerCreateSection @ 0x140B3B4C8
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140860BF0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408611C4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140861818 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140ABEC64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateSection @ 0x140723D30 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmFcpManagerCreateSection(LARGE_INTEGER a1, __int64 a2, void *a3, _QWORD *a4)
{
  NTSTATUS v7; // ebx
  LARGE_INTEGER MaximumSize; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp+20h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF

  ObjectAttributes.SecurityDescriptor = a3;
  MaximumSize = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  SectionHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v7 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v7 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v7 = 0;
      a4[1] = Object;
      *a4 = a2;
      a4[2] = a1.QuadPart;
    }
  }
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v7;
}
