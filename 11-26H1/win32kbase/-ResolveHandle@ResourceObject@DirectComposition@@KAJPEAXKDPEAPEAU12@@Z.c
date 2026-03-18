/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1400579A8
 * Callers:
 *     CreateSharedResourceObject @ 0x140057834 (CreateSharedResourceObject.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1400B3450 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x14017C57C (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14018AED0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x140229800 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct DirectComposition::ResourceObject **a4)
{
  NTSTATUS v5; // ebx
  struct DirectComposition::ResourceObject *v6; // rdi
  int v7; // eax
  struct DirectComposition::ResourceObject *v8; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = (struct DirectComposition::ResourceObject *)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 1) + 16LL))(*((_QWORD **)v6 + 1));
      if ( v7 != 1 )
        v5 = -1073741788;
      v8 = v6;
      if ( v7 != 1 )
        v8 = 0LL;
      if ( v5 >= 0 )
      {
        *a4 = v8;
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741816;
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
