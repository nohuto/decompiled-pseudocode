/*
 * XREFs of DbgkpWerInitializeDeferredLiveDump @ 0x140B4168C
 * Callers:
 *     DbgkpWerCaptureLiveFullDump @ 0x140B413AC (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1405B6F64 (DbgkpWerAllocateNonpagedPool.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateTimer @ 0x140729920 (ZwCreateTimer.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall DbgkpWerInitializeDeferredLiveDump(__int64 a1)
{
  __int64 v1; // rsi
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *NonpagedPool; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE TimerHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  v1 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  TimerHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateTimer(&TimerHandle, 0x1F0003u, &ObjectAttributes, NotificationTimer);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v5 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)TimerHandle,
           2031619,
           ExTimerObjectType,
           0,
           0x57676244u,
           &Object,
           0LL,
           0LL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      ZwClose(TimerHandle);
      TimerHandle = 0LL;
      *(_QWORD *)(v1 + 16) = Object;
      NonpagedPool = (_QWORD *)DbgkpWerAllocateNonpagedPool();
      if ( !NonpagedPool )
      {
        DbgPrintEx(5u, 0, "DBGK: Could not allocate timer.\n");
        return 3221225495LL;
      }
      *(_QWORD *)(a1 + 112) = NonpagedPool;
      NonpagedPool[2] = DbgkpWerDeferredWriteRoutine;
      NonpagedPool[3] = a1;
      *NonpagedPool = 0LL;
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Failed to reference timer, status 0x%X\n", v5);
      if ( Object )
      {
        ObfDereferenceObject(Object);
        *(_QWORD *)(v1 + 16) = 0LL;
      }
      if ( TimerHandle )
        ZwClose(TimerHandle);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Failed to create timer, status 0x%X\n", v3);
  }
  return v4;
}
