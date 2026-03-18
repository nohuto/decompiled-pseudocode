/*
 * XREFs of DCompositionCreateSynchronizationObject @ 0x140228680
 * Callers:
 *     NtDCompositionCreateSynchronizationObject @ 0x140228E30 (NtDCompositionCreateSynchronizationObject.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x140057A88 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1401191F0 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DCompositionCreateSynchronizationObject(PVOID *a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  char *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[6]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Buffer; // [rsp+B0h] [rbp+30h] BYREF

  Buffer = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&Buffer);
  if ( v3 >= 0 )
  {
    v4 = (char *)Buffer;
    v9[0] = 48LL;
    v9[3] = 512LL;
    Handle = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    v9[4] = Buffer;
    v9[5] = 0LL;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v9,
           1u,
           0LL,
           3,
           40,
           (__int64 (__fastcall *)(PVOID, __int64, char *))DirectComposition::SynchronizationObject::ObjectInit,
           0LL,
           &Handle);
    if ( v3 >= 0 )
    {
      Buffer = 0LL;
      v3 = DirectComposition::SynchronizationObject::ResolveHandle(
             Handle,
             3LL,
             0LL,
             (struct DirectComposition::SynchronizationObject **)&Buffer);
      if ( v3 >= 0 )
        *a1 = Buffer;
      ObCloseHandle(Handle, 0);
    }
    GreDeleteFastMutex(v4, v5, v6, v7);
  }
  return (unsigned int)v3;
}
