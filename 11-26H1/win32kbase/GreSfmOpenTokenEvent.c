/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1400B1D10
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle)
{
  struct _ERESOURCE **v2; // rbx
  struct _ERESOURCE *v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r8d
  struct _ERESOURCE *v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // rsi
  unsigned int v11; // ebx
  struct _GRETHREAD *v12; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(Handle) + 88);
  v3 = *v2 + 5;
  EngAcquireSemaphoreShared((HSEMAPHORE)v3);
  GrepAcquireLockValidate<7>();
  if ( UserIsCurrentProcessDwm(v5, v4, v6) )
  {
    v8 = v2[543];
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(v8->SharedWaiters, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v10 = Object;
    v11 = v9;
    if ( v9 >= 0 )
    {
      v11 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v10);
    }
  }
  else
  {
    v11 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (int)v3, v7);
  v12 = GreGetCurrentThreadCrossSessionCheck();
  if ( v12 )
  {
    if ( (*((_BYTE *)v12 + 15))-- == 1 )
      *(_QWORD *)v12 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v3);
  return v11;
}
