/*
 * XREFs of CreateSharedResourceObject @ 0x140057834
 * Callers:
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1400A9E94 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     CreateSharedSystemVisualObject @ 0x140167880 (CreateSharedSystemVisualObject.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x1401B27C0 (NtDCompositionCreateSharedResourceHandle.c)
 *     CreateSharedSystemVisualBitmapObject @ 0x140228640 (CreateSharedSystemVisualBitmapObject.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400579A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1400A9938 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 */

__int64 __fastcall CreateSharedResourceObject(void *a1, struct DirectComposition::ResourceObject **a2)
{
  unsigned int v3; // esi
  int inserted; // ebx
  char *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS LocallyUniqueId; // eax
  PVOID v10; // rcx
  int v11; // eax
  _QWORD v13[6]; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  v3 = (unsigned int)a1;
  Object = 0LL;
  inserted = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&Object);
  if ( inserted >= 0 )
  {
    v5 = (char *)Object;
    v13[0] = 48LL;
    v13[3] = 512LL;
    Handle = 0LL;
    v13[1] = 0LL;
    v13[2] = 0LL;
    v13[4] = Object;
    v13[5] = 0LL;
    Object = 0LL;
    inserted = ObCreateObject(0LL, ExCompositionObjectType, v13, 0LL, 0LL, 64, 0, 0, &Object);
    if ( inserted >= 0 )
    {
      *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 2);
      v10 = Object;
      inserted = LocallyUniqueId;
      if ( LocallyUniqueId < 0
        || (v11 = DirectComposition::ResourceObject::ObjectInit(
                    (struct CompositionObject *)Object,
                    (void *)v3,
                    (struct ICompositionObject **)Object + 1),
            v10 = Object,
            inserted = v11,
            v11 < 0) )
      {
        ObfDereferenceObject(v10);
LABEL_8:
        GreDeleteFastMutex(v5, v6, v7, v8);
        return (unsigned int)inserted;
      }
      inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, &Handle);
    }
    if ( inserted >= 0 )
    {
      inserted = DirectComposition::ResourceObject::ResolveHandle(Handle, 3u, 0, a2);
      ObCloseHandle(Handle, 0);
    }
    goto LABEL_8;
  }
  return (unsigned int)inserted;
}
