/*
 * XREFs of ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0
 * Callers:
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180063680 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800642A4 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x18010263C (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1801359A0 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180192D08 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::PopTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IDeviceTarget **a3)
{
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rbp
  struct IDeviceTarget *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rsi
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+60h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v7 = *((_DWORD *)this + 86);
  v8 = 0LL;
  v9 = (unsigned int)(v7 - 1);
  if ( v7 )
    v8 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * v9);
  *((_DWORD *)this + 86) = v9;
  LOBYTE(v6) = v7 == 1;
  (*(void (__fastcall **)(struct ID2DContextOwner *, __int64, __int64))(*(_QWORD *)a2 + 32LL))(a2, v8 + 72, v6);
  if ( (_DWORD)v9 )
  {
    v11 = *((_DWORD *)this + 86);
    v12 = 0LL;
    if ( v11 )
      v12 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v11 - 1));
    if ( a3 )
    {
      v13 = *(struct IDeviceTarget **)(v12 + 24);
      *a3 = v13;
      (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    if ( *((_BYTE *)this + 429) )
    {
      if ( !*(_BYTE *)(v12 + 78) )
      {
        v14 = *(_QWORD *)(v12 + 40);
        v15 = *(_QWORD *)(v12 + 32);
        *(_QWORD *)(v12 + 16) = this;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
          *((_QWORD *)this + 26),
          v15,
          v14);
        *(_BYTE *)(v12 + 78) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v12);
      }
      if ( *(_BYTE *)(v8 + 80) )
      {
        if ( *(_BYTE *)(v8 + 79) )
        {
          v28 = CD2DContext::FlushD2DInternal(this);
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x2C7u, 0LL);
        }
        else
        {
          *(_BYTE *)(v12 + 80) = 1;
        }
      }
    }
    v16 = (__int64)this + 1108;
    if ( !this )
      v16 = 1124LL;
    if ( *(_DWORD *)v16 )
    {
      v17 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2D0u, 0LL);
    }
    else
    {
      v17 = 0;
    }
    if ( v8 )
    {
      v18 = *(_QWORD *)(v8 + 40);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v19 = *(_QWORD *)(v8 + 32);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = *(_QWORD *)(v8 + 24);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      operator delete((void *)v8, 0x58uLL);
    }
  }
  else
  {
    if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 24) + 128LL))(*(_QWORD *)(v8 + 24)) )
    {
      *((_QWORD *)this + 52) = v8;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 26) + 56LL))(
        *((_QWORD *)this + 26),
        0LL,
        0LL);
      if ( v8 )
        CD2DTarget::`scalar deleting destructor'((CD2DTarget *)v8, v10);
    }
    v21 = CD2DContext::EndDraw(this);
    v17 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2E6u, 0LL);
  }
  v22 = (__int64)this + 1108;
  if ( !this )
    v22 = 1124LL;
  if ( *(_DWORD *)v22 || v17 != -2005532292 && v17 != -2147024882 && v17 != -2005270523 )
    goto LABEL_39;
  v24 = (__int64)this;
  if ( !this )
    v24 = 16LL;
  if ( !*(_DWORD *)(v24 + 424) )
    goto LABEL_39;
  if ( v17 != -2005270523 )
  {
LABEL_50:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)v24);
    goto LABEL_39;
  }
  v25 = (__int64)this + 528;
  if ( !this )
    v25 = 544LL;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 312LL))(*(_QWORD *)v25) == -2005270480 )
  {
    if ( *(_DWORD *)v22 )
      goto LABEL_50;
    v32 = (__int64)this + 1108;
    if ( !this )
      v32 = 1124LL;
    *(_DWORD *)v32 = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)v24);
LABEL_39:
    if ( v17 >= 0 )
      goto LABEL_40;
    goto LABEL_56;
  }
  if ( !*(_DWORD *)v22 )
  {
    v26 = (__int64)this + 1108;
    if ( !this )
      v26 = 1124LL;
    *(_DWORD *)v26 = -2005270523;
  }
LABEL_56:
  v27 = (__int64)this + 1108;
  if ( !this )
    v27 = 1124LL;
  if ( *(_DWORD *)v27 )
    return 2291662989LL;
LABEL_40:
  v33 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v17, 0, &v33) )
  {
    v29 = v33;
    if ( v33 == -2003304307 )
    {
      v30 = (__int64)this + 1108;
      if ( v17 >= 0 )
        v17 = -2003304307;
      if ( !this )
        v30 = 1124LL;
      if ( !*(_DWORD *)v30 )
      {
        v31 = (__int64)this + 1108;
        if ( !this )
          v31 = 1124LL;
        *(_DWORD *)v31 = v17;
      }
    }
    v17 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xB71u, 0LL);
  }
  return (unsigned int)v17;
}
