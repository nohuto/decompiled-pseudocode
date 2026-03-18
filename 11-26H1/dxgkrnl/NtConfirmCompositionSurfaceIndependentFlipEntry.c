/*
 * XREFs of NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x1400298F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_KIII@Z @ 0x140029A38 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_KIII@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtConfirmCompositionSurfaceIndependentFlipEntry(
        void *a1,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v8; // ebx
  struct CCompositionSurface *v9; // rdi
  __int64 Win32kImportTable; // rax
  __int64 v11; // r8
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  struct CCompositionSurface *v14; // [rsp+38h] [rbp-30h]
  struct CCompositionSurface *v15; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h]
  unsigned int v17; // [rsp+88h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  v8 = 0;
  v9 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v15 = 0LL;
    RtlCopyFromUser(&v15, a2, 8uLL);
    v9 = v15;
    v14 = v15;
  }
  else
  {
    v8 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v8 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      Object = 0LL;
      v8 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( v8 >= 0 )
      {
        v15 = 0LL;
        v8 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v15);
        if ( v8 >= 0 )
        {
          v8 = CCompositionSurface::ConfirmIndependentFlipEntry(v15, (unsigned __int64)v9, a3, a4, a5);
          CCompositionSurface::UnlockAndRelease(v15);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v8 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
