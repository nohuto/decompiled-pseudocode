/*
 * XREFs of NtSetCompositionSurfaceDirectFlipState @ 0x140029AB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?SetDirectFlip@CCompositionSurface@@QEAAJ_K_N1@Z @ 0x14002A044 (-SetDirectFlip@CCompositionSurface@@QEAAJ_K_N1@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtSetCompositionSurfaceDirectFlipState(void *a1, void *a2, int a3, int a4)
{
  int v7; // ebx
  struct CCompositionSurface *v8; // rdi
  __int64 Win32kImportTable; // rax
  __int64 v10; // r8
  PVOID Object; // [rsp+20h] [rbp-38h] BYREF
  struct CCompositionSurface *v13; // [rsp+28h] [rbp-30h]
  struct CCompositionSurface *v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+70h] [rbp+18h]
  int v16; // [rsp+78h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  v7 = 0;
  v8 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v14 = 0LL;
    RtlCopyFromUser(&v14, a2, 8uLL);
    v8 = v14;
    v13 = v14;
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      Object = 0LL;
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v14 = 0LL;
        v7 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v14);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::SetDirectFlip(v14, (unsigned __int64)v8, a3 != 0, a4 != 0);
          CCompositionSurface::UnlockAndRelease(v14);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
