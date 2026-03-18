/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14001F544 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140025F28 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x14003BA84 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x14003DAE0 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _LUID a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  void *hLogicalSurface; // r14
  int SessionTokenManager; // eax
  __int64 v6; // rcx
  char v7; // r8
  void *v8; // rsi
  int v9; // ebx
  _QWORD *v10; // r15
  char v11; // r13
  struct CCompositionSurface *v12; // r14
  UINT64 CompositionBindingId; // rdx
  UINT64 v14; // rdx
  UINT v15; // eax
  CCompositionSurface *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  HWND v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 Win32kImportTable; // rax
  int v29; // eax
  UINT64 CompositionSyncKey; // rdi
  __int64 v31; // rax
  struct CCompositionSurface *v33; // [rsp+50h] [rbp-18h] BYREF
  void *Handle; // [rsp+B8h] [rbp+50h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+58h] BYREF
  HWND v37; // [rsp+C8h] [rbp+60h] BYREF

  Handle = (void *)a2;
  hLogicalSurface = (void *)a3->Token.Flip.hLogicalSurface;
  Handle = 0LL;
  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&Handle);
  v8 = Handle;
  v9 = SessionTokenManager;
  if ( SessionTokenManager >= 0 )
  {
    v9 = CompositionSurfaceObject::ResolveHandle(hLogicalSurface, 2u, v7, (struct CompositionSurfaceObject **)&Object);
    if ( v9 >= 0 )
    {
      v10 = Object;
      v33 = 0LL;
      v37 = 0LL;
      v11 = 0;
      v9 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v33);
      if ( v9 < 0 )
      {
        v16 = v33;
LABEL_34:
        if ( v16 )
          CCompositionSurface::UnlockAndRelease(v16);
        goto LABEL_36;
      }
      v12 = v33;
      CompositionBindingId = a3->CompositionBindingId;
      LODWORD(Object) = 0;
      if ( CCompositionSurface::CheckBinding(
             v33,
             CompositionBindingId,
             (enum CompositionBufferType *)&Object,
             &v37,
             (bool *)&Handle) )
      {
        if ( (_DWORD)Object == 2 )
        {
          v14 = a3->CompositionBindingId;
          LOBYTE(Handle) = 0;
          LOBYTE(Object) = 0;
          v9 = CCompositionSurface::NotifyPendingFlipPresent(
                 v12,
                 v14,
                 &a3->Token.Flip,
                 (bool *)&Handle,
                 (bool *)&Object);
          if ( v9 >= 0 )
          {
            if ( (_BYTE)Handle )
            {
              v15 = a3->Token.Flip.Flags.Value | 0x200000;
              a3->Token.Flip.Flags.Value = v15;
              if ( (_BYTE)Object )
                a3->Token.Flip.Flags.Value = v15 | 0x400000;
            }
            v11 = *((_BYTE *)v12 + 160);
            a3->Token.Flip.ScatterBlts.Blts[11].DestinationOffset.x = *((_DWORD *)v12 + 36);
          }
        }
        else
        {
          v9 = -1073741811;
        }
      }
      else
      {
        v9 = -1071775728;
      }
      CCompositionSurface::UnlockAndRelease(v12);
      v16 = 0LL;
      if ( v9 < 0 )
        goto LABEL_36;
      if ( !a1 || !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v8 + 152LL))(v8) )
      {
        v9 = v37 != 0LL ? -1071775733 : -1071775730;
        goto LABEL_36;
      }
      if ( (a3->Token.Flip.Flags.Value & 0x2000000) == 0 )
        v9 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)v8 + 112LL))(v8, v10);
      if ( v9 < 0 )
        goto LABEL_36;
      if ( v11 )
      {
LABEL_30:
        Handle = 0LL;
        v9 = DxgkCompositionObject::OpenDwmHandle(v10, &Handle);
        if ( v9 >= 0 )
        {
          a3->Token.Flip.hCompSurf = (LONG64)Handle;
          *((_QWORD *)&a3->Token.SurfaceComplete + 7) = v10[3];
          Win32kImportTable = DxgkGetWin32kImportTable(v27);
          (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, _QWORD, UINT64, LONG, LONG, LONG))(Win32kImportTable + 416))(
            a3,
            v10,
            a3->Token.Flip.SwapChainIndex,
            (unsigned int)a3->Token.Flip.ScrollOffset.y,
            *((_QWORD *)&a3->Token.SurfaceComplete + 7),
            a3->CompositionBindingId,
            a3->Token.Blt.DirtyRegions.Rects[0].bottom,
            a3->Token.Flip.SourceRect.right,
            a3->Token.Flip.SourceRect.bottom);
          goto LABEL_34;
        }
LABEL_36:
        ObfDereferenceObject(v10);
        goto LABEL_37;
      }
      LODWORD(Handle) = 0;
      v18 = DxgkGetWin32kImportTable(v17);
      (*(void (**)(void))(v18 + 520))();
      v19 = v37;
      v21 = DxgkGetWin32kImportTable(v20);
      if ( v19 )
      {
        v22 = (*(__int64 (__fastcall **)(HWND, void **))(v21 + 560))(v19, &Handle);
        v23 = 3223191567LL;
        if ( !v22 )
          v9 = -1071775729;
        if ( v9 < 0 )
        {
LABEL_29:
          v26 = DxgkGetWin32kImportTable(v23);
          (*(void (**)(void))(v26 + 568))();
          if ( v9 < 0 )
            goto LABEL_36;
          goto LABEL_30;
        }
      }
      else
      {
        LODWORD(Handle) = (*(__int64 (**)(void))(v21 + 536))();
      }
      v24 = DxgkGetWin32kImportTable(v23);
      v25 = (*(__int64 (**)(void))(v24 + 552))();
      if ( !(_DWORD)Handle || v25 )
        v9 = v19 != 0LL ? -1071775733 : -1071775730;
      goto LABEL_29;
    }
  }
LABEL_37:
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( (v9 == -1071775733 || (unsigned int)(v9 + 1071775730) <= 1) && (v29 = NotifySurfaceOfSkippedToken(a3), v29 < 0) )
  {
    v9 = v29;
  }
  else if ( v9 >= 0 )
  {
    goto LABEL_46;
  }
  CompositionSyncKey = a3->Token.Flip.CompositionSyncKey;
  if ( CompositionSyncKey )
  {
    v31 = DxgkGetWin32kImportTable(v6);
    (*(void (__fastcall **)(UINT64))(v31 + 64))(CompositionSyncKey);
  }
LABEL_46:
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
