/*
 * XREFs of VrpHandleIoctlGetVirtualRootKey @ 0x14093A3C8
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsIsThreadInSilo @ 0x14043004C (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x140430090 (PsGetJobSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlGetVirtualRootKey(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int JobSilo; // ebx
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *v10; // r15
  ULONG v11; // ecx
  HANDLE v12; // r8
  HANDLE KeyHandle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v15 = 0LL;
  Object = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a2 < 0x10 || *(_DWORD *)(a1 + 8) > 2u )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    JobSilo = ObpReferenceObjectByHandleWithTag(
                *(_QWORD *)a1,
                4,
                (__int64)PsJobType,
                a3,
                0x52566D43u,
                &Object,
                0LL,
                0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), v15) )
        {
          JobSilo = -1073741811;
        }
        else
        {
          v10 = PsAttachSiloToCurrentThread(v9);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          v11 = 1088;
          if ( a3 != 1 )
            v11 = 576;
          ObjectAttributes.Attributes = v11;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&VrpRootKeyPaths[8 * *(int *)(a1 + 8)];
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          JobSilo = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
          if ( JobSilo >= 0 )
          {
            JobSilo = 0;
            v12 = KeyHandle;
            KeyHandle = 0LL;
            *a6 = 8;
            *a5 = v12;
          }
          PsDetachSiloFromCurrentThread(v10);
        }
      }
    }
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
