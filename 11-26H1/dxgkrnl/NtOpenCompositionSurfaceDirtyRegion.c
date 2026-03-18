/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x140028460
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?IRegionToRgnDataAndReset@@YAJPEAUIRegion@@PEAUCSM_RGNDATA_@@@Z @ 0x1400296C0 (-IRegionToRgnDataAndReset@@YAJPEAUIRegion@@PEAUCSM_RGNDATA_@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(HANDLE Handle, void *Src, void *a3, void *a4)
{
  NTSTATUS v8; // ebx
  struct IRegion *v9; // r12
  __int64 Win32kImportTable; // rax
  char *v11; // rsi
  char *v12; // r14
  char *v13; // r15
  char *v14; // r8
  char *i; // rax
  _QWORD *v16; // r14
  int v17; // ecx
  _QWORD **v18; // r8
  _QWORD *j; // rax
  __int64 v20; // rax
  struct IRegion *v22; // [rsp+30h] [rbp-178h] BYREF
  PVOID Object; // [rsp+38h] [rbp-170h] BYREF
  int v24; // [rsp+40h] [rbp-168h]
  struct IRegion *v25; // [rsp+48h] [rbp-160h]
  void *v26; // [rsp+50h] [rbp-158h]
  __int128 v27; // [rsp+58h] [rbp-150h] BYREF
  __int128 v28; // [rsp+68h] [rbp-140h]
  __int64 v29; // [rsp+78h] [rbp-130h]
  __int128 v30; // [rsp+80h] [rbp-128h]
  __int128 v31; // [rsp+90h] [rbp-118h]
  __int64 v32; // [rsp+A0h] [rbp-108h]
  _BYTE Srca[176]; // [rsp+B0h] [rbp-F8h] BYREF

  Object = Handle;
  v26 = a4;
  v8 = 0;
  v9 = 0LL;
  v25 = 0LL;
  v30 = 0LL;
  memset(Srca, 0, 0xA4uLL);
  if ( Src && a3 )
  {
    v22 = 0LL;
    RtlCopyFromUser(&v22, Src, 8uLL);
    v9 = v22;
    v25 = v22;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    RtlCopyFromUser(&v27, a3, 0x28uLL);
    v30 = v27;
    v31 = v28;
    v32 = v29;
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
      v11 = 0LL;
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
      if ( v8 >= 0 )
      {
        v12 = (char *)Object;
        if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
        {
          v11 = v12;
        }
        else
        {
          ObfDereferenceObject(v12);
          v8 = -1073741788;
        }
      }
      if ( v8 >= 0 )
      {
        v13 = 0LL;
        v8 = ObReferenceObjectByPointer(v11, 3u, g_pDxgkCompositionObjectType, 0);
        if ( v8 >= 0 )
        {
          KeEnterCriticalRegion();
          v13 = v11 + 40;
          ExAcquirePushLockSharedEx(v11 + 48, 0LL);
          v8 = 0;
        }
        if ( v8 >= 0 )
        {
          v8 = -1073741275;
          v14 = 0LL;
          if ( *((_DWORD *)v13 + 30) )
          {
            for ( i = (char *)*((_QWORD *)v13 + 13); i != v13 + 104; i = *(char **)i )
            {
              if ( *((struct IRegion **)i - 1) == v9 )
              {
                v14 = i - 24;
                v8 = 0;
                break;
              }
            }
          }
          if ( v8 >= 0 )
          {
            v16 = 0LL;
            v17 = 0;
            v18 = (_QWORD **)(v14 + 272);
            for ( j = *v18; j != v18; j = (_QWORD *)*j )
            {
              if ( v17 == DWORD1(v30) )
              {
                v16 = j - 1;
                break;
              }
              ++v17;
            }
            v8 = v16 == 0LL ? 0xC0000225 : 0;
            if ( v16 )
            {
              v22 = 0LL;
              v20 = DxgkGetWin32kImportTable();
              v8 = (*(__int64 (__fastcall **)(struct IRegion **))(v20 + 40))(&v22);
              if ( v8 >= 0 )
              {
                v8 = (*(__int64 (__fastcall **)(struct IRegion *, _QWORD, __int64))(*(_QWORD *)v22 + 48LL))(
                       v22,
                       v16[9],
                       5LL);
                if ( v8 >= 0 )
                  v8 = IRegionToRgnDataAndReset(v22, (struct CSM_RGNDATA_ *)Srca);
                (**(void (__fastcall ***)(struct IRegion *))v22)(v22);
              }
            }
          }
          CCompositionSurface::UnlockAndRelease((CCompositionSurface *)v13);
        }
        ObfDereferenceObject(v11);
      }
    }
    else
    {
      v8 = -1073741790;
    }
  }
  if ( a4 )
  {
    RtlCopyToUser(a4, Srca, 0xA4uLL);
  }
  else
  {
    v8 = -1073741811;
    v24 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
