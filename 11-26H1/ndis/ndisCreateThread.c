/*
 * XREFs of ndisCreateThread @ 0x1400C5110
 * Callers:
 *     ndisCreateReceiveWorkerThreadPool @ 0x1400C502C (ndisCreateReceiveWorkerThreadPool.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1400C53A0 (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ndisCreateThread(__int64 a1, void *a2, KPRIORITY a3, PVOID *a4)
{
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  struct _KTHREAD *v8; // rcx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-58h]
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)ndisReceiveWorkerThread,
         a2);
  if ( v6 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v8 = (struct _KTHREAD *)Object;
    v6 = v7;
    *a4 = Object;
    if ( a3 )
      KeSetPriorityThread(v8, a3);
    ZwClose(ThreadHandle);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(HandleInformation) = v6;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xCu,
      0xAu,
      (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids,
      HandleInformation);
  }
  return (unsigned int)v6;
}
