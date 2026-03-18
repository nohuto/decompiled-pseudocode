/*
 * XREFs of NtDCompositionCreateBufferCollection @ 0x140228B60
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x140057A88 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x14014BF90 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     ?ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14022A33C (-ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDCompositionCreateBufferCollection(unsigned int a1, void *a2, void *a3, void *a4)
{
  int v8; // edi
  __int64 v9; // rcx
  char *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  HANDLE Handle; // [rsp+50h] [rbp-2A8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-2A0h] BYREF
  HANDLE v17; // [rsp+60h] [rbp-298h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-290h] BYREF
  _QWORD v19[6]; // [rsp+70h] [rbp-288h] BYREF
  _QWORD v20[4]; // [rsp+A0h] [rbp-258h] BYREF
  _BYTE v21[512]; // [rsp+C0h] [rbp-238h] BYREF

  LODWORD(Handle) = a1;
  v17 = a3;
  Object = a4;
  v8 = 0;
  memset(v21, 0, sizeof(v21));
  Buffer = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0x40 && a2 )
      RtlCopyFromUser(v21, a2, 8LL * a1);
    else
      v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    v8 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&Buffer);
    if ( v8 >= 0 )
    {
      v19[0] = 48LL;
      v19[3] = 512LL;
      Handle = 0LL;
      v19[1] = 0LL;
      v19[2] = 0LL;
      v10 = (char *)Buffer;
      v19[4] = Buffer;
      v19[5] = 0LL;
      v20[0] = v21;
      v20[1] = a1;
      v20[2] = a3;
      v8 = CompositionObject::Create(
             v9,
             (__int64)v19,
             3u,
             0LL,
             6,
             64,
             (__int64 (__fastcall *)(PVOID, __int64, char *))DirectComposition::BufferCollectionObject::ObjectInit,
             (__int64)v20,
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
          v17 = 0LL;
          v8 = CompositionObject::CreateHandle((CompositionObject *)Object, 3u, 0, 0, &v17);
          ObfDereferenceObject(Object);
          if ( v8 >= 0 )
            RtlWriteULong64ToUser(a4, v17);
        }
      }
      GreDeleteFastMutex(v10, v11, v12, v13);
    }
  }
  return (unsigned int)v8;
}
