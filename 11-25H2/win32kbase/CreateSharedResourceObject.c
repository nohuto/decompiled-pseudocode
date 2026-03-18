/*
 * XREFs of CreateSharedResourceObject @ 0x14004E81C
 * Callers:
 *     NtDCompositionCreateSharedResourceHandle @ 0x14004E6C0 (NtDCompositionCreateSharedResourceHandle.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     CreateSharedSystemVisualObject @ 0x14012D2A0 (CreateSharedSystemVisualObject.c)
 *     CreateSharedSystemVisualBitmapObject @ 0x140226400 (CreateSharedSystemVisualBitmapObject.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1400492B0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14004E990 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14004F700 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 */

__int64 __fastcall CreateSharedResourceObject(void *a1, struct DirectComposition::ResourceObject **a2)
{
  unsigned int v3; // esi
  int inserted; // ebx
  char *v5; // rdi
  NTSTATUS LocallyUniqueId; // eax
  PVOID v7; // rcx
  int v8; // eax
  _QWORD v10[6]; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  v3 = (unsigned int)a1;
  Object = 0LL;
  inserted = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (__int64 *)&Object);
  if ( inserted >= 0 )
  {
    v5 = (char *)Object;
    v10[0] = 48LL;
    v10[3] = 512LL;
    Handle = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[4] = Object;
    v10[5] = 0LL;
    Object = 0LL;
    inserted = ObCreateObject(0LL, ExCompositionObjectType, v10, 0LL, 0LL, 64, 0, 0, &Object);
    if ( inserted >= 0 )
    {
      *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 2);
      v7 = Object;
      inserted = LocallyUniqueId;
      if ( LocallyUniqueId < 0
        || (v8 = DirectComposition::ResourceObject::ObjectInit(
                   (struct CompositionObject *)Object,
                   (void *)v3,
                   (struct ICompositionObject **)Object + 1),
            v7 = Object,
            inserted = v8,
            v8 < 0) )
      {
        ObfDereferenceObject(v7);
LABEL_8:
        GreDeleteFastMutex(v5);
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
