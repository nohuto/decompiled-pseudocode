/*
 * XREFs of NtDCompositionDuplicateHandleToProcess @ 0x140228F60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x140119238 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDCompositionDuplicateHandleToProcess(void *BugCheckCode, int a2, __int64 a3)
{
  void *v4; // r14
  int v6; // ebx
  void *ProcessHandle; // [rsp+40h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-80h] BYREF
  PVOID v10; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PVOID v12; // [rsp+60h] [rbp-68h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-50h] BYREF
  int ProcessInformation; // [rsp+E8h] [rbp+20h] BYREF

  v4 = (void *)a2;
  v6 = -1073741790;
  if ( !UserIsCurrentProcessDwm((int)BugCheckCode, a2, a3) )
    return (unsigned int)v6;
  if ( (_DWORD)v4 != -1414746709 || a3 )
  {
    v12 = 0LL;
    v6 = CompositionObject::ResolveHandle(BugCheckCode, 1u, 1, 1, &v12);
    if ( v6 < 0 )
      v6 = CompositionObject::ResolveHandle(BugCheckCode, 1u, 1, 3, &v12);
    if ( v6 >= 0 )
    {
      ProcessHandle = 0LL;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v4;
      v6 = ZwOpenProcess(&ProcessHandle, 0x40u, &ObjectAttributes, &ClientId);
      if ( v6 >= 0 )
      {
        ProcessInformation = 0;
        v6 = ZwQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
        if ( v6 >= 0 && (unsigned int)PsGetCurrentProcessSessionId() != ProcessInformation )
          v6 = -1073741790;
        if ( v6 >= 0 )
        {
          Object = 0LL;
          v6 = ObReferenceObjectByHandleWithTag(ProcessHandle, 0x40u, 0LL, 0, 0, &Object, 0LL);
          if ( v6 >= 0 )
          {
            v10 = 0LL;
            v6 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &v10, 0LL);
            if ( v6 >= 0 )
            {
              Handle = (HANDLE)-1LL;
              v6 = ObDuplicateObject(v10, BugCheckCode, Object, &Handle, 0x80000000, 0, 2, 1);
              if ( v6 >= 0 )
                RtlWriteULong64ToUser(a3, Handle);
              ObfDereferenceObjectWithTag(v10, 0);
            }
            ObfDereferenceObjectWithTag(Object, 0);
          }
        }
        ObCloseHandle(ProcessHandle, 0);
      }
      ObfDereferenceObject(v12);
    }
    return (unsigned int)v6;
  }
  if ( !PsGetVersion(0LL, 0LL, 0LL, 0LL) )
    KeBugCheckEx((ULONG)BugCheckCode, 0LL, 0LL, 0LL, 0LL);
  return 0LL;
}
