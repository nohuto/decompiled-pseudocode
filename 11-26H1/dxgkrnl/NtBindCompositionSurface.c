/*
 * XREFs of NtBindCompositionSurface @ 0x140027340
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x140025E88 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x140026270 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1400265E0 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x140026600 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14004E190 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x14006D00C (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1400A36A0 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, int a2, unsigned int a3, int a4, void *a5, void *a6)
{
  signed int SessionTokenManager; // edi
  struct CFlipExBuffer *v7; // r14
  CompositionSurfaceObject *v8; // r13
  struct CCompositionSurface *v9; // rsi
  void *v10; // r15
  __int64 Win32kImportTable; // rax
  char v12; // r8
  struct CCompositionSurface *v13; // r15
  __int64 v14; // r8
  struct CFlipExBuffer *v15; // rdx
  char v16; // al
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // [rsp+20h] [rbp-AC8h]
  struct CFlipExBuffer *v21; // [rsp+28h] [rbp-AC0h] BYREF
  struct CCompositionSurface *v22; // [rsp+30h] [rbp-AB8h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-AB0h]
  void *v24; // [rsp+40h] [rbp-AA8h]
  unsigned int v25; // [rsp+48h] [rbp-AA0h]
  CompositionSurfaceObject *v26; // [rsp+50h] [rbp-A98h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-A90h] BYREF
  void *v28; // [rsp+60h] [rbp-A88h]
  void *v29; // [rsp+68h] [rbp-A80h]
  _QWORD v30[164]; // [rsp+70h] [rbp-A78h] BYREF
  _BYTE Src[1368]; // [rsp+590h] [rbp-558h] BYREF

  v23 = a3;
  v24 = a1;
  v29 = a1;
  v25 = a3;
  v28 = a6;
  SessionTokenManager = 0;
  memset(v30, 0, sizeof(v30));
  v27 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  v20 = 0;
  if ( a5 )
  {
    memset(Src, 0, 0x520uLL);
    RtlCopyFromUser(Src, a5, 0x520uLL);
    memmove(v30, Src, 0x520uLL);
    RtlCopyToUser(a6, &v27, 8uLL);
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  v10 = v24;
  KeEnterCriticalRegion();
  if ( SessionTokenManager >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      SessionTokenManager = DxgkGetSessionTokenManager(&v21);
      v7 = v21;
      if ( SessionTokenManager >= 0 )
        (*(void (__fastcall **)(struct CFlipExBuffer *))(*(_QWORD *)v21 + 32LL))(v21);
    }
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = CompositionSurfaceObject::ResolveHandle(v10, 2u, v12, &v26);
      v8 = v26;
      if ( SessionTokenManager >= 0 )
      {
        SessionTokenManager = CompositionSurfaceObject::LockForWrite(v26, &v22);
        v9 = v22;
      }
    }
  }
  if ( v7 && (SessionTokenManager < 0 || !*((_QWORD *)v9 + 19)) )
  {
    (*(void (__fastcall **)(struct CFlipExBuffer *))(*(_QWORD *)v7 + 40LL))(v7);
    (*(void (__fastcall **)(struct CFlipExBuffer *))(*(_QWORD *)v7 + 8LL))(v7);
    v7 = 0LL;
  }
  if ( SessionTokenManager >= 0 )
  {
    v13 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    SessionTokenManager = CCompositionSurface::GetActiveBuffer(v9) != 0LL ? 0xC0000510 : 0;
    if ( *((_QWORD *)v9 + 19) && LODWORD(v30[0]) != 2 )
      SessionTokenManager = -1073741790;
    if ( SessionTokenManager >= 0 )
    {
      if ( LODWORD(v30[0]) == 1 )
      {
        SessionTokenManager = CCompositionBuffer::Create(
                                (const struct CSM_BUFFER_ATTRIBUTES *)&v30[2],
                                (const struct CSM_SINGLE_BUFFER_INFO *)&v30[20],
                                &v22);
        v13 = v22;
      }
      else if ( LODWORD(v30[0]) == 2 )
      {
        SessionTokenManager = CFlipExBuffer::Create(
                                (const struct CSM_BUFFER_ATTRIBUTES *)&v30[2],
                                (const struct CSM_SWAPCHAIN_BUFFER_INFO_ *)&v30[20],
                                v14,
                                &v21);
        if ( SessionTokenManager >= 0 )
          v13 = v21;
      }
      else
      {
        SessionTokenManager = -1073741811;
      }
      if ( SessionTokenManager >= 0 )
      {
        if ( a4 )
          *((_BYTE *)v13 + 41) = 1;
        if ( !a2 )
          CCompositionSurface::ReleaseAllBuffers(v9);
        SessionTokenManager = CCompositionSurface::Bind(v9, v13, &v27);
        if ( SessionTokenManager >= 0 )
        {
          v15 = v21;
          if ( v21 )
          {
            if ( *((_QWORD *)v9 + 19) )
            {
              SessionTokenManager = CCompositionSurface::PairBind(v9, v21);
              if ( SessionTokenManager < 0 )
                CCompositionSurface::UnBind(v9, 0);
            }
            else
            {
              *((_BYTE *)v9 + 160) = 0;
              *((_BYTE *)v15 + 646) = 0;
            }
          }
        }
      }
    }
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(struct CFlipExBuffer *))(*(_QWORD *)v7 + 40LL))(v7);
    (*(void (__fastcall **)(struct CFlipExBuffer *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  if ( SessionTokenManager >= 0 )
  {
    v16 = 1;
    v20 = 1;
    if ( !v30[145] )
      goto LABEL_29;
    v18 = DxgkGetWin32kImportTable();
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(v18 + 600))(v30[145], v23, v24) )
      SessionTokenManager = -1073741790;
  }
  v16 = v20;
LABEL_29:
  if ( SessionTokenManager < 0 && v16 )
  {
    v19 = *((_QWORD *)v9 + 19);
    if ( v19 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, 0LL);
    CCompositionSurface::ReleaseAllBuffers(v9);
  }
  if ( v9 )
    CCompositionSurface::UnlockAndRelease(v9);
  if ( v8 )
    ObfDereferenceObject(v8);
  KeLeaveCriticalRegion();
  if ( v28 )
    RtlCopyToUser(v28, &v27, 8uLL);
  else
    return (unsigned int)-1073741811;
  return (unsigned int)SessionTokenManager;
}
