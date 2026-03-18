/*
 * XREFs of NtOpenCompositionSurfaceSectionInfo @ 0x1400A2DC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x140037A70 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1400453A8 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1400546B0 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSectionInfo(void *a1, void *a2, void *a3, void *a4)
{
  int Buffer; // edi
  CCompositionSurface *v8; // r15
  struct CCompositionBuffer *v9; // rbx
  __int64 Win32kImportTable; // rax
  __int64 v11; // r8
  struct CCompositionBuffer *v13; // [rsp+20h] [rbp-98h] BYREF
  int v14; // [rsp+28h] [rbp-90h]
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  CCompositionSurface *v16; // [rsp+38h] [rbp-80h]
  struct CCompositionBuffer *v17; // [rsp+40h] [rbp-78h]
  _QWORD v18[2]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v19; // [rsp+58h] [rbp-60h]
  __int64 v20; // [rsp+68h] [rbp-50h]
  struct CBufferRealization *v21; // [rsp+70h] [rbp-48h] BYREF
  __int128 Src; // [rsp+78h] [rbp-40h] BYREF
  __int64 v23; // [rsp+88h] [rbp-30h]
  CCompositionSurface *v24; // [rsp+C8h] [rbp+10h] BYREF
  void *v25; // [rsp+D8h] [rbp+20h]

  v25 = a4;
  Buffer = 0;
  Object = 0LL;
  v8 = 0LL;
  v16 = 0LL;
  v9 = 0LL;
  v17 = 0LL;
  Src = 0LL;
  v23 = 0LL;
  if ( a2 && a3 )
  {
    v24 = 0LL;
    RtlCopyFromUser(&v24, a2, 8uLL);
    v8 = v24;
    v16 = v24;
    v13 = 0LL;
    RtlCopyFromUser(&v13, a3, 8uLL);
    v9 = v13;
    v17 = v13;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v24 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v24);
        if ( Buffer >= 0 )
        {
          v13 = 0LL;
          Buffer = CCompositionSurface::FindBuffer(v24, (__int64)v8, &v13);
          if ( Buffer >= 0 )
          {
            v18[0] = 1LL;
            v19 = 0LL;
            v20 = 0LL;
            v18[1] = v9;
            Buffer = CCompositionBuffer::FindRealization(v13, (const struct CSM_REALIZATION_INFO *)v18, &v21);
            if ( Buffer >= 0 )
              Buffer = -1073741822;
          }
          CCompositionSurface::UnlockAndRelease(v24);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( a4 )
  {
    RtlCopyToUser(a4, &Src, 0x18uLL);
  }
  else
  {
    Buffer = -1073741811;
    v14 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
