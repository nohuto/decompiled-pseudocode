/*
 * XREFs of DCompositionCreateSynchronizationObject @ 0x140226440
 * Callers:
 *     NtDCompositionCreateSynchronizationObject @ 0x140226C00 (NtDCompositionCreateSynchronizationObject.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1400492B0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400D0A7C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1400FEA30 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall DCompositionCreateSynchronizationObject(PVOID *a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  char *v4; // rdi
  _DWORD v6[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  PVOID v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Buffer; // [rsp+B0h] [rbp+30h] BYREF

  Buffer = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (__int64 *)&Buffer);
  if ( v3 >= 0 )
  {
    v4 = (char *)Buffer;
    v6[1] = 0;
    v10 = 0;
    Handle = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v12 = 0LL;
    v6[0] = 48;
    v9 = 512;
    v11 = Buffer;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v6,
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
    GreDeleteFastMutex(v4);
  }
  return (unsigned int)v3;
}
