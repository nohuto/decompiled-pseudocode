/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14004E990
 * Callers:
 *     CreateSharedResourceObject @ 0x14004E81C (CreateSharedResourceObject.c)
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x140058F78 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011F340 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14014D580 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x140227510 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct DirectComposition::ResourceObject **a4)
{
  NTSTATUS v5; // eax
  struct DirectComposition::ResourceObject *v6; // rdi
  int v7; // ebx
  struct DirectComposition::ResourceObject *v8; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  Object = 0LL;
  *a4 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  v6 = (struct DirectComposition::ResourceObject *)Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      v8 = v6;
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 1) + 16LL))(*((_QWORD **)v6 + 1)) != 1 )
      {
        v7 = -1073741788;
        v8 = 0LL;
      }
      if ( v7 >= 0 )
      {
        *a4 = v8;
        return (unsigned int)v7;
      }
    }
    else
    {
      v7 = -1073741816;
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v7;
}
