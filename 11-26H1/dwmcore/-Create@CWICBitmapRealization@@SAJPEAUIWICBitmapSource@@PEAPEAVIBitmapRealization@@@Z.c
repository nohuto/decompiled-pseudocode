/*
 * XREFs of ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800E1314
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1800E1C7C (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800F51D4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::Create(struct IWICBitmapSource *a1, struct IBitmapRealization **a2)
{
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  unsigned int v5; // edi
  char *v6; // rax
  CD2DBitmapCache *v7; // rbx
  struct ID2DBitmapCacheSource *v9; // rcx
  int v10; // eax
  struct ID2DBitmapCacheSource *v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v11 = 0LL;
  v5 = 0;
  if ( ((int (__fastcall *)(struct IWICBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))lpVtbl->QueryInterface)(
         a1,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         &v11) >= 0 )
    goto LABEL_2;
  v9 = v11;
  v11 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = CWICBitmapWrapper::Create(a1, &v11);
  v5 = v10;
  if ( v10 >= 0 )
  {
LABEL_2:
    v6 = (char *)MIDL_user_allocate(0x60uLL);
    v7 = (CD2DBitmapCache *)v6;
    if ( v6 )
    {
      *((_QWORD *)v6 + 1) = 0LL;
      *(_DWORD *)(v6 + 73) = 0;
      *(_WORD *)(v6 + 77) = 0;
      v6[79] = 0;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 4) = 0LL;
      *((_QWORD *)v6 + 5) = 0LL;
      *((_QWORD *)v6 + 6) = 0LL;
      *((_QWORD *)v6 + 7) = 0LL;
      *((_QWORD *)v6 + 8) = 0LL;
      *(_QWORD *)v6 = &CWICBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
      *((_QWORD *)v6 + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
      *((_QWORD *)v6 + 10) = &CWICBitmapRealization::`vftable'{for `IBitmapRealization'};
      *((_QWORD *)v6 + 11) = &CWICBitmapRealization::`vftable'{for `IWICDecoderBitmapSource'};
      v6[72] = 0;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 8));
    }
    else
    {
      v7 = 0LL;
    }
    CD2DBitmapCache::InitializeCache(v7, v11);
    *a2 = (struct IBitmapRealization *)(((unsigned __int64)v7 + 80) & -(__int64)(v7 != 0LL));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1Cu, 0LL);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v11 + 16LL))(v11);
  return v5;
}
