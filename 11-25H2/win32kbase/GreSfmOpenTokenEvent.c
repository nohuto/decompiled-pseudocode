/*
 * XREFs of GreSfmOpenTokenEvent @ 0x140072FB0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400730C4 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140073114 (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  unsigned int v8; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(__int64 **)(W32GetSessionState(Handle) + 88);
  v3 = *v2;
  GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(EngAcquireSemaphoreShared, *v2 + 520);
  if ( UserIsCurrentProcessDwm(v5, v4) )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(
           *(HANDLE *)(v2[529] + 24),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v7 = Object;
    v8 = v6;
    if ( v6 >= 0 )
    {
      v8 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v7);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v3 + 520);
  return v8;
}
