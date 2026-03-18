/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x140026DB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        void *Src,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        void *a8)
{
  int v11; // edi
  struct CCompositionSurface *v12; // rsi
  unsigned int v13; // ecx
  __int64 Win32kImportTable; // rax
  char v15; // r8
  char *v16; // r8
  char *v17; // rcx
  CCompositionSurface *v18; // r14
  char *i; // rax
  _BYTE *v20; // rdx
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  struct CCompositionSurface *v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+58h] [rbp-B0h]
  struct CCompositionSurface *v26; // [rsp+60h] [rbp-A8h]
  void *Srca; // [rsp+68h] [rbp-A0h]
  void *v28; // [rsp+70h] [rbp-98h]
  void *v29; // [rsp+78h] [rbp-90h]
  _BYTE v30[64]; // [rsp+80h] [rbp-88h] BYREF

  v28 = a1;
  Srca = a7;
  v29 = a8;
  v11 = 0;
  v12 = 0LL;
  v26 = 0LL;
  v22 = 0;
  if ( Src
    && a7
    && a6
    && (v13 = ((((((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) >> 2) & 0x33333333)
               + ((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) & 0x33333333)) >> 4) & 0xF0F0F0F)
            + (((((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) >> 2) & 0x33333333)
              + ((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) & 0x33333333)) & 0xF0F0F0F),
        LODWORD(Object) = (((v13 & 0xFF00FF) + ((v13 >> 8) & 0xFF00FF)) >> 16)
                        + (unsigned __int16)((unsigned __int8)v13 + BYTE1(v13)),
        (unsigned int)Object < 0x10) )
  {
    v24 = 0LL;
    RtlCopyFromUser(&v24, Src, 8uLL);
    v12 = v24;
    v26 = v24;
    RtlCopyFromUser(v30, Srca, 4LL * (unsigned int)Object);
  }
  else
  {
    v11 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v11 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      Object = 0LL;
      v11 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v15, (struct CompositionSurfaceObject **)&Object);
      if ( v11 >= 0 )
      {
        v24 = 0LL;
        v11 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v24);
        if ( v11 >= 0 )
        {
          v11 = -1073741275;
          v17 = 0LL;
          v18 = v24;
          if ( *((_DWORD *)v24 + 30) )
          {
            v16 = (char *)v24 + 104;
            for ( i = (char *)*((_QWORD *)v24 + 13); i != v16; i = *(char **)i )
            {
              if ( *((struct CCompositionSurface **)i - 1) == v12 )
              {
                v17 = i - 24;
                v11 = 0;
                break;
              }
            }
          }
          if ( v11 >= 0 )
          {
            v20 = v30;
            LOBYTE(v16) = a4 != 0;
            LOBYTE(v20) = a3 != 0;
            v11 = (*(__int64 (__fastcall **)(char *, _BYTE *, char *, _QWORD, unsigned int, _BYTE *, int *))(*(_QWORD *)v17 + 184LL))(
                    v17,
                    v20,
                    v16,
                    a5,
                    a6,
                    v30,
                    &v22);
          }
          CCompositionSurface::UnlockAndRelease(v18);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( v11 >= 0 )
  {
    if ( a8 )
    {
      RtlCopyToUser(a8, &v22, 4uLL);
    }
    else
    {
      v11 = -1073741811;
      v25 = -1073741811;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
