/*
 * XREFs of NtDCompositionCreateBufferCollection @ 0x140226920
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1400492B0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1400FEA30 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x14010EE20 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     ?ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14022808C (-ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtDCompositionCreateBufferCollection(unsigned int a1, void *a2, void *a3, _QWORD *a4)
{
  int v8; // edi
  __int64 v9; // rcx
  char *v10; // r12
  HANDLE Handle; // [rsp+50h] [rbp-2A8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-2A0h] BYREF
  HANDLE v14; // [rsp+60h] [rbp-298h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-290h] BYREF
  _DWORD v16[2]; // [rsp+70h] [rbp-288h] BYREF
  __int64 v17; // [rsp+78h] [rbp-280h]
  __int64 v18; // [rsp+80h] [rbp-278h]
  int v19; // [rsp+88h] [rbp-270h]
  int v20; // [rsp+8Ch] [rbp-26Ch]
  PVOID v21; // [rsp+90h] [rbp-268h]
  __int64 v22; // [rsp+98h] [rbp-260h]
  _QWORD v23[4]; // [rsp+A0h] [rbp-258h] BYREF
  _BYTE v24[512]; // [rsp+C0h] [rbp-238h] BYREF

  LODWORD(Handle) = a1;
  Object = a3;
  v8 = 0;
  memset(v24, 0, sizeof(v24));
  Buffer = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0x40 && a2 )
      RtlCopyFromUser(v24, a2, 8LL * a1);
    else
      v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    v8 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (__int64 *)&Buffer);
    if ( v8 >= 0 )
    {
      v16[1] = 0;
      v20 = 0;
      Handle = 0LL;
      v16[0] = 48;
      v17 = 0LL;
      v19 = 512;
      v18 = 0LL;
      v10 = (char *)Buffer;
      v21 = Buffer;
      v22 = 0LL;
      v23[0] = v24;
      v23[1] = a1;
      v23[2] = a3;
      v8 = CompositionObject::Create(
             v9,
             (__int64)v16,
             3u,
             0LL,
             6,
             64,
             (__int64 (__fastcall *)(PVOID, __int64, char *))DirectComposition::BufferCollectionObject::ObjectInit,
             (__int64)v23,
             &Handle);
      if ( v8 >= 0 )
      {
        Object = 0LL;
        v8 = DirectComposition::BufferCollectionObject::ResolveHandle(
               Handle,
               3u,
               0,
               (struct DirectComposition::BufferCollectionObject **)&Object);
        ObCloseHandle(Handle, 0);
        if ( v8 >= 0 )
        {
          v14 = 0LL;
          v8 = CompositionObject::CreateHandle((CompositionObject *)Object, 3u, 0, 0, &v14);
          ObfDereferenceObject(Object);
          if ( v8 >= 0 )
          {
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              a4 = (_QWORD *)MmUserProbeAddress;
            *a4 = v14;
          }
        }
      }
      GreDeleteFastMutex(v10);
    }
  }
  return (unsigned int)v8;
}
