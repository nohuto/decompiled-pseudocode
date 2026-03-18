/*
 * XREFs of NtUnBindCompositionSurface @ 0x140027080
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x140026270 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall NtUnBindCompositionSurface(void *a1, unsigned int a2)
{
  int SessionTokenManager; // eax
  char v5; // r8
  struct CCompositionSurface *v6; // rsi
  int v7; // ebx
  CCompositionSurface *v8; // rdi
  struct CCompositionSurface *i; // rax
  __int64 Win32kImportTable; // rax
  struct CCompositionSurface *v12; // [rsp+20h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v14[164]; // [rsp+30h] [rbp-D0h] BYREF

  v12 = 0LL;
  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v12);
  v6 = v12;
  v7 = SessionTokenManager;
  if ( SessionTokenManager >= 0 )
  {
    v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v5, (struct CompositionSurfaceObject **)&Object);
    if ( v7 >= 0 )
    {
      v12 = 0LL;
      memset(v14, 0, sizeof(v14));
      v7 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v12);
      if ( v7 >= 0 )
      {
        v8 = v12;
        if ( *((_DWORD *)v12 + 30) )
        {
          for ( i = (struct CCompositionSurface *)*((_QWORD *)v12 + 13);
                i != (struct CCompositionSurface *)((char *)v12 + 104);
                i = *(struct CCompositionSurface **)i )
          {
            if ( *((_QWORD *)i - 1) == *((_QWORD *)v12 + 5) )
            {
              (*(void (__fastcall **)(__int64, _QWORD *))(*((_QWORD *)i - 3) + 48LL))((__int64)i - 24, v14);
              break;
            }
          }
        }
        v7 = CCompositionSurface::UnBind(v8, a2 != 0);
        CCompositionSurface::UnlockAndRelease(v8);
        if ( v7 >= 0 )
        {
          if ( v14[145] && LODWORD(v14[0]) == 2 )
          {
            Win32kImportTable = DxgkGetWin32kImportTable();
            (*(void (__fastcall **)(_QWORD, _QWORD))(Win32kImportTable + 592))(v14[145], a2);
          }
          if ( !a2 )
            (*(void (__fastcall **)(struct CCompositionSurface *, PVOID))(*(_QWORD *)v6 + 88LL))(v6, Object);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CCompositionSurface *))(*(_QWORD *)v6 + 8LL))(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
