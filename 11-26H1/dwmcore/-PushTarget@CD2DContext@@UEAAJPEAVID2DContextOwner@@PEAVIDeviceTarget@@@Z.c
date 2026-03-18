/*
 * XREFs of ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800698E0
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18006AAF0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C9380 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180035868 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::PushTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IDeviceTarget *a3)
{
  char *v3; // r15
  int v4; // eax
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  struct ID2DContextOwner **v13; // rax
  unsigned int v14; // eax
  _QWORD *v15; // r8
  unsigned int v16; // edx
  int v17; // r14d
  int v18; // r14d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r14
  int v25; // r9d
  HANDLE ProcessHeap; // rax
  char *v27; // rax
  _QWORD *v28; // r12
  struct ID2DContextOwner *v29; // rdi
  struct ID2DContextOwner *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  unsigned int v40; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _QWORD *v42; // [rsp+70h] [rbp+8h] BYREF
  struct ID2DContextOwner *v43; // [rsp+78h] [rbp+10h]
  struct ID2DContextOwner *v44; // [rsp+88h] [rbp+20h] BYREF

  v43 = a2;
  v3 = (char *)this + 320;
  v4 = *((_DWORD *)this + 86);
  v44 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( v4 )
    v8 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(v4 - 1));
  v9 = -2003304307;
  if ( *((_QWORD *)this + 19) )
  {
    v12 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x248u, 0LL);
    goto LABEL_24;
  }
  CD2DContext::FlushDrawList(this);
  v10 = (__int64)this + 1108;
  if ( !this )
    v10 = 1124LL;
  if ( *(_DWORD *)v10 )
  {
    v12 = -2003304307;
    v40 = 589;
    v25 = -2003304307;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v40, 0LL);
    goto LABEL_24;
  }
  v11 = (*(__int64 (__fastcall **)(struct IDeviceTarget *, struct ID2DContextOwner **, _QWORD))(*(_QWORD *)a3 + 104LL))(
          a3,
          &v44,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v25 = v11;
    v40 = 591;
    goto LABEL_39;
  }
  v7 = (*(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a3 + 168LL))(a3);
  if ( !v8 )
  {
    v13 = (struct ID2DContextOwner **)*((_QWORD *)this + 52);
    if ( v13 && v44 == v13[4] && (struct ID2DContextOwner *)v7 == v13[5] )
    {
      *v13 = v43;
      (*(void (__fastcall **)(_QWORD, __int64))(***((_QWORD ***)this + 52) + 24LL))(
        **((_QWORD **)this + 52),
        *((_QWORD *)this + 52) + 72LL);
      v14 = *((_DWORD *)v3 + 6);
      v15 = (_QWORD *)*((_QWORD *)this + 52);
      v42 = v15;
      v16 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
        v17 = -2147024362;
        v35 = 183;
        v12 = -2147024362;
      }
      else
      {
        v17 = 0;
        if ( v16 <= *((_DWORD *)v3 + 5) )
        {
          *(_QWORD *)(*(_QWORD *)v3 + 8LL * v14) = v15;
          *((_DWORD *)v3 + 6) = v16;
LABEL_15:
          v12 = v17;
          *((_QWORD *)this + 52) = 0LL;
          goto LABEL_24;
        }
        v17 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v42);
        v12 = v17;
        if ( v17 >= 0 )
          goto LABEL_15;
        v35 = 194;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v35, 0LL);
      v25 = v17;
      v40 = 610;
      goto LABEL_39;
    }
    SAFE_DELETE<CD2DTarget>((_QWORD **)this + 52);
  }
  ProcessHeap = GetProcessHeap();
  v27 = (char *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v28 = v27;
  if ( !v27 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v29 = v44;
  v30 = v43;
  *((_QWORD *)v27 + 1) = *((_QWORD *)this + 22);
  *((_QWORD *)v27 + 2) = 0LL;
  *((_QWORD *)v27 + 4) = 0LL;
  *((_QWORD *)v27 + 5) = 0LL;
  *((_DWORD *)v27 + 12) = 0;
  *(_DWORD *)(v27 + 77) = 0;
  *(_QWORD *)v27 = v30;
  *((_QWORD *)v27 + 3) = a3;
  (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a3 + 8LL))(a3);
  v28[4] = v29;
  if ( v29 )
    (*(void (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v29 + 8LL))(v29);
  v28[5] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v28 + 24LL))(*v28, v28 + 9);
  v31 = *((_DWORD *)v3 + 6);
  v42 = v28;
  v32 = v31 + 1;
  if ( v31 + 1 < v31 )
  {
    v18 = -2147024362;
    v19 = 183;
    v12 = -2147024362;
  }
  else
  {
    v18 = 0;
    if ( v32 <= *((_DWORD *)v3 + 5) )
    {
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v31) = v28;
      *((_DWORD *)v3 + 6) = v32;
      goto LABEL_49;
    }
    v18 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v42);
    v12 = v18;
    if ( v18 >= 0 )
    {
LABEL_49:
      v12 = v18;
      if ( *((_BYTE *)this + 429) )
      {
        if ( v8 )
          *(_BYTE *)(v8 + 78) = 0;
        if ( !*((_BYTE *)v28 + 78) )
        {
          v33 = v28[5];
          v34 = v28[4];
          v28[2] = this;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
            *((_QWORD *)this + 26),
            v34,
            v33);
          *((_BYTE *)v28 + 78) = 1;
          CD2DTarget::ApplyCurrentClip((CD2DTarget *)v28);
        }
      }
      goto LABEL_24;
    }
    v19 = 194;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x27Bu, 0LL);
  v20 = v28[5];
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = v28[4];
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = v28[3];
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  operator delete(v28, 0x58uLL);
LABEL_24:
  v23 = (__int64)this + 1108;
  if ( v44 )
    (*(void (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( !this )
    v23 = 1124LL;
  if ( !*(_DWORD *)v23 && (v12 == -2005532292 || v12 == -2147024882 || v12 == -2005270523) )
  {
    v36 = (__int64)this;
    if ( !this )
      v36 = 16LL;
    if ( *(_DWORD *)(v36 + 424) )
    {
      if ( v12 != -2005270523 )
        goto LABEL_67;
      v37 = (__int64)this + 528;
      if ( !this )
        v37 = 544LL;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 312LL))(*(_QWORD *)v37) != -2005270480 )
      {
        if ( *(_DWORD *)v23 )
          return v9;
        *(_DWORD *)v23 = -2005270523;
        goto LABEL_70;
      }
      if ( !*(_DWORD *)v23 )
      {
        *(_DWORD *)v23 = -2005270480;
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)v36);
      }
      else
      {
LABEL_67:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)v36);
      }
    }
  }
  if ( v12 < 0 )
  {
LABEL_70:
    if ( *(_DWORD *)v23 )
      return v9;
  }
  LODWORD(v42) = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v12, 0, &v42) )
  {
    v38 = (int)v42;
    if ( (_DWORD)v42 == -2003304307 )
    {
      if ( v12 >= 0 )
        v12 = -2003304307;
      if ( !*(_DWORD *)v23 )
      {
        v39 = (__int64)this + 1108;
        if ( !this )
          v39 = 1124LL;
        *(_DWORD *)v39 = v12;
      }
    }
    v12 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xB71u, 0LL);
  }
  return (unsigned int)v12;
}
