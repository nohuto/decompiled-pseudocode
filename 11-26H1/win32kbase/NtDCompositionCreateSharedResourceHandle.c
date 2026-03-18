/*
 * XREFs of NtDCompositionCreateSharedResourceHandle @ 0x1401B27C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x140057834 (CreateSharedResourceObject.c)
 *     ?OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z @ 0x14014B7E0 (-OpenSharedHandle@CSharedSystemResource@DirectComposition@@QEBAJKPEAPEAX@Z.c)
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDCompositionCreateSharedResourceHandle(unsigned int a1, __int64 a2)
{
  NTSTATUS SharedResourceObject; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  int v6; // ecx
  __int64 v7; // rdx
  PVOID v8; // rdi
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  SharedResourceObject = 0;
  Object = 0LL;
  Handle = 0LL;
  if ( a1 != 17 && a1 != 105 && a1 != 156 )
  {
    if ( a1 == 159 )
    {
      IsEnabledDeviceUsageNoInline = Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline();
      v6 = 0;
      if ( !IsEnabledDeviceUsageNoInline )
        v6 = -1073741811;
      SharedResourceObject = v6;
    }
    else
    {
      SharedResourceObject = -1073741811;
    }
  }
  if ( SharedResourceObject >= 0 )
  {
    SharedResourceObject = CreateSharedResourceObject((void *)a1, (struct DirectComposition::ResourceObject **)&Object);
    v8 = Object;
    if ( SharedResourceObject >= 0 )
    {
      SharedResourceObject = DirectComposition::CSharedSystemResource::OpenSharedHandle(
                               (DirectComposition::CSharedSystemResource *)((char *)Object + 24),
                               v7,
                               &Handle);
      ObfDereferenceObject(v8);
      if ( SharedResourceObject >= 0 )
        RtlWriteULong64ToUser(a2, Handle);
    }
  }
  return (unsigned int)SharedResourceObject;
}
