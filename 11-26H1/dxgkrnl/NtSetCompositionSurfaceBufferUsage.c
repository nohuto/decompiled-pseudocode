/*
 * XREFs of NtSetCompositionSurfaceBufferUsage @ 0x1400262E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferUsage(void *a1, void *a2, unsigned int a3, int a4, int a5)
{
  int v8; // ebx
  PVOID v9; // rdi
  __int64 Win32kImportTable; // rax
  __int64 v11; // rcx
  char v12; // r8
  _DWORD *v13; // rcx
  int v14; // r9d
  CCompositionSurface *v15; // rdx
  struct CCompositionSurface *i; // rax
  struct CCompositionSurface *v18; // [rsp+28h] [rbp-30h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h]
  int v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  v8 = 0;
  v9 = 0LL;
  if ( a2 )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, a2, 8uLL);
    v9 = Object;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 && a3 > 2 )
    v8 = -1073741811;
  KeEnterCriticalRegion();
  if ( v8 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (__fastcall **)(__int64))(Win32kImportTable + 608))(v11) )
    {
      Object = 0LL;
      v8 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v12, (struct CompositionSurfaceObject **)&Object);
      if ( v8 >= 0 )
      {
        v18 = 0LL;
        v8 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v18);
        if ( v8 >= 0 )
        {
          v13 = 0LL;
          v14 = -1073741275;
          v15 = v18;
          if ( *((_DWORD *)v18 + 30) )
          {
            for ( i = (struct CCompositionSurface *)*((_QWORD *)v18 + 13);
                  i != (struct CCompositionSurface *)((char *)v18 + 104);
                  i = *(struct CCompositionSurface **)i )
            {
              if ( *((PVOID *)i - 1) == v9 )
              {
                v13 = (_DWORD *)((char *)i - 24);
                v14 = 0;
                break;
              }
            }
          }
          if ( v14 >= 0 )
          {
            v13[49] = a3;
            v13[50] = a4 != 0;
            v13[51] = a5;
          }
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
