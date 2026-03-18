/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1400277A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x140037A70 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(void *a1, void *Src, void *a3, unsigned __int64 a4, void *a5)
{
  NTSTATUS Buffer; // ebx
  PVOID v9; // r14
  __int64 Win32kImportTable; // rax
  char v11; // r8
  char *v12; // rsi
  char *v13; // r15
  char *v14; // rdx
  char *i; // rax
  size_t v16; // r8
  NTSTATUS v18; // eax
  PVOID Object; // [rsp+20h] [rbp-D8h] BYREF
  int Srca; // [rsp+28h] [rbp-D0h] BYREF
  int v21; // [rsp+2Ch] [rbp-CCh]
  PVOID v22; // [rsp+30h] [rbp-C8h]
  void *v23; // [rsp+38h] [rbp-C0h]
  void *v24; // [rsp+40h] [rbp-B8h]
  void *v25; // [rsp+48h] [rbp-B0h]
  void *v26; // [rsp+50h] [rbp-A8h]
  _BYTE v27[80]; // [rsp+60h] [rbp-98h] BYREF

  v23 = a3;
  v24 = a1;
  v25 = a3;
  v26 = a5;
  Buffer = 0;
  v9 = 0LL;
  v22 = 0LL;
  Srca = 0;
  memset(v27, 0, 0x48uLL);
  if ( Src )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, Src, 8uLL);
    v9 = Object;
    v22 = Object;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( !(*(unsigned int (**)(void))(Win32kImportTable + 608))() )
      Buffer = -1073741790;
    if ( Buffer >= 0 )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v12 = 0LL;
        v13 = (char *)Object;
        Buffer = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
        if ( Buffer >= 0 )
        {
          KeEnterCriticalRegion();
          v12 = v13 + 40;
          ExAcquirePushLockSharedEx(v13 + 48, 0LL);
          Buffer = 0;
        }
        if ( Buffer < 0 )
          goto LABEL_19;
        Buffer = -1073741275;
        v14 = 0LL;
        if ( *((_DWORD *)v12 + 30) )
        {
          for ( i = (char *)*((_QWORD *)v12 + 13); i != v12 + 104; i = *(char **)i )
          {
            if ( *((PVOID *)i - 1) == v9 )
            {
              v14 = i - 24;
              Buffer = 0;
              break;
            }
          }
        }
        if ( Buffer >= 0 )
        {
          Srca = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 136LL))(v14);
          if ( Srca )
          {
            if ( Srca == 1 )
            {
              Object = 0LL;
              Buffer = CCompositionSurface::FindBuffer(
                         (CCompositionSurface *)v12,
                         (unsigned __int64)v9,
                         (struct CCompositionBuffer **)&Object);
              if ( Buffer < 0 )
                goto LABEL_18;
              v18 = (*(__int64 (__fastcall **)(PVOID, _BYTE *))(*(_QWORD *)Object + 152LL))(Object, v27);
            }
            else
            {
              if ( Srca != 2 )
              {
                Buffer = -1073741811;
                goto LABEL_18;
              }
              Object = 0LL;
              Buffer = CCompositionSurface::FindBuffer(
                         (CCompositionSurface *)v12,
                         (unsigned __int64)v9,
                         (struct CCompositionBuffer **)&Object);
              if ( Buffer < 0 )
                goto LABEL_18;
              v18 = (*(__int64 (__fastcall **)(PVOID, _BYTE *))(*(_QWORD *)Object + 160LL))(Object, v27);
            }
            Buffer = v18;
          }
        }
LABEL_18:
        CCompositionSurface::UnlockAndRelease((CCompositionSurface *)v12);
LABEL_19:
        ObfDereferenceObject(v13);
      }
    }
  }
  if ( v23 )
  {
    RtlCopyToUser(v23, &Srca, 4uLL);
  }
  else
  {
    Buffer = -1073741811;
    v21 = -1073741811;
  }
  if ( Buffer >= 0 && a5 && Srca )
  {
    if ( Srca == 1 )
    {
      v16 = 28LL;
      if ( a4 >= 0x1C )
        goto LABEL_32;
    }
    else
    {
      if ( Srca != 2 )
      {
        Buffer = -1073741811;
LABEL_34:
        v21 = Buffer;
        goto LABEL_35;
      }
      if ( a4 >= 0x48 )
      {
        v16 = 72LL;
LABEL_32:
        RtlCopyToUser(a5, v27, v16);
        goto LABEL_35;
      }
    }
    Buffer = -1073741789;
    goto LABEL_34;
  }
LABEL_35:
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
